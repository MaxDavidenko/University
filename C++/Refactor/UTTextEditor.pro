#-------------------------------------------------
#
# Project created by QtCreator 2016-09-22T22:41:00
#
#-------------------------------------------------

QT       += testlib

QT       -= gui

TARGET = tst_uttexteditortest
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += tst_uttexteditortest.cpp \
    refactor.cpp
DEFINES += SRCDIR=\\\"$$PWD/\\\"

HEADERS += \
    refactor.h
