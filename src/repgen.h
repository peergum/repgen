/*
 * File:   repgen.h
 * Author: Philippe Hilger <phil@peergum.com>
 *
 * Created on October 21, 2014, 8:52 PM
 */

#ifndef REPGEN_H
#define	REPGEN_H

typedef	struct Value {
    char *text;
    char *calculation;
    char *condition;
} Value;

typedef struct Border {
    int type;
    int position;
    Border *next;
} Border;

typedef	struct Style {
    Border *border;
    Style *next;
} Style;

typedef struct Cell {
    char *cell;
    Value *value;
    Cell *next;
} Cell;

typedef struct Column {
    char *title;
    Value *value;
    char *name;
    Style *style;
    Column *next;
    Column *last;
} Column;

typedef struct ColumnHeader {
    char *title;
    Column *columns;
    Style *style;
    ColumnHeader *next;
    ColumnHeader *last;
} ColumnHeader;

typedef	struct Grouping {
    char *variable;
    Value *title;
    Column *totals;
    bool grandTotal;
} Grouping;

typedef struct Section {
    char *name;
    Cell *cells;
    ColumnHeader *headers;
    Grouping *grouping;
    int rowSkip;
    Section *next;
    Section *last;
} Section;

typedef struct ReportHeader {
    char *title;
} Header;

typedef struct Parameter {
    char *name;
    char *title;
    char *type;
    Parameter *next;
} Parameter;

typedef struct Report {
    ReportHeader *header;
    Parameter *parameters;
    Section *sections;
} Report;



#endif	/* REPGEN_H */

