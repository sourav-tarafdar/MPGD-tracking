######################################################################
# Automatically generated by qmake (3.1) Tue Dec 29 11:19:29 2020
######################################################################

TEMPLATE = app
TARGET = fadc

QT += widgets gui core

CONFIG += c++14 release

INCLUDEPATH += ./include

OBJECTS_DIR = obj
MOC_DIR = moc

# decoder headers
INCLUDEPATH += ../decoder/include ../decoder/evio-5.2
#decoder libs
LIBS += -L../decoder/lib -ldecoder

# ROOT headers libs
INCLUDEPATH += ${ROOTSYS}/include
# root libs
LIBS += -L$(ROOTSYS)/lib -lCore -lRIO -lNet \
        -lHist -lGraf -lGraf3d -lGpad -lTree \
        -lRint -lPostscript -lMatrix -lPhysics \
        -lGui -lRGL -lSpectrum -lMathCore

# The following define makes your compiler warn you if you use any
# feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

# Input
HEADERS += include/Fadc250Data.h \
           include/Fadc250Decoder.h \
           include/WfAnalyzer.h \
           include/WfRootGraph.h \
           include/FadcDataViewer.h \
           include/QRootCanvas.h \
           include/QMainCanvas.h \

SOURCES += src/Fadc250Decoder.cpp \
           src/WfAnalyzer.cpp \
           src/WfRootGraph.cpp \
           src/FadcDataViewer.cpp \
           src/QRootCanvas.cpp \
           src/QMainCanvas.cpp \
           src/main.cpp \