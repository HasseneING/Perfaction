#ifndef LOCATION_H
#define LOCATION_H
#include <QString>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QVariant>
#include <QTime>
#include <QDateTime>

class Location
{
private:
    double idLoc,idRes,kmDep,kmArr,caution,RaP;
    QString carbDep,carbArr;
public:
    Location();
    Location(double,double,double,double,QString,QString,double,double);

    bool ajouter();
    bool modifier_location();


    QSqlQueryModel* afficher();
    QSqlQueryModel * rechercher(QString);


};

#endif // LOCATION_H
