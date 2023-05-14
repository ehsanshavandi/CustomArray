TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    src/customarray.cpp \
    src/main.cpp

INCLUDEPATH += include/

HEADERS += \
    customarray.h
