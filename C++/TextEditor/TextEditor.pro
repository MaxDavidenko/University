#-------------------------------------------------
#
# Project created by QtCreator 2016-10-06T22:07:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TextEditor
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
		refactor.cpp \
    highlighter.cpp

HEADERS  += widget.h \
			refactor.h \
    highlighter.h

FORMS    += widget.ui
