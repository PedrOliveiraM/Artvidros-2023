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
    bascula.cpp \
    classfechamentodepia.cpp \
    classjanelade2folhas.cpp \
    classjanelade4folhas.cpp \
    classpivobascula.cpp \
    classpivotantebasc.cpp \
    classportade1folha.cpp \
    classportade2folhas.cpp \
    classportade4folhas.cpp \
    classportadeabrir.cpp \
    dialogareaorcamentos.cpp \
    dialogareaprecos.cpp \
    dialogjanelas.cpp \
    dialogportas.cpp \
    dialogsalvar.cpp \
    fechamentodepia.cpp \
    herdajanelas.cpp \
    herdapivobasc.cpp \
    herdavidros.cpp \
    janelade2folhas.cpp \
    janelade4folhas.cpp \
    main.cpp \
    mainwindow.cpp \
    pivotante.cpp \
    portade1folha.cpp \
    portade2folhas.cpp \
    portade4folhas.cpp \
    portadeabrir.cpp \
    sqlarea.cpp \
    sqldatabasecontrol.cpp

HEADERS += \
    adicionaisobj.h \
    adicionaisref.h \
    bascula.h \
    classfechamentodepia.h \
    classjanelade2folhas.h \
    classjanelade4folhas.h \
    classpivobascula.h \
    classpivotantebasc.h \
    classportade1folha.h \
    classportade2folhas.h \
    classportade4folhas.h \
    classportadeabrir.h \
    dialogareaorcamentos.h \
    dialogareaprecos.h \
    dialogjanelas.h \
    dialogportas.h \
    dialogsalvar.h \
    fechamentodepia.h \
    herdajanelas.h \
    herdapivobasc.h \
    herdavidros.h \
    janelade2folhas.h \
    janelade4folhas.h \
    mainwindow.h \
    pivotante.h \
    portade1folha.h \
    portade2folhas.h \
    portade4folhas.h \
    portadeabrir.h \
    sqlarea.h \
    sqldatabasecontrol.h

FORMS += \
    adicionaisref.ui \
    bascula.ui \
    dialogareaorcamentos.ui \
    dialogareaprecos.ui \
    dialogjanelas.ui \
    dialogportas.ui \
    dialogsalvar.ui \
    fechamentodepia.ui \
    janelade2folhas.ui \
    janelade4folhas.ui \
    mainwindow.ui \
    pivotante.ui \
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
