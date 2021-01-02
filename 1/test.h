#ifndef TEST_H
#define TEST_H

#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QDialog>
#include "regist_dialog.h"
#include "user_get.h"

class test : public QMainWindow
{
    Q_OBJECT

public:
    //登陆界面
    void ui_login();
    //登陆界面
    //登录检验
    int login_id_get();//检验是否存在该学生
    //登录检验
    //登录信息
    void login_id_config();
    //登录信息
    test(QWidget *parent = nullptr);
    ~test();
public slots:
    //登录检验
    int login_save();
    //登录检验

private slots:
    void show_out();

private:
    //登陆界面
    QLabel login_sta_id;
    QLabel login_sta_password;
    QLineEdit login_edit_id;
    QLineEdit login_edit_password;
    QPushButton login_but_login;
    QPushButton login_but_regist;

    regist_dialog reg;

    user_ui *use;

    int login_id_find_config;
};

#endif // TEST_H
