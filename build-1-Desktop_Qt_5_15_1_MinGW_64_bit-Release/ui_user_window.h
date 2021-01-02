/********************************************************************************
** Form generated from reading UI file 'user_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_WINDOW_H
#define UI_USER_WINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_user_ui
{
public:
    QWidget *centralwidget;
    QLabel *user_headjpg;
    QLabel *user_name;
    QLabel *user_id;
    QPushButton *user_setting;
    QTextEdit *user_brief;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *user_ui)
    {
        if (user_ui->objectName().isEmpty())
            user_ui->setObjectName(QString::fromUtf8("user_ui"));
        user_ui->setEnabled(true);
        user_ui->resize(1200, 675);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(user_ui->sizePolicy().hasHeightForWidth());
        user_ui->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        user_ui->setPalette(palette);
        user_ui->setCursor(QCursor(Qt::ArrowCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/icon/2.ico"), QSize(), QIcon::Normal, QIcon::Off);
        user_ui->setWindowIcon(icon);
        user_ui->setStyleSheet(QString::fromUtf8("#user_ui {\n"
"	border-image: url(:/new/prefix1/pictrue/base_background.jpg);\n"
"}"));
        user_ui->setAnimated(false);
        centralwidget = new QWidget(user_ui);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        user_headjpg = new QLabel(centralwidget);
        user_headjpg->setObjectName(QString::fromUtf8("user_headjpg"));
        user_headjpg->setEnabled(true);
        user_headjpg->setGeometry(QRect(20, 10, 140, 140));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(user_headjpg->sizePolicy().hasHeightForWidth());
        user_headjpg->setSizePolicy(sizePolicy1);
        user_headjpg->setFrameShape(QFrame::Box);
        user_headjpg->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/pictrue/base.jpg")));
        user_headjpg->setScaledContents(true);
        user_name = new QLabel(centralwidget);
        user_name->setObjectName(QString::fromUtf8("user_name"));
        user_name->setGeometry(QRect(170, 10, 320, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        user_name->setFont(font);
        user_name->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        user_id = new QLabel(centralwidget);
        user_id->setObjectName(QString::fromUtf8("user_id"));
        user_id->setGeometry(QRect(170, 50, 320, 20));
        user_id->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        user_setting = new QPushButton(centralwidget);
        user_setting->setObjectName(QString::fromUtf8("user_setting"));
        user_setting->setGeometry(QRect(1160, 0, 41, 41));
        user_setting->setCursor(QCursor(Qt::PointingHandCursor));
        user_setting->setToolTipDuration(-1);
        user_setting->setStyleSheet(QString::fromUtf8("background:transparent;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/icon/set.ico"), QSize(), QIcon::Normal, QIcon::Off);
        user_setting->setIcon(icon1);
        user_setting->setCheckable(true);
        user_setting->setChecked(false);
        user_setting->setAutoRepeat(false);
        user_setting->setAutoExclusive(false);
        user_setting->setFlat(true);
        user_brief = new QTextEdit(centralwidget);
        user_brief->setObjectName(QString::fromUtf8("user_brief"));
        user_brief->setGeometry(QRect(170, 80, 320, 70));
        user_brief->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background: transparent;"));
        user_brief->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        user_brief->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        user_brief->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        user_ui->setCentralWidget(centralwidget);
        menubar = new QMenuBar(user_ui);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 26));
        user_ui->setMenuBar(menubar);
        statusbar = new QStatusBar(user_ui);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        user_ui->setStatusBar(statusbar);

        retranslateUi(user_ui);

        QMetaObject::connectSlotsByName(user_ui);
    } // setupUi

    void retranslateUi(QMainWindow *user_ui)
    {
        user_ui->setWindowTitle(QCoreApplication::translate("user_ui", "\347\224\250\346\210\267\347\225\214\351\235\242", nullptr));
        user_headjpg->setText(QString());
        user_name->setText(QCoreApplication::translate("user_ui", "User's name", nullptr));
        user_id->setText(QCoreApplication::translate("user_ui", "User's id", nullptr));
        user_setting->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class user_ui: public Ui_user_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_WINDOW_H
