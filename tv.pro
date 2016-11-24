#-------------------------------------------------
#
# Project created by QtCreator 2016-11-24T07:47:19
#
#-------------------------------------------------

QT += core \
    gui \
    serialport \
    network \
    xml \
    multimedia \
    multimediawidgets \
    widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = tv
TEMPLATE = app


SOURCES += main.cpp\
        baseclass.cpp \
    terminal/console.cpp \
    terminal/settingsdialog.cpp \
    terminal/terminal.cpp \
    player/histogramwidget.cpp \
    player/player.cpp \
    player/playercontrols.cpp \
    player/playlistmodel.cpp \
    player/videowidget.cpp

HEADERS  += baseclass.h \
    terminal/console.h \
    terminal/settingsdialog.h \
    terminal/terminal.h \
    player/histogramwidget.h \
    player/player.h \
    player/playercontrols.h \
    player/playlistmodel.h \
    player/videowidget.h

FORMS    += baseclass.ui \
    terminal/settingsdialog.ui \
    terminal/terminal.ui

RESOURCES += \
    terminal/terminal.qrc

maemo* {
    DEFINES += PLAYER_NO_COLOROPTIONS
}
