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
CND_CONF=Debug
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
CCFLAGS=`Magick++-config --cppflags --cxxflags --ldflags --libs`  
CXXFLAGS=`Magick++-config --cppflags --cxxflags --ldflags --libs`  

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=`Magick++-config --cppflags --cxxflags --ldflags --libs`  

# Link Libraries and Options
LDLIBSOPTIONS=-L/usr/lib -L/usr/local/lib `pkg-config --libs opencv` `pkg-config --libs ImageMagick` `pkg-config --libs lept` `pkg-config --libs Magick++` `pkg-config --libs MagickCore` `pkg-config --libs MagickWand` `pkg-config --libs ImageMagick-7.Q16HDRI` `pkg-config --libs Magick++-7.Q16HDRI` `pkg-config --libs MagickCore-7.Q16HDRI` `pkg-config --libs MagickWand-7.Q16HDRI` `pkg-config --libs tesseract`  

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/projetoiarn

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/projetoiarn: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/projetoiarn ${OBJECTFILES} ${LDLIBSOPTIONS} -llept -ltesseract `Magick++-config --cppflags --cxxflags --ldflags --libs` 

${OBJECTDIR}/_ext/76970454/TesseractExecutor.o: /home/guilhermemg/Desktop/Graduacao/Periodos/Periodo_10/Inteligencia\ Artificial/ProjetoIARN/TesseractExecutor.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/76970454
	${RM} "$@.d"
	$(COMPILE.cc) -g -I/usr/local/include/opencv -I/usr/local/include/opencv2 -I/usr/local/include/tesseract -I/usr/local/include/leptonica -I/usr/local/include/ImageMagick-7 `pkg-config --cflags opencv` `pkg-config --cflags ImageMagick` `pkg-config --cflags lept` `pkg-config --cflags Magick++` `pkg-config --cflags MagickCore` `pkg-config --cflags MagickWand` `pkg-config --cflags ImageMagick-7.Q16HDRI` `pkg-config --cflags Magick++-7.Q16HDRI` `pkg-config --cflags MagickCore-7.Q16HDRI` `pkg-config --cflags MagickWand-7.Q16HDRI` `pkg-config --cflags tesseract`   -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/76970454/TesseractExecutor.o /home/guilhermemg/Desktop/Graduacao/Periodos/Periodo_10/Inteligencia\ Artificial/ProjetoIARN/TesseractExecutor.cpp

${OBJECTDIR}/_ext/1362865800/ImageNoisesExtractor.o: /home/guilhermemg/Desktop/Link\ to\ Inteligencia\ Artificial/ProjetoIARN/ImageNoisesExtractor.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1362865800
	${RM} "$@.d"
	$(COMPILE.cc) -g -I/usr/local/include/opencv -I/usr/local/include/opencv2 -I/usr/local/include/tesseract -I/usr/local/include/leptonica -I/usr/local/include/ImageMagick-7 `pkg-config --cflags opencv` `pkg-config --cflags ImageMagick` `pkg-config --cflags lept` `pkg-config --cflags Magick++` `pkg-config --cflags MagickCore` `pkg-config --cflags MagickWand` `pkg-config --cflags ImageMagick-7.Q16HDRI` `pkg-config --cflags Magick++-7.Q16HDRI` `pkg-config --cflags MagickCore-7.Q16HDRI` `pkg-config --cflags MagickWand-7.Q16HDRI` `pkg-config --cflags tesseract`   -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/1362865800/ImageNoisesExtractor.o /home/guilhermemg/Desktop/Link\ to\ Inteligencia\ Artificial/ProjetoIARN/ImageNoisesExtractor.cpp

${OBJECTDIR}/ImageFormatConverter.o: ImageFormatConverter.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I/usr/local/include/opencv -I/usr/local/include/opencv2 -I/usr/local/include/tesseract -I/usr/local/include/leptonica -I/usr/local/include/ImageMagick-7 `pkg-config --cflags opencv` `pkg-config --cflags ImageMagick` `pkg-config --cflags lept` `pkg-config --cflags Magick++` `pkg-config --cflags MagickCore` `pkg-config --cflags MagickWand` `pkg-config --cflags ImageMagick-7.Q16HDRI` `pkg-config --cflags Magick++-7.Q16HDRI` `pkg-config --cflags MagickCore-7.Q16HDRI` `pkg-config --cflags MagickWand-7.Q16HDRI` `pkg-config --cflags tesseract`   -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ImageFormatConverter.o ImageFormatConverter.cpp

${OBJECTDIR}/ImageOneChannelHistogramCreator.o: ImageOneChannelHistogramCreator.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I/usr/local/include/opencv -I/usr/local/include/opencv2 -I/usr/local/include/tesseract -I/usr/local/include/leptonica -I/usr/local/include/ImageMagick-7 `pkg-config --cflags opencv` `pkg-config --cflags ImageMagick` `pkg-config --cflags lept` `pkg-config --cflags Magick++` `pkg-config --cflags MagickCore` `pkg-config --cflags MagickWand` `pkg-config --cflags ImageMagick-7.Q16HDRI` `pkg-config --cflags Magick++-7.Q16HDRI` `pkg-config --cflags MagickCore-7.Q16HDRI` `pkg-config --cflags MagickWand-7.Q16HDRI` `pkg-config --cflags tesseract`   -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ImageOneChannelHistogramCreator.o ImageOneChannelHistogramCreator.cpp

${OBJECTDIR}/Main.o: Main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I/usr/local/include/opencv -I/usr/local/include/opencv2 -I/usr/local/include/tesseract -I/usr/local/include/leptonica -I/usr/local/include/ImageMagick-7 `pkg-config --cflags opencv` `pkg-config --cflags ImageMagick` `pkg-config --cflags lept` `pkg-config --cflags Magick++` `pkg-config --cflags MagickCore` `pkg-config --cflags MagickWand` `pkg-config --cflags ImageMagick-7.Q16HDRI` `pkg-config --cflags Magick++-7.Q16HDRI` `pkg-config --cflags MagickCore-7.Q16HDRI` `pkg-config --cflags MagickWand-7.Q16HDRI` `pkg-config --cflags tesseract`   -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Main.o Main.cpp

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
