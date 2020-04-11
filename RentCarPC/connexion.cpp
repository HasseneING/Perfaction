#include "connexion.h"

Connexion::Connexion()
{

}


bool Connexion::ouvrirConnexion(){

db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("Source_Projet2A");
db.setUserName("Hassene");
db.setPassword("Hassene123");
if(db.open())
    return true;

return false;

}


bool Connexion::fermeConnexion()
{
db.close();
return true;


}
