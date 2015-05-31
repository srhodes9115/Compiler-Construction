/* Scanner for Token--Lex/Flex specification */
%{
#include "token.tab.h"
#include <string.h>
int value;
int position;
int num_lines = 0;
int num_chars;
extern YYSTYPE yylval;
%}
%option noyywrap
digit                   [0-9]
letter			[A-Za-z]
%%
else				{++num_chars; return ELSE;}
if 				{++num_chars; return IF;}
"&"				{++num_chars; return AMP;}
int				{++num_chars; yylval.typeval = 259;return INT;}
return				{++num_chars; return RETURN;}
void				{++num_chars; yylval.typeval = 261; return VOID;}
while				{++num_chars; return WHILE;}
scanf				{++num_chars; return SCANF;}
printf				{++num_chars; return PRINTF;}
\"%d\\n\"			{++num_chars; return OUTPRINT;}
\"%d\"				{++num_chars; return OUTSCAN;}
{letter}{letter}*		{++num_chars; yylval.stringval = (char*) strdup(yytext); return ID;}
{digit}{digit}*               	{++num_chars; yylval.intval = atoi(yytext); return NUM;}
"("                             {++num_chars; return LPAR;}
")"				{++num_chars; return RPAR;}
"["				{++num_chars; return BLPAR;}
"]"				{++num_chars; return BRPAR;}
"{"				{++num_chars; return CLPAR;}
"}"				{++num_chars; return CRPAR;}
"+"				{++num_chars; yylval.stringval = "ADD"; return ADD;}
"-"				{++num_chars; yylval.stringval = "SUB"; return SUB;}
"*"				{++num_chars; yylval.stringval = "MULT"; return MULT;}
"/"				{++num_chars; yylval.stringval = "DIV"; return DIVIDE;}
"<"				{++num_chars; yylval.stringval = "LESSTHAN"; return LESSTHAN;}
"<="				{++num_chars; yylval.stringval = "LESSTHANEQUAL";return LESSTHANEQUAL;}
">"				{++num_chars; yylval.stringval = "GREATERTHAN";return GREATERTHAN;}
">="				{++num_chars; yylval.stringval = "GREATERTHANEQUAL";return GREATERTHANEQUAL;}
"=="				{++num_chars; yylval.stringval = "DOUBLEEQUAL";return DOUBLEEQUAL;}
"!="				{++num_chars; yylval.stringval = "NOTEQUAL"; return NOTEQUAL;}
"="				{++num_chars; return EQUAL;}
","				{++num_chars; return COMMA;}
";"				{++num_chars; return SEM;}
"/*"				{
				 char c;
				 for(;;)
				 {
				  c = input();
				  while((c != '*') && (c != '\n')) {c = input();++num_chars;};
					if (c == '\n') {num_lines++; num_chars = 0;}
					else if (input() != '/'){
						unput(yytext[yyleng-1]);
				   	}	
				   	else 
						break;
				}
				}
\n				{++num_lines; num_chars=0;}
[ \t\r]                      {++num_chars; /* do nothing-skip whitespace */}
.                               {++num_chars; return ERR;}
%%
