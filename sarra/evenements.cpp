#include "evenements.h"
#include <QVariant>
#include <QSqlQuery>


evenements::evenements()
{
    id=0;
    nom="";
    lieu="";
}

evenements::evenements(int id,QString nom ,QString lieu, QDateTime datedebut ,QDateTime datefin)
{
    this->id=id;
    this->nom=nom;
    this->lieu=lieu;
    this->datedebut=datedebut;
    this->datefin=datefin;
}


bool evenements::ajouter()
{
    QSqlQuery query;
    query.prepare("INSERT INTO evenements (ID , NOM , LIEU , DATEDEBUT , DATEFIN )"
                   "VALUES (:id, :nom , :lieu , :datedebut ,:datefin )");
    query.bindValue(":id", id);
    query.bindValue(":nom", nom);
    query.bindValue(":lieu", lieu);
    query.bindValue(":datedebut",datedebut);
    query.bindValue(":datefin",datefin);

       return query.exec();
}

QSqlQueryModel* evenements::afficher()
{
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT * FROM evenements");
    model->setHeaderData(0, Qt::Horizontal,QObject::tr("id"));
    model->setHeaderData(1, Qt::Horizontal,QObject::tr("nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("lieu"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("datedebut"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("datefin"));
    return model;

}

QSqlQueryModel* evenements::trie_evenements(int id )
{
    QSqlQueryModel* model = new QSqlQueryModel();

    if(id == 0)
    {
        model->setQuery("select *FROM evenements ORDER BY id ASC");
    }
    else
    {
        model->setQuery("select *FROM evenements ORDER BY datedebut ASC ");
    }

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("lieu"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("datedebut"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("datefin"));


    return model;
}

QSqlQueryModel* evenements::RechercherEvenements(int id)
{
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("SELECT * FROM evenements WHERE id =?;");
    query.addBindValue(id);

    query.exec();
    model->setQuery(query);

    model->setHeaderData(0, Qt::Horizontal , QObject::tr("id"));
    return model;
}

bool evenements::EvenementsisExiste(int id)
{
    int i=0;

    QSqlQuery query;
    query.prepare("SELECT * FROM evenements WHERE id=? ;");
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

bool evenements::supprimer(int id)
{
QSqlQuery query;
QString res= QString::number(id);
query.prepare("Delete from evenements where id = :id ");
query.bindValue(":id", res);
return    query.exec();
}


bool evenements::Modifier_evenements(int id,QString nom ,QString lieu,QDateTime datedebut, QDateTime datefin)
{
    QSqlQuery query;
    query.prepare("UPDATE evenements SET nom  = :nom , lieu = :lieu ,  datedebut = :datedebut , datefin = :datefin  WHERE id = :id ");
    query.bindValue(":id", id);
     query.bindValue(":nom", nom);
    query.bindValue(":lieu", lieu);
    query.bindValue(":datedebut", datedebut);
    query.bindValue(":datefin", datefin);

    bool result=query.exec();
    return result;
}

   // QString res = QString::number(id);


