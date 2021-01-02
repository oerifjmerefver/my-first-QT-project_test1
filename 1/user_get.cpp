#include "user_get.h"
#include "use_ik.h"
#include "user_re.h"
#include "ui_user_window.h"
#include <QFile>
#include <QString>
#include <cstring>
#include <QMessageBox>
#include <QDir>
#include <QCheckBox>
#include <QSettings>
#include <QMessageBox>
#include <QFileDialog>


user_ui::user_ui(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::user_ui)
{
    ui->setupUi(this);
}

user_ui::~user_ui(){
    delete ui;
}


void user_ui::id_did(QString _id){
    _name_get = _id;
    QSettings *name_get = new QSettings(name_pathbase64(_name_get).append("/login.ini"), QSettings::IniFormat);
    if(name_get->value("[name]").toString() != nullptr){
        ui->user_name->setText(name_get->value("[name]").toString());
    }
    else{
        ui->user_name->setText(_name_get);
    }
}

void user_ui::get_id(){
    QString da_ = "ID:";
    QSettings *id_get = new QSettings(name_pathbase64(_name_get).append("/login.ini"), QSettings::IniFormat);
    da_.append(id_get->value("[id]").toString());
    ui->user_id->setText(da_);
}

void user_ui::headjpg_display(){
    if(QFile::exists(name_pathbase64(_name_get).append("/HEAD.jpg"))){
        ui->user_headjpg->setPixmap(QPixmap(name_pathbase64(_name_get).append("/HEAD.jpg")));
    }
}


void user_ui::background_display(){
    QString sheet_base = "#user_ui {\n"
                         "	border-image: url(";
    QPalette pal;
    if(QFile::exists(name_pathbase64(_name_get).append("/back.jpg"))){
        sheet_base.append(name_pathbase64(_name_get).append("/back.jpg"));
        sheet_base.append(");\n"
                          "}");
        this->setStyleSheet(sheet_base);
    }
    else{
        this->setStyleSheet(QString::fromUtf8("#user_ui {\n"
        "	border-image: url(:/new/prefix1/pictrue/base_background.jpg);\n"
        "}"));
    }
}

void user_ui::brief_display(){
    QString path = name_pathbase64(_name_get).append("/brief.dat");
    QFile brief(path);
    if (brief.open(QIODevice::ReadOnly | QIODevice::Text)){
        QByteArray brief_data = brief.readAll();
        ui->user_brief->setText(brief_data.data());
        ui->user_brief->setFocusPolicy(Qt::NoFocus);
    }

    brief.close();
}

void user_ui::reload_head_jpg(){
    QString name_headjpg_path = name_pathbase64(_name_get).append("/HEAD.jpg");
    ui->user_headjpg->setPixmap(QPixmap(name_headjpg_path));
}

void user_ui::reload_background(){
    QString name_background_path = name_pathbase64(_name_get).append("/back.jpg");
    QString sheet_base = "#user_ui {\n"
                         "	border-image: url(";
    sheet_base.append(name_background_path);
    sheet_base.append(");\n"
                      "}");
    this->setStyleSheet(sheet_base);
}

void user_ui::outlogin(){
    emit setoutlogin();
}

void user_ui::get_re_user(int ctl){
    if(ctl == -1){
        reload_head_jpg();
    }

    if(ctl == -2){
        reload_background();
    }

    if(ctl == -3){
        id_did(_name_get);
    }

    if(ctl == -4){
        brief_display();
    }

    if(ctl == 1){
        close();
        outlogin();
    }
}

void user_ui::user_ui_make(QString _id_){
    rein = new user_re;
    id_did(_id_);
    get_id();
    headjpg_display();
    background_display();
    brief_display();
    ui->user_setting->setIconSize(QSize(32, 32));
    setWindowFlags(windowFlags()& ~Qt::WindowMaximizeButtonHint);
    setFixedSize(this->width(), this->height());
    connect(ui->user_setting, &QPushButton::clicked, this,  [=](){
        rein->setname(_name_get);
        rein->user_rein();
        rein->show();
    });

    connect(rein, SIGNAL(setupdate(int)), this, SLOT(get_re_user(int)));

}
