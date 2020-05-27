#ifndef COMPTE_H
#define COMPTE_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDate>

class compte
{
public:

    compte();
    // int id, QString login , QString mdp, int role ,int idemploye , bool etat
    compte(QString,QString,QString,int);
    //getters
    int getId(){return id;}
    QString getLogin(){return login;}
    QString getMdp(){return mdp;}
    QString getRole(){return role;}
    int getIdEmploye(){return idEmploye;}
    compte getCompte(int);


    //setters
    void setID(int id){id=this->id;}
    void setLogin(QString login){login=this->login;}
    void setMdp(QString mdp){mdp=this->mdp;}
    void setRole(QString role){role=this->role;}
    void setIdEmploye(int idEmploye){idEmploye=this->idEmploye;}



    //methodes
    bool ajouterCompte();
    bool modifierCompte();
    QSqlQueryModel * afficherCompte();
    bool supprimerCompte(int);
    QSqlQueryModel *rechercher(QString c);
    QSqlQueryModel *Tri(int );


private:
    int id;
    QString login;
    QString mdp;
    QString role;
    int idEmploye;

};

#endif // COMPTE_H
