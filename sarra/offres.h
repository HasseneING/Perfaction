#ifndef OFFRES_H
#define OFFRES_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include "QDateTime"



class offres
{
public:
    offres();

    offres(int, QString,QString,QDateTime,QDateTime);
    QString get_nom();
    QString get_description();
    int get_id();
    bool ajouter();
    QSqlQueryModel * afficher();
     bool supprimer(int);

     QSqlQueryModel*RechercherOffres(int id);
     bool OffresisExiste(int id);
     QSqlQueryModel* trie_offres(int id);




     bool Modifier_offres(int id,QString nom ,QString description,QDateTime datedebut, QDateTime datefin); //ch



private:
      int id ;
      QString nom , description ;
      QDateTime datedebut , datefin ;
};


#endif // OFFRES_H







