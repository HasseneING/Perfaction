#include "fournisseur.h"
#include <QSqlQuery>
#include <QVariant>

int fournisseur::getID() const
{
    return ID;
}

void fournisseur::setID(int value)
{
    ID = value;
}

int fournisseur::getTELEPHONE() const
{
    return TELEPHONE;
}

void fournisseur::setTELEPHONE(int value)
{
    TELEPHONE = value;
}

QString fournisseur::getSOCIETE() const
{
    return SOCIETE;
}

void fournisseur::setSOCIETE(const QString &value)
{
    SOCIETE = value;
}

QString fournisseur::getADRESSE() const
{
    return ADRESSE;
}

void fournisseur::setADRESSE(const QString &value)
{
    ADRESSE = value;
}

QString fournisseur::getEMAIL() const
{
    return EMAIL;
}

void fournisseur::setEMAIL(const QString &value)
{
    EMAIL = value;
}

bool fournisseur::ajouterFour()
{
    QSqlQuery query;
    query.prepare("INSERT INTO FOURNISSEUR (ID, SOCIETE, ADRESSE, TELEPHONE, EMAIL) "
                  "VALUES (:ID, :SOCIETE, :ADRESSE, :TELEPHONE, :EMAIL)");
    query.bindValue(":ID",ID);
    query.bindValue(":SOCIETE",SOCIETE);
    query.bindValue(":ADRESSE",ADRESSE);
    query.bindValue(":TELEPHONE",TELEPHONE);
    query.bindValue(":EMAIL",EMAIL);
    return query.exec();
}

QSqlQueryModel *fournisseur::AfficherFour()
{
    QSqlQueryModel* model = new QSqlQueryModel;

    model->setQuery("SELECT * FROM FOURNISSEUR");
      model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("SOCIETE"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("ADRESSE"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("TELEPHONE"));
      model->setHeaderData(4, Qt::Horizontal, QObject::tr("EMAIL"));
      return model;
}

QSqlQueryModel *fournisseur::SearchFour(int id)
{
    QSqlQueryModel* model = new QSqlQueryModel;
    QString id2=QString::number(id);
    QString quer="SELECT * FROM FOURNISSEUR where ID ='"+id2+"'";
    model->setQuery(quer);
      model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("SOCIETE"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("ADRESSE"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("TELEPHONE"));
      model->setHeaderData(4, Qt::Horizontal, QObject::tr("EMAIL"));
      return model;
}

bool fournisseur::SupprimerFour(int id)
{
        QSqlQuery query;
        query.prepare("Delete from FOURNISSEUR where ID= :id");
        query.bindValue(":id",id);
        return  query.exec();

}

fournisseur::fournisseur()
{
    
}
