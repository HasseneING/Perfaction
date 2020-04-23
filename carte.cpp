#include "carte.h"

carte::carte()
{

}

bool carte::ajouter(carte c)
{
    QSqlQuery query;
    query.prepare("INSERT INTO carte (IDF,CREATION) VALUES (:idf,:date)");

    query.bindValue(":nom", c.get_id());
    query.bindValue(":date", c.get_date());

    return    query.exec();
}

QSqlQueryModel * carte::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("SELECT * FROM carte");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("IDF"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("CREATION"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("POINTS"));
    return model;
}
