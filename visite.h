#ifndef VISITE_H
#define VISITE_H
#include <QString>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QVariant>
#include <QDateTime>

class visite
{
private:
    QString matricule,compagnie;
    int id,code;
    double prix;
    QDateTime dateDeb,dateExp;
public:
    visite();
    visite(int,QString,QString,int,QDateTime,QDateTime,double);

    QSqlQueryModel* afficher();
    QSqlQueryModel* recherche(QString);

    bool ajouter();
    bool modifier();
    bool supprimer();
};

#endif // VISITE_H
