#include "connexion.h"
#include <exception>

Connection::Connection()
{

}

bool Connection::createconnect()
{
    bool test=false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("Source_Projet");
    db.setUserName("amine");//inserer nom de l'utilisateur
    db.setPassword("estEST123");//inserer mot de passe de cet utilisateur

    if (db.open())
        test=true;

    return  test;
}

void Connection::fermer()
{
    db.close();
}
