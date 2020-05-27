#ifndef RESERVATION_H
#define RESERVATION_H
#include <QString>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QVariant>
#include <QTime>
#include <QDateTime>

class reservation
{
private:
    double idRes,idClient,totalHT,totalTTC,remise,totalG;
    int etat;
    QString matricule;
    QDateTime dateDep,dateAr;
public:
    reservation();
    reservation(double,QString,double,QDateTime,QDateTime,double,double,double,double,int);

    double getIdRes();
    void setIdRes(double);

    QString getMatricule();
    void setMatricule(QString);

    double getIdClient();
    void setIdClient(double);

    QDateTime getDateDep();
    void setDateDep(QDateTime);

    QDateTime getDateAr();
    void setDateAr(QDateTime);

    int getEtat();
    void setEtat(int);

    double getTotalHT();
    void setTotalHT(double);

    double getTotalTTC();
    void setTotalTTC(double);

    double getRemise();
    void setRemise(double);

    double getTotalG();
    void setTotalG(double);

    double getCaution();
    void setCaution(double);

    double getRaP();
    void setRaP(double);

    bool ajouter();
    bool modifier_reservation();
    QSqlQueryModel* afficher();
    QSqlQueryModel* afficher2();
    QSqlQueryModel* afficher3();
    QSqlQueryModel* afficher4();


    QSqlQueryModel* history();
    QSqlQueryModel * rechercher(QString);

};

#endif // RESERVATION_H
