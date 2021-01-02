#ifndef USE_IK_H
#define USE_IK_H

#include <QFile>
#include <QString>
#include <cstring>
#include <QMessageBox>
#include <QDir>
#include <QCryptographicHash>
#include <QRandomGenerator>
#include <QTime>

int valid_password(QString key);
int name_exist(QString io_id);
int name_registed(QString _name);
QString name_pathbase64(QString _name);

void debug_text(QString iol);
void getlook(QString iol);

#endif // USE_IK_H
