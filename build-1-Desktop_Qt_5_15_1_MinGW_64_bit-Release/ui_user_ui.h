/********************************************************************************
** Form generated from reading UI file 'user_ui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_UI_H
#define UI_USER_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_user
{
public:
    QLabel *use_headjpg;
    QLabel *user_name;

    void setupUi(QDialog *user)
    {
        if (user->objectName().isEmpty())
            user->setObjectName(QString::fromUtf8("user"));
        user->resize(617, 440);
        use_headjpg = new QLabel(user);
        use_headjpg->setObjectName(QString::fromUtf8("use_headjpg"));
        use_headjpg->setGeometry(QRect(30, 30, 81, 81));
        use_headjpg->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/pictrue/base.jpg")));
        use_headjpg->setScaledContents(true);
        user_name = new QLabel(user);
        user_name->setObjectName(QString::fromUtf8("user_name"));
        user_name->setGeometry(QRect(130, 60, 161, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        user_name->setFont(font);

        retranslateUi(user);

        QMetaObject::connectSlotsByName(user);
    } // setupUi

    void retranslateUi(QDialog *user)
    {
        user->setWindowTitle(QCoreApplication::translate("user", "Dialog", nullptr));
        use_headjpg->setText(QString());
        user_name->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class user: public Ui_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_UI_H
