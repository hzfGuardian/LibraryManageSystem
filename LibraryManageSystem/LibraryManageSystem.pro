#-------------------------------------------------
#
# Project created by QtCreator 2016-08-16T18:00:21
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LibraryManageSystem
TEMPLATE = app


SOURCES += main.cpp \
    cardmanage.cpp \
    brwwindow.cpp \
    insertwindow.cpp \
    selectdlg.cpp \
    querywindow.cpp \
    connectdlg.cpp

HEADERS  += cardmanage.h \
    insertwindow.h \
    querywindow.h \
    selectdlg.h \
    connectdlg.h \
    brwwindow.h

FORMS    += connectdlg.ui \
    cardmanage.ui \
    insertwindow.ui \
    querywindow.ui \
    selectdlg.ui \
    brwwindow.ui
