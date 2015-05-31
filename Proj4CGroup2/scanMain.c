/* The main driver routine to test the scanner */

#include <stdio.h>
#include "token.tab.h"

extern char * yytext;
extern int value;
extern int yylex();
extern int num_lines;
extern int num_chars;


main()
{ int token; 
 while ((token = yylex()) != 0) { // a 0 is returned if eof
   switch(token) { 
   case NUM: 
     printf("%s\t %s\t %d\n", yytext, "NUM", value);
     break;
   case AMP: 
     printf("%s\t %s\t %s\n", yytext, "AMP", "");
     break;
   case ELSE:
     printf("%s\t %s\t %s\n", yytext, "ELSE", "");
     break;
   case IF:
     printf("%s\t %s\t %s\n", yytext, "IF", "");
     break;
   case INT:
     printf("%s\t %s\t %s\n", yytext, "INT", "");
     break;   
   case RETURN:
     printf("%s\t %s\t %s\n", yytext, "RETURN", "");
     break;
   case VOID:
     printf("%s\t %s\t %s\n", yytext, "VOID", "");
     break;
   case WHILE:
     printf("%s\t %s\t %s\n", yytext, "WHILE", "");
     break; 
   case SCANF:
     printf("%s\t %s\t %s\n", yytext, "SCANF", "");
     break; 
   case PRINTF:
     printf("%s\t %s\t %s\n", yytext, "PRINTF", "");
     break;
   case OUTPRINT:
     printf("%s\t %s\t %s\n", yytext, "OUTPRINT", "");
     break;
   case OUTSCAN:
     printf("%s\t %s\t %s\n", yytext, "OUTSCAN", "");
     break;
   case ID:
     printf("%s\t %s\t %s\n", yytext, "ID", yytext);
     break;  
   case SEM:
     printf("%s\t %s\t %s\n", yytext, "SEM", "");
     break;  
   case LPAR:
     printf("%s\t %s\t %s\n", yytext, "LPAR", "");
     break;
   case RPAR:
     printf("%s\t %s\t %s\n", yytext, "RPAR", "");
     break;
   case BLPAR:
     printf("%s\t %s\t %s\n", yytext, "BLPAR", "");
     break;
   case BRPAR:
     printf("%s\t %s\t %s\n", yytext, "BRPAR", "");
     break;
   case ADD:
     printf("%s\t %s\t %s\n", yytext, "ADD", "");
     break;
   case SUB:
     printf("%s\t %s\t %s\n", yytext, "SUB", "");
     break;
   case MULT:
     printf("%s\t %s\t %s\n", yytext, "MULT", "");
     break;
   case DIVIDE:
     printf("%s\t %s\t %s\n", yytext, "DIVIDE", "");
     break;
   case LESSTHAN:
     printf("%s\t %s\t %s\n", yytext, "LESSTHAN", "");
     break;
   case LESSTHANEQUAL:
     printf("%s\t %s\t %s\n", yytext, "LESSTHANEQUAL", "");
     break;
   case GREATERTHAN:
     printf("%s\t %s\t %s\n", yytext, "GREATERTHAN", "");
     break;
   case GREATERTHANEQUAL:
     printf("%s\t %s\t %s\n", yytext, "GREATERTHANEQUAL", "");
     break;
   case DOUBLEEQUAL:
     printf("%s\t %s\t %s\n", yytext, "DOUBLEEQUAL", "");
     break;
   case NOTEQUAL:
     printf("%s\t %s\t %s\n", yytext, "NOTEQUAL", "");
     break;
   case EQUAL:
     printf("%s\t %s\t %s\n", yytext, "EQUAL", "");
     break;
   case COMMA:
     printf("%s\t %s\t %s\n", yytext, "COMMA", "");
     break;
   case CLPAR:
     printf("%s\t %s\t %s\n", yytext, "CLPAR", "");
     break;
   case CRPAR:
     printf("%s\t %s\t %s\n", yytext, "CRPAR", "");
     break;
   case ERR:
     printf("%s %s line number = %i position = %i\n", yytext, "ERR",num_lines,num_chars-1);
     break;
   case COMMENT:
     break;
    }
 }
}
