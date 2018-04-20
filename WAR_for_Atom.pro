QT += core
QT -= gui

TARGET = WAR_for_Atom
CONFIG += console
CONFIG -= app_bundle
CONFIG +=c++11
CONFIG +=c++14
TEMPLATE = app

SOURCES += \
    main.cpp

HEADERS += \
    archer.h \
    warrior.h \
    citizien.h \
    squad.h \
    abstract.h

