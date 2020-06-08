#include "reservation.h"

reservation::reservation()
{

}
reservation::reservation(double idRes, QString matricule,double idClient,QDateTime dateDep,
                         QDateTime dateAr,double totalHT,double totalTTC,double remise,
                         double totalG,int etat)
{
    this->idRes=idRes;
    this->matricule=matricule;
    this->idClient=idClient;
    this->dateDep=dateDep;
    this->dateAr=dateAr;
    this->totalHT=totalHT;
    this->totalTTC=totalTTC;
    this->remise=remise;
    this->totalG=totalG;
    this->etat=etat;
}

QSqlQueryModel* reservation::afficher()
{
    QSqlQueryModel *model = new QSqlQueryModel;
      model->setQuery("SELECT r.ID_RES,r.IDCLIENT,r.MATRICULE,v.MARQUE,v.MODELE,"
                      "r.DATE_DEPART,r.DATE_ARRIVEE,r.MONTANT_HT,r.TOTAL_TTC,r.REMISE,"
                      "r.TOTAL_G FROM Reservation r INNER JOIN voitures v "
                      "on r.MATRICULE=v.MATRICULE Where r.ETAT=0 order by r.ID_RES");
      model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("ID Client"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("Matricule"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("Marque"));
      model->setHeaderData(4, Qt::Horizontal, QObject::tr("Modèle"));
      model->setHeaderData(5, Qt::Horizontal, QObject::tr("Date départ"));
      model->setHeaderData(6, Qt::Horizontal, QObject::tr("Date arrivée"));
      model->setHeaderData(7, Qt::Horizontal, QObject::tr("Total HT"));
      model->setHeaderData(8, Qt::Horizontal, QObject::tr("Total TTC"));
      model->setHeaderData(9, Qt::Horizontal, QObject::tr("Remise"));
      model->setHeaderData(10, Qt::Horizontal, QObject::tr("Total G"));

     return model;
}

QSqlQueryModel* reservation::afficher2()
{
    QSqlQueryModel *model = new QSqlQueryModel;
      model->setQuery("SELECT r.ID_RES,r.IDCLIENT,r.MATRICULE,v.MARQUE,v.MODELE,"
                      "r.DATE_DEPART,r.DATE_ARRIVEE,r.MONTANT_HT,r.TOTAL_TTC,r.REMISE,"
                      "r.TOTAL_G FROM Reservation r INNER JOIN voitures v "
                      "on r.MATRICULE=v.MATRICULE Where r.ETAT=0 order by r.IDCLIENT");
      model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("ID Client"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("Matricule"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("Marque"));
      model->setHeaderData(4, Qt::Horizontal, QObject::tr("Modèle"));
      model->setHeaderData(5, Qt::Horizontal, QObject::tr("Date départ"));
      model->setHeaderData(6, Qt::Horizontal, QObject::tr("Date arrivée"));
      model->setHeaderData(7, Qt::Horizontal, QObject::tr("Total HT"));
      model->setHeaderData(8, Qt::Horizontal, QObject::tr("Total TTC"));
      model->setHeaderData(9, Qt::Horizontal, QObject::tr("Remise"));
      model->setHeaderData(10, Qt::Horizontal, QObject::tr("Total G"));

     return model;
}

QSqlQueryModel* reservation::afficher3()
{
    QSqlQueryModel *model = new QSqlQueryModel;
      model->setQuery("SELECT r.ID_RES,r.IDCLIENT,r.MATRICULE,v.MARQUE,v.MODELE,"
                      "r.DATE_DEPART,r.DATE_ARRIVEE,r.MONTANT_HT,r.TOTAL_TTC,r.REMISE,"
                      "r.TOTAL_G FROM Reservation r INNER JOIN voitures v "
                      "on r.MATRICULE=v.MATRICULE Where r.ETAT=0 order by r.MATRICULE");
      model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("ID Client"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("Matricule"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("Marque"));
      model->setHeaderData(4, Qt::Horizontal, QObject::tr("Modèle"));
      model->setHeaderData(5, Qt::Horizontal, QObject::tr("Date départ"));
      model->setHeaderData(6, Qt::Horizontal, QObject::tr("Date arrivée"));
      model->setHeaderData(7, Qt::Horizontal, QObject::tr("Total HT"));
      model->setHeaderData(8, Qt::Horizontal, QObject::tr("Total TTC"));
      model->setHeaderData(9, Qt::Horizontal, QObject::tr("Remise"));
      model->setHeaderData(10, Qt::Horizontal, QObject::tr("Total G"));

     return model;
}

QSqlQueryModel* reservation::afficher4()
{
    QSqlQueryModel *model = new QSqlQueryModel;
      model->setQuery("SELECT r.ID_RES,r.IDCLIENT,r.MATRICULE,v.MARQUE,v.MODELE,"
                      "r.DATE_DEPART,r.DATE_ARRIVEE,r.MONTANT_HT,r.TOTAL_TTC,r.REMISE,"
                      "r.TOTAL_G FROM Reservation r INNER JOIN voitures v "
                      "on r.MATRICULE=v.MATRICULE Where r.ETAT=0 order by r.DATE_DEPART");
      model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("ID Client"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("Matricule"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("Marque"));
      model->setHeaderData(4, Qt::Horizontal, QObject::tr("Modèle"));
      model->setHeaderData(5, Qt::Horizontal, QObject::tr("Date départ"));
      model->setHeaderData(6, Qt::Horizontal, QObject::tr("Date arrivée"));
      model->setHeaderData(7, Qt::Horizontal, QObject::tr("Total HT"));
      model->setHeaderData(8, Qt::Horizontal, QObject::tr("Total TTC"));
      model->setHeaderData(9, Qt::Horizontal, QObject::tr("Remise"));
      model->setHeaderData(10, Qt::Horizontal, QObject::tr("Total G"));

     return model;
}

QSqlQueryModel* reservation::history()
{
    QSqlQueryModel *model = new QSqlQueryModel;
      model->setQuery("SELECT r.ID_RES,r.IDCLIENT,r.MATRICULE,v.MARQUE,v.MODELE,"
                      "r.DATE_DEPART,r.DATE_ARRIVEE,r.MONTANT_HT,r.TOTAL_TTC,r.REMISE,"
                      "r.TOTAL_G FROM Reservation r INNER JOIN voitures v "
                      "on r.MATRICULE=v.MATRICULE Where r.ETAT=1 order by r.ID_RES");
      model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("ID Client"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("Matricule"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("Marque"));
      model->setHeaderData(4, Qt::Horizontal, QObject::tr("Modèle"));
      model->setHeaderData(5, Qt::Horizontal, QObject::tr("Date départ"));
      model->setHeaderData(6, Qt::Horizontal, QObject::tr("Date arrivée"));
      model->setHeaderData(7, Qt::Horizontal, QObject::tr("Total HT"));
      model->setHeaderData(8, Qt::Horizontal, QObject::tr("Total TTC"));
      model->setHeaderData(9, Qt::Horizontal, QObject::tr("Remise"));
      model->setHeaderData(10, Qt::Horizontal, QObject::tr("Total G"));

     return model;
}

QSqlQueryModel * reservation::rechercher(QString ch)
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("SELECT r.ID_RES,r.IDCLIENT,r.MATRICULE,v.MARQUE,v.MODELE,"
                    "r.DATE_DEPART,r.DATE_ARRIVEE,r.MONTANT_HT,r.TOTAL_TTC,r.REMISE,"
                    "r.TOTAL_G FROM Reservation r INNER JOIN voitures v "
                    "on r.MATRICULE=v.MATRICULE WHERE "
                    "( UPPER(r.ID_RES) LIKE UPPER('%"+ch+"%') "
                    "OR UPPER(r.IDCLIENT) LIKE UPPER('%"+ch+"%') "
                    "OR UPPER(r.MATRICULE) LIKE UPPER('%"+ch+"%') "
                    "OR UPPER(v.MARQUE) LIKE UPPER('%"+ch+"%') "
                    "OR UPPER(v.MODELE) LIKE UPPER('%"+ch+"%') )");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("ID Client"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Matricule"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Marque"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Modèle"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Date départ"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Date arrivée"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("Total HT"));
    model->setHeaderData(8, Qt::Horizontal, QObject::tr("Total TTC"));
    model->setHeaderData(9, Qt::Horizontal, QObject::tr("Remise"));
    model->setHeaderData(10, Qt::Horizontal, QObject::tr("Total G"));

    return model;
}

bool reservation::ajouter()
{
    QSqlQuery query;
      QString VidClient=QString::number(idClient);
      QString VtotalHT=QString::number(totalHT);
      QString VtotalTTC=QString::number(totalTTC);
      QString Vremise=QString::number(remise);
      QString VtotalG=QString::number(totalG);
      QString Vetat=QString::number(etat);

      query.prepare("INSERT INTO RESERVATION (ID_RES, MATRICULE, IDCLIENT,DATE_DEPART ,DATE_ARRIVEE ,"
                    "MONTANT_HT ,TOTAL_TTC ,REMISE ,TOTAL_G ,ETAT ) "
                    "VALUES (seq_res.nextval,:MATRICULE,:IDCLIENT,:DATE_DEPART ,:DATE_ARRIVEE,:MONTANT_HT ,"
                    ":TOTAL_TTC ,:REMISE ,:TOTAL_G ,:ETAT )");
      query.bindValue(":MATRICULE",matricule);
      query.bindValue(":IDCLIENT",VidClient);
      query.bindValue(":DATE_DEPART",dateDep);
      query.bindValue(":DATE_ARRIVEE",dateAr);
      query.bindValue(":MONTANT_HT",VtotalHT);
      query.bindValue(":TOTAL_TTC",VtotalTTC);
      query.bindValue(":REMISE",Vremise);
      query.bindValue(":TOTAL_G",VtotalG);
      query.bindValue(":ETAT",Vetat);

      return query.exec();
}

bool reservation::modifier_reservation()
{
    QSqlQuery query;
    QString VidRes=QString::number(idRes);
    QString VidClient=QString::number(idClient);
    QString VtotalHT=QString::number(totalHT);
    QString VtotalTTC=QString::number(totalTTC);
    QString Vremise=QString::number(remise);
    QString VtotalG=QString::number(totalG);
    QString Vetat=QString::number(etat);

      query.prepare("UPDATE RESERVATION SET ID_RES=:ID_RES, MATRICULE=:MATRICULE, IDCLIENT=:IDCLIENT, "
                    "DATE_DEPART=:DATE_DEPART, DATE_ARRIVEE=:DATE_ARRIVEE, MONTANT_HT=:MONTANT_HT, "
                    "TOTAL_TTC=:TOTAL_TTC, REMISE=:REMISE, TOTAL_G=:TOTAL_G, ETAT=:ETAT "
                    "WHERE ID_RES=:ID_RES");
      query.bindValue(":ID_RES",VidRes);
      query.bindValue(":MATRICULE",matricule);
      query.bindValue(":IDCLIENT",VidClient);
      query.bindValue(":DATE_DEPART",dateDep);
      query.bindValue(":DATE_ARRIVEE",dateAr);
      query.bindValue(":MONTANT_HT",VtotalHT);
      query.bindValue(":TOTAL_TTC",VtotalTTC);
      query.bindValue(":REMISE",Vremise);
      query.bindValue(":TOTAL_G",VtotalG);
      query.bindValue(":ETAT",Vetat);

      return query.exec();
}
