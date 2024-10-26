QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    BrightWindow.cpp \
    DialogCircleDraw.cpp \
    DialogCutIntoPieces.cpp \
    DialogDrawRectWithDiag.cpp \
    DialogInfoImg.cpp \
    DialogInfoProgram.cpp \
    Image_PNG.cpp \
    main.cpp \
    mainwindow.cpp \
    window_rgba_filter.cpp

HEADERS += \
    BrightWindow.h \
    DialogCircleDraw.h \
    DialogCutIntoPieces.h \
    DialogDrawRectWithDiag.h \
    DialogInfoImg.h \
    DialogInfoProgram.h \
    Image_PNG.h \
    mainwindow.h \
    window_rgba_filter.h

FORMS += \
    bright_window.ui \
    dialog_circle_draw.ui \
    dialog_draw_rect_with_diag.ui \
    dialog_info_img.ui \
    dialog_info_program.ui \
    mainwindow.ui \
    w_cut_into_pieces.ui \
    window_rgba_filter.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

unix:!macx: LIBS += -L$$PWD/../../../../../../usr/lib/x86_64-linux-gnu/ -lpng

INCLUDEPATH += $$PWD/../../../../../../usr/lib/x86_64-linux-gnu
DEPENDPATH += $$PWD/../../../../../../usr/lib/x86_64-linux-gnu

unix:!macx: PRE_TARGETDEPS += $$PWD/../../../../../../usr/lib/x86_64-linux-gnu/libpng.a

RESOURCES += \
    resourse.qrc

DISTFILES += \
    Image/icon_1.png \
    Image/icon_2.png \
    Image/icon_3.jpeg \
    Image/icon_4.png \
    Image/one_piece.png
