#-------------------------------------------------
#
# Project created by QtCreator 2017-01-28T14:34:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Riverraid
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
    enemy.cpp \
    bullet.cpp \
    player.cpp \
    river.cpp \
    score.cpp \
    fuel.cpp \
    health.cpp \
    mainwindow.cpp \
    gameover.cpp \
    bridge.cpp

HEADERS  += enemy.h \
    bullet.h \
    player.h \
    river.h \
    score.h \
    fuel.h \
    health.h \
    mainwindow.h\
    gameover.h \
    bridge.h

FORMS    += \
    mainwindow.ui \
    gameover.ui

RESOURCES += \
    res.qrc
