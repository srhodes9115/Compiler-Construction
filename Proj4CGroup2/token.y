%{

#include <stdio.h>
#include <string.h>
#include "token.tab.h"
#include "symtab.h"

extern int num_lines;
extern int num_chars;
extern char*yytext;
void yyerror (char const *s);
char * concat( char * str1, char * str2);
int globalFunction = 0;
int JVM_num = 0;
char*globalArray[100];
int globalInsert = 0;
int scope = 0;
int param = 0;
int count =0;
int globalFunctionType =0;
int scanIn = 0;
int usedScan = 0;
int relop = 0;
%}
%union {
	char* stringval;
	char* strval;
	int typeval;
	int intval;
}

%error-verbose

%token AMP ELSE IF RETURN WHILE SEM LPAR RPAR COMMENT BLPAR BRPAR ERR COMMA SCANF PRINTF OUTPRINT OUTSCAN  EQUAL CLPAR CRPAR
%token <stringval> ID ADD SUB MULT DIVIDE LESSTHAN LESSTHANEQUAL GREATERTHAN GREATERTHANEQUAL DOUBLEEQUAL NOTEQUAL
%token <typeval> INT VOID
%token <intval> NUM
%type <typeval> type_specifier
%type <stringval> addop mulop relop
%%
program: {genBegin();} declaration_list {int i; if (usedScan == 1) {genReadMethod();}genConstruct(); genEnd(); globalArrayClass(); 
for (i=0; i<count; i++) 
{
	genLoadConst(st_lookupSize(globalArray[i]));
	genNewArray();	
	genGlobalStoreArray(globalArray[i]); 
	i++;
} genEnd();};
declaration_list: declaration_list declaration | declaration;
declaration: var_declaration | fun_declaration;
var_declaration: type_specifier ID SEM {st_insert($2,JVM_num, scope,NULL,"variable", $1,NULL,globalFunction); JVM_num++;
	if (st_lookupType($2,259) == -1)
	{
		printf("Semantic error: cannot be void variable at line number %d column number %d\n",num_lines,num_chars);
	}
	if (scope == 0)
	{
		genGlobalInt($2);
	}
	} | type_specifier ID BLPAR NUM {if (scope == 0) {} else {genLoadConst($4);}} BRPAR SEM {st_insert($2,JVM_num,scope,NULL,"array",$1,$4, globalFunction); JVM_num++;
	if (st_lookupType($2,259) == -1)
	{
		printf("Semantic error: cannot be void array at line number %d column number %d\n",num_lines,num_chars);
	}
	if (scope == 0)
	{
		genGlobalArray($2);
		globalArray[count] = $2;
		count++;
	}
	else
	{
	genNewArray(); 
		if (st_lookupScope($2) == 0)
		{
			genGlobalStoreArray($1);
		}	
		else
		{	
			genAssignArray(st_lookup($2));
		}	
	}
	};
type_specifier: INT {$$=$1;}
		| VOID {$$=$1;};
fun_declaration: type_specifier ID LPAR 
 {	
	scope++; 
	param = 0;
	
	if (st_lookup("main") == -1)
	{
		if (strcmp("main",$2) == 0) 
		{ 	
			genMain();
			JVM_num = 1;
		 } 
		else 
		{JVM_num = 0;
			globalFunctionType= $1; 
		}
		globalFunction++;
	}	
	else 
	{
		printf("Error: Main isn't the last function\n");
	}
		
	} 
	params RPAR {st_insert($2,JVM_num,scope-1,param,"function",$1,NULL, globalFunction);scope--; genFunction($2,$1, st_lookupParam($2));} compound_stmt;	
params: param_list | VOID;
param_list: param_list COMMA param | param;
param: type_specifier ID {param++; 
	st_insert($2,JVM_num,scope,param,"variable",$1,NULL, globalFunction); JVM_num++;} 
| type_specifier ID BLPAR BRPAR 
{param++; 
st_insert($2,JVM_num,scope,param,"array",$1,0,globalFunction); JVM_num++;};
compound_stmt: CLPAR {scope++;} local_declarations statement_list CRPAR 
	{scope--; if (scope == 0) {genEnd();}};
local_declarations: local_declarations var_declaration | /*empty*/;
statement_list: statement_list statement | /*empty*/;
statement: assign_stmt| compound_stmt | selection_stmt | iteration_stmt | return_stmt | print_stmt | scan_stmt | call_stmt | SEM;
call_stmt: call SEM;
assign_stmt: ID { if (st_lookup($1) == -1)
		{
			yyerror(concat("Semantic error: undeclared identifier ",$1));
			break;
		}
		if (st_lookupKind($1,"variable") == -1)
		{
			yyerror(concat("Semantic error: not a valid variable ",$1));
		}
	       } EQUAL expression SEM {
	if (st_lookupScope($1) == 0) 
	{
		genGlobalStoreVar($1);
	} 
	else 
	{
		genAssign(st_lookup($1));}
	}
	| ID {
	if (st_lookupScope($1) == 0)
	{
		genGlobalLoadArray($1);
	}
	else 
	{
		genLoadArray(st_lookup($1));
	}} BLPAR expression BRPAR EQUAL expression SEM {genStoreArray();}
		{if (st_lookupKind($1,"array") == -1)
		{
			yyerror(concat("Semantic error: not a valid array ",$1));
		}};
selection_stmt: IF LPAR expression RPAR {
	$<strval>$=genLabel(); printf("ifeq %s\n",$<strval>$);} statement 
	{
	$<strval>$ = genLabel(); gotoPrint($<strval>$); printf("%s:\n",$<strval>5);
	} ELSE statement {
	printf("%s:\n",$<strval>7);};  
expression: additive_expression relop additive_expression
	{
	relop =1;
	if (strcmp($2,"LESSTHAN") == 0)
	{
		lessThan();
	}
	else if (strcmp($2,"LESSTHANEQUAL") == 0)
	{
		lessThanEqual(); 
	}
	else if (strcmp($2,"DOUBLEEQUAL") == 0)
	{
		doubleEqual();
	}
	else if (strcmp($2,"NOTEQUAL") == 0)
	{
		notEqual();
	}
	else if (strcmp($2,"GREATERTHAN") == 0)
	{
		greaterThan();
	}
	else if (strcmp($2,"GREATERTHANEQUAL") == 0)
	{
		greaterThanEqual();
	}}  | additive_expression;
scan_stmt: SCANF LPAR OUTSCAN COMMA {scanIn = 1;} AMP expression RPAR SEM {usedScan = 1;};
print_stmt: PRINTF {genBeginPrint();} LPAR OUTPRINT COMMA expression RPAR SEM {genEndPrint();}; 
iteration_stmt:  WHILE {$<strval>$=genLabel(); printf("%s:\n",$<strval>$);}LPAR expression RPAR {$<strval>$=genLabel(); printf("ifeq %s\n",$<strval>$);}  statement {gotoPrint($<strval>2); printf("%s:\n",$<strval>6);};
return_stmt: RETURN SEM {
	if (globalFunctionType == 259)
	{
		genReturnInt();
	}
	else {} } | RETURN expression SEM 
{
	if (globalFunctionType == 259)
	{	
		genReturnInt();
	}
	else {} };
relop: LESSTHANEQUAL {$$=$1;} | LESSTHAN {$$=$1;}| GREATERTHAN{$$=$1;} | GREATERTHANEQUAL {$$=$1;}| DOUBLEEQUAL {$$=$1;}| NOTEQUAL {$$=$1;};
additive_expression: additive_expression addop term {
	if (strcmp($2,"ADD") == 0)
	{
		genCodeAdd();
	}
	else
	{
		genCodeSub();
	}
	}| term;
addop: ADD {$$=$1;} | SUB {$$=$1;};
term: term mulop factor 
	{
	if (strcmp($2,"MULT") == 0)
	{
		genCodeMult();
	}
	else
	{
		genCodeDiv();
	}}| factor;
mulop: MULT {$$=$1;} | DIVIDE {$$=$1;};
factor: LPAR expression RPAR | ID {if ((st_lookupScope($1) == 0) && (scanIn != 1)) {genGlobalLoadVar($1); }
	else if (scanIn != 1) {genLoadVar(st_lookup($1));}} { if (st_lookup($1) == -1)
		{
			yyerror(concat("Semantic error: undeclared identifier ",$1));
		}
	if (scanIn == 1)
	{
		genRead(st_lookup($1),$1,st_lookupScope($1),st_findKind($1)); 
	} scanIn = 0; 	    		
		} | ID { 
		if (st_lookupScope($1) == 0)
		{
			genGlobalLoadArray($1);
		}
		else 
		{
			genLoadArray(st_lookup($1));
		}
	} BLPAR expression BRPAR {genLoadIntoArray();}
		{if (st_lookupKind($1,"array") == -1)
		{
			yyerror(concat("Semantic error: not a valid array ",$1));
		}} | call | NUM { genLoadConst($1);};
call: ID LPAR args RPAR {functionCall($1,st_lookupFunctionType($1),st_lookupParam($1));}
	{ 	
		if (st_lookupKind($1,"function") == -1)
		{
			yyerror(concat("Semantic error: not a valid function ",$1));
		}
		if (st_lookup($1) == -1)
		{
			yyerror(concat("Semantic error: undeclared identifier ",$1));
			break;
		}
			
	};
args: arg_list | /* empty */ ;
arg_list: arg_list COMMA expression  | expression;
%%

/* A useful function that concatenates two strings and returns the result */
char * concat( char * str1, char * str2) 
{  
  char *str3;
  str3 = (char *)calloc(strlen(str1) + strlen(str2) + 1, sizeof(char));
  strcpy(str3, str1);
  strcat(str3, str2);
  return str3;
}

void yyerror (char const *s)  /* Called by yyparse on error */
{
  printf ("%s at line number %d and column number %d\n", s,num_lines,num_chars);
}
