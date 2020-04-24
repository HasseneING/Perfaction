#include "offres.h"
#include <QDebug>
#include "connexion.h"
#include "QDateTime"



#include <QSqlQuery>
#include <QVariant>
#include <QDateTime>


offres::offres()
{
    id=0;
    nom="";
    description="";
}


offres::offres(int id,QString nom,QString description,QDateTime datedebut, QDateTime datefin )
{
  this->id=id;
  this->nom=nom;
  this->description= description;
  this->datedebut=datedebut;
  this->datefin=datefin;
}
QString offres::get_nom(){return  nom;}
QString offres::get_description(){return description;}
int offres::get_id(){return  id;}

bool offres::ajouter()
{
QSqlQuery query;
QString res= QString::number(id);
query.prepare("INSERT INTO offres (ID, NOM, DESCRIPTION , DATEDEBUT , DATEFIN) "
                    "VALUES (:id, :nom, :description ,:datedebut ,:datefin )");
query.bindValue(":id", res);
query.bindValue(":nom", nom);
query.bindValue(":description", description);
query.bindValue(":datedebut", datedebut);
query.bindValue(":datefin", datefin);


return    query.exec();
}

QSqlQueryModel * offres::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("select * from offres");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("description"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("datedebut"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("datefin"));

    return model;
}



QSqlQueryModel* offres::RechercherOffres(int id)
{
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("SELECT * FROM offres WHERE id =?;");
    query.addBindValue(id);

    query.exec();
    model->setQuery(query);

    model->setHeaderData(0, Qt::Horizontal , QObject::tr("id"));
    return model;
}

bool offres::OffresisExiste(int id)
{
    int i=0;

    QSqlQuery query;
    query.prepare("SELECT * FROM offres WHERE id=? ;");
    query.addBindValue(id);


    if(query.exec())
    {
        while(query.next())
        {
            i++;
        }
    }

    if(i != 0)
        return true;
    else
        return false;
}


bool offres::supprimer(int id)
{
QSqlQuery query;
QString res= QString::number(id);
query.prepare("Delete from offres where id = :id ");
query.bindValue(":id", res);
return    query.exec();
}


bool offres::Modifier_offres(int id,QString nom ,QString description,QDateTime datedebut, QDateTime datefin)
{
    QSqlQuery query;
    query.prepare("UPDATE offres SET nom  = :nom , description = :description ,  datedebut = :datedebut , datefin = :datefin  WHERE id = :id ");
    query.bindValue(":id", id);
     query.bindValue(":nom", nom);
    query.bindValue(":description", description);
    query.bindValue(":datedebut", datedebut);
    query.bindValue(":datefin", datefin);

    bool result=query.exec();
    return result;
}


QSqlQueryModel* offres::trie_offres(int id )
{
    QSqlQueryModel* model = new QSqlQueryModel();

    if(id == 0)
    {
        model->setQuery("select *FROM offres ORDER BY id ASC");
    }
    else
    {
        model->setQuery("select *FROM offres ORDER BY datedebut ASC ");
    }

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("description"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("datedebut"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("datefin"));


    return model;
}
