QT       += core gui sql
QT       += core gui serialport
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    mainwindow1.cpp \
    nature.cpp \
    space.cpp \
    technology.cpp

HEADERS += \
    mainwindow.h \
    mainwindow1.h \
    nature.h \
    space.h \
    technology.h

FORMS += \
    mainwindow.ui \
    mainwindow1.ui \
    nature.ui \
    space.ui \
    technology.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc \
    resources.qrc
