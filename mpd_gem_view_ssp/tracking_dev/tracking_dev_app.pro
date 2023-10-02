######################################################################
# Automatically generated by qmake (3.1) Sat Nov 7 17:18:28 2020
######################################################################

TEMPLATE = app
TARGET = ../bin/tracking_viewer
#target.path += ./lib
#INSTALLS += target

CONFIG += c++14 warn_on release
QT += core gui widgets

######################################################################
# self headers
INCLUDEPATH += . ./include

######################################################################
# decoder headers
INCLUDEPATH += ../decoder/include ../decoder/evio-5.2

# decoder lib
LIBS += -L../decoder/lib -ldecoder

######################################################################
# gem headers
INCLUDEPATH += ../gem/include ../gem/third_party

# decoder lib
LIBS += -L../gem/lib -lgem

######################################################################
# root headers
INCLUDEPATH += ${ROOTSYS}/include
# root libs
LIBS += -L${ROOTSYS}/lib -lCore -lRIO -lNet \
	-lHist -lGraf -lGraf3d -lGpad -lTree \
	-lRint -lPostscript -lMatrix -lPhysics \
	-lGui -lRGL -lMathCore


######################################################################
# moc dir
MOC_DIR = moc

######################################################################
# obj dir
OBJECTS_DIR = obj

######################################################################
# The following define makes your compiler warn you if you use any
# feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS #MULTI_THREAD

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


######################################################################
# Input path
HEADERS += include/AbstractDetector.h \
           include/CoordSystem.h \
           include/Detector2DItem.h \
           include/Detector2DView.h \
           include/histos.hpp \
           include/Tracking.h \
           include/tracking_struct.h \
           include/TrackingDataHandler.h \
           include/TrackingUtility.h \
           include/Viewer.h


######################################################################
# source path
SOURCES += src/AbstractDetector.cpp \
           src/CoordSystem.cpp \
           src/Detector2DItem.cpp \
           src/Detector2DView.cpp \
           src/main.cpp \
           src/Tracking.cpp \
           src/tracking_struct.cpp \
           src/TrackingDataHandler.cpp \
           src/TrackingUtility.cpp \
           src/Viewer.cpp

