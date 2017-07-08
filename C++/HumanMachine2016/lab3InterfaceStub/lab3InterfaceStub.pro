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
    CustomWidget.cpp \
    customdialog.cpp \
    CustomStackedWidget.cpp \
    CustomListWidget.cpp \
    NewProjectMasterCreator.cpp

HEADERS  += mainwindow.h \
    CustomButton.h \
    CustomWidget.h \
    customdialog.h \
    CustomStackedWidget.h \
    CustomListWidget.h \
    NewProjectMasterCreator.h

FORMS    += mainwindow.ui \
    settings.ui \
    createnewdialog.ui \
    newproject.ui

RESOURCES += \
    gallery.qrc
