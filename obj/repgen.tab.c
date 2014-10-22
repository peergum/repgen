/* A Bison parser, made by GNU Bison 2.7.12-4996.  */

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
#define YYBISON_VERSION "2.7.12-4996"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* "%code top" blocks.  */
/* Line 349 of yacc.c  */
#line 1 "repgen.y"


	#include <cstdio>
	#include <iostream>
	#include <string>

	using namespace std;

    // stuff from flex that bison needs to know about:
    extern "C" int yylex();
    extern "C" int yyparse();
    extern "C" FILE *yyin;



/* Line 349 of yacc.c  */
#line 81 "repgen.tab.c"



/* Copy the first part of user declarations.  */

/* Line 371 of yacc.c  */
#line 88 "repgen.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "repgen.tab.h".  */
#ifndef YY_YY_REPGEN_TAB_H_INCLUDED
# define YY_YY_REPGEN_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
/* Line 387 of yacc.c  */
#line 15 "repgen.y"

    #include "repgen.h"


/* Line 387 of yacc.c  */
#line 125 "repgen.tab.c"

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ALIAS = 258,
     AND = 259,
     AS = 260,
     ASC = 261,
     BACKGROUND = 262,
     BORDERS = 263,
     BY = 264,
     CELL = 265,
     COLOR = 266,
     COLUMN = 267,
     COLUMNS = 268,
     COUNT = 269,
     DESC = 270,
     FLOAT = 271,
     FOR = 272,
     GRAND = 273,
     GROUP = 274,
     HEADER = 275,
     HEXA = 276,
     IF = 277,
     IN = 278,
     INSIDE = 279,
     INT = 280,
     IS = 281,
     NO = 282,
     NOREPEAT = 283,
     NUMBER = 284,
     ON = 285,
     OR = 286,
     ORDER = 287,
     OUTSIDE = 288,
     PARAMETERS = 289,
     REPORT = 290,
     ROW = 291,
     SECTION = 292,
     SKIP = 293,
     STRING = 294,
     STRING_START = 295,
     STRING_END = 296,
     SUM = 297,
     THICK = 298,
     THIN = 299,
     TITLE = 300,
     TO = 301,
     TOTALS = 302,
     TYPE = 303,
     VARIABLE = 304,
     WHERE = 305,
     WITH = 306,
     WIDTH = 307,
     WORD = 308
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 37 "repgen.y"

	int ival;
	float fval;
	char *sval;
	Border *border;
	Style *style;
	Cell *cell;
	ColumnHeader *columnHeader;
	Column *column;
	Value *value;
	Grouping *grouping;
	Section *section;
	ReportHeader *header;
	Parameter *parameter;
	Report *report;


/* Line 387 of yacc.c  */
#line 211 "repgen.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_REPGEN_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 239 "repgen.tab.c"
/* Unqualified %code blocks.  */
/* Line 391 of yacc.c  */
#line 20 "repgen.y"

	int borderCnt;
	string log;

    Report *report;
	Column *column;

	void yyerror(const char *s);

	void push(const string& msg);
	void release();

	void xx(string text);

	string getValue(Value *value);


/* Line 391 of yacc.c  */
#line 261 "repgen.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif


/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   190

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  110
/* YYNRULES -- Number of states.  */
#define YYNSTATES  195

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    56,     2,     2,
      58,    59,     2,     2,    62,    55,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    54,     2,
       2,    57,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    60,     2,    61,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    63,     2,    64,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,     9,    13,    17,    20,    26,    30,
      33,    35,    40,    43,    45,    47,    49,    51,    53,    55,
      60,    65,    66,    71,    77,    82,    85,    89,    90,    93,
      97,   101,   103,   105,   107,   110,   112,   114,   117,   119,
     123,   124,   126,   129,   131,   136,   140,   142,   146,   149,
     152,   153,   156,   158,   160,   163,   166,   170,   173,   175,
     178,   181,   185,   187,   189,   190,   193,   196,   200,   204,
     206,   210,   214,   216,   220,   226,   228,   232,   234,   236,
     238,   239,   242,   245,   249,   251,   253,   257,   258,   261,
     264,   267,   269,   271,   273,   275,   277,   279,   283,   287,
     290,   294,   297,   300,   305,   310,   315,   319,   323,   324,
     329
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      66,     0,    -1,    70,    67,    71,   106,    -1,    -1,    34,
      54,    68,    -1,    68,    55,    69,    -1,    55,    69,    -1,
      53,     5,   111,    48,    53,    -1,    35,   111,    54,    -1,
      71,    72,    -1,    72,    -1,    37,   111,    54,    73,    -1,
      73,    74,    -1,    74,    -1,    82,    -1,    78,    -1,    77,
      -1,    75,    -1,    93,    -1,    19,    30,    81,    76,    -1,
      19,     9,    81,    76,    -1,    -1,    76,    51,    45,    80,
      -1,    76,    51,    47,    54,    87,    -1,    76,    27,    18,
      47,    -1,    38,    36,    -1,    38,    25,    36,    -1,    -1,
      78,    79,    -1,    10,    54,    80,    -1,    53,    54,    80,
      -1,    81,    -1,   111,    -1,    45,    -1,    37,    45,    -1,
      49,    -1,    53,    -1,    82,    83,    -1,    83,    -1,    20,
      84,    85,    -1,    -1,   111,    -1,    85,    86,    -1,    86,
      -1,    17,    13,    54,    87,    -1,    17,    12,    88,    -1,
      99,    -1,    87,    55,    88,    -1,    55,    88,    -1,    89,
      99,    -1,    -1,    89,    90,    -1,    80,    -1,    91,    -1,
       3,    53,    -1,     5,   111,    -1,    52,    25,    56,    -1,
      32,    98,    -1,    28,    -1,    12,    53,    -1,    17,    53,
      -1,    92,    80,    93,    -1,    14,    -1,    42,    -1,    -1,
      50,    94,    -1,    22,    94,    -1,    94,    31,    95,    -1,
      94,     4,    95,    -1,    95,    -1,    80,    23,    96,    -1,
      81,    57,    80,    -1,    81,    -1,    58,    97,    59,    -1,
      60,    80,    46,    80,    61,    -1,    81,    -1,    97,    62,
      80,    -1,    80,    -1,     6,    -1,    15,    -1,    -1,    51,
     100,    -1,   100,   101,    -1,   100,     4,   101,    -1,   101,
      -1,   102,    -1,     7,    11,   105,    -1,    -1,   102,     8,
      -1,   102,   103,    -1,   102,   104,    -1,    43,    -1,    44,
      -1,    33,    -1,    24,    -1,    21,    -1,    53,    -1,    51,
      54,   107,    -1,   107,    55,   108,    -1,    55,   108,    -1,
      81,   109,    93,    -1,     9,    80,    -1,    23,    81,    -1,
       5,    63,   110,    64,    -1,    26,    81,    23,    81,    -1,
     110,    55,    80,    93,    -1,    55,    80,    93,    -1,    40,
     112,    41,    -1,    -1,   112,    63,    81,    64,    -1,   112,
      39,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   127,   127,   136,   140,   147,   151,   157,   168,   176,
     182,   189,   197,   209,   215,   220,   225,   230,   235,   241,
     246,   254,   260,   263,   266,   272,   275,   281,   282,   293,
     299,   308,   309,   310,   311,   315,   316,   320,   326,   334,
     342,   343,   347,   356,   364,   369,   374,   382,   388,   396,
     404,   409,   415,   416,   417,   418,   419,   420,   421,   422,
     423,   427,   431,   432,   435,   437,   438,   442,   443,   444,
     448,   449,   450,   454,   455,   456,   460,   461,   465,   466,
     470,   471,   475,   479,   483,   487,   492,   499,   505,   513,
     514,   518,   519,   523,   524,   528,   529,   533,   537,   538,
     542,   546,   547,   548,   549,   553,   554,   558,   562,   563,
     567
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ALIAS", "AND", "AS", "ASC",
  "BACKGROUND", "BORDERS", "BY", "CELL", "COLOR", "COLUMN", "COLUMNS",
  "COUNT", "DESC", "FLOAT", "FOR", "GRAND", "GROUP", "HEADER", "HEXA",
  "IF", "IN", "INSIDE", "INT", "IS", "NO", "NOREPEAT", "NUMBER", "ON",
  "OR", "ORDER", "OUTSIDE", "PARAMETERS", "REPORT", "ROW", "SECTION",
  "SKIP", "STRING", "STRING_START", "STRING_END", "SUM", "THICK", "THIN",
  "TITLE", "TO", "TOTALS", "TYPE", "VARIABLE", "WHERE", "WITH", "WIDTH",
  "WORD", "':'", "'-'", "'%'", "'='", "'('", "')'", "'['", "']'", "','",
  "'{'", "'}'", "$accept", "report", "parameters_header", "parameters",
  "parameter", "report_header", "sections", "section", "section_contents",
  "section_content", "grouping", "group_options", "skip", "cells", "cell",
  "value", "variable", "column_headers", "column_header", "header_title",
  "header_elements", "header_element", "columns", "column",
  "column_definitions", "column_definition", "aggregator", "operation",
  "condition", "conditions", "condition_expression", "set", "set_elements",
  "order", "styles", "style_elements", "style_element", "border_style",
  "border_type", "border_position", "color", "definitions",
  "definition_list", "definition", "variable_definition", "value_list",
  "string", "string_content", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,    58,    45,    37,    61,    40,    41,
      91,    93,    44,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    65,    66,    67,    67,    68,    68,    69,    70,    71,
      71,    72,    73,    73,    74,    74,    74,    74,    74,    75,
      75,    76,    76,    76,    76,    77,    77,    78,    78,    79,
      79,    80,    80,    80,    80,    81,    81,    82,    82,    83,
      84,    84,    85,    85,    86,    86,    86,    87,    87,    88,
      89,    89,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    91,    92,    92,    93,    93,    93,    94,    94,    94,
      95,    95,    95,    96,    96,    96,    97,    97,    98,    98,
      99,    99,   100,   100,   100,   101,   101,   102,   102,   102,
     102,   103,   103,   104,   104,   105,   105,   106,   107,   107,
     108,   109,   109,   109,   109,   110,   110,   111,   112,   112,
     112
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     0,     3,     3,     2,     5,     3,     2,
       1,     4,     2,     1,     1,     1,     1,     1,     1,     4,
       4,     0,     4,     5,     4,     2,     3,     0,     2,     3,
       3,     1,     1,     1,     2,     1,     1,     2,     1,     3,
       0,     1,     2,     1,     4,     3,     1,     3,     2,     2,
       0,     2,     1,     1,     2,     2,     3,     2,     1,     2,
       2,     3,     1,     1,     0,     2,     2,     3,     3,     1,
       3,     3,     1,     3,     5,     1,     3,     1,     1,     1,
       0,     2,     2,     3,     1,     1,     3,     0,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     3,     3,     2,
       3,     2,     2,     4,     4,     4,     3,     3,     0,     4,
       2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     3,   108,     0,     1,     0,     0,     0,
       8,     0,     0,     0,    10,   110,   107,     0,     0,     4,
       0,     0,     9,     2,    35,    36,     0,     0,     6,     0,
      27,     0,   109,     0,     5,     0,    40,     0,     0,     0,
      11,    13,    17,    16,    15,    14,    38,    18,     0,    97,
       0,     0,     0,    80,    41,     0,    33,     0,    72,    66,
      69,    32,     0,    25,    65,    12,     0,     0,    28,    37,
       0,    99,     0,     0,    21,    21,     0,    87,    39,    43,
      46,    34,     0,     0,     0,     0,    26,     0,     0,     0,
       0,     0,     0,    64,    98,     7,    20,    19,    50,     0,
       0,    81,    84,    85,    42,     0,     0,    75,    70,    71,
      31,    68,    67,    29,    30,     0,   101,   102,     0,   100,
       0,     0,    45,    80,     0,     0,    87,    82,    88,    94,
      93,    91,    92,    89,    90,    77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    62,     0,    58,
       0,    63,     0,    52,    51,    53,     0,    49,    50,    44,
      95,    96,    86,    83,    73,     0,     0,    64,     0,   103,
     104,    24,    22,     0,    54,    55,    59,    60,    78,    79,
      57,     0,    64,    48,    50,    76,     0,   106,    64,    23,
      56,    61,    47,    74,   105
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     8,    19,    28,     3,    13,    14,    40,    41,
      42,    96,    43,    44,    68,    57,   110,    45,    46,    53,
      78,    79,   159,   122,   123,   154,   155,   156,    47,    59,
      60,   108,   136,   180,    80,   101,   102,   103,   133,   134,
     162,    23,    49,    71,    93,   139,    61,     9
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -134
static const yytype_int16 yypact[] =
{
      23,    62,    81,    51,  -134,    49,  -134,    50,    70,    45,
    -134,    40,    62,   -25,  -134,  -134,  -134,   -40,    59,    60,
      64,    78,  -134,  -134,  -134,  -134,    52,   108,  -134,    59,
      33,    80,  -134,    62,  -134,    57,    62,    94,   -17,    94,
      -4,  -134,  -134,  -134,    -6,   113,  -134,  -134,   -40,    83,
      92,   -40,   -40,    -7,  -134,    91,  -134,   119,    -9,    19,
    -134,  -134,   109,  -134,    19,  -134,    95,    96,  -134,  -134,
     101,  -134,   -40,    98,  -134,  -134,    15,   145,    -7,  -134,
    -134,  -134,    88,    94,    94,    94,  -134,    94,    94,    90,
      94,   -40,   -40,   -19,  -134,  -134,    41,    41,  -134,   100,
     144,    55,  -134,    -3,  -134,    94,    94,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,   102,  -134,  -134,   133,  -134,
     140,    27,  -134,    77,   104,   -14,   145,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,   -42,   114,    94,     1,
     -40,   115,    94,   107,   110,    62,   111,  -134,   112,  -134,
      58,  -134,   141,  -134,  -134,  -134,    94,  -134,  -134,   116,
    -134,  -134,  -134,  -134,  -134,    94,    94,   -19,    94,  -134,
    -134,  -134,  -134,   104,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,   117,   -19,  -134,  -134,  -134,   106,  -134,   -19,   116,
    -134,  -134,  -134,  -134,  -134
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -134,  -134,  -134,  -134,   139,  -134,  -134,   156,  -134,   130,
    -134,    97,  -134,  -134,  -134,   -45,   -15,  -134,   129,  -134,
    -134,    99,     2,  -133,  -134,  -134,  -134,  -134,   -92,   137,
      16,  -134,  -134,  -134,    56,  -134,   -72,  -134,  -134,  -134,
    -134,  -134,  -134,   118,  -134,  -134,    -1,  -134
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -88
static const yytype_int16 yytable[] =
{
       5,   119,    26,    37,    66,   128,   -27,   160,    62,    24,
      76,    20,    12,    25,   -31,    35,    36,   164,    37,    63,
     165,   129,    58,    84,    58,   183,    21,    98,    99,   127,
     130,    39,    50,    70,    38,    54,    74,    75,   109,   161,
     131,   132,   113,   114,    77,   116,    39,    67,    83,   -27,
      85,   192,    35,    36,   163,    37,   168,    70,     1,   126,
     135,   137,   100,   -87,   178,   169,    51,   107,   120,    58,
      58,    38,   142,   179,   143,   187,   117,   118,   153,   -87,
     144,     6,   145,    39,    15,     7,    16,    52,   -87,   146,
     191,   147,   121,   167,   148,    18,   194,   172,   -87,   -87,
     111,   112,     4,    10,    11,   149,    89,    12,    17,   150,
      90,   182,    27,    33,    55,    29,    32,     4,    30,   151,
     185,   186,    56,   188,    91,   170,    24,    92,    77,   152,
      25,    55,    31,    36,     4,    48,    81,    24,    72,    56,
      73,    25,    82,    24,   175,    86,   105,    25,   106,    87,
      88,    95,   100,   115,   124,   125,   140,   138,   141,   158,
     166,   173,   171,   174,   176,   177,   181,   193,    34,    22,
      65,   184,    97,   190,    69,   189,    64,   104,     0,   157,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-134)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       1,    93,    17,    22,    10,     8,    10,    21,    25,    49,
      17,    12,    37,    53,    23,    19,    20,    59,    22,    36,
      62,    24,    37,     4,    39,   158,    51,    12,    13,   101,
      33,    50,    33,    48,    38,    36,    51,    52,    83,    53,
      43,    44,    87,    88,    51,    90,    50,    53,    57,    53,
      31,   184,    19,    20,   126,    22,    55,    72,    35,     4,
     105,   106,     7,     8,     6,    64,     9,    82,    27,    84,
      85,    38,    45,    15,    47,   167,    91,    92,   123,    24,
       3,     0,     5,    50,    39,    34,    41,    30,    33,    12,
     182,    14,    51,   138,    17,    55,   188,   142,    43,    44,
      84,    85,    40,    54,    54,    28,     5,    37,    63,    32,
       9,   156,    53,     5,    37,    55,    64,    40,    54,    42,
     165,   166,    45,   168,    23,   140,    49,    26,    51,    52,
      53,    37,    54,    20,    40,    55,    45,    49,    55,    45,
      48,    53,    23,    49,   145,    36,    58,    53,    60,    54,
      54,    53,     7,    63,    54,    11,    23,    55,    18,    55,
      46,    54,    47,    53,    53,    53,    25,    61,    29,    13,
      40,    55,    75,    56,    45,   173,    39,    78,    -1,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    35,    66,    70,    40,   111,     0,    34,    67,   112,
      54,    54,    37,    71,    72,    39,    41,    63,    55,    68,
     111,    51,    72,   106,    49,    53,    81,    53,    69,    55,
      54,    54,    64,     5,    69,    19,    20,    22,    38,    50,
      73,    74,    75,    77,    78,    82,    83,    93,    55,   107,
     111,     9,    30,    84,   111,    37,    45,    80,    81,    94,
      95,   111,    25,    36,    94,    74,    10,    53,    79,    83,
      81,   108,    55,    48,    81,    81,    17,    51,    85,    86,
      99,    45,    23,    57,     4,    31,    36,    54,    54,     5,
       9,    23,    26,   109,   108,    53,    76,    76,    12,    13,
       7,   100,   101,   102,    86,    58,    60,    81,    96,    80,
      81,    95,    95,    80,    80,    63,    80,    81,    81,    93,
      27,    51,    88,    89,    54,    11,     4,   101,     8,    24,
      33,    43,    44,   103,   104,    80,    97,    80,    55,   110,
      23,    18,    45,    47,     3,     5,    12,    14,    17,    28,
      32,    42,    52,    80,    90,    91,    92,    99,    55,    87,
      21,    53,   105,   101,    59,    62,    46,    80,    55,    64,
      81,    47,    80,    54,    53,   111,    53,    53,     6,    15,
      98,    25,    80,    88,    55,    80,    80,    93,    80,    87,
      56,    93,    88,    61,    93
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YYUSE (yytype);
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

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
      yychar = YYLEX;
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
     `$$ = $1'.

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
/* Line 1787 of yacc.c  */
#line 127 "repgen.y"
    {
        report = new Report;
        report->header = (yyvsp[(1) - (4)].header);
		report->parameters = (yyvsp[(2) - (4)].parameter);
		push("Report defined.");
	}
    break;

  case 3:
/* Line 1787 of yacc.c  */
#line 136 "repgen.y"
    {
		(yyval.parameter) = nullptr;
		push("No parameters defined.");
	}
    break;

  case 4:
/* Line 1787 of yacc.c  */
#line 140 "repgen.y"
    {
		(yyval.parameter) = (yyvsp[(3) - (3)].parameter);
		push("All parameters defined.");
	}
    break;

  case 5:
/* Line 1787 of yacc.c  */
#line 147 "repgen.y"
    {
		(yyvsp[(1) - (3)].parameter)->next = (yyvsp[(3) - (3)].parameter);
		(yyval.parameter) = (yyvsp[(1) - (3)].parameter);
	}
    break;

  case 6:
/* Line 1787 of yacc.c  */
#line 151 "repgen.y"
    {
		(yyval.parameter) = (yyvsp[(2) - (2)].parameter);
	}
    break;

  case 7:
/* Line 1787 of yacc.c  */
#line 157 "repgen.y"
    {
		(yyval.parameter) = new Parameter;
		(yyval.parameter)->name = (yyvsp[(1) - (5)].sval);
		(yyval.parameter)->title = (yyvsp[(3) - (5)].sval);
		(yyval.parameter)->type = (yyvsp[(5) - (5)].sval);
		(yyval.parameter)->next = nullptr;
		push("Parameter " + string((yyvsp[(1) - (5)].sval)) + " defined (\"" + string((yyvsp[(3) - (5)].sval)) + "\").");
	}
    break;

  case 8:
/* Line 1787 of yacc.c  */
#line 168 "repgen.y"
    {
		(yyval.header) = new Header;
		(yyval.header)->title = (yyvsp[(2) - (3)].sval);
		push("Report title defined: " + string((yyvsp[(2) - (3)].sval)));
	}
    break;

  case 9:
/* Line 1787 of yacc.c  */
#line 176 "repgen.y"
    {
		(yyvsp[(1) - (2)].section)->last->next = (yyvsp[(2) - (2)].section);
		(yyval.section) = (yyvsp[(1) - (2)].section);
		(yyval.section)->last = (yyvsp[(2) - (2)].section);

	}
    break;

  case 10:
/* Line 1787 of yacc.c  */
#line 182 "repgen.y"
    {
		(yyval.section) = (yyvsp[(1) - (1)].section);
		(yyval.section)->last = (yyval.section);
	}
    break;

  case 11:
/* Line 1787 of yacc.c  */
#line 189 "repgen.y"
    {
		(yyval.section) = (yyvsp[(4) - (4)].section);
		(yyval.section)->name = (yyvsp[(2) - (4)].sval);
		push("Section \""+string((yyvsp[(2) - (4)].sval))+"\" defined.");
	}
    break;

  case 12:
/* Line 1787 of yacc.c  */
#line 197 "repgen.y"
    {
		(yyval.section) = (yyvsp[(1) - (2)].section);
		if ((yyvsp[(2) - (2)].section)->rowSkip) {
			(yyval.section)->rowSkip = (yyvsp[(2) - (2)].section)->rowSkip;
		} else if ((yyvsp[(2) - (2)].section)->cells) {
			(yyval.section)->cells = (yyvsp[(2) - (2)].section)->cells;
		} else if ((yyvsp[(2) - (2)].section)->headers) {
			(yyval.section)->headers = (yyvsp[(2) - (2)].section)->headers;
		} else if ((yyvsp[(2) - (2)].section)->grouping) {
			(yyval.section)->grouping = (yyvsp[(2) - (2)].section)->grouping;
		}
	}
    break;

  case 13:
/* Line 1787 of yacc.c  */
#line 209 "repgen.y"
    {
		(yyval.section) = (yyvsp[(1) - (1)].section);
	}
    break;

  case 14:
/* Line 1787 of yacc.c  */
#line 215 "repgen.y"
    {
		(yyval.section) = new Section;
		(yyval.section)->headers = (yyvsp[(1) - (1)].columnHeader);
		push("Adding columns to section.");
	}
    break;

  case 15:
/* Line 1787 of yacc.c  */
#line 220 "repgen.y"
    {
		(yyval.section) = new Section;
		(yyval.section)->cells = (yyvsp[(1) - (1)].cell);
		push("Adding cells to section.");
	}
    break;

  case 16:
/* Line 1787 of yacc.c  */
#line 225 "repgen.y"
    {
		(yyval.section) = new Section;
		(yyval.section)->rowSkip = (yyvsp[(1) - (1)].ival);
		push("Will skip " + to_string((yyvsp[(1) - (1)].ival)) + " row" + ((yyvsp[(1) - (1)].ival)>1?"s.":"."));
	}
    break;

  case 17:
/* Line 1787 of yacc.c  */
#line 230 "repgen.y"
    {
		(yyval.section) = new Section;
		(yyval.section)->grouping = (yyvsp[(1) - (1)].grouping);
		push("Adding grouping to section.");
	}
    break;

  case 18:
/* Line 1787 of yacc.c  */
#line 235 "repgen.y"
    {
		push("Adding conditions to section.");
	}
    break;

  case 19:
/* Line 1787 of yacc.c  */
#line 241 "repgen.y"
    {
		(yyvsp[(4) - (4)].grouping)->variable = (yyvsp[(3) - (4)].sval);
		(yyval.grouping)=(yyvsp[(4) - (4)].grouping);
		push("Grouping on "+string((yyvsp[(3) - (4)].sval))+" defined.");
	}
    break;

  case 20:
/* Line 1787 of yacc.c  */
#line 246 "repgen.y"
    {
		(yyvsp[(4) - (4)].grouping)->variable = (yyvsp[(3) - (4)].sval);
		(yyval.grouping)=(yyvsp[(4) - (4)].grouping);
		push("Grouping by "+string((yyvsp[(3) - (4)].sval))+" defined.");
	}
    break;

  case 21:
/* Line 1787 of yacc.c  */
#line 254 "repgen.y"
    {
		(yyval.grouping) = new Grouping;
		(yyval.grouping)->title = nullptr;
		(yyval.grouping)->totals = nullptr;
		(yyval.grouping)->grandTotal = true;
	}
    break;

  case 22:
/* Line 1787 of yacc.c  */
#line 260 "repgen.y"
    {
		(yyval.grouping)->title = (yyvsp[(4) - (4)].value);
	}
    break;

  case 23:
/* Line 1787 of yacc.c  */
#line 263 "repgen.y"
    {
		(yyval.grouping)->totals = (yyvsp[(5) - (5)].column);
	}
    break;

  case 24:
/* Line 1787 of yacc.c  */
#line 266 "repgen.y"
    {
		(yyval.grouping)->grandTotal = false;
	}
    break;

  case 25:
/* Line 1787 of yacc.c  */
#line 272 "repgen.y"
    {
		(yyval.ival) = 1;
	}
    break;

  case 26:
/* Line 1787 of yacc.c  */
#line 275 "repgen.y"
    {
		(yyval.ival) = (yyvsp[(2) - (3)].ival);
	}
    break;

  case 27:
/* Line 1787 of yacc.c  */
#line 281 "repgen.y"
    { (yyval.cell) = nullptr; }
    break;

  case 28:
/* Line 1787 of yacc.c  */
#line 282 "repgen.y"
    {
		if ((yyvsp[(1) - (2)].cell)) {
			(yyvsp[(1) - (2)].cell)->next = (yyvsp[(2) - (2)].cell);
			(yyval.cell) = (yyvsp[(1) - (2)].cell);
		} else {
			(yyval.cell) = (yyvsp[(2) - (2)].cell);
		}
	}
    break;

  case 29:
/* Line 1787 of yacc.c  */
#line 293 "repgen.y"
    {
		(yyval.cell) = new Cell;
		(yyval.cell)->cell = strdup((yyvsp[(1) - (3)].sval));
		(yyval.cell)->value = (yyvsp[(3) - (3)].value);
		push ("Cell "+ string((yyvsp[(1) - (3)].sval)) +" defined.");
	}
    break;

  case 30:
/* Line 1787 of yacc.c  */
#line 299 "repgen.y"
    {
		(yyval.cell) = new Cell;
		(yyval.cell)->cell = strdup((yyvsp[(1) - (3)].sval));
		(yyval.cell)->value = (yyvsp[(3) - (3)].value);
		push ("Cell "+string((yyvsp[(1) - (3)].sval))+" defined.");
	}
    break;

  case 31:
/* Line 1787 of yacc.c  */
#line 308 "repgen.y"
    { (yyval.value) = new Value; (yyval.value)->calculation = strdup((yyvsp[(1) - (1)].sval)); (yyval.value)->text = strdup(""); }
    break;

  case 32:
/* Line 1787 of yacc.c  */
#line 309 "repgen.y"
    { (yyval.value) = new Value; (yyval.value)->text = strdup((yyvsp[(1) - (1)].sval)); (yyval.value)->calculation = strdup("");}
    break;

  case 33:
/* Line 1787 of yacc.c  */
#line 310 "repgen.y"
    { (yyval.value) = new Value; (yyval.value)->text = strdup("Report_TITLE"); (yyval.value)->calculation = strdup(""); }
    break;

  case 34:
/* Line 1787 of yacc.c  */
#line 311 "repgen.y"
    { (yyval.value) = new Value; (yyval.value)->text = strdup("Section_TITLE"); (yyval.value)->calculation = strdup(""); }
    break;

  case 35:
/* Line 1787 of yacc.c  */
#line 315 "repgen.y"
    { (yyval.sval) = strdup((yyvsp[(1) - (1)].sval)); }
    break;

  case 36:
/* Line 1787 of yacc.c  */
#line 316 "repgen.y"
    { (yyval.sval) = strdup((yyvsp[(1) - (1)].sval)); }
    break;

  case 37:
/* Line 1787 of yacc.c  */
#line 320 "repgen.y"
    {
		(yyvsp[(1) - (2)].columnHeader)->last->next = (yyvsp[(2) - (2)].columnHeader);
		(yyval.columnHeader) = (yyvsp[(1) - (2)].columnHeader);
		(yyval.columnHeader)->last = (yyvsp[(2) - (2)].columnHeader);
		push("Adding another column header to section.");
	}
    break;

  case 38:
/* Line 1787 of yacc.c  */
#line 326 "repgen.y"
    {
		(yyval.columnHeader) = (yyvsp[(1) - (1)].columnHeader);
		(yyval.columnHeader)->last = (yyval.columnHeader);
		push("Adding a column header to section");
	}
    break;

  case 39:
/* Line 1787 of yacc.c  */
#line 334 "repgen.y"
    {
		(yyval.columnHeader) = (yyvsp[(3) - (3)].columnHeader);
		(yyval.columnHeader)->title = strdup((yyvsp[(2) - (3)].sval));
		push("Column header \""+string(strdup((yyvsp[(2) - (3)].sval)))+"\" defined.");
	}
    break;

  case 40:
/* Line 1787 of yacc.c  */
#line 342 "repgen.y"
    { (yyval.sval) = (char *) "(NOT_NAMED)"; }
    break;

  case 41:
/* Line 1787 of yacc.c  */
#line 343 "repgen.y"
    { (yyval.sval) = strdup((yyvsp[(1) - (1)].sval));}
    break;

  case 42:
/* Line 1787 of yacc.c  */
#line 347 "repgen.y"
    {
		(yyval.columnHeader)=(yyvsp[(1) - (2)].columnHeader);
		if ((yyvsp[(2) - (2)].columnHeader)->columns) {
			(yyval.columnHeader)->columns = (yyvsp[(2) - (2)].columnHeader)->columns;
		} else if ((yyvsp[(2) - (2)].columnHeader)->style) {
			(yyval.columnHeader)->style = (yyvsp[(2) - (2)].columnHeader)->style;
		}
		push("Adding another element to column header.");
	}
    break;

  case 43:
/* Line 1787 of yacc.c  */
#line 357 "repgen.y"
    {
		(yyval.columnHeader)=(yyvsp[(1) - (1)].columnHeader);
		push("Adding an element to column header.");
	}
    break;

  case 44:
/* Line 1787 of yacc.c  */
#line 364 "repgen.y"
    {
		(yyval.columnHeader) = new ColumnHeader;
		(yyval.columnHeader)->columns = (yyvsp[(4) - (4)].column);
		push("Columns for header defined.");
	}
    break;

  case 45:
/* Line 1787 of yacc.c  */
#line 369 "repgen.y"
    {
		(yyval.columnHeader) = new ColumnHeader;
		(yyval.columnHeader)->columns = (yyvsp[(3) - (3)].column);
		push("Columns for header defined.");
	}
    break;

  case 46:
/* Line 1787 of yacc.c  */
#line 374 "repgen.y"
    {
		(yyval.columnHeader) = new ColumnHeader;
		(yyval.columnHeader)->style = (yyvsp[(1) - (1)].style);
		push("Style for header defined.");
	}
    break;

  case 47:
/* Line 1787 of yacc.c  */
#line 382 "repgen.y"
    {
		(yyvsp[(1) - (3)].column)->last->next = (yyvsp[(3) - (3)].column);
		(yyval.column) = (yyvsp[(1) - (3)].column);
		(yyval.column)->last = (yyvsp[(3) - (3)].column);
		push("Adding another column to header.");
	}
    break;

  case 48:
/* Line 1787 of yacc.c  */
#line 388 "repgen.y"
    {
		(yyval.column) = (yyvsp[(2) - (2)].column);
		(yyval.column)->last = (yyval.column);
		push("Adding a column to header.");
	}
    break;

  case 49:
/* Line 1787 of yacc.c  */
#line 396 "repgen.y"
    {
		(yyval.column) = (yyvsp[(1) - (2)].column);
		(yyval.column)->style = (yyvsp[(2) - (2)].style);
		push("Column "+((yyvsp[(1) - (2)].column)->name?(yyvsp[(1) - (2)].column)->name:getValue((yyvsp[(1) - (2)].column)->value))+" defined.");
	}
    break;

  case 50:
/* Line 1787 of yacc.c  */
#line 404 "repgen.y"
    {
		column = new Column;
		column->name = strdup("*UNNAMED*");
		(yyval.column) = column;
	}
    break;

  case 51:
/* Line 1787 of yacc.c  */
#line 409 "repgen.y"
    {
		(yyval.column) = column;
	}
    break;

  case 52:
/* Line 1787 of yacc.c  */
#line 415 "repgen.y"
    { column->value = (yyvsp[(1) - (1)].value); (yyval.column) = column; }
    break;

  case 53:
/* Line 1787 of yacc.c  */
#line 416 "repgen.y"
    { (yyval.column)=column; }
    break;

  case 54:
/* Line 1787 of yacc.c  */
#line 417 "repgen.y"
    { column->name = strdup((yyvsp[(2) - (2)].sval)); (yyval.column)=column; }
    break;

  case 55:
/* Line 1787 of yacc.c  */
#line 418 "repgen.y"
    { column->title = strdup((yyvsp[(2) - (2)].sval)); (yyval.column)=column;}
    break;

  case 56:
/* Line 1787 of yacc.c  */
#line 419 "repgen.y"
    { (yyval.column)=column; }
    break;

  case 57:
/* Line 1787 of yacc.c  */
#line 420 "repgen.y"
    { (yyval.column)=column; }
    break;

  case 58:
/* Line 1787 of yacc.c  */
#line 421 "repgen.y"
    { (yyval.column)=column; }
    break;

  case 59:
/* Line 1787 of yacc.c  */
#line 422 "repgen.y"
    { column->name = strdup((yyvsp[(2) - (2)].sval)); (yyval.column)=column; }
    break;

  case 60:
/* Line 1787 of yacc.c  */
#line 423 "repgen.y"
    { column->name = strdup((yyvsp[(2) - (2)].sval)); (yyval.column)=column; }
    break;

  case 61:
/* Line 1787 of yacc.c  */
#line 427 "repgen.y"
    { }
    break;

  case 80:
/* Line 1787 of yacc.c  */
#line 470 "repgen.y"
    { (yyval.style) = nullptr; }
    break;

  case 81:
/* Line 1787 of yacc.c  */
#line 471 "repgen.y"
    { (yyval.style) = (yyvsp[(2) - (2)].style); }
    break;

  case 82:
/* Line 1787 of yacc.c  */
#line 475 "repgen.y"
    {
		(yyval.style) = (yyvsp[(1) - (2)].style);
		(yyvsp[(1) - (2)].style)->next = (yyvsp[(2) - (2)].style);
	}
    break;

  case 83:
/* Line 1787 of yacc.c  */
#line 479 "repgen.y"
    {
		(yyval.style) = (yyvsp[(1) - (3)].style);
		(yyval.style)->next = (yyvsp[(3) - (3)].style);
	}
    break;

  case 84:
/* Line 1787 of yacc.c  */
#line 483 "repgen.y"
    { (yyval.style) = (yyvsp[(1) - (1)].style); }
    break;

  case 85:
/* Line 1787 of yacc.c  */
#line 487 "repgen.y"
    {
        (yyval.style) = new Style;
		(yyval.style)->border = (yyvsp[(1) - (1)].border);
		(yyval.style)->next = nullptr;
	}
    break;

  case 86:
/* Line 1787 of yacc.c  */
#line 492 "repgen.y"
    {
        (yyval.style) = new Style;

    }
    break;

  case 87:
/* Line 1787 of yacc.c  */
#line 499 "repgen.y"
    {
		borderCnt = 0;
		(yyval.border) = new Border;
		(yyval.border)->type = (yyval.border)->position = -1;
		(yyval.border)->next = NULL;
	 }
    break;

  case 88:
/* Line 1787 of yacc.c  */
#line 505 "repgen.y"
    {
		Border *border = (Border *) malloc(sizeof(Border));
		border->type=-1;
		border->position=-1;
		border->next = (yyval.border);
		(yyval.border) = border;
		borderCnt++;
	}
    break;

  case 89:
/* Line 1787 of yacc.c  */
#line 513 "repgen.y"
    { (yyval.border)->type = (yyvsp[(2) - (2)].ival); }
    break;

  case 90:
/* Line 1787 of yacc.c  */
#line 514 "repgen.y"
    { (yyval.border)->position = (yyvsp[(2) - (2)].ival); }
    break;

  case 91:
/* Line 1787 of yacc.c  */
#line 518 "repgen.y"
    { (yyval.ival) = (yyvsp[(1) - (1)].ival); }
    break;

  case 92:
/* Line 1787 of yacc.c  */
#line 519 "repgen.y"
    { (yyval.ival) = (yyvsp[(1) - (1)].ival); }
    break;

  case 93:
/* Line 1787 of yacc.c  */
#line 523 "repgen.y"
    { (yyval.ival) = (yyvsp[(1) - (1)].ival); }
    break;

  case 94:
/* Line 1787 of yacc.c  */
#line 524 "repgen.y"
    { (yyval.ival) = (yyvsp[(1) - (1)].ival); }
    break;

  case 107:
/* Line 1787 of yacc.c  */
#line 558 "repgen.y"
    { (yyval.sval) = strdup((yyvsp[(2) - (3)].sval));}
    break;

  case 108:
/* Line 1787 of yacc.c  */
#line 562 "repgen.y"
    { (yyval.sval)  =  (char *) ""; }
    break;

  case 109:
/* Line 1787 of yacc.c  */
#line 563 "repgen.y"
    {
		string text = string((yyvsp[(1) - (4)].sval)) + "{" + string((yyvsp[(3) - (4)].sval)) + "}";
		(yyval.sval) = &text[0];
	}
    break;

  case 110:
/* Line 1787 of yacc.c  */
#line 567 "repgen.y"
    {
		string text = string((yyvsp[(1) - (2)].sval)) + string((yyvsp[(2) - (2)].sval));
		(yyval.sval) = &text[0];
	}
    break;


/* Line 1787 of yacc.c  */
#line 2314 "repgen.tab.c"
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

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

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
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2050 of yacc.c  */
#line 573 "repgen.y"


void parse() {
	do {
		yyparse();
	} while (!feof(yyin));
	release();
}

void yyerror(const char *s) {
	cout << endl << "EEK, parse error!  Message: " << s << endl;
	release();
	// might as well halt now:
	exit(-1);
}

void push(const string& msg) {
	log += "--> " + msg + "\n";
	//cout << ">>" << msg << endl;
}

void release() {
	cout << log << endl;
}

void xx(string text) {
	cout << text << endl;
}

string getValue(Value *value) {
	if (!value) {
		return "EMPTY";
	}
	if (value->text && value->text[0]) {
		return string(value->text); // + "[" + string(value->condition) + "]";
	} else if (value->calculation && value->calculation[0]) {
		return string(value->calculation); // + "[" + string(value->condition) + "]";
	} else {
		return "EMPTY";
	}
}