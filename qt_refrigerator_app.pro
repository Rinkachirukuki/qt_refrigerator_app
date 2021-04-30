QT       += core gui multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    controlpanel.cpp \
    door.cpp \
    emulator.cpp \
    eventlog.cpp \
    main.cpp \
    mainwindow.cpp \
    processor.cpp \
    refrigerationunit.cpp \
    refrigerator.cpp \
    speaker.cpp \
    thermometer.cpp \
    usbport.cpp

HEADERS += \
    controlpanel.h \
    door.h \
    emulator.h \
    eventlog.h \
    mainwindow.h \
    processor.h \
    refrigerationunit.h \
    refrigerator.h \
    speaker.h \
    thermometer.h \
    usbport.h

FORMS += \
    mainwindow.ui

TRANSLATIONS += \
    qt_refrigerator_app_ru_RU.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc
