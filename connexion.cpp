#include "connexion.h"
#include <exception>

Connection::Connection()
{

}

bool Connection::createconnect()
{
    db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("Source_Projet2A");
    db.setUserName("zohraharibi");
    db.setPassword("zohra");
    if(db.open())
        return true;

    return false;
}

void Connection::fermer()
{
    db.close();
}
