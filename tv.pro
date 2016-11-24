#-------------------------------------------------
#
# Project created by QtCreator 2016-11-24T07:47:19
#
#-------------------------------------------------

QT       += core gui serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = tv
TEMPLATE = app


SOURCES += main.cpp\
        baseclass.cpp \
    terminal/console.cpp \
    terminal/settingsdialog.cpp \
    terminal/terminal.cpp

HEADERS  += baseclass.h \
    terminal/console.h \
    terminal/settingsdialog.h \
    terminal/terminal.h

FORMS    += baseclass.ui \
    terminal/settingsdialog.ui \
    terminal/terminal.ui

RESOURCES += \
    terminal/terminal.qrc
