#include "use_ik.h"
#include <QFile>
#include <QString>
#include <cstring>
#include <QMessageBox>
#include <QDir>
#include <QCheckBox>
#include <QSettings>

int valid_password(QString key){
    int leng = key.size();
    for(int i = 0;i < leng;i++){
        if(key[i] > 'Z' || key[i] < 'A'){
            if(key[i] > 'z' || key[i] < 'a'){
                if(key[i] > '9' || key[i] < '0'){
                    return -1;
                }
            }
        }
    }

    return 0;
}

int name_exist(QString io_id){
    QFile ptr("dat.bin");
    if (ptr.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        while (!ptr.atEnd())
        {
            QByteArray line = ptr.readLine();
            char* iop;
            iop = line.data();
            if(iop[strlen(iop)-1] == '\n'){
                iop[strlen(iop)-1] = '\0';
            }


            if(iop == io_id){
                ptr.close();
                return -1;
            }
        }

        ptr.close();
        return 0;
    }
    else{
        ptr.close();
        return -2;
    }
}

int name_registed(QString _name){
    QByteArray _name_ = _name.toLocal8Bit();
    QByteArray _name_path = _name_.toBase64();
    QString path = "data/";
    path.append(_name_path.data());
    QDir *iol = new QDir;
    return iol->exists(path);
}

QString name_pathbase64(QString _name){
    QString path_base = "data/";
    QByteArray _name_ = _name.toLocal8Bit();
    QByteArray _name_path = _name_.toBase64();
    path_base.append(_name_path.data());
    return path_base;
}

void debug_text(QString iol){
    QMessageBox io;
    io.about(NULL, "debug", iol);
}

void getlook(QString iol){
    QMessageBox io;
    io.about(NULL, "提示", iol);
}
