#include "test.h"
#include "regist_dialog.h"
#include <QFile>
#include <QString>
#include <cstring>
#include <QMessageBox>
#include <QDir>
#include <QCheckBox>

void regist_dialog::regist_passworddispaly(int state){
    if(state != Qt::Checked){
        regist_edit_password.setEchoMode(QLineEdit::Password);
        regist_edit_repassword.setEchoMode(QLineEdit::Password);
    }
    else{
        regist_edit_password.setEchoMode(QLineEdit::Normal);
        regist_edit_repassword.setEchoMode(QLineEdit::Normal);
    }
}

void regist_dialog::ui_regist(){
    //ui_login_destroy();
    regist_sta_name.setParent(this);
    regist_sta_name.setGeometry(120, 60, 50, 20);
    regist_sta_name.setText(tr("<font size=4> 昵称: </font>"));
    regist_sta_password.setParent(this);
    regist_sta_password.setGeometry(120, 106, 50, 20);
    regist_sta_password.setText(tr("<font size=4> 密码: </font>"));
    regist_sta_repassword.setParent(this);
    regist_sta_repassword.setGeometry(84, 152, 90, 20);
    regist_sta_repassword.setText(tr("<font size=4> 确认密码: </font>"));

    regist_edit_name.setParent(this);
    regist_edit_name.setGeometry(170, 55, 240, 30);
    regist_edit_password.setParent(this);
    regist_edit_password.setGeometry(170, 101, 240, 30);
    regist_edit_repassword.setParent(this);
    regist_edit_repassword.setGeometry(170, 147, 240, 30);
    regist_edit_password.setEchoMode(QLineEdit::Password);
    regist_edit_repassword.setEchoMode(QLineEdit::Password);

    regist_password_dispaly = new QCheckBox(this);
    regist_password_dispaly->setText(tr("是否显示密码"));
    regist_password_dispaly->setGeometry(170, 179, 120, 20);

    regist_but_quit.setParent(this);
    regist_but_quit.setGeometry(170, 209, 80, 24);
    regist_but_quit.setText(tr("退出注册"));
    regist_but_quit.setCursor(QCursor(Qt::PointingHandCursor));
    regist_but.setParent(this);
    regist_but.setGeometry(330, 209, 80, 24);
    regist_but.setText(tr("注册"));
    regist_but.setCursor(QCursor(Qt::PointingHandCursor));

    connect(regist_password_dispaly, SIGNAL(stateChanged(int)), this, SLOT(regist_passworddispaly(int)));
    connect(&regist_but, SIGNAL(clicked()), this, SLOT(regist_savedata()));
    connect(&regist_but_quit, SIGNAL(clicked()), this, SLOT(close()));
}

regist_dialog::regist_dialog(QWidget *parent):
    QDialog(parent){
        this->setWindowTitle(tr("注册"));

        this->setWindowIcon(QIcon(":/new/prefix1/icon/2.ico"));

        QPalette pal(this->palette());
        pal.setColor(QPalette::Background, Qt::white);
        this->setAutoFillBackground(true);
        this->setPalette(pal);
        this->resize(560, 540);


        setFixedSize(this->width(), this->height());

        ui_regist();
}

regist_dialog::~regist_dialog(){

}
