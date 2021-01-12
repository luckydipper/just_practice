#-------------------------------------------------
#
# Project created by QtCreator 2021-01-10T16:12:31
#
#-------------------------------------------------

QT       -= core gui

TARGET = qt_creator
TEMPLATE = lib

DEFINES += QT_CREATOR_LIBRARY

SOURCES += qt_creator.cpp

HEADERS +=

unix {
    target.path = /usr/lib
    INSTALLS += target
}
