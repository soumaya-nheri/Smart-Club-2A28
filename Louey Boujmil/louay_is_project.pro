QT       += sql core gui charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    connexion.cpp \
    crud_employe.cpp \
    gestion_employe.cpp \
    main.cpp \
    mainwindow.cpp \
    statistics.cpp

HEADERS += \
    connexion.h \
    crud_employe.h \
    gestion_employe.h \
    mainwindow.h \
    statistics.h

FORMS += \
    gestion_employe.ui \
    mainwindow.ui \
    statistics.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
