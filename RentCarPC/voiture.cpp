#include "voiture.h"
#include <QSqlQuery>
#include <QVariant>
#include <QDebug>



int voiture::getForfaitSem() const
{
    return ForfaitSem;
}

void voiture::setForfaitSem(int value)
{
    ForfaitSem = value;
}

voiture::voiture()
{
    Dispo=1;
    DateAcquis=DateAcquis.currentDate();
    qDebug() << DateAcquis;
}


QString voiture::getMatricule() const
{
    return Matricule;
}

void voiture::setMatricule(const QString &value)
{
    Matricule = value;
}


int voiture::getNbPlace() const
{
    return NbPlace;
}

void voiture::setNbPlace(int value)
{
    NbPlace = value;
}

QString voiture::getMarque() const
{
    return Marque;
}

void voiture::setMarque(const QString &value)
{
    Marque = value;
}

QString voiture::getModele() const
{
    return Modele;
}

void voiture::setModele(const QString &value)
{
    Modele = value;
}

QString voiture::getPuissance() const
{
    return Puissance;
}

void voiture::setPuissance(const QString &value)
{
    Puissance = value;
}

QString voiture::getConsommation() const
{
    return Consommation;
}

void voiture::setConsommation(const QString &value)
{
    Consommation = value;
}

QString voiture::getDescription() const
{
    return Description;
}

void voiture::setDescription(const QString &value)
{
    Description = value;
}

QString voiture::getCatG() const
{
    return CatG;
}

void voiture::setCatG(const QString &value)
{
    CatG = value;
}

QDate voiture::getDateAcquis() const
{
    return DateAcquis;
}

void voiture::setDateAcquis(const QDate &value)
{
    DateAcquis = value;
}

QString voiture::getCouleur() const
{
    return Couleur;
}

void voiture::setCouleur(const QString &value)
{
    Couleur = value;
}

int voiture::getDispo() const
{
    return Dispo;
}

void voiture::setDispo(int value)
{
    Dispo = value;
}

int voiture::getForfaitJour() const
{
    return ForfaitJour;
}

void voiture::setForfaitJour(int value)
{
    ForfaitJour = value;
}

int voiture::getForfaitMois() const
{
    return ForfaitMois;
}

void voiture::setForfaitMois(int value)
{
    ForfaitMois = value;
}


bool voiture::AjouterVoit()
{

    QSqlQuery query;
    query.prepare("INSERT INTO VOITURE (MATRICULE, MARQUE, MODELE, NBPLACE, PUISSANCE, CONSOMMATION, DESCRIPTION, CATG, DATEACQUIS, COULEUR, DISPO, FORFAITJOUR, FORFAITSEM, FORFAITMOIS)"
                  "VALUES (:MATRICULE, :MARQUE, :MODELE, :NBPLACE, :PUISSANCE, :CONSOMMATION, :DESCRIPTION, :CATG, :DATEACQUIS, :COULEUR, :DISPO, :FORFAITJOUR, :FORFAITSEM, :FORFAITMOIS)");

    query.bindValue(":MATRICULE",Matricule);
    query.bindValue(":MARQUE",Marque);
    query.bindValue(":MODELE",Modele);
    query.bindValue(":NBPLACE",NbPlace);
    query.bindValue(":PUISSANCE",Puissance);
    query.bindValue(":CONSOMMATION",Consommation);
    query.bindValue(":DESCRIPTION",Description);
    query.bindValue(":CATG",CatG);
    query.bindValue(":DATEACQUIS",DateAcquis);
    query.bindValue(":COULEUR",Couleur);
    query.bindValue(":DISPO",Dispo);
    query.bindValue(":FORFAITJOUR",ForfaitJour);
    query.bindValue(":FORFAITSEM",ForfaitSem);
    query.bindValue(":FORFAITMOIS",ForfaitMois);

    return query.exec();
}



QSqlQueryModel* voiture::AfficherVoit(QString var){

QSqlQueryModel* model = new QSqlQueryModel;
QString Quer="SELECT * FROM VOITURE ORDER BY "+var+"";
qDebug()<< Quer;
model->setQuery(Quer    );

  model->setHeaderData(0, Qt::Horizontal, QObject::tr("Matricule"));
  model->setHeaderData(1, Qt::Horizontal, QObject::tr("Marque"));
  model->setHeaderData(2, Qt::Horizontal, QObject::tr("Modele"));
  model->setHeaderData(3, Qt::Horizontal, QObject::tr("NbPlace"));
  return model;
}

QSqlQueryModel *voiture::SearchVoit(QString mat)
{
    QSqlQueryModel* model = new QSqlQueryModel;

    model->setQuery("SELECT * FROM VOITURE where UPPER(MATRICULE) like upper('%"+mat+"%')"
                    "OR UPPER(MARQUE) like upper('%"+mat+"%')"
                    "OR UPPER(MODELE) like upper('%"+mat+"%')"
                    "OR UPPER(NBPLACE) like upper('%"+mat+"%')"
                    "OR UPPER(PUISSANCE) like upper('%"+mat+"%')"
                    "OR UPPER(CONSOMMATION) like upper('%"+mat+"%')"
                    "OR UPPER(DESCRIPTION) like upper('%"+mat+"%')"
                    "OR UPPER(CATG) like upper('%"+mat+"%')"
                    "OR UPPER(DATEACQUIS) like upper('%"+mat+"%')"
                    "OR UPPER(COULEUR) like upper('%"+mat+"%')"
                    "OR UPPER(DISPO) like upper('%"+mat+"%')"
                    "OR UPPER(FORFAITJOUR) like upper('%"+mat+"%')"
                    "OR UPPER(FORFAITSEM) like upper('%"+mat+"%')"
                    "OR UPPER(FORFAITMOIS) like upper('%"+mat+"%')");


      model->setHeaderData(0, Qt::Horizontal, QObject::tr("Matricule"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("Marque"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("Modele"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("NbPlace"));
      return model;
}

bool voiture::SupprimerVoit(QString mat)
{
    qDebug() << mat;
    QSqlQuery query;
    query.prepare("Delete from VOITURE where MATRICULE= :MATRICULE");
    query.bindValue(":MATRICULE",mat);
    return  query.exec();
}

bool voiture::modifierVoit(QString Mat)
{
    QSqlQuery query;

    query.prepare("UPDATE VOITURE SET MATRICULE=:MAT, MARQUE=:MARQUE, MODELE=:MODELE, NBPLACE=:NBPLACE, PUISSANCE=:PUISSANCE, CONSOMMATION=:CONSOMMATION, DESCRIPTION=:DESCRIPTION, CATG=:CATG, DATEACQUIS=:DATEACQUIS, COULEUR=:COULEUR, DISPO=:DISPO, FORFAITJOUR=:FORFAITJOUR, FORFAITSEM=:FORFAITSEM, FORFAITMOIS=:FORFAITMOIS where MATRICULE=:MAT");
    query.bindValue(":MAT",Mat);
    query.bindValue(":MARQUE",Marque);
    query.bindValue(":MODELE",Modele);
    query.bindValue(":NBPLACE",NbPlace);
    query.bindValue(":PUISSANCE",Puissance);
    query.bindValue(":CONSOMMATION",Consommation);
    query.bindValue(":DESCRIPTION",Description);
    query.bindValue(":CATG",CatG);
    query.bindValue(":DATEACQUIS",DateAcquis);
    query.bindValue(":COULEUR",Couleur);
    query.bindValue(":DISPO",Dispo);
    query.bindValue(":FORFAITJOUR",ForfaitJour);
    query.bindValue(":FORFAITSEM",ForfaitSem);
    query.bindValue(":FORFAITMOIS",ForfaitMois);
    return  query.exec();
}

