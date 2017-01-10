#-------------------------------------------------
#
# Project created by QtCreator 2016-11-08T19:21:57
#
#-------------------------------------------------

QT       += core gui
QMAKE_CXXFLAGS += -std=gnu++11
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = lab3InterfaceStub
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    CustomButton.cpp \
    CustomWidget.cpp

HEADERS  += mainwindow.h \
    CustomButton.h \
    CustomWidget.h

FORMS    += mainwindow.ui \
    settings.ui

RESOURCES += \
    gallery.qrc
