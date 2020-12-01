QT       += core gui sql
QT       += core gui sql printsupport
QT       += core gui network
QT += core
QT +=sql
QT       += core gui sql multimedia printsupport


#https://github.com/zeineb-eya/E-Health_care_2A12.git
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
CONFIG +=console
TARGET = E-Clinic.pro
TEMPLATE = app

include( $$PWD/C:/Users/HP/Desktop/2A12/project c++/qt/E-Clinic/SMTPClient.pri )
# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    SMTPClient/email.cpp \
    SMTPClient/emailaddress.cpp \
    SMTPClient/smtpclient.cpp \
    categories.cpp \
    connexion.cpp \
    facturesetcommandes.cpp \
    mail.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    SMTPClient/email.h \
    SMTPClient/emailaddress.h \
    SMTPClient/smtpclient.h \
    categories.h \
    connexion.h \
    facturesetcommandes.h \
    mail.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    Mortified.mp3

RESOURCES += \
    imagenes.qrc

