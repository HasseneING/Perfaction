#include "vignette.h"

vignette::vignette()
{

}

vignette::vignette(int code,QString matricule,QDateTime dateDeb,QDateTime dateExp,double prix)
{
    this->code=code;
    this->matricule=matricule;
    this->dateDeb=dateDeb;
    this->dateExp=dateExp;
    this->prix=prix;
}



QSqlQueryModel* vignette::afficher()
{
    QSqlQueryModel *model = new QSqlQueryModel;
      model->setQuery("SELECT v.CODE,v.MATRICULE,vt.MARQUE,vt.MODELE,v.DATE_DEB,"
                      "v.DATE_EXP,v.PRIX FROM vignette v INNER JOIN voitures vt "
                      "ON v.MATRICULE=vt.MATRICULE ORDER BY v.CODE");
      model->setHeaderData(0, Qt::Horizontal, QObject::tr("Code"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("Matricule"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("Marque"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("Modèle"));
      model->setHeaderData(4, Qt::Horizontal, QObject::tr("Date début"));
      model->setHeaderData(5, Qt::Horizontal, QObject::tr("Date Expiration"));
      model->setHeaderData(6, Qt::Horizontal, QObject::tr("Prix"));

     return model;
}

QSqlQueryModel* vignette::afficher2()
{
    QSqlQueryModel *model = new QSqlQueryModel;
      model->setQuery("SELECT v.CODE,v.MATRICULE,vt.MARQUE,vt.MODELE,v.DATE_DEB,"
                      "v.DATE_EXP,v.PRIX FROM vignette v INNER JOIN voitures vt "
                      "ON v.MATRICULE=vt.MATRICULE ORDER BY v.MATRICULE");
      model->setHeaderData(0, Qt::Horizontal, QObject::tr("Code"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("Matricule"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("Marque"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("Modèle"));
      model->setHeaderData(4, Qt::Horizontal, QObject::tr("Date début"));
      model->setHeaderData(5, Qt::Horizontal, QObject::tr("Date Expiration"));
      model->setHeaderData(6, Qt::Horizontal, QObject::tr("Prix"));

     return model;
}

QSqlQueryModel* vignette::afficher3()
{
    QSqlQueryModel *model = new QSqlQueryModel;
      model->setQuery("SELECT v.CODE,v.MATRICULE,vt.MARQUE,vt.MODELE,v.DATE_DEB,"
                      "v.DATE_EXP,v.PRIX FROM vignette v INNER JOIN voitures vt "
                      "ON v.MATRICULE=vt.MATRICULE ORDER BY v.DATE_EXP");
      model->setHeaderData(0, Qt::Horizontal, QObject::tr("Code"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("Matricule"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("Marque"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("Modèle"));
      model->setHeaderData(4, Qt::Horizontal, QObject::tr("Date début"));
      model->setHeaderData(5, Qt::Horizontal, QObject::tr("Date Expiration"));
      model->setHeaderData(6, Qt::Horizontal, QObject::tr("Prix"));

     return model;
}

QSqlQueryModel* vignette::recherche(QString val)
{
    QSqlQueryModel *model = new QSqlQueryModel;
      model->setQuery("SELECT v.CODE,v.MATRICULE,vt.MARQUE,vt.MODELE,v.DATE_DEB,"
                      "v.DATE_EXP,v.PRIX FROM vignette v INNER JOIN voitures vt "
                      "ON v.MATRICULE=vt.MATRICULE WHERE v.CODE like '%"+val+"%' or "
                      "upper(v.MATRICULE) like upper('%"+val+"%') or "
                      "upper(vt.MARQUE) like upper('%"+val+"%') or "
                      "upper(vt.MODELE) like upper('%"+val+"%')");
      model->setHeaderData(0, Qt::Horizontal, QObject::tr("Code"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("Matricule"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("Marque"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("Modèle"));
      model->setHeaderData(4, Qt::Horizontal, QObject::tr("Date début"));
      model->setHeaderData(5, Qt::Horizontal, QObject::tr("Date Expiration"));
      model->setHeaderData(6, Qt::Horizontal, QObject::tr("Prix"));

     return model;
}


bool vignette::ajouter()
{
    QSqlQuery query;
      QString code2=QString::number(code);
      QString prix2=QString::number(prix);

      query.prepare("INSERT INTO vignette (CODE, MATRICULE, DATE_DEB,DATE_EXP ,PRIX) "
                    "VALUES (:CODE,:MATRICULE,:DATE_DEB,:DATE_EXP ,:PRIX)");
      query.bindValue(":CODE",code2);
      query.bindValue(":MATRICULE",matricule);
      query.bindValue(":DATE_DEB",dateDeb);
      query.bindValue(":DATE_EXP",dateExp);
      query.bindValue(":PRIX",prix2);

      return query.exec();
}



bool vignette::modifier()
{
    QSqlQuery query;
      QString code2=QString::number(code);
      QString prix2=QString::number(prix);

      query.prepare("UPDATE vignette SET CODE=:CODE, MATRICULE=:MATRICULE, DATE_DEB=:DATE_DEB, "
                    "DATE_EXP=:DATE_EXP, PRIX=:PRIX WHERE CODE=:CODE");
      query.bindValue(":CODE",code2);
      query.bindValue(":MATRICULE",matricule);
      query.bindValue(":DATE_DEB",dateDeb);
      query.bindValue(":DATE_EXP",dateExp);
      query.bindValue(":PRIX",prix2);

      return query.exec();
}
