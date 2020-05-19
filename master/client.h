#ifndef CLIENT_H
#define CLIENT_H


#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDate>


class client
{

protected:
    QString email,adresse;
    int idc,tel;

public:

    client();
    client(int i,QString e ,QString a,int t);
    ~client(){}

    QString get_email();
    QString get_adresse();
    int get_id();
    int get_tel();

    void set_email(QString a){email = a;}
    void set_adresse(QString a){adresse = a;}
    void set_id(int b){idc = b;}
    void set_tel(int b){tel = b;}

    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int id);
    bool modifier(int i,QString e ,QString a,int t);
};

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
    QSqlQueryModel * afficherprop();
    QSqlQueryModel * afficherr(QString r);
    bool supprimer(int id);
    bool modifier(int i, int t, QString e, QString a, QString p, int code);
private:
    QString nom_soc,prop;
    int codef;
};

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

    bool ajouter();
    QSqlQueryModel * afficher();
    QSqlQueryModel * affichernom();
    QSqlQueryModel * afficherid();
    QSqlQueryModel * afficherdate();
    QSqlQueryModel * afficherr(QString r);
    bool supprimer(int id);
    bool modifier(int i, int t, QString e, QString a, QString n, QString p, QDate nai);

private:
    QString nom,prenom;
    int cin;
    QDate naissance;
};

#endif // CLIENT_H
