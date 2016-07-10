#-------------------------------------------------
#
# Project created by QtCreator 2016-07-09T20:33:38
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Pirotechnic
TEMPLATE = app

LIBS += -L/usr/local/include -lwiringPi

SOURCES += main.cpp\
        mainwindow.cpp \
    firephasers.cpp \
    shiftinterface.cpp

HEADERS  += mainwindow.h \
    firephasers.h \
    shiftinterface.h

FORMS    += mainwindow.ui
