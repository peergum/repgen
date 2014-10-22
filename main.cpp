/*
 * File:   main.cpp
 * Author: Philippe Hilger <phil@peergum.com>
 *
 * Created on October 20, 2014, 9:14 PM
 */

#include <cstdio>
#include <iostream>
#include <string>
#include "repgen.h"

using namespace std;

extern Report *report;
void parse();

/*
 *
 */
int main(int argc, char** argv) {
    parse();
    cout << "Report:" << report->header->title << endl;
    cout << "Parameters:" <<endl;
    for(Parameter *param=report->parameters; param ; param=param->next) {
        cout << "-> " << param->name << " \"" << param->title << "\" is " << param->type << endl;
    }
    cout << "OK." << endl;
    return (EXIT_SUCCESS);
}
