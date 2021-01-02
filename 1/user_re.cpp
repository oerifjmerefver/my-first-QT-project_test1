#include <QFile>
#include <QString>
#include <cstring>
#include <QMessageBox>
#include <QDir>
#include <QCheckBox>
#include <QSettings>
#include <QMessageBox>
#include <QFileDialog>
#include "user_re.h"
#include "user_get.h"
#include "use_ik.h"
#include "ui_user_re.h"
#include "user_repassword.h"

void user_re::setname(QString name_){
    _name_get = name_;
}

void user_re::headjpg_display(){
    if(QFile::exists(name_pathbase64(_name_get).append("/HEAD.jpg"))){
        ui->user_headjpg->setPixmap(QPixmap(name_pathbase64(_name_get).append("/HEAD.jpg")));
    }
}

int user_re::re_head_jpg(){
    QString rejpg = QFileDialog::getOpenFileName(this,"选择文件","/", "Files(*.jpg)");
    QString name_headjpg_path = name_pathbase64(_name_get).append("/HEAD.jpg");
    if(rejpg != nullptr){
        if(QFile::exists(name_headjpg_path)){
            QFile::remove(name_headjpg_path);
        }
        QFile::copy(rejpg, name_pathbase64(_name_get).append("/HEAD.jpg"));
        ui->user_headjpg->setPixmap(QPixmap(name_headjpg_path));
        return 0;
    }
    else{
        return -1;
    }
}

void user_re::background_display(){
    QString reback = name_pathbase64(_name_get).append("/back.jpg");
    if(QFile::exists(name_pathbase64(_name_get).append("/back.jpg"))){
        ui->user_back->setPixmap(QPixmap(reback));
    }
    else{
        ui->user_back->setPixmap(QPixmap(":/new/prefix1/pictrue/base_background.jpg"));
    }
}

int user_re::re_background(){
    QString rejpg = QFileDialog::getOpenFileName(this,"选择文件","/", "Files(*.jpg)");
    QString name_background_path = name_pathbase64(_name_get).append("/back.jpg");
    if(rejpg != nullptr){
        if(QFile::exists(name_background_path)){
            QFile::remove(name_background_path);
        }
        QFile::copy(rejpg, name_pathbase64(_name_get).append("/back.jpg"));
        ui->user_back->setPixmap(QPixmap(name_background_path));
        return 0;
    }
    else{
        return -1;
    }
}

void user_re::nickname_display(){
    QSettings *name_get = new QSettings(name_pathbase64(_name_get).append("/login.ini"), QSettings::IniFormat);
    QString nickname = name_get->value("[name]").toString();
    if(nickname != nullptr){
        ui->edi_nickname->setText(nickname);
    }
}

void user_re::brief_display(){
    QString path = name_pathbase64(_name_get).append("/brief.dat");
    QFile brief(path);
    if (brief.open(QIODevice::ReadOnly | QIODevice::Text)){
        QByteArray brief_data = brief.readAll();
        ui->edi_brief->setText(brief_data.data());
    }

    brief.close();
}

void user_re::re_nickname(){
    QSettings *name_get = new QSettings(name_pathbase64(_name_get).append("/login.ini"), QSettings::IniFormat);
    name_get->setValue("[name]", ui->edi_nickname->text());
}

void user_re::re_brief(){
    QString path = name_pathbase64(_name_get).append("/brief.dat");
    QFile brief(path);
    brief.open(QIODevice::WriteOnly);
    brief.write(ui->edi_brief->toPlainText().toUtf8());
    brief.close();
}

void user_re::re_user_head(){
    emit setupdate(-1);
}

void user_re::re_user_back(){
    emit setupdate(-2);
}

void user_re::re_user_nick(){
    emit setupdate(-3);
}

void user_re::re_user_brief(){
    emit setupdate(-4);
}

void user_re::outlogin_2(){
    emit setupdate(1);
}

void user_re::get_outlogin(){
    close();
    outlogin_2();
}

void user_re::user_rein(){
    re_key_to = new user_repassword;
    headjpg_display();
    background_display();
    nickname_display();
    brief_display();
    ui->user_name->setText(_name_get);
    ui->user_name->setFocusPolicy(Qt::NoFocus);
    setWindowFlags(windowFlags()& ~Qt::WindowMaximizeButtonHint);
    setFixedSize(this->width(), this->height());
    connect(ui->re_head, &QPushButton::clicked, this, [=](){
        if(re_head_jpg() == 0){
            re_user_head();
        }
    });
    connect(ui->re_back, &QPushButton::clicked, this, [=](){
        if(re_background() == 0){
            re_user_back();
        }
    });
    connect(ui->re_nick, &QPushButton::clicked, this, [=](){
        re_nickname();
        re_user_nick();
    });
    connect(ui->re_brief, &QPushButton::clicked, this, [=](){
        re_brief();
        re_user_brief();
    });
    connect(ui->re_password, &QPushButton::clicked, this, [=](){
        re_key_to->user_name_get(_name_get);
        re_key_to->user_repassword_ui();
        re_key_to->show();
    });
    connect(re_key_to, SIGNAL(setrepassword()), this, SLOT(get_outlogin()));
    connect(ui->outlogin, SIGNAL(clicked()), this, SLOT(get_outlogin()));
}

user_re::user_re(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::user_re)
{
    ui->setupUi(this);
}
user_re::~user_re(){
    delete ui;
    delete re_key_to;
}
