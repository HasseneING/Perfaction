#include "visite.h"

visite::visite()
{

}

visite::visite(int id,QString matricule,QString compagnie,int code,QDateTime dateDeb,
               QDateTime dateExp,double prix)
{
    this->id=id;
    this->compagnie=compagnie;
    this->matricule=matricule;
    this->code=code;
    this->dateDeb=dateDeb;
    this->dateExp=dateExp;
    this->prix=prix;
}

QSqlQueryModel* visite::afficher()
{
    QSqlQueryModel *model = new QSqlQueryModel;
      model->setQuery("SELECT v.ID,v.MATRICULE,vt.MARQUE,vt.MODELE,v.COMPAGNIE,v.CODE,"
                      "v.DATE_DEB,v.DATE_EXP,v.PRIX FROM visite v INNER JOIN voitures vt "
                      "ON v.MATRICULE=vt.MATRICULE ORDER BY v.ID");
      model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("Matricule"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("Marque"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("Modèle"));
      model->setHeaderData(4, Qt::Horizontal, QObject::tr("Compagnie d'assurance"));
      model->setHeaderData(5, Qt::Horizontal, QObject::tr("Code"));
      model->setHeaderData(6, Qt::Horizontal, QObject::tr("Date début"));
      model->setHeaderData(7, Qt::Horizontal, QObject::tr("Date Expiration"));
      model->setHeaderData(8, Qt::Horizontal, QObject::tr("Prix"));

     return model;
}

QSqlQueryModel* visite::afficher2()
{
    QSqlQueryModel *model = new QSqlQueryModel;
      model->setQuery("SELECT v.ID,v.MATRICULE,vt.MARQUE,vt.MODELE,v.COMPAGNIE,v.CODE,"
                      "v.DATE_DEB,v.DATE_EXP,v.PRIX FROM visite v INNER JOIN voitures vt "
                      "ON v.MATRICULE=vt.MATRICULE ORDER BY v.MATRICULE");
      model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("Matricule"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("Marque"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("Modèle"));
      model->setHeaderData(4, Qt::Horizontal, QObject::tr("Compagnie d'assurance"));
      model->setHeaderData(5, Qt::Horizontal, QObject::tr("Code"));
      model->setHeaderData(6, Qt::Horizontal, QObject::tr("Date début"));
      model->setHeaderData(7, Qt::Horizontal, QObject::tr("Date Expiration"));
      model->setHeaderData(8, Qt::Horizontal, QObject::tr("Prix"));

     return model;
}

QSqlQueryModel* visite::afficher3()
{
    QSqlQueryModel *model = new QSqlQueryModel;
      model->setQuery("SELECT v.ID,v.MATRICULE,vt.MARQUE,vt.MODELE,v.COMPAGNIE,v.CODE,"
                      "v.DATE_DEB,v.DATE_EXP,v.PRIX FROM visite v INNER JOIN voitures vt "
                      "ON v.MATRICULE=vt.MATRICULE ORDER BY v.DATE EXP");
      model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("Matricule"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("Marque"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("Modèle"));
      model->setHeaderData(4, Qt::Horizontal, QObject::tr("Compagnie d'assurance"));
      model->setHeaderData(5, Qt::Horizontal, QObject::tr("Code"));
      model->setHeaderData(6, Qt::Horizontal, QObject::tr("Date début"));
      model->setHeaderData(7, Qt::Horizontal, QObject::tr("Date Expiration"));
      model->setHeaderData(8, Qt::Horizontal, QObject::tr("Prix"));

     return model;
}

QSqlQueryModel* visite::recherche(QString val)
{
    QSqlQueryModel *model = new QSqlQueryModel;
      model->setQuery("SELECT v.ID,v.MATRICULE,vt.MARQUE,vt.MODELE,v.COMPAGNIE,v.CODE,"
                      "v.DATE_DEB,v.DATE_EXP,v.PRIX FROM visite v INNER JOIN voitures vt "
                      "ON v.MATRICULE=vt.MATRICULE WHERE v.ID like '%"+val+"%' or "
                      "upper(v.MATRICULE) like upper('%"+val+"%') or "
                      "upper(vt.MARQUE) like upper('%"+val+"%') or "
                      "upper(vt.MODELE) like upper('%"+val+"%') or "
                      "upper(v.COMPAGNIE) like upper('%"+val+"%') or "
                      "upper(v.CODE) like upper('%"+val+"%')");
      model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("Matricule"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("Marque"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("Modèle"));
      model->setHeaderData(4, Qt::Horizontal, QObject::tr("Compagnie d'assurance"));
      model->setHeaderData(5, Qt::Horizontal, QObject::tr("Code"));
      model->setHeaderData(6, Qt::Horizontal, QObject::tr("Date début"));
      model->setHeaderData(7, Qt::Horizontal, QObject::tr("Date Expiration"));
      model->setHeaderData(8, Qt::Horizontal, QObject::tr("Prix"));

     return model;
}

bool visite::ajouter()
{
    QSqlQuery query;
      QString id2=QString::number(id);
      QString code2=QString::number(code);
      QString prix2=QString::number(prix);

      query.prepare("INSERT INTO visite (ID, MATRICULE,COMPAGNIE,CODE, DATE_DEB,DATE_EXP ,PRIX) "
                    "VALUES (:ID,:MATRICULE,:COMPAGNIE,:CODE,:DATE_DEB,:DATE_EXP ,:PRIX)");
      query.bindValue(":ID",id2);
      query.bindValue(":MATRICULE",matricule);
      query.bindValue(":COMPAGNIE",compagnie);
      query.bindValue(":CODE",code2);
      query.bindValue(":DATE_DEB",dateDeb);
      query.bindValue(":DATE_EXP",dateExp);
      query.bindValue(":PRIX",prix2);

      return query.exec();
}

bool visite::modifier()
{
    QSqlQuery query;
      QString id2=QString::number(id);
      QString code2=QString::number(code);
      QString prix2=QString::number(prix);

      query.prepare("UPDATE visite SET ID=:ID, MATRICULE=:MATRICULE, COMPAGNIE=:COMPAGNIE, "
                    "CODE=:CODE, DATE_DEB=:DATE_DEB, DATE_EXP=:DATE_EXP, PRIX=:PRIX "
                    "WHERE ID=:ID");
      query.bindValue(":ID",id2);
      query.bindValue(":MATRICULE",matricule);
      query.bindValue(":COMPAGNIE",compagnie);
      query.bindValue(":CODE",code2);
      query.bindValue(":DATE_DEB",dateDeb);
      query.bindValue(":DATE_EXP",dateExp);
      query.bindValue(":PRIX",prix2);

      return query.exec();
}
