#include "carte.h"

carte::carte()
{

}

bool carte::ajouter(int id,QDate d)
{
    QSqlQuery query;
    query.prepare("INSERT INTO carte (IDF,CREATION) VALUES (:idf,:date)");

    query.bindValue(":idf", id);
    query.bindValue(":date", d);

    return    query.exec();
}

QSqlQueryModel * carte::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("SELECT carte.IDF,moral.NOM_SOC,carte.PTS,clients.TEL,carte.CREATION,carte.IDF FROM carte"
                    " INNER JOIN clients on carte.idf = clients.idc "
                    " INNER JOIN moral on clients.idc = moral.idc ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID DU CLIENT"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM DE LA SOCIETE"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("POINTS DE FIDELITE"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("TELEPHONE DU CLIENT"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("DATE DE CREATION"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("ID DE LA CARTE"));

    return model;
}

QSqlQueryModel * carte::afficher1()
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("SELECT carte.IDF,physique.NOM,physique.PRENOM,carte.PTS,clients.TEL,carte.CREATION,carte.IDF FROM carte"
                    " INNER JOIN clients on carte.idf = clients.idc "
                    " INNER JOIN physique on clients.idc = physique.idc ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID DU CLIENT"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM DU CLIENT"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM DU CLIENT"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("POINTS DE FIDELITE"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("TELEPHONE DU CLIENT"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("DATE DE CREATION"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("ID DE LA CARTE"));

    return model;
}
