#-------------------------------------------------
#
# Project created by QtCreator 2014-12-21T15:21:06
#
#-------------------------------------------------

QT       += core gui
CONFIG   += c++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PasswordCreator
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    createpassword.cpp

HEADERS  += mainwindow.h \
    createpassword.h

FORMS    += mainwindow.ui
