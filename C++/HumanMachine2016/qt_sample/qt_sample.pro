#-------------------------------------------------
#
# Project created by QtCreator 2016-04-18T14:16:35
#
#-------------------------------------------------

QT       += core gui
QT       += webkit webkitwidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = binperm
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    modelFromFile.cpp \
    helpdialog.cpp

HEADERS  += mainwindow.h \
    modelFromFile.h \
    helpdialog.h

FORMS    += mainwindow.ui

RESOURCES += \
    res/res.qrc
