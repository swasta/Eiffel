case $CONFIG in
'')
	if test ! -f ../config.sh; then
		(echo "Can't find ../config.sh."; exit 1)
	fi 2>/dev/null
	. ../config.sh
	;;
esac
case "$O" in
*/*) cd `expr X$0 : 'X\(.*\)/'` ;;
esac
echo "Compiling C code in C1"
$spitshell >Makefile <<!GROK!THIS!
INCLUDE_PATH = 
SHELL = /bin/sh
CC = $cc
CPP = $cpp
CFLAGS = $wkoptimize $ccflags $large -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
CPPFLAGS = $wkoptimize $cppflags $large -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
LDFLAGS = $ldflags
CCLDFLAGS = $ccldflags  $console_flags
LDSHAREDFLAGS =  $ldsharedflags
EIFLIB = "$rt_lib/$prefix$wkeiflib$suffix"
EIFTEMPLATES = $rt_templates
LIBS = $libs
MAKE = $make
AR = $ar
LD = $ld
MKDEP = $mkdep \$(DPFLAGS) --
MV = $mv
CP = $cp
RANLIB = $ranlib
RM = $rm -f
FILE_EXIST = $file_exist
RMDIR = $rmdir
X2C = "$x2c"
SHAREDLINK = $sharedlink
SHAREDLIBS = $sharedlibs
SHARED_SUFFIX = $shared_suffix
COMMAND_MAKEFILE = 
START_TEST = $start_test 
END_TEST = $end_test 
CREATE_TEST = $create_test 
SYSTEM_IN_DYNAMIC_LIB = temp$shared_suffix 
!GROK!THIS!
$spitshell >>Makefile <<'!NO!SUBS!'

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

!NO!SUBS!
chmod 644 Makefile
$eunicefix Makefile

