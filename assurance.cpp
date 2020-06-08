#include "assurance.h"

assurance::assurance()
{

}

assurance::assurance(int id,QString matricule,int nPolice,QString type,QDateTime dateDeb,
                     QDateTime dateFin,double prix,int courante)
{
    this->id=id;
    this->matricule=matricule;
    this->nPolice=nPolice;
    this->type=type;
    this->dateDeb=dateDeb;
    this->dateFin=dateFin;
    this->prix=prix;
    this->courante=courante;
}

QSqlQueryModel* assurance::afficher()
{
    QSqlQueryModel *model = new QSqlQueryModel;
      model->setQuery("SELECT a.ID,a.MATRICULE,v.MARQUE,v.MODELE,a.N_POLICE,a.TYPE,"
                      "a.DATE_DEB,a.DATE_FIN,a.PRIX,a.courante FROM assurances a INNER JOIN voitures v "
                      "ON a.MATRICULE=v.MATRICULE order by a.ID");
      model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("Matricule"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("Marque"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("Modèle"));
      model->setHeaderData(4, Qt::Horizontal, QObject::tr("N° de police"));
      model->setHeaderData(5, Qt::Horizontal, QObject::tr("Type"));
      model->setHeaderData(6, Qt::Horizontal, QObject::tr("Date début"));
      model->setHeaderData(7, Qt::Horizontal, QObject::tr("Date Fin"));
      model->setHeaderData(8, Qt::Horizontal, QObject::tr("Prix"));
      model->setHeaderData(9, Qt::Horizontal, QObject::tr("Courante"));


     return model;
}

QSqlQueryModel* assurance::afficher2()
{
    QSqlQueryModel *model = new QSqlQueryModel;
      model->setQuery("SELECT a.ID,a.MATRICULE,v.MARQUE,v.MODELE,a.N_POLICE,a.TYPE,"
                      "a.DATE_DEB,a.DATE_FIN,a.PRIX,a.courante FROM assurances a INNER JOIN voitures v "
                      "ON a.MATRICULE=v.MATRICULE order by a.MATRICULE");
      model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("Matricule"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("Marque"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("Modèle"));
      model->setHeaderData(4, Qt::Horizontal, QObject::tr("N° de police"));
      model->setHeaderData(5, Qt::Horizontal, QObject::tr("Type"));
      model->setHeaderData(6, Qt::Horizontal, QObject::tr("Date début"));
      model->setHeaderData(7, Qt::Horizontal, QObject::tr("Date Fin"));
      model->setHeaderData(8, Qt::Horizontal, QObject::tr("Prix"));
      model->setHeaderData(9, Qt::Horizontal, QObject::tr("Courante"));


     return model;
}

QSqlQueryModel* assurance::afficher3()
{
    QSqlQueryModel *model = new QSqlQueryModel;
      model->setQuery("SELECT a.ID,a.MATRICULE,v.MARQUE,v.MODELE,a.N_POLICE,a.TYPE,"
                      "a.DATE_DEB,a.DATE_FIN,a.PRIX,a.courante FROM assurances a INNER JOIN voitures v "
                      "ON a.MATRICULE=v.MATRICULE order by a.N_POLICE");
      model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("Matricule"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("Marque"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("Modèle"));
      model->setHeaderData(4, Qt::Horizontal, QObject::tr("N° de police"));
      model->setHeaderData(5, Qt::Horizontal, QObject::tr("Type"));
      model->setHeaderData(6, Qt::Horizontal, QObject::tr("Date début"));
      model->setHeaderData(7, Qt::Horizontal, QObject::tr("Date Fin"));
      model->setHeaderData(8, Qt::Horizontal, QObject::tr("Prix"));
      model->setHeaderData(9, Qt::Horizontal, QObject::tr("Courante"));


     return model;
}

QSqlQueryModel* assurance::afficher4()
{
    QSqlQueryModel *model = new QSqlQueryModel;
      model->setQuery("SELECT a.ID,a.MATRICULE,v.MARQUE,v.MODELE,a.N_POLICE,a.TYPE,"
                      "a.DATE_DEB,a.DATE_FIN,a.PRIX,a.courante FROM assurances a INNER JOIN voitures v "
                      "ON a.MATRICULE=v.MATRICULE order by a.DATE_FIN");
      model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("Matricule"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("Marque"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("Modèle"));
      model->setHeaderData(4, Qt::Horizontal, QObject::tr("N° de police"));
      model->setHeaderData(5, Qt::Horizontal, QObject::tr("Type"));
      model->setHeaderData(6, Qt::Horizontal, QObject::tr("Date début"));
      model->setHeaderData(7, Qt::Horizontal, QObject::tr("Date Fin"));
      model->setHeaderData(8, Qt::Horizontal, QObject::tr("Prix"));
      model->setHeaderData(9, Qt::Horizontal, QObject::tr("Courante"));


     return model;
}

QSqlQueryModel* assurance::recherche(QString val)
{
    QSqlQueryModel *model = new QSqlQueryModel;
      model->setQuery("SELECT a.ID,a.MATRICULE,v.MARQUE,v.MODELE,a.N_POLICE,a.TYPE,"
                      "a.DATE_DEB,a.DATE_FIN,a.PRIX,a.courante FROM assurances a INNER JOIN voitures v "
                      "ON a.MATRICULE=v.MATRICULE WHERE a.ID like '%"+val+"%' or "
                      "upper(a.MATRICULE) like upper('%"+val+"%') or "
                      "upper(v.MARQUE) like upper('%"+val+"%') or "
                      "upper(v.MODELE) like upper('%"+val+"%') or "
                      "upper(a.N_POLICE) like upper('%"+val+"%') or "
                      "upper(a.TYPE) like upper('%"+val+"%')");
      model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("Matricule"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("Marque"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("Modèle"));
      model->setHeaderData(4, Qt::Horizontal, QObject::tr("N° de police"));
      model->setHeaderData(5, Qt::Horizontal, QObject::tr("Type"));
      model->setHeaderData(6, Qt::Horizontal, QObject::tr("Date début"));
      model->setHeaderData(7, Qt::Horizontal, QObject::tr("Date Fin"));
      model->setHeaderData(8, Qt::Horizontal, QObject::tr("Prix"));
      model->setHeaderData(9, Qt::Horizontal, QObject::tr("Courante"));


     return model;
}

bool assurance::ajouter()
{
    QSqlQuery query;
      QString id2=QString::number(id);
      QString nPolice2=QString::number(nPolice);
      QString prix2=QString::number(prix);

      query.prepare("INSERT INTO assurances (ID,MATRICULE,N_POLICE,TYPE,DATE_DEB,DATE_FIN,PRIX,COURANTE) "
                    "VALUES (:ID,:MATRICULE,:N_POLICE,:TYPE,:DATE_DEB,:DATE_FIN ,:PRIX ,:COURANTE)");
      query.bindValue(":ID",id2);
      query.bindValue(":MATRICULE",matricule);
      query.bindValue(":N_POLICE",nPolice2);
      query.bindValue(":TYPE",type);
      query.bindValue(":DATE_DEB",dateDeb);
      query.bindValue(":DATE_FIN",dateFin);
      query.bindValue(":PRIX",prix2);
      query.bindValue(":COURANTE",courante);


      return query.exec();
}


bool assurance::modifier()
{
    QSqlQuery query;
      QString id2=QString::number(id);
      QString nPolice2=QString::number(nPolice);
      QString prix2=QString::number(prix);

      query.prepare("UPDATE assurances SET ID=:ID, MATRICULE=:MATRICULE, N_POLICE=:N_POLICE, "
                    "TYPE=:TYPE, DATE_DEB=:DATE_DEB, DATE_FIN=:DATE_FIN, PRIX=:PRIX"
                    "WHERE ID=:ID");
      query.bindValue(":ID",id2);
      query.bindValue(":MATRICULE",matricule);
      query.bindValue(":N_POLICE",nPolice2);
      query.bindValue(":TYPE",type);
      query.bindValue(":DATE_DEB",dateDeb);
      query.bindValue(":DATE_FIN",dateFin);
      query.bindValue(":PRIX",prix2);

      return query.exec();
}
