#-------------------------------------------------
#
# Project created by QtCreator 2017-08-03T20:30:27
#
#-------------------------------------------------

QT       += core gui network

RC_FILE = myapp.rc
TARGET = ECU-RS-PC
TEMPLATE = app

DESTDIR = $$PWD/Target/XP

TRANSLATIONS = Language_Eng.ts

SOURCES += main.cpp\
        mainwindow.cpp \
    rsclient.cpp \
    commudp.cpp

HEADERS  += mainwindow.h \
    rsclient.h \
    commudp.h

FORMS    += mainwindow.ui

OTHER_FILES += \
    myappico.ico \
    myapp.rc


