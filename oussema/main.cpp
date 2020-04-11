#include "mainwindow.h"
#include "connexion.h"
#include <QApplication>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Connexion c;
    QMessageBox msgBox;

    if(c.ouvrir())
    {
        msgBox.information(nullptr,QObject::tr("database is open"),QObject::tr("connection successful.\n"));
        w.show();
        return a.exec();
    }
    else
    {
        msgBox.critical(nullptr,QObject::tr("can't open database !"),QObject::tr("connection failed !\n"));
        c.fermer();
    }
    return 0;
}
