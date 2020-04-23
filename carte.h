#ifndef CARTE_H
#define CARTE_H
#include <QString>
#include <QDate>
#include "client.h"


class carte
{
public:
    carte();
    carte(int a,QDate b){idf=a; d=b; pts = 0;}
    ~carte(){}

    QDate get_date(){return d;}
    int get_id(){return idf;}
    int get_pts(){return pts;}

    void set_date(QDate a){d=a;}
    void set_id(int a){idf=a;}
    void set_pts(int a){pts=a;}

    bool ajouter(carte c);
    QSqlQueryModel * afficher();

protected:
    int idf,pts;
    QDate d;
};

#endif // CARTE_H
