#ifndef CONGE_H
#define CONGE_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDate>

class conge
{
public:

    conge();

    conge(QDate,QDate,QDate,QString,bool,int);

    //getters
    int getId(){return id;}
    QDate getDateDebut(){return dateDebut;}
    QDate getDateFin(){return dateFin;}
    QDate getDateRetour(){return dateRetour;}
    QString getMotif(){return motif;}
    bool getEtat(){return etat;}
    int getIdEmploye(){return idEmploye;}



    //setters
    void setID(int id){id=this->id;}
    void setDateDebut(QDate dateDebut){dateDebut=this->dateDebut;}
    void setDateFin(QDate dateFin){dateFin=this->dateFin;}
    void setDateRetour(QDate dateRetour){dateRetour=this->dateRetour;}
    void setMotif(QString motif){motif=this->motif;}
    void setEtat(bool etat){etat=this->etat;}
    void setIdEmploye(int idEmploye){idEmploye=this->idEmploye;}




    //methodes
    bool ajouterconge();
    bool modifierconge();
    conge getconge(int);
    QSqlQueryModel * afficherconge();
    QSqlQueryModel * affichercongeEmp(QString);
    bool supprimerconge(int);
    QSqlQueryModel *rechercher(QString c);
    QSqlQueryModel *Tri(int);




private:
    int id;
    QDate dateDebut;
    QDate dateFin;
    QDate dateRetour;
    QString motif;
    bool etat;
    int idEmploye;
};

#endif // CONGE_H
