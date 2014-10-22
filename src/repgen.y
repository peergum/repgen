%code top {

	#include <cstdio>
	#include <iostream>
	#include <string>

	using namespace std;

    // stuff from flex that bison needs to know about:
    extern "C" int yylex();
    extern "C" int yyparse();
    extern "C" FILE *yyin;

}
%code requires {
    #include "repgen.h"
}


%code {
	int borderCnt;
	string log;

    Report *report;
	Column *column;

	void yyerror(const char *s);

	void push(const string& msg);
	void release();

	void xx(string text);

	string getValue(Value *value);
}

%union {
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
}

%token ALIAS
%token AND
%token AS
%token ASC
%token BACKGROUND
%token BORDERS
%token BY
%token <sval> CELL
%token COLOR
%token COLUMN
%token COLUMNS
%token COUNT
%token DESC
%token <fval> FLOAT
%token FOR
%token GRAND
%token GROUP
%token HEADER
%token HEXA
%token IF
%token IN
%token <ival> INSIDE
%token <ival> INT
%token IS
%token NO
%token NOREPEAT
%token NUMBER
%token ON
%token OR
%token ORDER
%token <ival> OUTSIDE
%token PARAMETERS
%token REPORT
%token ROW
%token SECTION
%token SKIP
%token <sval> STRING
%token STRING_START
%token STRING_END
%token SUM
%token <ival> THICK
%token <ival> THIN
%token TITLE
%token TO
%token TOTALS
%token TYPE
%token <sval> VARIABLE
%token WHERE
%token WITH
%token WIDTH
%token <sval> WORD

%type <ival> border_type
%type <ival> border_position
%type <border> border_style
%type <value> value
%type <sval> header_title
%type <sval> string string_content
%type <sval> variable
%type <column> columns column column_definition column_definitions
%type <columnHeader> column_headers column_header header_elements header_element
%type <grouping> grouping group_options
%type <style> styles style_elements style_element
%type <header> report_header
%type <cell> cell cells
%type <section> section sections section_content section_contents
%type <parameter> parameter parameters parameters_header
%type <report> report
%type <ival> skip

%%

report:
	report_header parameters_header sections definitions {
        report = new Report;
        report->header = $1;
		report->parameters = $2;
		push("Report defined.");
	}
	;

parameters_header:
	/* empty */ {
		$$ = nullptr;
		push("No parameters defined.");
	}
	| PARAMETERS ':' parameters {
		$$ = $3;
		push("All parameters defined.");
	}
	;

parameters:
	parameters '-' parameter {
		$1->next = $3;
		$$ = $1;
	}
	| '-' parameter {
		$$ = $2;
	}
	;

parameter:
	WORD AS string TYPE WORD {
		$$ = new Parameter;
		$$->name = $1;
		$$->title = $3;
		$$->type = $5;
		$$->next = nullptr;
		push("Parameter " + string($1) + " defined (\"" + string($3) + "\").");
	}
	;

report_header:
	REPORT string ':' {
		$$ = new Header;
		$$->title = $2;
		push("Report title defined: " + string($2));
	}
	;

sections:
	sections section {
		$1->last->next = $2;
		$$ = $1;
		$$->last = $2;

	}
	| section {
		$$ = $1;
		$$->last = $$;
	}
	;

section:
	SECTION string ':' section_contents {
		$$ = $4;
		$$->name = $2;
		push("Section \""+string($2)+"\" defined.");
	}
	;

section_contents:
	section_contents section_content {
		$$ = $1;
		if ($2->rowSkip) {
			$$->rowSkip = $2->rowSkip;
		} else if ($2->cells) {
			$$->cells = $2->cells;
		} else if ($2->headers) {
			$$->headers = $2->headers;
		} else if ($2->grouping) {
			$$->grouping = $2->grouping;
		}
	}
	| section_content {
		$$ = $1;
	}
	;

section_content:
	column_headers {
		$$ = new Section;
		$$->headers = $1;
		push("Adding columns to section.");
	}
	| cells {
		$$ = new Section;
		$$->cells = $1;
		push("Adding cells to section.");
	}
	| skip {
		$$ = new Section;
		$$->rowSkip = $1;
		push("Will skip " + to_string($1) + " row" + ($1>1?"s.":"."));
	}
	| grouping {
		$$ = new Section;
		$$->grouping = $1;
		push("Adding grouping to section.");
	}
	| condition {
		push("Adding conditions to section.");
	}
	;

grouping:
	GROUP ON variable group_options {
		$4->variable = $3;
		$$=$4;
		push("Grouping on "+string($3)+" defined.");
	}
	| GROUP BY variable group_options {
		$4->variable = $3;
		$$=$4;
		push("Grouping by "+string($3)+" defined.");
	}
	;

group_options:
	/* empty */ {
		$$ = new Grouping;
		$$->title = nullptr;
		$$->totals = nullptr;
		$$->grandTotal = true;
	}
	| group_options WITH TITLE value {
		$$->title = $4;
	}
	| group_options WITH TOTALS ':' columns {
		$$->totals = $5;
	}
	| group_options NO GRAND TOTALS {
		$$->grandTotal = false;
	}
	;

skip:
	SKIP ROW {
		$$ = 1;
	}
	| SKIP INT ROW {
		$$ = $2;
	}
	;

cells:
	/* empty */ { $$ = nullptr; }
	| cells cell {
		if ($1) {
			$1->next = $2;
			$$ = $1;
		} else {
			$$ = $2;
		}
	}
	;

cell:
	CELL ':' value {
		$$ = new Cell;
		$$->cell = strdup($1);
		$$->value = $3;
		push ("Cell "+ string($1) +" defined.");
	}
	| WORD ':' value {
		$$ = new Cell;
		$$->cell = strdup($1);
		$$->value = $3;
		push ("Cell "+string($1)+" defined.");
	}
	;

value:
	variable { $$ = new Value; $$->calculation = strdup($1); $$->text = strdup(""); }
	| string { $$ = new Value; $$->text = strdup($1); $$->calculation = strdup("");}
	| TITLE { $$ = new Value; $$->text = strdup("Report_TITLE"); $$->calculation = strdup(""); }
	| SECTION TITLE { $$ = new Value; $$->text = strdup("Section_TITLE"); $$->calculation = strdup(""); }
	;

variable:
	VARIABLE { $$ = strdup($1); }
	| WORD { $$ = strdup($1); }
	;

column_headers:
	column_headers column_header {
		$1->last->next = $2;
		$$ = $1;
		$$->last = $2;
		push("Adding another column header to section.");
	}
	| column_header {
		$$ = $1;
		$$->last = $$;
		push("Adding a column header to section");
	}
	;

column_header:
	HEADER header_title header_elements {
		$$ = $3;
		$$->title = strdup($2);
		push("Column header \""+string(strdup($2))+"\" defined.");
	}
	;

header_title:
	/* empty */ { $$ = (char *) "(NOT_NAMED)"; }
	| string { $$ = strdup($1);}
	;

header_elements:
	header_elements header_element {
		$$=$1;
		if ($2->columns) {
			$$->columns = $2->columns;
		} else if ($2->style) {
			$$->style = $2->style;
		}
		push("Adding another element to column header.");
	}
	| header_element
	{
		$$=$1;
		push("Adding an element to column header.");
	}
	;

header_element:
	FOR COLUMNS ':' columns {
		$$ = new ColumnHeader;
		$$->columns = $4;
		push("Columns for header defined.");
	}
	| FOR COLUMN column {
		$$ = new ColumnHeader;
		$$->columns = $3;
		push("Columns for header defined.");
	}
	| styles {
		$$ = new ColumnHeader;
		$$->style = $1;
		push("Style for header defined.");
	}
	;

columns:
	columns '-' column {
		$1->last->next = $3;
		$$ = $1;
		$$->last = $3;
		push("Adding another column to header.");
	}
	| '-' column {
		$$ = $2;
		$$->last = $$;
		push("Adding a column to header.");
	}
	;

column:
	column_definitions styles {
		$$ = $1;
		$$->style = $2;
		push("Column "+($1->name?$1->name:getValue($1->value))+" defined.");
	}
	;

column_definitions:
	/* empty */ {
		column = new Column;
		column->name = strdup("*UNNAMED*");
		$$ = column;
	}
	| column_definitions column_definition {
		$$ = column;
	}
	;

column_definition:
	value { column->value = $1; $$ = column; }
	| aggregator { $$=column; }
	| ALIAS WORD { column->name = strdup($2); $$=column; }
	| AS string { column->title = strdup($2); $$=column;}
	| WIDTH INT '%' { $$=column; }
	| ORDER order { $$=column; }
	| NOREPEAT { $$=column; }
	| COLUMN WORD { column->name = strdup($2); $$=column; }
	| FOR WORD { column->name = strdup($2); $$=column; }
	;

aggregator:
	operation value condition { }
	;

operation:
	COUNT
	| SUM
	;

condition:
	/* empty */
	| WHERE conditions
	| IF conditions
	;

conditions:
	conditions OR condition_expression
	| conditions AND condition_expression
	| condition_expression
	;

condition_expression:
	value IN set
	| variable '=' value
	| variable
	;

set:
	'(' set_elements ')'
	| '[' value TO value ']'
	| variable
	;

set_elements:
	set_elements ',' value
	| value
	;

order:
	ASC
	| DESC
	;

styles:
	/* empty */ { $$ = nullptr; }
	| WITH style_elements { $$ = $2; }
	;

style_elements:
	style_elements style_element {
		$$ = $1;
		$1->next = $2;
	}
	| style_elements AND style_element {
		$$ = $1;
		$$->next = $3;
	}
	| style_element { $$ = $1; }
	;

style_element:
	border_style {
        $$ = new Style;
		$$->border = $1;
		$$->next = nullptr;
	}
	| BACKGROUND COLOR color {
        $$ = new Style;

    }
	;

border_style:
	/* empty */ {
		borderCnt = 0;
		$$ = new Border;
		$$->type = $$->position = -1;
		$$->next = NULL;
	 }
	| border_style BORDERS {
		Border *border = (Border *) malloc(sizeof(Border));
		border->type=-1;
		border->position=-1;
		border->next = $$;
		$$ = border;
		borderCnt++;
	}
	| border_style border_type { $$->type = $2; }
	| border_style border_position { $$->position = $2; }
	;

border_type:
	THICK { $$ = $1; }
	| THIN { $$ = $1; }
	;

border_position:
	OUTSIDE { $$ = $1; }
	| INSIDE { $$ = $1; }
	;

color:
	HEXA
	| WORD
	;

definitions:
	WITH ':' definition_list
	;

definition_list:
	definition_list '-' definition
	| '-' definition
	;

definition:
	variable variable_definition condition
	;

variable_definition:
	BY value
	| IN variable
	| AS '{' value_list '}'
	| IS variable IN variable
	;

value_list:
	value_list '-' value condition
	| '-' value condition
	;

string:
	STRING_START string_content STRING_END { $$ = strdup($2);}
	;

string_content:
	/* empty */ { $$  =  (char *) ""; }
	| string_content '{' variable '}' {
		string text = string($1) + "{" + string($3) + "}";
		$$ = &text[0];
	}
	| string_content STRING {
		string text = string($1) + string($2);
		$$ = &text[0];
	}
	;

%%

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