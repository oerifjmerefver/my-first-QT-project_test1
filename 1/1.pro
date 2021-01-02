QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    login_judge.cpp \
    main.cpp \
    regist_data.cpp \
    regist_dialog.cpp \
    test.cpp \
    use_ik.cpp \
    user_get.cpp \
    user_re.cpp \
    user_repassword.cpp

HEADERS += \
    regist_dialog.h \
    test.h \
    use_ik.h \
    user_get.h \
    user_re.h \
    user_repassword.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

FORMS += \
    user_re.ui \
    user_repassword.ui \
    user_window.ui

RESOURCES += \
    resource.qrc
