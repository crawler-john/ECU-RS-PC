#-------------------------------------------------
#
# Project created by QtCreator 2017-08-03T20:30:27
#
#-------------------------------------------------

QT       += core gui network

TARGET = ECU-RS-PC
TEMPLATE = app

DESTDIR = $$PWD/Target/XP

TRANSLATIONS = Language_Eng.ts

SOURCES += main.cpp\
        mainwindow.cpp \
    rsclient.cpp

HEADERS  += mainwindow.h \
    rsclient.h

FORMS    += mainwindow.ui
