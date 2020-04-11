#ifndef CLIENTMO_H
#define CLIENTMO_H

//#include "client.h"


class clientmo : public client
{
public:
    clientmo();
    clientmo(int i, int t, QString e, QString a, QString nom_s, QString p, int code);
    ~clientmo(){}

    QString get_email(){return email;}
    QString get_adresse(){return adresse;}
    int get_id(){return idc;}
    int get_tel(){return tel;}
    QString get_nom_soc(){return nom_soc;}
    int get_codef(){return codef;}
    QString get_prop(){return prop;}

    void set_email(QString a){email = a;}
    void set_adresse(QString a){adresse = a;}
    void set_id(int b){idc = b;}
    void set_tel(int b){tel = b;}
    void set_nom_soc(QString a){nom_soc = a;}
    void set_codef(int a){codef = a;}
    void set_prop(QString a){prop = a;}

    bool ajouter();
    QSqlQueryModel * afficher();
    QSqlQueryModel * affichernom();
    QSqlQueryModel * afficherid();
    bool supprimer(int id);
    bool modifier(int i, int t, QString e, QString a, QString nom_s, QString p, int code);
private:
    QString nom_soc,prop;
    int codef;
};

#endif // CLIENTMO_H
