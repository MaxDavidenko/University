#-------------------------------------------------
#
# Project created by QtCreator 2016-05-13T00:03:29
#
#-------------------------------------------------

QT       += testlib \
			gui

//QT       -= gui

TARGET = utest
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

HEADERS += modelFromFile.h
SOURCES += \
			modelFromFile.cpp \
    utest.cpp
DEFINES += SRCDIR=\\\"$$PWD/\\\"