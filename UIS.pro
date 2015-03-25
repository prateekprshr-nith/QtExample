
QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 1
TEMPLATE = app

HEADERS += \
    Person.h \
    Gui.h \
    Db.h

SOURCES += \
    Person.cpp \
    Gui.cpp \
    main.cpp \
    Db.cpp

FORMS +=
