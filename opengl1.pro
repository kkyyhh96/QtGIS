#-------------------------------------------------
#
# Project created by QtCreator 2017-12-15T16:22:37
#
#-------------------------------------------------

QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = opengl1
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        widget.cpp \
    mywidget.cpp \
    layer.cpp \
    map.cpp \
    geofile.cpp \
    point.cpp \
    feature.cpp \
    stylefile.cpp

HEADERS += \
        widget.h \
    mywidget.h \
    layer.h \
    map.h \
    geofile.h \
    point.h \
    feature.h \
    stylefile.h

FORMS += \
        widget.ui
