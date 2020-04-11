#ifndef VOITURE_H
#define VOITURE_H
#include <QString>
#include <QDate>
#include <QSqlQueryModel>

class voiture
{



private:
QString Matricule;
int NbPlace;
QString Marque;
QString Modele;
QString Puissance;
QString Consommation;
QString Description;
QString CatG;

QDate DateAcquis;
QString Couleur;

int Dispo;
int ForfaitJour;
int ForfaitSem;
int ForfaitMois;


public:
  voiture();
  QString getMatricule() const;
  void setMatricule(const QString &value);

  int getNbPlace() const;
  void setNbPlace(int value);
  QString getMarque() const;
  void setMarque(const QString &value);
  QString getModele() const;
  void setModele(const QString &value);
  QString getPuissance() const;
  void setPuissance(const QString &value);
  QString getConsommation() const;
  void setConsommation(const QString &value);
  QString getDescription() const;
  void setDescription(const QString &value);
  QString getCatG() const;
  void setCatG(const QString &value);
  QDate getDateAcquis() const;
  void setDateAcquis(const QDate &value);
  QString getCouleur() const;
  void setCouleur(const QString &value);
  int getDispo() const;
  void setDispo(int value);
  int getForfaitJour() const;
  void setForfaitJour(int value);
  int getForfaitMois() const;
  void setForfaitMois(int value);

  int getForfaitSem() const;
  void setForfaitSem(int value);





  bool AjouterVoit();

  QSqlQueryModel* AfficherVoit();

  QSqlQueryModel* SearchVoit(QString);


  bool SupprimerVoit(QString);
};

#endif // VOITURE_H
