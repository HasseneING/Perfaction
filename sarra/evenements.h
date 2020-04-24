#ifndef EVENEMENTS_H
#define EVENEMENTS_H
#include <QString>
#include <QSqlQueryModel>
#include <QDateTime>


class evenements
{
private:
    int id ;
    QString nom , lieu ;
    QDateTime datedebut , datefin ;
public:
    evenements();
    evenements(int,QString,QString,QDateTime,QDateTime);
    bool ajouter();
    QSqlQueryModel* afficher();
    QSqlQueryModel* trie_evenements(int id);

    QSqlQueryModel*RechercherEvenements(int id);
    bool EvenementsisExiste(int id);

    bool Modifier_evenements(int id,QString nom ,QString lieu,QDateTime datedebut, QDateTime datefin);
    bool supprimer(int);
};

#endif // EVENEMENTS_H



