/* A Bison parser, made by GNU Bison 2.7.12-4996.  */

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
/* Line 2053 of yacc.c  */
#line 15 "repgen.y"

    #include "repgen.h"


/* Line 2053 of yacc.c  */
#line 51 "repgen.tab.h"

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
/* Line 2053 of yacc.c  */
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


/* Line 2053 of yacc.c  */
#line 137 "repgen.tab.h"
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
