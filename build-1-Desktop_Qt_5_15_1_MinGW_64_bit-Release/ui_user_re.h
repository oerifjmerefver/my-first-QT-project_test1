/********************************************************************************
** Form generated from reading UI file 'user_re.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_RE_H
#define UI_USER_RE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_user_re
{
public:
    QWidget *centralwidget;
    QLabel *sta_head_jpg;
    QLabel *user_headjpg;
    QLabel *sta_back;
    QLabel *user_back;
    QPushButton *re_head;
    QPushButton *re_back;
    QLabel *label;
    QLineEdit *user_name;
    QLabel *label_2;
    QLineEdit *edi_nickname;
    QPushButton *re_nick;
    QLabel *label_3;
    QTextEdit *edi_brief;
    QPushButton *re_brief;
    QLabel *label_4;
    QPushButton *re_password;
    QPushButton *outlogin;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *user_re)
    {
        if (user_re->objectName().isEmpty())
            user_re->setObjectName(QString::fromUtf8("user_re"));
        user_re->resize(410, 640);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/icon/set.ico"), QSize(), QIcon::Normal, QIcon::Off);
        user_re->setWindowIcon(icon);
        centralwidget = new QWidget(user_re);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        sta_head_jpg = new QLabel(centralwidget);
        sta_head_jpg->setObjectName(QString::fromUtf8("sta_head_jpg"));
        sta_head_jpg->setGeometry(QRect(10, 40, 41, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(10);
        sta_head_jpg->setFont(font);
        user_headjpg = new QLabel(centralwidget);
        user_headjpg->setObjectName(QString::fromUtf8("user_headjpg"));
        user_headjpg->setGeometry(QRect(70, 10, 81, 81));
        user_headjpg->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/pictrue/base.jpg")));
        user_headjpg->setScaledContents(true);
        sta_back = new QLabel(centralwidget);
        sta_back->setObjectName(QString::fromUtf8("sta_back"));
        sta_back->setGeometry(QRect(10, 170, 41, 20));
        sta_back->setFont(font);
        user_back = new QLabel(centralwidget);
        user_back->setObjectName(QString::fromUtf8("user_back"));
        user_back->setGeometry(QRect(70, 110, 240, 135));
        user_back->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/pictrue/base_background.jpg")));
        user_back->setScaledContents(true);
        re_head = new QPushButton(centralwidget);
        re_head->setObjectName(QString::fromUtf8("re_head"));
        re_head->setGeometry(QRect(160, 40, 81, 28));
        QFont font1;
        font1.setUnderline(true);
        re_head->setFont(font1);
        re_head->setCursor(QCursor(Qt::PointingHandCursor));
        re_head->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color: rgb(0, 0, 255);"));
        re_head->setFlat(true);
        re_back = new QPushButton(centralwidget);
        re_back->setObjectName(QString::fromUtf8("re_back"));
        re_back->setGeometry(QRect(320, 160, 81, 28));
        re_back->setFont(font1);
        re_back->setCursor(QCursor(Qt::PointingHandCursor));
        re_back->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color: rgb(0, 0, 255);"));
        re_back->setFlat(true);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 260, 60, 20));
        label->setFont(font);
        user_name = new QLineEdit(centralwidget);
        user_name->setObjectName(QString::fromUtf8("user_name"));
        user_name->setGeometry(QRect(70, 260, 240, 25));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 310, 40, 20));
        label_2->setFont(font);
        edi_nickname = new QLineEdit(centralwidget);
        edi_nickname->setObjectName(QString::fromUtf8("edi_nickname"));
        edi_nickname->setGeometry(QRect(70, 310, 240, 25));
        re_nick = new QPushButton(centralwidget);
        re_nick->setObjectName(QString::fromUtf8("re_nick"));
        re_nick->setGeometry(QRect(320, 310, 81, 28));
        re_nick->setFont(font1);
        re_nick->setCursor(QCursor(Qt::PointingHandCursor));
        re_nick->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color: rgb(0, 0, 255);"));
        re_nick->setFlat(true);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 360, 40, 20));
        label_3->setFont(font);
        edi_brief = new QTextEdit(centralwidget);
        edi_brief->setObjectName(QString::fromUtf8("edi_brief"));
        edi_brief->setGeometry(QRect(70, 360, 241, 121));
        re_brief = new QPushButton(centralwidget);
        re_brief->setObjectName(QString::fromUtf8("re_brief"));
        re_brief->setGeometry(QRect(330, 360, 40, 28));
        re_brief->setFont(font1);
        re_brief->setCursor(QCursor(Qt::PointingHandCursor));
        re_brief->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color: rgb(0, 0, 255);"));
        re_brief->setFlat(true);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 500, 40, 20));
        label_4->setFont(font);
        re_password = new QPushButton(centralwidget);
        re_password->setObjectName(QString::fromUtf8("re_password"));
        re_password->setGeometry(QRect(60, 500, 81, 28));
        re_password->setFont(font1);
        re_password->setCursor(QCursor(Qt::PointingHandCursor));
        re_password->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color: rgb(0, 0, 255);"));
        re_password->setFlat(true);
        outlogin = new QPushButton(centralwidget);
        outlogin->setObjectName(QString::fromUtf8("outlogin"));
        outlogin->setGeometry(QRect(160, 550, 90, 30));
        outlogin->setFont(font);
        user_re->setCentralWidget(centralwidget);
        menubar = new QMenuBar(user_re);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 410, 26));
        user_re->setMenuBar(menubar);
        statusbar = new QStatusBar(user_re);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        user_re->setStatusBar(statusbar);

        retranslateUi(user_re);

        QMetaObject::connectSlotsByName(user_re);
    } // setupUi

    void retranslateUi(QMainWindow *user_re)
    {
        user_re->setWindowTitle(QCoreApplication::translate("user_re", "\344\277\256\346\224\271\347\224\250\346\210\267\344\277\241\346\201\257", nullptr));
        sta_head_jpg->setText(QCoreApplication::translate("user_re", "\345\244\264\345\203\217", nullptr));
        user_headjpg->setText(QString());
        sta_back->setText(QCoreApplication::translate("user_re", "\345\260\201\351\235\242", nullptr));
        user_back->setText(QString());
        re_head->setText(QCoreApplication::translate("user_re", "\344\277\256\346\224\271\345\244\264\345\203\217", nullptr));
        re_back->setText(QCoreApplication::translate("user_re", "\344\277\256\346\224\271\345\260\201\351\235\242", nullptr));
        label->setText(QCoreApplication::translate("user_re", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("user_re", "\346\230\265\347\247\260", nullptr));
        re_nick->setText(QCoreApplication::translate("user_re", "\344\277\256\346\224\271\346\230\265\347\247\260", nullptr));
        label_3->setText(QCoreApplication::translate("user_re", "\347\256\200\344\273\213", nullptr));
        re_brief->setText(QCoreApplication::translate("user_re", "\344\277\235\345\255\230", nullptr));
        label_4->setText(QCoreApplication::translate("user_re", "\345\257\206\347\240\201", nullptr));
        re_password->setText(QCoreApplication::translate("user_re", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        outlogin->setText(QCoreApplication::translate("user_re", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class user_re: public Ui_user_re {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_RE_H
