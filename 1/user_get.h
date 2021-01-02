#ifndef USER_GET_H
#define USER_GET_H

#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QDialog>
#include <QCheckBox>
#include "user_re.h"


QT_BEGIN_NAMESPACE
namespace Ui { class user_ui; }
QT_END_NAMESPACE

class user_ui:public QMainWindow{

    Q_OBJECT

public:
    //获得登录账号的用户名
    void id_did(QString _id);
    //获得并显示账号的id
    void get_id();
    //将上述函数打包在一起
    void user_ui_make(QString _id_);
    //显示头像
    void headjpg_display();
    //显示背景
    void background_display();
    //显示简介
    void brief_display();

    //修改头像
    void reload_head_jpg();
    //修改封面
    void reload_background();

    user_ui(QWidget *parent = nullptr);
    ~user_ui();
signals:
    void setoutlogin();
public slots:
    void outlogin();

private slots:
    void get_re_user(int ctl);

private:
    Ui::user_ui *ui;
    user_re *rein;
    QString _name_get;
};

#endif // USER_GET_H
