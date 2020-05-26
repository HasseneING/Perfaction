#ifndef ASSURANCE_H
#define ASSURANCE_H
#include <QString>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QVariant>
#include <QDateTime>

class assurance
{
private:
    int id,nPolice;
    QString matricule,type;
    QDateTime dateDeb,dateFin;
    double prix;

public:
    assurance();
    assurance(int,QString,int,QString,QDateTime,QDateTime,double);

    QSqlQueryModel* afficher();
    QSqlQueryModel* afficher2();
    QSqlQueryModel* afficher3();
    QSqlQueryModel* afficher4();

    QSqlQueryModel* recherche(QString);

    bool ajouter();
    bool modifier();
    bool supprimer();

};

#endif // ASSURANCE_H
