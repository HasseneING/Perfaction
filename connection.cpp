#include "connexion.h"

Connexion::Connexion()
{}

bool Connexion::ouvrirConnexion()
{
        db = QSqlDatabase::addDatabase("QODBC");
        db.setDatabaseName("Source_Projet2A");
        db.setUserName("zohraharibi");
        db.setPassword("zohra");
        if(db.open())
            return true;

        return false;
    }
void Connexion::fermerConnexion()
{db.close();}
