#-------------------------------------------------
#
# Project created by QtCreator 2015-03-12T10:24:39
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = game
CONFIG   += console c++11
CONFIG   -= app_bundle

TEMPLATE = app

DESTDIR = ../target

SOURCES += main.cpp \
    engine/card.cpp

HEADERS += \
    engine/card.h
