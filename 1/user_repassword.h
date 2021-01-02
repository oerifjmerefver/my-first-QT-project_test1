#ifndef USER_REPASSWORD_H
#define USER_REPASSWORD_H

#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QDialog>
#include <QCheckBox>

QT_BEGIN_NAMESPACE
namespace Ui { class user_repassword; }
QT_END_NAMESPACE

class user_repassword:public QMainWindow{

    Q_OBJECT

public:
    void user_name_get(QString name);
    void user_repassword_ui();
    user_repassword(QWidget *parent = nullptr);
    ~user_repassword();

public slots:
    void repassword();
    void set_outlogin_1();
    void repassword_look(int state);

signals:
    void setrepassword(bool tct = false);

private:
    Ui::user_repassword *ui;
    QString _name_get;
};


#endif // USER_REPASSWORD_H
