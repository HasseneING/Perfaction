#ifndef VIGNETTE_H
#define VIGNETTE_H
#include <QString>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QVariant>
#include <QDateTime>

class vignette
{
private:
    int code,courante;
    double prix;
    QString matricule;
    QDateTime dateDeb,dateExp;
public:
    vignette();
    vignette(int,QString,QDateTime,QDateTime,double,int);

    QSqlQueryModel* afficher();
    QSqlQueryModel* afficher2();
    QSqlQueryModel* afficher3();

    QSqlQueryModel* recherche(QString);

    bool ajouter();
    bool modifier();
    bool supprimer();
};

#endif // VIGNETTE_H
