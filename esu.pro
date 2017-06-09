#-------------------------------------------------
#
# Project created by QtCreator 2017-06-09T22:05:50
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = esu
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    file_reader.cpp \
    get_links.cpp

HEADERS  += mainwindow.h \
    file_reader.h \
    get_links.h

FORMS    += mainwindow.ui
