/********************************************************************************
** Form generated from reading UI file 'user_repassword.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_REPASSWORD_H
#define UI_USER_REPASSWORD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_user_repassword
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *rekey;
    QLineEdit *re_rekey;
    QCheckBox *rekey_look;
    QPushButton *rekey_yes;
    QPushButton *rekey_no;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *user_repassword)
    {
        if (user_repassword->objectName().isEmpty())
            user_repassword->setObjectName(QString::fromUtf8("user_repassword"));
        user_repassword->resize(292, 197);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/icon/set.ico"), QSize(), QIcon::Normal, QIcon::Off);
        user_repassword->setWindowIcon(icon);
        centralwidget = new QWidget(user_repassword);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 60, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(10);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 60, 80, 20));
        label_2->setFont(font);
        rekey = new QLineEdit(centralwidget);
        rekey->setObjectName(QString::fromUtf8("rekey"));
        rekey->setGeometry(QRect(90, 20, 180, 25));
        rekey->setEchoMode(QLineEdit::Password);
        re_rekey = new QLineEdit(centralwidget);
        re_rekey->setObjectName(QString::fromUtf8("re_rekey"));
        re_rekey->setGeometry(QRect(90, 60, 180, 25));
        re_rekey->setEchoMode(QLineEdit::Password);
        rekey_look = new QCheckBox(centralwidget);
        rekey_look->setObjectName(QString::fromUtf8("rekey_look"));
        rekey_look->setGeometry(QRect(90, 90, 120, 20));
        rekey_yes = new QPushButton(centralwidget);
        rekey_yes->setObjectName(QString::fromUtf8("rekey_yes"));
        rekey_yes->setGeometry(QRect(90, 120, 48, 24));
        rekey_no = new QPushButton(centralwidget);
        rekey_no->setObjectName(QString::fromUtf8("rekey_no"));
        rekey_no->setGeometry(QRect(220, 120, 48, 24));
        user_repassword->setCentralWidget(centralwidget);
        menubar = new QMenuBar(user_repassword);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 292, 26));
        user_repassword->setMenuBar(menubar);
        statusbar = new QStatusBar(user_repassword);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        user_repassword->setStatusBar(statusbar);

        retranslateUi(user_repassword);

        QMetaObject::connectSlotsByName(user_repassword);
    } // setupUi

    void retranslateUi(QMainWindow *user_repassword)
    {
        user_repassword->setWindowTitle(QCoreApplication::translate("user_repassword", "\351\207\215\346\226\260\350\256\276\347\275\256\345\257\206\347\240\201", nullptr));
        label->setText(QCoreApplication::translate("user_repassword", "\346\226\260\345\257\206\347\240\201", nullptr));
        label_2->setText(QCoreApplication::translate("user_repassword", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        rekey_look->setText(QCoreApplication::translate("user_repassword", "\346\230\257\345\220\246\346\230\276\347\244\272\345\257\206\347\240\201", nullptr));
        rekey_yes->setText(QCoreApplication::translate("user_repassword", "\347\241\256\345\256\232", nullptr));
        rekey_no->setText(QCoreApplication::translate("user_repassword", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class user_repassword: public Ui_user_repassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_REPASSWORD_H
