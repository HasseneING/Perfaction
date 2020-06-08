#include <QDebug>

#include "client.h"

client::client()
{

}
client::client(int i,QString e ,QString a,int t)
{
    this->idc=i;
    this->adresse=a;
    this->tel=t;
    this->email=e;
}

QString client::get_adresse(){return  adresse;}
QString client::get_email(){return email;}
int client::get_id(){return  idc;}
int client::get_tel(){return  tel;}

bool client::ajouter()
{
    QSqlQuery query;
    query.prepare("INSERT INTO clients (IDC, ADRESSE, EMAIL, TEL, IDF) "
                  "VALUES (:id, :adresse, :email, :tel, NULL)");
    query.bindValue(":id", idc);
    query.bindValue(":email", email);
    query.bindValue(":tel", tel);
    query.bindValue(":adresse", adresse);

    return    query.exec();
}

bool client::supprimer(int id)
{
    QSqlQuery query;

    query.prepare("DELETE FROM CLIENTS WHERE IDC = :id ");
    query.bindValue(":id", id);

    return    query.exec();
}

QSqlQueryModel * client::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select * from CLIENTS");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("ADRESSE"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("EMAIL"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("TELEPHOE"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("IDF"));
    return model;
}

bool client::modifier(int i,QString e ,QString a,int t)
{
    QSqlQuery query;
    query.prepare("update clients set  ADRESSE = :a, EMAIL= :e , TEL= :t WHERE IDC = :id") ;
    query.bindValue(":id", i);
    query.bindValue(":a", a);
    query.bindValue(":e", e);
    query.bindValue(":t", t);
    return    query.exec();
}













