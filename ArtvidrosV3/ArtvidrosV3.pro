QT       += core gui sql
RC_ICONS += Artvidros.ico

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    adicionaisobj.cpp \
    adicionaisref.cpp \
    classportade1folha.cpp \
    classportade2folhas.cpp \
    classportade4folhas.cpp \
    classportadeabrir.cpp \
    dialogareaorcamentos.cpp \
    dialogareaprecos.cpp \
    dialogportas.cpp \
    dialogsalvar.cpp \
    herdavidros.cpp \
    main.cpp \
    mainwindow.cpp \
    portade1folha.cpp \
    portade2folhas.cpp \
    portade4folhas.cpp \
    portadeabrir.cpp \
    sqlarea.cpp \
    sqldatabasecontrol.cpp

HEADERS += \
    adicionaisobj.h \
    adicionaisref.h \
    classportade1folha.h \
    classportade2folhas.h \
    classportade4folhas.h \
    classportadeabrir.h \
    dialogareaorcamentos.h \
    dialogareaprecos.h \
    dialogportas.h \
    dialogsalvar.h \
    herdavidros.h \
    mainwindow.h \
    portade1folha.h \
    portade2folhas.h \
    portade4folhas.h \
    portadeabrir.h \
    sqlarea.h \
    sqldatabasecontrol.h

FORMS += \
    adicionaisref.ui \
    dialogareaorcamentos.ui \
    dialogareaprecos.ui \
    dialogportas.ui \
    dialogsalvar.ui \
    mainwindow.ui \
    portade1folha.ui \
    portade2folhas.ui \
    portade4folhas.ui \
    portadeabrir.ui \
    sqlarea.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    files.qrc

DISTFILES += \
    Porta de abrir.jpg
