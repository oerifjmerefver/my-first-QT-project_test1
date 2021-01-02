#ifndef USER_RE_H
#define USER_RE_H

#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QDialog>
#include <QCheckBox>
#include "user_repassword.h"

QT_BEGIN_NAMESPACE
namespace Ui { class user_re; }
QT_END_NAMESPACE

class user_re:public QMainWindow{

    Q_OBJECT

public:
    //设置
    void setname(QString name_);
    //显示头像
    void headjpg_display();
    //显示背景
    void background_display();
    //显示昵称
    void nickname_display();
    //显示简介
    void brief_display();

    //打包
    void user_rein();

    user_re(QWidget *parent = nullptr);
    ~user_re();
public slots:
    //修改头像
    int re_head_jpg();
    //修改封面
    int re_background();
    //修改昵称
    void re_nickname();
    //修改简介
    void re_brief();
    //传递更新头像
    void re_user_head();
    //传递更新背景
    void re_user_back();
    //传递更新昵称
    void re_user_nick();
    //传递更新简介
    void re_user_brief();
    //传递更新退出
    void outlogin_2();

signals:
    void setupdate(int ctl);

private slots:
    void get_outlogin();

private:
    Ui::user_re *ui;
    user_repassword *re_key_to;
    QString _name_get;
};

#endif // USER_RE_H
