/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "token.y" /* yacc.c:339  */


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

#line 91 "token.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif


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
#line 25 "token.y" /* yacc.c:355  */

	char* stringval;
	char* strval;
	int typeval;
	int intval;

#line 172 "token.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 187 "token.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   121

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  84
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  143

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    41,    41,    41,    49,    49,    50,    50,    51,    60,
      60,    84,    85,    87,   110,    86,   111,   111,   112,   112,
     113,   115,   118,   118,   120,   120,   121,   121,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   123,   124,   124,
     142,   150,   142,   155,   157,   155,   161,   187,   188,   188,
     189,   189,   190,   190,   190,   191,   196,   203,   203,   203,
     203,   203,   203,   204,   213,   214,   214,   215,   224,   225,
     225,   226,   226,   226,   235,   244,   235,   248,   248,   249,
     249,   262,   262,   263,   263
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AMP", "ELSE", "IF", "RETURN", "WHILE",
  "SEM", "LPAR", "RPAR", "COMMENT", "BLPAR", "BRPAR", "ERR", "COMMA",
  "SCANF", "PRINTF", "OUTPRINT", "OUTSCAN", "EQUAL", "CLPAR", "CRPAR",
  "ID", "ADD", "SUB", "MULT", "DIVIDE", "LESSTHAN", "LESSTHANEQUAL",
  "GREATERTHAN", "GREATERTHANEQUAL", "DOUBLEEQUAL", "NOTEQUAL", "INT",
  "VOID", "NUM", "$accept", "program", "$@1", "declaration_list",
  "declaration", "var_declaration", "$@2", "type_specifier",
  "fun_declaration", "$@3", "$@4", "params", "param_list", "param",
  "compound_stmt", "$@5", "local_declarations", "statement_list",
  "statement", "call_stmt", "assign_stmt", "$@6", "$@7", "$@8",
  "selection_stmt", "@9", "@10", "expression", "scan_stmt", "$@11",
  "print_stmt", "$@12", "iteration_stmt", "@13", "@14", "return_stmt",
  "relop", "additive_expression", "addop", "term", "mulop", "factor",
  "$@15", "$@16", "$@17", "call", "$@18", "args", "arg_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291
};
# endif

#define YYPACT_NINF -110

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-110)))

#define YYTABLE_NINF -75

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
    -110,    26,   -14,  -110,  -110,  -110,   -14,  -110,  -110,    12,
    -110,  -110,     1,  -110,  -110,     9,    18,  -110,    27,    28,
      47,    45,  -110,    51,    50,  -110,   -14,    58,    54,    62,
    -110,  -110,  -110,  -110,  -110,  -110,   -14,  -110,    52,    17,
      -1,    59,    -4,  -110,  -110,    61,  -110,  -110,     3,  -110,
    -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110,    64,    -7,
    -110,    -7,    32,  -110,    76,    49,     4,  -110,  -110,    77,
      66,    79,    -7,    69,    78,  -110,    81,    82,  -110,    83,
    -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110,    -7,
      -7,  -110,  -110,    -7,    -7,    84,    75,  -110,    86,    85,
      -7,    -7,  -110,  -110,    -7,    31,     4,  -110,    88,  -110,
      87,  -110,    -7,    93,    90,    42,    91,  -110,   102,    -7,
    -110,  -110,  -110,    74,  -110,  -110,    42,    -7,    96,    -7,
     103,  -110,  -110,    98,   101,   104,    42,   105,  -110,  -110,
    -110,  -110,  -110
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,    11,    12,     3,     5,     6,     0,
       7,     4,     0,     8,    13,     0,     0,     9,    12,     0,
       0,    16,    19,     0,    20,    14,     0,     0,     0,     0,
      18,    10,    21,    22,    15,    25,    27,    24,     0,     0,
       0,     0,     0,    52,    36,     0,    50,    23,    38,    29,
      26,    35,    28,    30,    34,    33,    31,    32,     0,     0,
      55,     0,    72,    78,     0,    47,    64,    68,    77,     0,
       0,     0,    82,     0,     0,    37,     0,     0,    73,     0,
      56,    65,    66,    58,    57,    59,    60,    61,    62,     0,
       0,    69,    70,     0,     0,     0,     0,    84,     0,    81,
       0,     0,    43,    71,     0,    46,    63,    67,     0,    48,
       0,    79,     0,     0,     0,     0,     0,    53,     0,     0,
      80,    83,    39,     0,    44,    75,     0,     0,     0,     0,
       0,    76,    54,     0,     0,     0,     0,     0,    51,    41,
      45,    49,    42
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -110,  -110,  -110,  -110,   108,    80,  -110,    -8,  -110,  -110,
    -110,  -110,  -110,    89,    92,  -110,  -110,  -110,  -109,  -110,
    -110,  -110,  -110,  -110,  -110,  -110,  -110,   -58,  -110,  -110,
    -110,  -110,  -110,  -110,  -110,  -110,  -110,    21,  -110,    29,
    -110,    24,  -110,  -110,  -110,   -39,  -110,  -110,  -110
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,     7,     8,    23,     9,    10,    16,
      29,    20,    21,    22,    49,    35,    36,    39,    50,    51,
      52,    73,    74,   142,    53,   115,   130,    64,    54,   118,
      55,    71,    56,    69,   126,    57,    89,    65,    90,    66,
      93,    67,    78,    79,   131,    68,   120,    98,    99
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      58,    76,    61,    77,    60,    61,   124,    13,    19,    13,
      14,    15,    72,    15,    97,   -40,    62,   132,    19,    62,
       4,     5,    41,    42,    43,    44,     3,   140,    38,    63,
      91,    92,    63,    45,    46,    12,   108,   -17,    33,    47,
      48,    72,   113,   114,   -74,    17,   116,    41,    42,    43,
      44,    24,     4,    18,   121,    81,    82,    25,    45,    46,
      26,   128,    28,    33,    27,    48,    31,    32,    59,   133,
      70,   135,    75,    81,    82,    40,    58,    83,    84,    85,
      86,    87,    88,    33,    80,    95,    94,    58,    96,   100,
     101,   102,   103,   110,   129,   104,   111,    58,   117,   109,
     112,   122,   119,   123,   125,   127,   134,   136,   137,   138,
     105,     0,   139,   141,    11,    30,    37,   107,     0,   106,
       0,    34
};

static const yytype_int16 yycheck[] =
{
      39,    59,     9,    61,     8,     9,   115,     8,    16,     8,
       9,    12,     9,    12,    72,    12,    23,   126,    26,    23,
      34,    35,     5,     6,     7,     8,     0,   136,    36,    36,
      26,    27,    36,    16,    17,    23,    94,    10,    21,    22,
      23,     9,   100,   101,    12,    36,   104,     5,     6,     7,
       8,    23,    34,    35,   112,    24,    25,    10,    16,    17,
      15,   119,    12,    21,    13,    23,     8,    13,     9,   127,
       9,   129,     8,    24,    25,    23,   115,    28,    29,    30,
      31,    32,    33,    21,     8,    19,     9,   126,     9,    20,
      12,    10,    10,    18,    20,    12,    10,   136,    10,    15,
      15,     8,    15,    13,    13,     3,    10,     4,    10,     8,
      89,    -1,     8,     8,     6,    26,    36,    93,    -1,    90,
      -1,    29
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    38,    39,     0,    34,    35,    40,    41,    42,    44,
      45,    41,    23,     8,     9,    12,    46,    36,    35,    44,
      48,    49,    50,    43,    23,    10,    15,    13,    12,    47,
      50,     8,    13,    21,    51,    52,    53,    42,    44,    54,
      23,     5,     6,     7,     8,    16,    17,    22,    23,    51,
      55,    56,    57,    61,    65,    67,    69,    72,    82,     9,
       8,     9,    23,    36,    64,    74,    76,    78,    82,    70,
       9,    68,     9,    58,    59,     8,    64,    64,    79,    80,
       8,    24,    25,    28,    29,    30,    31,    32,    33,    73,
      75,    26,    27,    77,     9,    19,     9,    64,    84,    85,
      20,    12,    10,    10,    12,    74,    76,    78,    64,    15,
      18,    10,    15,    64,    64,    62,    64,    10,    66,    15,
      83,    64,     8,    13,    55,    13,    71,     3,    64,    20,
      63,    81,    55,    64,    10,    64,     4,    10,     8,     8,
      55,     8,    60
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    37,    39,    38,    40,    40,    41,    41,    42,    43,
      42,    44,    44,    46,    47,    45,    48,    48,    49,    49,
      50,    50,    52,    51,    53,    53,    54,    54,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    56,    58,    57,
      59,    60,    57,    62,    63,    61,    64,    64,    66,    65,
      68,    67,    70,    71,    69,    72,    72,    73,    73,    73,
      73,    73,    73,    74,    74,    75,    75,    76,    76,    77,
      77,    78,    79,    78,    80,    81,    78,    78,    78,    83,
      82,    84,    84,    85,    85
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     1,     1,     1,     3,     0,
       7,     1,     1,     0,     0,     8,     1,     1,     3,     1,
       2,     4,     0,     5,     2,     0,     2,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     0,     5,
       0,     0,     9,     0,     0,     9,     3,     1,     0,     9,
       0,     8,     0,     0,     7,     2,     3,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     3,     1,     1,
       1,     3,     0,     2,     0,     0,     6,     1,     1,     0,
       5,     1,     0,     3,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 41 "token.y" /* yacc.c:1646  */
    {genBegin();}
#line 1369 "token.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 41 "token.y" /* yacc.c:1646  */
    {int i; if (usedScan == 1) {genReadMethod();}genConstruct(); genEnd(); globalArrayClass(); 
for (i=0; i<count; i++) 
{
	genLoadConst(st_lookupSize(globalArray[i]));
	genNewArray();	
	genGlobalStoreArray(globalArray[i]); 
	i++;
} genEnd();}
#line 1382 "token.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 51 "token.y" /* yacc.c:1646  */
    {st_insert((yyvsp[-1].stringval),JVM_num, scope,NULL,"variable", (yyvsp[-2].typeval),NULL,globalFunction); JVM_num++;
	if (st_lookupType((yyvsp[-1].stringval),259) == -1)
	{
		printf("Semantic error: cannot be void variable at line number %d column number %d\n",num_lines,num_chars);
	}
	if (scope == 0)
	{
		genGlobalInt((yyvsp[-1].stringval));
	}
	}
#line 1397 "token.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 60 "token.y" /* yacc.c:1646  */
    {if (scope == 0) {} else {genLoadConst((yyvsp[0].intval));}}
#line 1403 "token.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 60 "token.y" /* yacc.c:1646  */
    {st_insert((yyvsp[-5].stringval),JVM_num,scope,NULL,"array",(yyvsp[-6].typeval),(yyvsp[-3].intval), globalFunction); JVM_num++;
	if (st_lookupType((yyvsp[-5].stringval),259) == -1)
	{
		printf("Semantic error: cannot be void array at line number %d column number %d\n",num_lines,num_chars);
	}
	if (scope == 0)
	{
		genGlobalArray((yyvsp[-5].stringval));
		globalArray[count] = (yyvsp[-5].stringval);
		count++;
	}
	else
	{
	genNewArray(); 
		if (st_lookupScope((yyvsp[-5].stringval)) == 0)
		{
			genGlobalStoreArray((yyvsp[-6].typeval));
		}	
		else
		{	
			genAssignArray(st_lookup((yyvsp[-5].stringval)));
		}	
	}
	}
#line 1432 "token.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 84 "token.y" /* yacc.c:1646  */
    {(yyval.typeval)=(yyvsp[0].typeval);}
#line 1438 "token.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 85 "token.y" /* yacc.c:1646  */
    {(yyval.typeval)=(yyvsp[0].typeval);}
#line 1444 "token.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 87 "token.y" /* yacc.c:1646  */
    {	
	scope++; 
	param = 0;
	
	if (st_lookup("main") == -1)
	{
		if (strcmp("main",(yyvsp[-1].stringval)) == 0) 
		{ 	
			genMain();
			JVM_num = 1;
		 } 
		else 
		{JVM_num = 0;
			globalFunctionType= (yyvsp[-2].typeval); 
		}
		globalFunction++;
	}	
	else 
	{
		printf("Error: Main isn't the last function\n");
	}
		
	}
#line 1472 "token.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 110 "token.y" /* yacc.c:1646  */
    {st_insert((yyvsp[-4].stringval),JVM_num,scope-1,param,"function",(yyvsp[-5].typeval),NULL, globalFunction);scope--; genFunction((yyvsp[-4].stringval),(yyvsp[-5].typeval), st_lookupParam((yyvsp[-4].stringval)));}
#line 1478 "token.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 113 "token.y" /* yacc.c:1646  */
    {param++; 
	st_insert((yyvsp[0].stringval),JVM_num,scope,param,"variable",(yyvsp[-1].typeval),NULL, globalFunction); JVM_num++;}
#line 1485 "token.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 116 "token.y" /* yacc.c:1646  */
    {param++; 
st_insert((yyvsp[-2].stringval),JVM_num,scope,param,"array",(yyvsp[-3].typeval),0,globalFunction); JVM_num++;}
#line 1492 "token.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 118 "token.y" /* yacc.c:1646  */
    {scope++;}
#line 1498 "token.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 119 "token.y" /* yacc.c:1646  */
    {scope--; if (scope == 0) {genEnd();}}
#line 1504 "token.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 124 "token.y" /* yacc.c:1646  */
    { if (st_lookup((yyvsp[0].stringval)) == -1)
		{
			yyerror(concat("Semantic error: undeclared identifier ",(yyvsp[0].stringval)));
			break;
		}
		if (st_lookupKind((yyvsp[0].stringval),"variable") == -1)
		{
			yyerror(concat("Semantic error: not a valid variable ",(yyvsp[0].stringval)));
		}
	       }
#line 1519 "token.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 133 "token.y" /* yacc.c:1646  */
    {
	if (st_lookupScope((yyvsp[-4].stringval)) == 0) 
	{
		genGlobalStoreVar((yyvsp[-4].stringval));
	} 
	else 
	{
		genAssign(st_lookup((yyvsp[-4].stringval)));}
	}
#line 1533 "token.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 142 "token.y" /* yacc.c:1646  */
    {
	if (st_lookupScope((yyvsp[0].stringval)) == 0)
	{
		genGlobalLoadArray((yyvsp[0].stringval));
	}
	else 
	{
		genLoadArray(st_lookup((yyvsp[0].stringval)));
	}}
#line 1547 "token.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 150 "token.y" /* yacc.c:1646  */
    {genStoreArray();}
#line 1553 "token.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 151 "token.y" /* yacc.c:1646  */
    {if (st_lookupKind((yyvsp[-8].stringval),"array") == -1)
		{
			yyerror(concat("Semantic error: not a valid array ",(yyvsp[-8].stringval)));
		}}
#line 1562 "token.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 155 "token.y" /* yacc.c:1646  */
    {
	(yyval.strval)=genLabel(); printf("ifeq %s\n",(yyval.strval));}
#line 1569 "token.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 157 "token.y" /* yacc.c:1646  */
    {
	(yyval.strval) = genLabel(); gotoPrint((yyval.strval)); printf("%s:\n",(yyvsp[-1].strval));
	}
#line 1577 "token.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 159 "token.y" /* yacc.c:1646  */
    {
	printf("%s:\n",(yyvsp[-2].strval));}
#line 1584 "token.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 162 "token.y" /* yacc.c:1646  */
    {
	relop =1;
	if (strcmp((yyvsp[-1].stringval),"LESSTHAN") == 0)
	{
		lessThan();
	}
	else if (strcmp((yyvsp[-1].stringval),"LESSTHANEQUAL") == 0)
	{
		lessThanEqual(); 
	}
	else if (strcmp((yyvsp[-1].stringval),"DOUBLEEQUAL") == 0)
	{
		doubleEqual();
	}
	else if (strcmp((yyvsp[-1].stringval),"NOTEQUAL") == 0)
	{
		notEqual();
	}
	else if (strcmp((yyvsp[-1].stringval),"GREATERTHAN") == 0)
	{
		greaterThan();
	}
	else if (strcmp((yyvsp[-1].stringval),"GREATERTHANEQUAL") == 0)
	{
		greaterThanEqual();
	}}
#line 1615 "token.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 188 "token.y" /* yacc.c:1646  */
    {scanIn = 1;}
#line 1621 "token.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 188 "token.y" /* yacc.c:1646  */
    {usedScan = 1;}
#line 1627 "token.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 189 "token.y" /* yacc.c:1646  */
    {genBeginPrint();}
#line 1633 "token.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 189 "token.y" /* yacc.c:1646  */
    {genEndPrint();}
#line 1639 "token.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 190 "token.y" /* yacc.c:1646  */
    {(yyval.strval)=genLabel(); printf("%s:\n",(yyval.strval));}
#line 1645 "token.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 190 "token.y" /* yacc.c:1646  */
    {(yyval.strval)=genLabel(); printf("ifeq %s\n",(yyval.strval));}
#line 1651 "token.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 190 "token.y" /* yacc.c:1646  */
    {gotoPrint((yyvsp[-5].strval)); printf("%s:\n",(yyvsp[-1].strval));}
#line 1657 "token.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 191 "token.y" /* yacc.c:1646  */
    {
	if (globalFunctionType == 259)
	{
		genReturnInt();
	}
	else {} }
#line 1668 "token.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 197 "token.y" /* yacc.c:1646  */
    {
	if (globalFunctionType == 259)
	{	
		genReturnInt();
	}
	else {} }
#line 1679 "token.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 203 "token.y" /* yacc.c:1646  */
    {(yyval.stringval)=(yyvsp[0].stringval);}
#line 1685 "token.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 203 "token.y" /* yacc.c:1646  */
    {(yyval.stringval)=(yyvsp[0].stringval);}
#line 1691 "token.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 203 "token.y" /* yacc.c:1646  */
    {(yyval.stringval)=(yyvsp[0].stringval);}
#line 1697 "token.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 203 "token.y" /* yacc.c:1646  */
    {(yyval.stringval)=(yyvsp[0].stringval);}
#line 1703 "token.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 203 "token.y" /* yacc.c:1646  */
    {(yyval.stringval)=(yyvsp[0].stringval);}
#line 1709 "token.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 203 "token.y" /* yacc.c:1646  */
    {(yyval.stringval)=(yyvsp[0].stringval);}
#line 1715 "token.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 204 "token.y" /* yacc.c:1646  */
    {
	if (strcmp((yyvsp[-1].stringval),"ADD") == 0)
	{
		genCodeAdd();
	}
	else
	{
		genCodeSub();
	}
	}
#line 1730 "token.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 214 "token.y" /* yacc.c:1646  */
    {(yyval.stringval)=(yyvsp[0].stringval);}
#line 1736 "token.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 214 "token.y" /* yacc.c:1646  */
    {(yyval.stringval)=(yyvsp[0].stringval);}
#line 1742 "token.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 216 "token.y" /* yacc.c:1646  */
    {
	if (strcmp((yyvsp[-1].stringval),"MULT") == 0)
	{
		genCodeMult();
	}
	else
	{
		genCodeDiv();
	}}
#line 1756 "token.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 225 "token.y" /* yacc.c:1646  */
    {(yyval.stringval)=(yyvsp[0].stringval);}
#line 1762 "token.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 225 "token.y" /* yacc.c:1646  */
    {(yyval.stringval)=(yyvsp[0].stringval);}
#line 1768 "token.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 226 "token.y" /* yacc.c:1646  */
    {if ((st_lookupScope((yyvsp[0].stringval)) == 0) && (scanIn != 1)) {genGlobalLoadVar((yyvsp[0].stringval)); }
	else if (scanIn != 1) {genLoadVar(st_lookup((yyvsp[0].stringval)));}}
#line 1775 "token.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 227 "token.y" /* yacc.c:1646  */
    { if (st_lookup((yyvsp[-1].stringval)) == -1)
		{
			yyerror(concat("Semantic error: undeclared identifier ",(yyvsp[-1].stringval)));
		}
	if (scanIn == 1)
	{
		genRead(st_lookup((yyvsp[-1].stringval)),(yyvsp[-1].stringval),st_lookupScope((yyvsp[-1].stringval)),st_findKind((yyvsp[-1].stringval))); 
	} scanIn = 0; 	    		
		}
#line 1789 "token.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 235 "token.y" /* yacc.c:1646  */
    { 
		if (st_lookupScope((yyvsp[0].stringval)) == 0)
		{
			genGlobalLoadArray((yyvsp[0].stringval));
		}
		else 
		{
			genLoadArray(st_lookup((yyvsp[0].stringval)));
		}
	}
#line 1804 "token.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 244 "token.y" /* yacc.c:1646  */
    {genLoadIntoArray();}
#line 1810 "token.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 245 "token.y" /* yacc.c:1646  */
    {if (st_lookupKind((yyvsp[-5].stringval),"array") == -1)
		{
			yyerror(concat("Semantic error: not a valid array ",(yyvsp[-5].stringval)));
		}}
#line 1819 "token.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 248 "token.y" /* yacc.c:1646  */
    { genLoadConst((yyvsp[0].intval));}
#line 1825 "token.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 249 "token.y" /* yacc.c:1646  */
    {functionCall((yyvsp[-3].stringval),st_lookupFunctionType((yyvsp[-3].stringval)),st_lookupParam((yyvsp[-3].stringval)));}
#line 1831 "token.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 250 "token.y" /* yacc.c:1646  */
    { 	
		if (st_lookupKind((yyvsp[-4].stringval),"function") == -1)
		{
			yyerror(concat("Semantic error: not a valid function ",(yyvsp[-4].stringval)));
		}
		if (st_lookup((yyvsp[-4].stringval)) == -1)
		{
			yyerror(concat("Semantic error: undeclared identifier ",(yyvsp[-4].stringval)));
			break;
		}
			
	}
#line 1848 "token.tab.c" /* yacc.c:1646  */
    break;


#line 1852 "token.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 264 "token.y" /* yacc.c:1906  */


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
