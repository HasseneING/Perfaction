#include "location.h"

Location::Location(){}

Location::Location(double idLoc, double idRes,double kmDep,double kmArr,QString carbDep,
                   QString carbArr,double caution,double RaP)
{
    this->idLoc=idLoc;
    this->idRes=idRes;
    this->kmDep=kmDep;
    this->kmArr=kmArr;
    this->carbDep=carbDep;
    this->carbArr=carbArr;
    this->caution=caution;
    this->RaP=RaP;

}

bool Location::ajouter()
{
    QSqlQuery query;
      QString VidRes=QString::number(idRes);
      QString VkmDep=QString::number(kmDep);
      QString VkmArr=QString::number(kmArr);
      QString Vcaution=QString::number(caution);
      QString VRaP=QString::number(RaP);

      query.prepare("INSERT INTO LOCATIONS (IDLOC, IDRES, KM_DEPART,KM_ARRIVEE ,CARB_DEPART ,"
                    "CARB_ARRIVEE,CAUTION,RESTE_A_PAYER) "
                    "VALUES (seq_loc.nextval,:IDRES,:KM_DEPART,:KM_ARRIVEE,:CARB_DEPART,"
                    ":CARB_ARRIVEE,:CAUTION,:RESTE_A_PAYER)");
      query.bindValue(":IDRES",VidRes);
      query.bindValue(":KM_DEPART",VkmDep);
      query.bindValue(":KM_ARRIVEE",VkmArr);
      query.bindValue(":CARB_DEPART",carbDep);
      query.bindValue(":CARB_ARRIVEE",carbArr);
      query.bindValue(":CAUTION",Vcaution);
      query.bindValue(":RESTE_A_PAYER",VRaP);

      QSqlQuery q;
      q.prepare("UPDATE RESERVATION SET ETAT=1 WHERE ID_RES='"+VidRes+"' ");
       q.exec();
      return query.exec();}

bool Location::modifier_location()
{
    QSqlQuery query;
    QString VidLoc=QString::number(idLoc);
    QString VidRes=QString::number(idRes);
    QString VkmDep=QString::number(kmDep);
    QString VkmArr=QString::number(kmArr);
    QString Vcaution=QString::number(caution);
    QString VRaP=QString::number(RaP);

      query.prepare("UPDATE LOCATIONS SET IDLOC=:IDLOC, IDRES=:IDRES, KM_DEPART=:KM_DEPART,"
                    " KM_ARRIVEE=:KM_ARRIVEE, CARB_DEPART=:CARB_DEPART, "
                    "CARB_ARRIVEE=:CARB_ARRIVEE, CAUTION=:CAUTION, RESTE_A_PAYER=:RESTE_A_PAYER "
                    "WHERE IDLOC=:IDLOC");
      query.bindValue(":IDLOC",VidLoc);
      query.bindValue(":IDRES",VidRes);
      query.bindValue(":KM_DEPART",VkmDep);
      query.bindValue(":KM_ARRIVEE",VkmArr);
      query.bindValue(":CARB_DEPART",carbDep);
      query.bindValue(":CARB_ARRIVEE",carbArr);
      query.bindValue(":CAUTION",Vcaution);
      query.bindValue(":RESTE_A_PAYER",VRaP);

      QSqlQuery q;
      q.prepare("UPDATE RESERVATION SET ETAT=1 WHERE ID_RES='"+VidRes+"' ");
      q.exec();
      return query.exec();
}

QSqlQueryModel* Location::afficher()
{
    QSqlQueryModel *model = new QSqlQueryModel;
      model->setQuery("SELECT l.IDLOC,l.IDRES,r.IDCLIENT,r.MATRICULE,v.MARQUE,v.MODELE,"
                     "r.DATE_DEPART,r.DATE_ARRIVEE,r.MONTANT_HT,r.TOTAL_TTC,r.REMISE,"
                     "r.TOTAL_G,l.RESTE_A_PAYER,l.CAUTION FROM Locations l INNER JOIN Reservation r "
                      "ON l.IDRES=r.ID_RES "
                      "INNER JOIN voitures v "
                      "on r.MATRICULE=v.MATRICULE order by l.IDLOC");
      model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id location"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("Id réservation"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("Id client"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("Matricule"));
      model->setHeaderData(4, Qt::Horizontal, QObject::tr("Marque"));
      model->setHeaderData(5, Qt::Horizontal, QObject::tr("Modèle"));
      model->setHeaderData(6, Qt::Horizontal, QObject::tr("Date départ"));
      model->setHeaderData(7, Qt::Horizontal, QObject::tr("Date arrivée"));
      model->setHeaderData(8, Qt::Horizontal, QObject::tr("Total HT"));
      model->setHeaderData(9, Qt::Horizontal, QObject::tr("Total TTC"));
      model->setHeaderData(10, Qt::Horizontal, QObject::tr("Remise"));
      model->setHeaderData(11, Qt::Horizontal, QObject::tr("Total G"));
      model->setHeaderData(12, Qt::Horizontal, QObject::tr("Reste à payer"));
      model->setHeaderData(13, Qt::Horizontal, QObject::tr("Caution"));

     return model;
}

QSqlQueryModel* Location::afficher2()
{
    QSqlQueryModel *model = new QSqlQueryModel;
      model->setQuery("SELECT l.IDLOC,l.IDRES,r.IDCLIENT,r.MATRICULE,v.MARQUE,v.MODELE,"
                     "r.DATE_DEPART,r.DATE_ARRIVEE,r.MONTANT_HT,r.TOTAL_TTC,r.REMISE,"
                     "r.TOTAL_G,l.RESTE_A_PAYER,l.CAUTION FROM Locations l INNER JOIN Reservation r "
                      "ON l.IDRES=r.ID_RES "
                      "INNER JOIN voitures v "
                      "on r.MATRICULE=v.MATRICULE order by l.IDRES");
      model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id location"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("Id réservation"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("Id client"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("Matricule"));
      model->setHeaderData(4, Qt::Horizontal, QObject::tr("Marque"));
      model->setHeaderData(5, Qt::Horizontal, QObject::tr("Modèle"));
      model->setHeaderData(6, Qt::Horizontal, QObject::tr("Date départ"));
      model->setHeaderData(7, Qt::Horizontal, QObject::tr("Date arrivée"));
      model->setHeaderData(8, Qt::Horizontal, QObject::tr("Total HT"));
      model->setHeaderData(9, Qt::Horizontal, QObject::tr("Total TTC"));
      model->setHeaderData(10, Qt::Horizontal, QObject::tr("Remise"));
      model->setHeaderData(11, Qt::Horizontal, QObject::tr("Total G"));
      model->setHeaderData(12, Qt::Horizontal, QObject::tr("Reste à payer"));
      model->setHeaderData(13, Qt::Horizontal, QObject::tr("Caution"));

     return model;
}

QSqlQueryModel* Location::afficher3()
{
    QSqlQueryModel *model = new QSqlQueryModel;
      model->setQuery("SELECT l.IDLOC,l.IDRES,r.IDCLIENT,r.MATRICULE,v.MARQUE,v.MODELE,"
                     "r.DATE_DEPART,r.DATE_ARRIVEE,r.MONTANT_HT,r.TOTAL_TTC,r.REMISE,"
                     "r.TOTAL_G,l.RESTE_A_PAYER,l.CAUTION FROM Locations l INNER JOIN Reservation r "
                      "ON l.IDRES=r.ID_RES "
                      "INNER JOIN voitures v "
                      "on r.MATRICULE=v.MATRICULE order by r.IDCLIENT");
      model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id location"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("Id réservation"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("Id client"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("Matricule"));
      model->setHeaderData(4, Qt::Horizontal, QObject::tr("Marque"));
      model->setHeaderData(5, Qt::Horizontal, QObject::tr("Modèle"));
      model->setHeaderData(6, Qt::Horizontal, QObject::tr("Date départ"));
      model->setHeaderData(7, Qt::Horizontal, QObject::tr("Date arrivée"));
      model->setHeaderData(8, Qt::Horizontal, QObject::tr("Total HT"));
      model->setHeaderData(9, Qt::Horizontal, QObject::tr("Total TTC"));
      model->setHeaderData(10, Qt::Horizontal, QObject::tr("Remise"));
      model->setHeaderData(11, Qt::Horizontal, QObject::tr("Total G"));
      model->setHeaderData(12, Qt::Horizontal, QObject::tr("Reste à payer"));
      model->setHeaderData(13, Qt::Horizontal, QObject::tr("Caution"));

     return model;
}

QSqlQueryModel* Location::afficher4()
{
    QSqlQueryModel *model = new QSqlQueryModel;
      model->setQuery("SELECT l.IDLOC,l.IDRES,r.IDCLIENT,r.MATRICULE,v.MARQUE,v.MODELE,"
                     "r.DATE_DEPART,r.DATE_ARRIVEE,r.MONTANT_HT,r.TOTAL_TTC,r.REMISE,"
                     "r.TOTAL_G,l.RESTE_A_PAYER,l.CAUTION FROM Locations l INNER JOIN Reservation r "
                      "ON l.IDRES=r.ID_RES "
                      "INNER JOIN voitures v "
                      "on r.MATRICULE=v.MATRICULE order by r.MATRICULE");
      model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id location"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("Id réservation"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("Id client"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("Matricule"));
      model->setHeaderData(4, Qt::Horizontal, QObject::tr("Marque"));
      model->setHeaderData(5, Qt::Horizontal, QObject::tr("Modèle"));
      model->setHeaderData(6, Qt::Horizontal, QObject::tr("Date départ"));
      model->setHeaderData(7, Qt::Horizontal, QObject::tr("Date arrivée"));
      model->setHeaderData(8, Qt::Horizontal, QObject::tr("Total HT"));
      model->setHeaderData(9, Qt::Horizontal, QObject::tr("Total TTC"));
      model->setHeaderData(10, Qt::Horizontal, QObject::tr("Remise"));
      model->setHeaderData(11, Qt::Horizontal, QObject::tr("Total G"));
      model->setHeaderData(12, Qt::Horizontal, QObject::tr("Reste à payer"));
      model->setHeaderData(13, Qt::Horizontal, QObject::tr("Caution"));

     return model;
}

QSqlQueryModel* Location::afficher5()
{
    QSqlQueryModel *model = new QSqlQueryModel;
      model->setQuery("SELECT l.IDLOC,l.IDRES,r.IDCLIENT,r.MATRICULE,v.MARQUE,v.MODELE,"
                     "r.DATE_DEPART,r.DATE_ARRIVEE,r.MONTANT_HT,r.TOTAL_TTC,r.REMISE,"
                     "r.TOTAL_G,l.RESTE_A_PAYER,l.CAUTION FROM Locations l INNER JOIN Reservation r "
                      "ON l.IDRES=r.ID_RES "
                      "INNER JOIN voitures v "
                      "on r.MATRICULE=v.MATRICULE order by r.DATE_DEPART");
      model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id location"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("Id réservation"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("Id client"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("Matricule"));
      model->setHeaderData(4, Qt::Horizontal, QObject::tr("Marque"));
      model->setHeaderData(5, Qt::Horizontal, QObject::tr("Modèle"));
      model->setHeaderData(6, Qt::Horizontal, QObject::tr("Date départ"));
      model->setHeaderData(7, Qt::Horizontal, QObject::tr("Date arrivée"));
      model->setHeaderData(8, Qt::Horizontal, QObject::tr("Total HT"));
      model->setHeaderData(9, Qt::Horizontal, QObject::tr("Total TTC"));
      model->setHeaderData(10, Qt::Horizontal, QObject::tr("Remise"));
      model->setHeaderData(11, Qt::Horizontal, QObject::tr("Total G"));
      model->setHeaderData(12, Qt::Horizontal, QObject::tr("Reste à payer"));
      model->setHeaderData(13, Qt::Horizontal, QObject::tr("Caution"));

     return model;
}

QSqlQueryModel * Location::rechercher(QString ch)
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("SELECT l.IDLOC,l.IDRES,r.IDCLIENT,r.MATRICULE,v.MARQUE,v.MODELE,"
                    "r.DATE_DEPART,r.DATE_ARRIVEE,r.MONTANT_HT,r.TOTAL_TTC,r.REMISE,"
                    "r.TOTAL_G,l.RESTE_A_PAYER,l.CAUTION FROM Locations l INNER JOIN Reservation r "
                     "ON l.IDRES=r.ID_RES "
                     "INNER JOIN voitures v "
                     "on r.MATRICULE=v.MATRICULE "
                    "WHERE UPPER(r.MATRICULE) like UPPER('%"+ch+"%') "
                    "OR UPPER(v.MARQUE) like UPPER('%"+ch+"%') "
                    "OR UPPER(v.MODELE) like UPPER('%"+ch+"%') "
                    "OR UPPER(l.IDLOC) like UPPER('%"+ch+"%') "
                    "OR UPPER(l.IDRES) like UPPER('%"+ch+"%') "
                    "OR UPPER(r.IDCLIENT) like UPPER('%"+ch+"%') order by l.IDLOC");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id location"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Id réservation"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Id client"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Matricule"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Marque"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Modèle"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Date départ"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Date arrivée"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Total HT"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Total TTC"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Remise"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Total G"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Reste à payer"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Caution"));

    return model;
}

