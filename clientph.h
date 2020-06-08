#ifndef CLIENTMO_H
#define CLIENTMO_H

//#include "client.h"

class clientph : public client
{
public:
    clientph();
    clientph(int i, int t, QString e, QString a, QString n, QString p, int c, QDate nai);
    ~clientph(){}

    QString get_email(){return email;}
    QString get_adresse(){return adresse;}
    int get_id(){return idc;}
    int get_tel(){return tel;}
    QString get_nom(){return nom;}
    int get_cin(){return cin;}
    QString get_prenom(){return prenom;}
    QDate get_date(){return naissance;}

    void set_email(QString a){email = a;}
    void set_adresse(QString a){adresse = a;}
    void set_id(int b){idc = b;}
    void set_tel(int b){tel = b;}
    void set_nom(QString a){nom = a;}
    void set_cin(int a){cin = a;}
    void set_prenom(QString a){prenom = a;}
    void set_date(QDate d){naissance = d;}

    bool ajouter(clientph c,client x);
    QSqlQueryModel * afficher();

private:
    QString nom,prenom;
    int cin;
    QDate naissance;
};

#endif // CLIENTMO_H
