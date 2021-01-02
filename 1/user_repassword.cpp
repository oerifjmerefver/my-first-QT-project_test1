#include "user_repassword.h"
#include "ui_user_repassword.h"
#include "use_ik.h"
#include <QFile>
#include <QString>
#include <cstring>
#include <QMessageBox>
#include <QDir>
#include <QCheckBox>
#include <QSettings>
#include <QMessageBox>
#include <QFileDialog>

void user_repassword::repassword_look(int state){
    if(state != Qt::Checked){
        ui->rekey->setEchoMode(QLineEdit::Password);
        ui->re_rekey->setEchoMode(QLineEdit::Password);
    }
    else{
        ui->rekey->setEchoMode(QLineEdit::Normal);
        ui->re_rekey->setEchoMode(QLineEdit::Normal);
    }
}

void user_repassword::user_name_get(QString name){
    _name_get = name;
}

void user_repassword::repassword(){
    QString key = ui->rekey->text();
    QString key_re = ui->re_rekey->text();
    if(key == NULL){
        getlook("密码不能为空!");
    }
    else if(valid_password(key) == -1 || key.size() > 18){
        getlook("密码必须要由26位大小写字母和0~9数字组成，不得含有特殊字符，且不得超过十八位");
    }
    else if(key != key_re){
        getlook("前后两次输入密码不一致!");
    }
    else{
        QFile path(name_pathbase64(_name_get).append("/key.dat"));
        path.open(QIODevice::WriteOnly);
        path.write(QCryptographicHash::hash(key.toLatin1(),QCryptographicHash::Md5).toHex());
        path.close();
        getlook("密码修改成功，请重新登录!");
        close();
        set_outlogin_1();
    }
}

void user_repassword::set_outlogin_1(){
    emit setrepassword();
}

void user_repassword::user_repassword_ui(){
    setWindowFlags(windowFlags()& ~Qt::WindowMaximizeButtonHint);
    setFixedSize(this->width(), this->height());
    connect(ui->rekey_look, SIGNAL(stateChanged(int)), this, SLOT(repassword_look(int)));
    connect(ui->rekey_no, SIGNAL(clicked()), this, SLOT(close()));
    connect(ui->rekey_yes, SIGNAL(clicked()), this, SLOT(repassword()));
}

user_repassword::user_repassword(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::user_repassword)
{
    ui->setupUi(this);
}

user_repassword::~user_repassword(){
    delete ui;
}
