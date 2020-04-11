#ifndef FOURNISSEUR_H
#define FOURNISSEUR_H
#include <QString>
#include <QSqlQueryModel>

class fournisseur
{
private:
    int ID;
    int TELEPHONE;
    QString SOCIETE;
    QString ADRESSE;
    QString EMAIL;
public:
    fournisseur();



    int getID() const;
    void setID(int value);
    int getTELEPHONE() const;
    void setTELEPHONE(int value);
    QString getSOCIETE() const;
    void setSOCIETE(const QString &value);
    QString getADRESSE() const;
    void setADRESSE(const QString &value);
    QString getEMAIL() const;
    void setEMAIL(const QString &value);


    bool ajouterFour();
    QSqlQueryModel* AfficherFour();
    QSqlQueryModel* SearchFour(int);

    bool SupprimerFour(int);
};

#endif // FOURNISSEUR_H
