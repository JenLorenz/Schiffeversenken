QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Schiffe platzieren.cpp \
    Startbildschirm.cpp \
    endbildschirm.cpp \
    main.cpp \
    mobilendbildschirm.cpp \
    mobilschiffeplatzieren.cpp \
    mobilspielfeld.cpp \
    mobilstartbildschirm.cpp \
    schiff.cpp \
    schiffeplatzieren.cpp \
    spielbildschirm.cpp \
    spieler.cpp \
    spielfeld.cpp

HEADERS += \
    Schiffe platzieren.h \
    Startbildschirm.h \
    endbildschirm.h \
    mobilendbildschirm.h \
    mobilschiffeplatzieren.h \
    mobilspielfeld.h \
    mobilstartbildschirm.h \
    schiff.h \
    schiffeplatzieren.h \
    spielbildschirm.h \
    spieler.h \
    spielfeld.h

FORMS += \
    Schiffe platzieren.ui \
    Startbildschirm.ui \
    endbildschirm.ui \
    mobilendbildschirm.ui \
    mobilschiffeplatzieren.ui \
    mobilspielfeld.ui \
    mobilstartbildschirm.ui \
    schiffeplatzieren.ui \
    spielbildschirm.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
