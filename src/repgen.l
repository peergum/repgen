%{
#include <iostream>
#include "repgen.tab.h"

using namespace std;
#define YY_DECL extern "C" int yylex()

const int BORDER_THICK=0;
const int BORDER_THIN=1;

const int BORDER_INSIDE=0;
const int BORDER_OUTSIDE=1;

void got(string text);


%}

%x IN_STRING
%x IN_VARIABLE
%x NEVER

%%

[ \t\n]         ;

<IN_STRING>([^"\{\}]|\\[\"\{\}])* {
	got("["+ string(yytext)+"]");
	yylval.sval = strdup(yytext);
	return STRING;	
	}

<IN_STRING>\" {
	BEGIN(INITIAL);
	got("STRING_END");
	return STRING_END;
	}

<IN_STRING>\{ {
	BEGIN(IN_VARIABLE);
	return yytext[0];	
}
<IN_VARIABLE>\} {
	BEGIN(IN_STRING);
	return yytext[0];	
}

<INITIAL>\" {
	BEGIN(IN_STRING);
	got("STRING_START");
	return STRING_START;
	}

alias { got("ALIAS"); return ALIAS; }
and { got("AND"); return AND; }
as { got("AS"); return AS; }
asc { got("ASC"); return ASC; }
background { got("BACKGROUND"); return BACKGROUND; }
borders? { got("BORDERS"); return BORDERS; }
by { got("BY"); return BY; }
color { got("COLOR"); return COLOR; }
column { got("COLUMN"); return COLUMN; }
columns { got("COLUMNS"); return COLUMNS; }
count { got("COUNT"); return COUNT; }
desc { got("DESC"); return DESC; }
for { got("FOR"); return FOR; }
grand { got("GRAND"); return GRAND; }
group { got("GROUP"); return GROUP; }
header { got("HEADER"); return HEADER; }
if { got("IF"); return IF; }
in { got("IN"); return IN; }
inside { got("INSIDE"); yylval.ival = BORDER_INSIDE; return INSIDE; }
is { got("IS"); return IS; }
no-repeat { got("NO-REPEAT"); return NOREPEAT; }
no { got("NO"); return NO; }
on { got("ON"); return ON; }
order { got("ORDER"); return ORDER; }
or { got("OR"); return OR; }
outside { got("OUTSIDE"); yylval.ival = BORDER_OUTSIDE; return OUTSIDE; }
parameters { got("PARAMETERS"); return PARAMETERS; }
report { got("REPORT"); return REPORT; }
rows? { got("ROW"); return ROW; }
section { got("SECTION"); return SECTION; }
skip { got("SKIP"); return SKIP; }
sum { got("SUM"); return SUM; }
thick { got("THICK"); yylval.ival = BORDER_THICK; return THICK; }
thin { got("THIN"); yylval.ival = BORDER_THIN; return THIN; }
title { got("TITLE"); return TITLE; }
totals { got("TOTALS"); return TOTALS; }
to { got("TO"); return TO; }
type { got("TYPE"); return TYPE; }
where { got("WHERE"); return WHERE; }
width { got("WIDTH"); return WIDTH; }
with { got("WITH"); return WITH; }

[a-z][a-z]?[0-9]+ { got("{"+string(yytext)+"}"); yylval.sval = strdup(yytext); return CELL; }

[\%\:,()\[\]{}=<>-]	{ got(yytext); return yytext[0]; }
\.\. { got(yytext); return TO; }

#([0-9a-f]+) { got("HEXA");return HEXA; }
[0-9]+\.[0-9]+  { got("FLOAT"); yylval.fval = stof(yytext); return FLOAT; }
[0-9]+  { got("INT"); yylval.ival = stoi(yytext); return INT; }

<INITIAL,IN_VARIABLE>(@?[a-z_0-9]+(\[[^\]]+\])*)(\.(@?[a-z_0-9]+)(\[[^\]]+\])*)+    { got("[V:" + string(yytext) + "]"); yylval.sval = strdup(yytext); return VARIABLE; }
<INITIAL,IN_VARIABLE>([@a-z0-9]+)(-[a-z0-9]+)*    { got("[W:" + string(yytext) + "]"); yylval.sval = strdup(yytext); return WORD; }

%%

void got(string text) {
	//cout << text << endl;
}

