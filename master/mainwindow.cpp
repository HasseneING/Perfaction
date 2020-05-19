#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_dialog.h"
#include <dialog.h>
#include "QMessageBox"
#include "QDebug"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    setFixedSize(1900,1000);
    ui->setupUi(this);
    QPixmap bkgnd("C:/Users/souso/Desktop/reentcar/assets/start.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
    ui->lineEdit->setPlaceholderText("Login ou adresse e_mail");
    ui->lineEdit_2->setPlaceholderText("mot de passe");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_41_clicked()
{
    Dialog d;

    QString email = ui->lineEdit->text(), pass = ui->lineEdit_2->text();
    if(email != "")
    {
        if(pass == "")
        {
            QMessageBox::critical(nullptr,QObject::tr("Login."),QObject::tr("Le champs du mot de passe est vide !\n"));
            ui->lineEdit->setText("");
        }
        else
        {
            QString id;
            QSqlQuery query;
            query.prepare("SELECT id from compte where login = '"+email+"'");
            query.exec();
            while (query.next()) {
                id = query.value(0).toString();
            }
            if(id != "")
            {
                QString id1;
                QSqlQuery query1;
                query1.prepare("SELECT id from compte where login = '"+email+"' AND mdp = '"+pass+"'");
                query1.exec();
                while (query1.next()) {
                    id1 = query1.value(0).toString();
                }
                if(id1 != "")
                {
                    QString role;
                    QSqlQuery query11;
                    query11.prepare("SELECT role from compte where login = '"+email+"' AND mdp = '"+pass+"'");
                    query11.exec();
                    while (query11.next()) {
                        role = query11.value(0).toString();
                    }
                    close();
                    d.test(role);
                    d.exec();
                }
                else
                {
                    QMessageBox::critical(nullptr,QObject::tr("Login."),QObject::tr("Le mot de passe est incorrecte, \nEssayez une autre fois !\n"));
                    ui->lineEdit_2->setText("");
                }
            }
            else
            {
                QMessageBox::critical(nullptr,QObject::tr("Login."),QObject::tr("Cet E mail n'existe pas !\n"));
                ui->lineEdit->setText("");
                ui->lineEdit_2->setText("");
            }
        }
    }
    else
    {
        if(pass == "")
            QMessageBox::critical(nullptr,QObject::tr("Login."),QObject::tr("Les champs du mot de passe et du E mail \nsont vides !\n"));
        else
            QMessageBox::critical(nullptr,QObject::tr("Login."),QObject::tr("Le champs de l E mail est vide !\n"));
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
    }
}
