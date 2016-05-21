#-------------------------------------------------
#
# Project created by QtCreator 2016-03-10T10:59:30
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = show_trade_info
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    q_button.cpp \
    ../gpp_qt/wfunction/udp_receiver.cpp \
    button_manager.cpp

HEADERS  += mainwindow.h \
    q_button.h \
    ../gpp_qt/wfunction/udp_receiver.h \
    button_manager.h

FORMS    += mainwindow.ui
