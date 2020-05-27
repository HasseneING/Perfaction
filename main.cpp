//#include "mainwindow.h"
#include "dialog.h"
#include <QApplication>
#include <QMessageBox>
#include "connexion.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   // MainWindow w;
    Dialog w;
    Connexion c;
    w.show();
    bool test=c.ouvrirConnexion();

    if(test)
    {
        w.show();
        //ww.setModal(true);

        /*QMessageBox::critical(nullptr, QObject::tr("database is open"),
                    QObject::tr("connection successful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);*/


    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                    QObject::tr("connection failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
    return a.exec();
}
