# $PostgreSQL: pgsql/contrib/pgchem/Makefile,v 1.6 2004/08/20 20:13:02 schmid Exp $
# Makefile for mingw/msys on win32
# Adjust the locations of OpenBabel according to your system
#



OPENBABEL_SOURCE_DIR=openbabel-2.3.0/src
OPENBABEL_INCLUDE_DIRS=-Iopenbabel-2.3.0/build/include -Iopenbabel-2.3.0/include # src -I openbabel-2.3.0/include -I openbabel-2.3.0/include/openbabel -I openbabel-2.3.0/include/vf2 
OPENBABEL_LIB_DIRS=-Lopenbabel-2.3.0/build/lib #src/.libs/ -Lopenbabel-2.3.0/src/formats/.libs/ -Lopenbabel-2.3.0/src/formats/inchi102/.libs/
MATCHMOL_LIB_DIR=barsoi/

MODULE_big = libpgchem
OBJS = reaction/reaction_op.o reaction/reaction_gist.o reaction/reaction_io.o molecule/molecule_op.o molecule/molecule_gist.o molecule/molecule_io.o  obwrapper.o functions.o ${OPENBABEL_SOURCE_DIR}/fingerprints/fingerpc8.o ${OPENBABEL_SOURCE_DIR}/fingerprints/finger2.o ${OPENBABEL_SOURCE_DIR}/fingerprints/finger3.o

SHLIB_LINK = -L${MATCHMOL_LIB_DIR} -lbarsoi ${OPENBABEL_LIB_DIRS} -lopenbabel -linchi --driver-name=g++ -u __ZN9OpenBabel9MDLFormat11GetMIMETypeEv -u __ZN9OpenBabel13SMIBaseFormat11GetMIMETypeEv -u _ZN9OpenBabel8GetInChIERSi -lz 
PG_CPPFLAGS=-fPIC -O2 -finline-functions -funroll-loops -I. ${OPENBABEL_INCLUDE_DIRS} 
ifdef USE_PGXS
PGXS = $(shell pg_config --pgxs)
include $(PGXS)
else
subdir = contrib/pgchem
top_builddir = ../../..
include $(top_builddir)/src/Makefile.global
include $(top_srcdir)/contrib/contrib-global.mk
endif

