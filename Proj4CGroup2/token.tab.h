/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_TOKEN_TAB_H_INCLUDED
# define YY_YY_TOKEN_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AMP = 258,
    ELSE = 259,
    IF = 260,
    RETURN = 261,
    WHILE = 262,
    SEM = 263,
    LPAR = 264,
    RPAR = 265,
    COMMENT = 266,
    BLPAR = 267,
    BRPAR = 268,
    ERR = 269,
    COMMA = 270,
    SCANF = 271,
    PRINTF = 272,
    OUTPRINT = 273,
    OUTSCAN = 274,
    EQUAL = 275,
    CLPAR = 276,
    CRPAR = 277,
    ID = 278,
    ADD = 279,
    SUB = 280,
    MULT = 281,
    DIVIDE = 282,
    LESSTHAN = 283,
    LESSTHANEQUAL = 284,
    GREATERTHAN = 285,
    GREATERTHANEQUAL = 286,
    DOUBLEEQUAL = 287,
    NOTEQUAL = 288,
    INT = 289,
    VOID = 290,
    NUM = 291
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 25 "token.y" /* yacc.c:1909  */

	char* stringval;
	char* strval;
	int typeval;
	int intval;

#line 98 "token.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_TOKEN_TAB_H_INCLUDED  */
