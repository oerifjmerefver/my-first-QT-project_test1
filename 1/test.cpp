#include "test.h"
#include "user_get.h"
#include "regist_dialog.h"
#include <QDialog>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QTextCodec>
#include <QMessageBox>
#include <QFile>
#include <Windows.h>
#include <QtCore/QtCore>
#include <QDebug>
#include <QSettings>

void test::show_out(){
    show();
}


test::test(QWidget *parent):
    QMainWindow(parent){

        this->setWindowTitle(tr("test_项目"));

        this->setWindowIcon(QIcon(":/new/prefix1/icon/2.ico"));

        QPalette pal(this->palette());
        pal.setColor(QPalette::Background, Qt::white);
        this->setAutoFillBackground(true);
        this->setPalette(pal);
        this->resize(560, 540);

        this->setWindowFlags(this->windowFlags() &~ Qt::WindowMaximizeButtonHint);
        setFixedSize(this->width(), this->height());


        use = new user_ui;

        ui_login();

        connect(&login_but_login, &QPushButton::clicked, this, [=](){
            if(login_save() == 0){
                QString id_i = login_edit_id.text();
                close();
                use->user_ui_make(id_i);
                use->show();
            }

        });
        connect(&login_but_regist, &QPushButton::clicked, this,  [=](){
            reg.show();
        });
        connect(use, SIGNAL(setoutlogin()), this, SLOT(show_out()));
    }
test::~test()
{
    delete use;
}
