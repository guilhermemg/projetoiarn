#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux-x86
CND_DLIB_EXT=so
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/_ext/76970454/TesseractExecutor.o \
	${OBJECTDIR}/_ext/1362865800/ImageNoisesExtractor.o \
	${OBJECTDIR}/ImageFormatConverter.o \
	${OBJECTDIR}/ImageOneChannelHistogramCreator.o \
	${OBJECTDIR}/Main.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/projetoiarn

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/projetoiarn: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/projetoiarn ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/_ext/76970454/TesseractExecutor.o: /home/guilhermemg/Desktop/Graduacao/Periodos/Periodo_10/Inteligencia\ Artificial/ProjetoIARN/TesseractExecutor.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/76970454
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/76970454/TesseractExecutor.o /home/guilhermemg/Desktop/Graduacao/Periodos/Periodo_10/Inteligencia\ Artificial/ProjetoIARN/TesseractExecutor.cpp

${OBJECTDIR}/_ext/1362865800/ImageNoisesExtractor.o: /home/guilhermemg/Desktop/Link\ to\ Inteligencia\ Artificial/ProjetoIARN/ImageNoisesExtractor.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1362865800
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/1362865800/ImageNoisesExtractor.o /home/guilhermemg/Desktop/Link\ to\ Inteligencia\ Artificial/ProjetoIARN/ImageNoisesExtractor.cpp

${OBJECTDIR}/ImageFormatConverter.o: ImageFormatConverter.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ImageFormatConverter.o ImageFormatConverter.cpp

${OBJECTDIR}/ImageOneChannelHistogramCreator.o: ImageOneChannelHistogramCreator.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ImageOneChannelHistogramCreator.o ImageOneChannelHistogramCreator.cpp

${OBJECTDIR}/Main.o: Main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Main.o Main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/projetoiarn

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
