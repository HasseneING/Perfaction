#ifndef ORDINATEUR_H
#define ORDINATEUR_H
#include <QString>
#include <QSqlQueryModel>

class ordinateur
{

private:
    QString MAC,CPU,GPU,RAM,desc;

public:
    ordinateur();
    ordinateur(QString,QString,QString,QString,QString);

    QString getMAC(){return MAC;};
    QString getCPU(){return CPU;};
    QString getGPU(){return GPU;};
    QString getRAM(){return RAM;};
    QString getDesc(){return desc;};

    void setMAC(QString);
    void setCPU(QString);
    void setGPU(QString);
    void setRAM(QString);
    void setDesc(QString);

    bool ajouterOrd();
    QSqlQueryModel* AfficherOrd(QString);
    QSqlQueryModel* SearchOrd(QString);
    bool SupprimerOrd(QString);
    bool ModifierOrd();


};

#endif // ORDINATEUR_H
