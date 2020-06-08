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
    int id,code,courante;
    double prix;
    QDateTime dateDeb,dateExp;
public:
    visite();
    visite(int,QString,QString,int,QDateTime,QDateTime,double,int);

    QSqlQueryModel* afficher();
    QSqlQueryModel* afficher2();
    QSqlQueryModel* afficher3();

    QSqlQueryModel* recherche(QString);

    bool ajouter();
    bool modifier();
    bool supprimer();
};

#endif // VISITE_H
