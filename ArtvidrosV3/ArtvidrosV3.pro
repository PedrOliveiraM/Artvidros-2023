QT       += core gui sql printsupport network

RC_ICONS += Artvidros.ico

INCLUDEPATH += C:/caminho/para/bibliotecas/poppler-qt5/include

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    adicionaisobj.cpp \
    adicionaisref.cpp \
    bascula.cpp \
    boxcanto.cpp \
    boxfrontal.cpp \
    classbox.cpp \
    classfechamentodepia.cpp \
    classjanelade2folhas.cpp \
    classjanelade4folhas.cpp \
    classmoldura.cpp \
    classpivobascula.cpp \
    classpivotantebasc.cpp \
    classportade1folha.cpp \
    classportade2folhas.cpp \
    classportade4folhas.cpp \
    classportadeabrir.cpp \
    classvidroscomuns.cpp \
    dialogareadeprodutos.cpp \
    dialogareadevendas.cpp \
    dialogareaorcamentos.cpp \
    dialogareaorcamentosql.cpp \
    dialogareaprecos.cpp \
    dialogboxs.cpp \
    dialoghelp.cpp \
    dialogjanelas.cpp \
    dialoglogin.cpp \
    dialogpasswords.cpp \
    dialogportas.cpp \
    dialogsalvar.cpp \
    fechamentodepia.cpp \
    herdabox.cpp \
    herdajanelas.cpp \
    herdapivobasc.cpp \
    herdavidros.cpp \
    janelade2folhas.cpp \
    janelade4folhas.cpp \
    main.cpp \
    mainwindow.cpp \
    moldura.cpp \
    passworddialog.cpp \
    pdfarea.cpp \
    pdfgenerator.cpp \
    pdfobjeto.cpp \
    pivotante.cpp \
    portade1folha.cpp \
    portade2folhas.cpp \
    portade4folhas.cpp \
    portadeabrir.cpp \
    sqlarea.cpp \
    sqldatabasecontrol.cpp \
    vidroscomuns.cpp

HEADERS += \
    adicionaisobj.h \
    adicionaisref.h \
    bascula.h \
    boxcanto.h \
    boxfrontal.h \
    classbox.h \
    classfechamentodepia.h \
    classjanelade2folhas.h \
    classjanelade4folhas.h \
    classmoldura.h \
    classpivobascula.h \
    classpivotantebasc.h \
    classportade1folha.h \
    classportade2folhas.h \
    classportade4folhas.h \
    classportadeabrir.h \
    classvidroscomuns.h \
    dialogareadeprodutos.h \
    dialogareadevendas.h \
    dialogareaorcamentos.h \
    dialogareaorcamentosql.h \
    dialogareaprecos.h \
    dialogboxs.h \
    dialoghelp.h \
    dialogjanelas.h \
    dialoglogin.h \
    dialogpasswords.h \
    dialogportas.h \
    dialogsalvar.h \
    fechamentodepia.h \
    herdabox.h \
    herdajanelas.h \
    herdapivobasc.h \
    herdavidros.h \
    janelade2folhas.h \
    janelade4folhas.h \
    mainwindow.h \
    moldura.h \
    passworddialog.h \
    pdfarea.h \
    pdfgenerator.h \
    pdfobjeto.h \
    pivotante.h \
    portade1folha.h \
    portade2folhas.h \
    portade4folhas.h \
    portadeabrir.h \
    sqlarea.h \
    sqldatabasecontrol.h \
    vidroscomuns.h

FORMS += \
    adicionaisref.ui \
    bascula.ui \
    boxcanto.ui \
    boxfrontal.ui \
    dialogareadeprodutos.ui \
    dialogareadevendas.ui \
    dialogareaorcamentos.ui \
    dialogareaorcamentosql.ui \
    dialogareaprecos.ui \
    dialogboxs.ui \
    dialoghelp.ui \
    dialogjanelas.ui \
    dialoglogin.ui \
    dialogpasswords.ui \
    dialogportas.ui \
    dialogsalvar.ui \
    fechamentodepia.ui \
    help.ui \
    janelade2folhas.ui \
    janelade4folhas.ui \
    mainwindow.ui \
    moldura.ui \
    passworddialog.ui \
    pdfarea.ui \
    pivotante.ui \
    portade1folha.ui \
    portade2folhas.ui \
    portade4folhas.ui \
    portadeabrir.ui \
    sqlarea.ui \
    vidroscomuns.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    files.qrc

DISTFILES += \
    Porta de abrir.jpg
