#include "regist_dialog.h"
#include "use_ik.h"
#include <QFile>
#include <QString>
#include <cstring>
#include <QMessageBox>
#include <QDir>
#include <QCryptographicHash>
#include <QRandomGenerator>
#include <QTime>
#include <QtCore/QCoreApplication>
#include <QSettings>

void regist_dialog::save_data(){
    QString _id;
    while(1 > 0){
        io_id = 200000 + QRandomGenerator::global()->bounded(100000);
        _id = QString::number(io_id);
        if(name_exist(_id) == 0){
            break;
        }
    }

    QString _id_ = _id;

    QString _name = regist_edit_name.text();
    QString _password = regist_edit_password.text().toUtf8();

    QString path_base = "data/";
    QByteArray _name_ = _name.toLocal8Bit();
    QByteArray _name_path = _name_.toBase64();
    path_base.append(_name_path.data());

    QDir *dir = new QDir;
    dir->mkdir(path_base);

    QString path_id = "dat.bin";
    QFile name_dat(path_id);
    name_dat.open(QIODevice::WriteOnly|QIODevice::Append);
    _id.append('\n');
    name_dat.write(_id.toUtf8());
    name_dat.close();

    QString path_key = path_base + "/key.dat";
    QFile password(path_key);
    password.open(QIODevice::WriteOnly);
    password.write(QCryptographicHash::hash(_password.toLatin1(),QCryptographicHash::Md5).toHex());
    password.close();

    QString path_idcon = path_base + "/login.ini";
    QFile _idcon(path_idcon);
    _idcon.open(QIODevice::WriteOnly);
    _idcon.close();
    QSettings *_id_config = new QSettings(path_idcon, QSettings::IniFormat);
    _id_config->setValue("[id]", _id_);
    delete _id_config;
}

void regist_dialog::regist_savedata(){
    QString _name = regist_edit_name.text();
    QString _password = regist_edit_password.text();
    QString _repassword = regist_edit_repassword.text();

    if(_name == nullptr){
        QMessageBox name_null_error;
        name_null_error.about(NULL, "提示", "昵称不能为空!");
    }
    else{
        if(name_registed(_name)){
            QMessageBox name_same_error;
            name_same_error.about(NULL, "提示", "昵称重复!");
        }
        else{
            if(_name.size() > 18){
                QMessageBox name_valid_error;
                name_valid_error.about(NULL, "提示", "昵称字符数不得超过18!");
            }
            else{
                if(_password == nullptr){
                    QMessageBox password_null_error;
                    password_null_error.about(NULL, "提示", "密码不能为空!");
                }
                else{
                    if(valid_password(_password) == -1 || _password.size() > 18){
                        QMessageBox password_valid_error;
                        password_valid_error.about(NULL, "提示", "密码必须要由26位大小写字母和0~9数字组成，不得含有特殊字符，且不得超过十八位");
                    }
                    else{
                        if(_repassword == nullptr){
                            QMessageBox repassword_null_error;
                            repassword_null_error.about(NULL, "提示", "请重新输入密码!");
                        }
                        else{
                            if(_password != _repassword){
                                QMessageBox repassword_eq_error;
                                repassword_eq_error.about(NULL, "提示", "前后两次输入密码不一致!");
                            }
                            else{
                                save_data();
                                QMessageBox regist_success;
                                regist_success.about(NULL, "提示", "注册成功");
                            }
                        }
                    }
                }
            }
        }
    }
}
