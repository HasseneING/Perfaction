 #ifndef EMPLOYE_H
#define EMPLOYE_H
#include <QString>
#include <QDate>
#include <QSqlQuery>
#include <QSqlQueryModel>

class employe
{
public:
    //int id; QString nom; QString prenom; QString email; QDate dateNaiss;  QString numTel; QDate dateMajConge;float soldeConge;bool etat;

    employe();
    employe(QString,QString,QString,QDate,QString,QDate,int,bool);
    employe(int,QString,QString,QString,QDate,QString,QDate,int,bool);
    //getters
        int getId(){return id;}
        QString getNom(){return nom;}
        QString getPrenom(){return prenom;}
        QString getemail(){return email;}
        QDate getDateNaiss(){return dateNaiss;}
        QString getNumTel(){return numTel;}
        QDate getDateMajConge(){return dateMajConge;}
        float getSoldeConge(){return soldeConge;}
        bool getEtat(){return etat;}

    //setters
        void setId(int id){this->id=id;}
        void setNom(QString nom){this->nom=nom;}
        void setPrenom(QString prenom){this->prenom=prenom;}
        void setEmail(QString email){this->email=email;}
        void setDateNaiss(QDate dateNaiss){this->dateNaiss=dateNaiss;}
        void setNumTel(QString numTel){this->numTel=numTel;}
        void setDateMajConge (QDate dateMajConge) { this->dateMajConge=dateMajConge;}
        void setSoldeConge(int soldeConge){this->soldeConge=soldeConge;}
        void setEtat (bool etat) {this->etat=etat;}



    bool ajouter();
    bool modifier();
    employe getEmploye(int);
    QSqlQueryModel * afficher();
    bool supprimer(int);
    QSqlQueryModel *rechercher(QString c);
    QSqlQueryModel *Tri(int);
    bool MiseaJourSoldeConge();
    bool affecterCongeEmp(int id );
    bool refuserConge(int id);

private:
    int id;
    QString nom;
    QString prenom;
    QString email;
    QDate dateNaiss;
    QString numTel;
    QDate dateMajConge;
    int soldeConge;
    bool etat;



};

#endif // EMPLOYE_H
