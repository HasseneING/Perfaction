#include "ordinateur.h"
#include <QSqlQuery>
#include <QVariant>
#include <QDebug>

ordinateur::ordinateur()
{
    this->MAC="00:00:00:00:00:00";

}
ordinateur::ordinateur(QString MAC,QString CPU,QString GPU,QString RAM,QString Desc)
{
    this->MAC=MAC;
    this->CPU=CPU;
    this->GPU=GPU;
    this->RAM=RAM;
    this->desc=Desc;

}
void ordinateur::setMAC(QString M){
    this->MAC=M;
}
void ordinateur::setCPU(QString C){
    this->CPU=C;
}
void ordinateur::setGPU(QString G){
    this->GPU=G;
}
void ordinateur::setRAM(QString R){
    this->RAM=R;
}
void ordinateur::setDesc(QString d){
    this->desc=d;
}

bool ordinateur::ajouterOrd(){

    QSqlQuery query;
    query.prepare("INSERT INTO ORDINATEUR (MAC, CPU, GPU, RAM, DESCRIP) "
                  "VALUES (:MAC, :CPU, :GPU, :RAM, :desc)");
    query.bindValue(":MAC",MAC);
    query.bindValue(":CPU",CPU);
    query.bindValue(":GPU",GPU);
    query.bindValue(":RAM",RAM);
    query.bindValue(":desc",desc);
    return query.exec();
}




QSqlQueryModel* ordinateur::AfficherOrd(QString var){

QSqlQueryModel* model = new QSqlQueryModel;
QString Quer="SELECT * FROM ORDINATEUR ORDER BY "+var+"";
qDebug()<<Quer;
model->setQuery(Quer);
  model->setHeaderData(0, Qt::Horizontal, QObject::tr("MAC"));
  model->setHeaderData(1, Qt::Horizontal, QObject::tr("CPU"));
  model->setHeaderData(2, Qt::Horizontal, QObject::tr("GPU"));
  model->setHeaderData(3, Qt::Horizontal, QObject::tr("RAM"));
  return model;
}

QSqlQueryModel* ordinateur::SearchOrd(QString mac)
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("SELECT * FROM ORDINATEUR where UPPER(MAC) like UPPER('%"+mac+"%') OR CPU like UPPER('%"+mac+"%') OR UPPER(GPU) like UPPER('%"+mac+"%') OR UPPER(RAM) like UPPER('%"+mac+"%') OR UPPER(DESCRIP) like UPPER('%"+mac+"%')  ");


      model->setHeaderData(0, Qt::Horizontal, QObject::tr("MAC"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("CPU"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("GPU"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("RAM"));
      return model;
}

bool ordinateur::SupprimerOrd(QString mac)
{
    QSqlQuery query;
    query.prepare("Delete from ORDINATEUR where MAC= :mac");
    query.bindValue(":mac",mac);
    return  query.exec();

}

bool ordinateur::ModifierOrd()
{
    QSqlQuery query;
    query.prepare("UPDATE ORDINATEUR SET MAC=:M, CPU=:CPU, GPU=:GPU, RAM=:RAM, DESCRIP=:desc where MAC=:M");
    query.bindValue(":M",MAC);
    query.bindValue(":CPU",CPU);
    query.bindValue(":GPU",GPU);
    query.bindValue(":RAM",RAM);
    query.bindValue(":desc",desc);
    return query.exec();
}
