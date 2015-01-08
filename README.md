repgen
======

Report Generator for various languages

_UPDATE_: this project is currently in standby and might be somehow cancelled in the future, for it's using lex/yacc in C and I'm currently working on a Go lex/yacc so that the whole report generator could be written in Go instead.

_important_:

* This is totally experimental at this point
* The generator currently doesn't generate anything, just parses the reports
* this is a *work in progress*
* feel free to contact me at phil _at_ peergum _dot_ com


Purpose:
-------

This project's goal is twofold:

1. allow "basic users" to define the format of a report using simple and structured _rules_, the "Report Generator Language" (RGL) and parse these rules to generate a computer-readable "Report Generator Configuration" (RGC).

2. build the necessary code in any wanted programming language that will allow to generate the defined report, based on given parameters

Optionally (and ideally), the RGC could also be created using a GUI (online or offline) with drag/drop and other likely features. This would represent an alternate option for goal 1. 


Key points:
----------

* The parsing part will be written using GNU flex and bison, so that the grammar can be extended easily at a later time.

* A sample report is given, based on a concrete (business) report example, that will be parsed to build a generator in PHP for starters.

* the PHP code generation has to be based on templates, so that the adaptation / generation in another language can be done as easily as possible

* the generator will use SQL queries, possibly using Doctrine although this should not be a requirement


Current Status:
--------------

I'm working on this in my free time, although I have a business case for it since my current company makes an extensive use of report building for its clients. I decided to release this as open source, since it could definitely benefit a lot of people and companies. I'm supposed to be paid back with some positive Karma ;-)

At this point (end of October 2014) a basic parser is already working and reads the given sample, but it doesn't do much outside of that. Next step is to generate an RGC (XML?) and then build the generator.

Feedback and ideas are very welcome. Participation too.

On a side note, I'm not an expert C++ developer, my experience is more with C and ultimately PHP, but I thought I'd give it a try anyway. Don't yell at me if my code sucks, just let me know how to make it better :-)


Needed:
------
- Hints on writing a proper Makefile, possibly using autoconf, automake and autowhateverelse...
- People with reporting needs, so that we can build a great report generator for all
- People skilled in other languages: I can deal with PHP, C, some C++, some Go. If anyone wants to take care of Java, Python, Ruby and anything else, you're most welcome :-)
