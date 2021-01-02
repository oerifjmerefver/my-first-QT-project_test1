#include "test.h"
#include "use_ik.h"
#include <QFile>
#include <QString>
#include <cstring>
#include <QMessageBox>
#include <QDir>
#include <QCryptographicHash>
#include <QtCore/QCoreApplication>
#include <QSettings>


void test::login_id_config(){
    QString _id = login_edit_id.text();
    QSettings *_id_config = new QSettings("login.ini", QSettings::IniFormat);
    _id_config->setValue("[User id]", _id);
    delete _id_config;
}

void test::ui_login(){
    login_sta_id.setParent(this);
    login_sta_id.setGeometry(100, 60, 70, 20);
    login_sta_id.setText(tr("<font size=4> 用户名: </font>"));
    login_sta_password.setParent(this);
    login_sta_password.setGeometry(120, 106, 50, 20);
    login_sta_password.setText(tr("<font size=4> 密码: </font>"));

    login_edit_id.setParent(this);
    login_edit_id.setGeometry(170, 55, 240, 30);
    login_edit_password.setParent(this);
    login_edit_password.setGeometry(170, 101, 240, 30);
    login_edit_password.setEchoMode(QLineEdit::Password);

    login_but_login.setParent(this);
    login_but_login.setGeometry(170, 140, 50, 24);
    login_but_login.setText(tr("登录"));
    login_but_login.setCursor(QCursor(Qt::PointingHandCursor));
    login_but_regist.setParent(this);
    login_but_regist.setGeometry(360, 140, 50, 24);
    login_but_regist.setText(tr("注册"));
    login_but_regist.setCursor(QCursor(Qt::PointingHandCursor));

    login_id_find_config = 0;

    QDir *id_dir = new QDir;
    if(!id_dir->exists(tr("data"))){
        id_dir->mkdir("data");
    }

    QFile data("dat.bin");
    data.open(QIODevice::WriteOnly|QIODevice::Append);
    data.close();
}

int test::login_id_get(){
    QString id_data = login_edit_id.text();
    QByteArray _name_ = id_data.toLocal8Bit();
    QByteArray _name_path = _name_.toBase64();
    QString path = "data/";
    path.append(_name_path.data());
    QDir *iol = new QDir(path);
    return iol->exists(path);
}

int test::login_save(){
    if(!login_id_get()){
        QString id_data = login_edit_id.text();
        QString password_data = login_edit_password.text();


        QByteArray _name_ = id_data.toLocal8Bit();
        QByteArray _name_path = _name_.toBase64();
        QString path = "data/";
        path.append(_name_path.data());
        path.append("/key.dat");

        QFile iol(path);
        if (iol.open(QIODevice::ReadOnly | QIODevice::Text)){
            QByteArray password_get = iol.readLine();
            if(QCryptographicHash::hash(password_data.toLatin1(),QCryptographicHash::Md5).toHex() == password_get){
                QMessageBox suc;
                suc.about(NULL, "提示", "登录成功!");
                iol.close();
                return 0;
            }
            else{
                QMessageBox fail;
                fail.about(NULL, "提示", "密码错误!");
                iol.close();
                return -1;
            }
        }
        iol.close();
    }
    QMessageBox id_fail;
    id_fail.about(NULL, "提示", "用户不存在!");
    return 1;
}
