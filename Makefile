## -*- Makefile -*-
##
## User: phil
## Time: 20-Oct-2014 8:27:36 PM
## Makefile created by Oracle Solaris Studio.
##
## This file is generated automatically.
##


#### Compiler and tool definitions shared by all build targets #####
CC = gcc
CCC = g++
CXX = g++
BASICOPTS = -g
CFLAGS = $(BASICOPTS)
CCFLAGS = $(BASICOPTS)
CXXFLAGS = $(BASICOPTS)
CCADMIN =


# Define the target directories.
TARGETDIR_repgen=GNU-x86_64-MacOSX


all: $(TARGETDIR_repgen)/repgen

## Target: repgen
OBJS_repgen =  \
	$(TARGETDIR_repgen)/lex.yy.o \
	$(TARGETDIR_repgen)/repgen.tab.o \
	$(TARGETDIR_repgen)/main.o

USERLIBS_repgen = -ll $(SYSLIBS_repgen)
DEPLIBS_repgen =
LDLIBS_repgen = $(USERLIBS_repgen)


# Link or archive
$(TARGETDIR_repgen)/repgen: $(TARGETDIR_repgen) $(OBJS_repgen) $(DEPLIBS_repgen)
	$(LINK.cpp) $(CCFLAGS_repgen) $(CPPFLAGS_repgen) -o $@ $(OBJS_repgen) $(LDLIBS_repgen)


# Compile source files into .o files
repgen.tab.c repgen.tab.h: repgen.y
	/opt/local/bin/bison -d repgen.y

lex.yy.c: repgen.l repgen.tab.h
	flex -i repgen.l

$(TARGETDIR_repgen)/main.o: main.cpp repgen.tab.h
	$(COMPILE.cpp) $(CFLAGS_repgen) $(CPPFLAGS_repgen) -o $@ main.cpp

$(TARGETDIR_repgen)/lex.yy.o: lex.yy.c
	$(COMPILE.cpp) $(CFLAGS_repgen) $(CPPFLAGS_repgen) -o $@ lex.yy.c

$(TARGETDIR_repgen)/repgen.tab.o: repgen.tab.c repgen.tab.h
	$(COMPILE.cpp) $(CFLAGS_repgen) $(CPPFLAGS_repgen) -o $@ repgen.tab.c



#### Clean target deletes all generated files ####
clean:
	rm -f \
		$(TARGETDIR_repgen)/repgen \
		$(TARGETDIR_repgen)/*.o \
		$(TARGETDIR_repgen)/repgen.tab.* \
		$(TARGETDIR_repgen)/lex.yy.c

	$(CCADMIN)
	rm -f -r $(TARGETDIR_repgen)


# Create the target directory (if needed)
$(TARGETDIR_repgen):
	mkdir -p $(TARGETDIR_repgen)


# Enable dependency checking
.KEEP_STATE:
.KEEP_STATE_FILE:.make.state.GNU-x86_64-MacOSX

test:
	$(TARGETDIR_repgen)/repgen < sample_report.def
