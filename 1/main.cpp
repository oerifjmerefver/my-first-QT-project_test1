#include "test.h"

#include <QApplication>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    test w;
    w.show();
    return a.exec();
}
