INCLUDE_PATH = 
SHELL = /bin/sh
CC = cc
CPP = c++
CFLAGS = -O0 -pipe -fno-common -fPIC  -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"/Applications/MacPorts/Eiffel_15.08/studio/spec/macosx-x86-64/include" -I. $(INCLUDE_PATH)
CPPFLAGS = -O0 -pipe -fno-common -fPIC  -DWORKBENCH -I"/Applications/MacPorts/Eiffel_15.08/studio/spec/macosx-x86-64/include" -I. $(INCLUDE_PATH)
LDFLAGS = 
CCLDFLAGS =   
LDSHAREDFLAGS =   -dynamiclib -flat_namespace -undefined suppress -o
EIFLIB = "/Applications/MacPorts/Eiffel_15.08/studio/spec/macosx-x86-64/lib/libwkbench.a"
EIFTEMPLATES = /Applications/MacPorts/Eiffel_15.08/studio/config/macosx-x86-64/templates
LIBS = -lm
MAKE = make
AR = ar
LD = ld
MKDEP = \$(EIFFEL_SRC)/C/mkdep $(DPFLAGS) --
MV = /bin/mv
CP = /bin/cp
RANLIB = :
RM = /bin/rm -f
FILE_EXIST = 
RMDIR = 
X2C = "/Applications/MacPorts/Eiffel_15.08/studio/spec/macosx-x86-64/bin/x2c"
SHAREDLINK = cc
SHAREDLIBS = -lm
SHARED_SUFFIX = .dylib
COMMAND_MAKEFILE = 
START_TEST = if [ ! -f finished ] ; then 
END_TEST = ; fi 
CREATE_TEST = touch finished 
SYSTEM_IN_DYNAMIC_LIB = temp.dylib 

.SUFFIXES:.cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C1_c.o 

OLDOBJECTS =  fu866.o fu866d.o ap861.o ap861d.o pe862.o pe862d.o mm871.o mm871d.o \
	v_868.o v_868d.o v_891.o v_891d.o v_870.o v_870d.o v_881.o v_881d.o \
	mm867.o mm867d.o mm890.o mm890d.o mm873.o mm873d.o mm872.o mm872d.o \
	mm864.o mm864d.o mm865.o mm865d.o mm879.o mm879d.o v_874.o v_874d.o \
	v_886.o v_886d.o v_880.o v_880d.o v_884.o v_884d.o v_889.o v_889d.o \
	v_875.o v_875d.o v_885.o v_885d.o v_869.o v_869d.o v_892.o v_892d.o \
	v_882.o v_882d.o v_888.o v_888d.o v_863.o v_863d.o v_876.o v_876d.o \
	v_878.o v_878d.o v_887.o v_887d.o v_883.o v_883d.o v_877.o v_877d.o 

all: Cobj1.o

Cobj1.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj1.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

