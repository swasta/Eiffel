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

OBJECTS = big_file_C2_c.o 

OLDOBJECTS =  v_912.o v_912d.o v_910.o v_910d.o mm894.o mm894d.o v_893.o v_893d.o \
	v_913.o v_913d.o v_911.o v_911d.o v_905.o v_905d.o mm898.o mm898d.o \
	mm895.o mm895d.o mm896.o mm896d.o mm897.o mm897d.o v_899.o v_899d.o \
	v_909.o v_909d.o v_903.o v_903d.o v_900.o v_900d.o v_908.o v_908d.o \
	v_906.o v_906d.o v_901.o v_901d.o v_904.o v_904d.o v_907.o v_907d.o \
	v_902.o v_902d.o 

all: Cobj2.o

Cobj2.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj2.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

