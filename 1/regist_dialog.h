#ifndef REGIST_DIALOG_H
#define REGIST_DIALOG_H


#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QDialog>
#include <QCheckBox>

class regist_dialog:public QDialog{

    Q_OBJECT

public:
    //注册界面
    void ui_regist();
    //注册界面
    //保存信息
    void save_data();
    //保存信息

    regist_dialog(QWidget *parent = nullptr);
    ~regist_dialog();
public slots:
    //注册
    void regist_savedata();
    //注册
    //密码显示
    void regist_passworddispaly(int state);
    //密码显示
private:
    //注册界面
    QLabel regist_sta_name;
    QLabel regist_sta_password;
    QLabel regist_sta_repassword;
    QLineEdit regist_edit_name;
    QLineEdit regist_edit_password;
    QLineEdit regist_edit_repassword;
    QPushButton regist_but_quit;
    QPushButton regist_but;
    QCheckBox *regist_password_dispaly;

    int io_id;
};

#endif // REGIST_DIALOG_H
