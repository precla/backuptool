#-------------------------------------------------
#
# Project created by QtCreator 2016-03-11T22:52:01
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = backupTool
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
        aboutdialog.cpp \
        backup.cpp \
        compression.cpp \
        ftp.cpp

HEADERS  += mainwindow.h \
        aboutdialog.h \
        backup.h \
        compression.h \
        ftp.h

FORMS    += mainwindow.ui \
        aboutdialog.ui
