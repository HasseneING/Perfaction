#include "client.h"

clientph::clientph()
{

}

clientph::clientph(int i, int t, QString e, QString a, QString n, QString p, int c,QDate nai) : client(i,e,a,t)
{
    nom = n;
    prenom = p;
    cin = c;
    naissance = nai;
}

bool clientph::ajouter()
{
    QSqlQuery query;
    query.prepare("INSERT INTO PHYSIQUE (CIN, NOM, PRENOM, NAISSANCE,IDC) "
                  "VALUES (:cin, :nom, :prenom, :date,:id)");
    query.bindValue(":cin", cin);
    query.bindValue(":id", idc);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":date", naissance);

    return query.exec();
}

bool clientph::supprimer(int id)
{
    client::supprimer(id);

    QSqlQuery query;

    query.prepare("Delete from PHYSIQUE where IDC = :id ");
    query.bindValue(":id", id);

    return    query.exec();
}

QSqlQueryModel * clientph::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select clients.IDC, physique.CIN,physique.NOM, physique.PRENOM, physique.NAISSANCE, clients.TEL,clients.ADRESSE,clients.EMAIL,"
                    " clients.IDF from clients join physique "
                    "on clients.idc = physique.idc");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("CIN"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("DATE DE NAISSANCE"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("TELEPHONE"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("ADRESSE"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("EMAIL"));
    model->setHeaderData(8, Qt::Horizontal, QObject::tr("ID C.Fidelite"));

    return model;
}

QSqlQueryModel * clientph::affichernom()
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select clients.IDC, physique.CIN,physique.NOM, physique.PRENOM, physique.NAISSANCE, clients.TEL,clients.ADRESSE,clients.EMAIL"
                    " ,clients.IDF from clients join physique "
                    "on clients.idc = physique.idc ORDER BY physique.NOM");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("CIN"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("DATE DE NAISSANCE"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("TELEPHONE"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("ADRESSE"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("EMAIL"));
    model->setHeaderData(8, Qt::Horizontal, QObject::tr("ID C.Fidelite"));

    return model;
}

QSqlQueryModel * clientph::afficherid()
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select clients.IDC, physique.CIN,physique.NOM, physique.PRENOM, physique.NAISSANCE, clients.TEL,clients.ADRESSE,clients.EMAIL"
                    " ,clients.IDF from clients join physique "
                    "on clients.idc = physique.idc ORDER BY physique.IDC");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("CIN"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("DATE DE NAISSANCE"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("TELEPHONE"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("ADRESSE"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("EMAIL"));
    model->setHeaderData(8, Qt::Horizontal, QObject::tr("ID C.Fidelite"));

    return model;
}

QSqlQueryModel * clientph::afficherdate()
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select clients.IDC, physique.CIN,physique.NOM, physique.PRENOM, physique.NAISSANCE, clients.TEL,clients.ADRESSE,clients.EMAIL"
                    " ,clients.IDF from clients join physique "
                    "on clients.idc = physique.idc ORDER BY physique.naissance");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("CIN"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("DATE DE NAISSANCE"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("TELEPHONE"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("ADRESSE"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("EMAIL"));
    model->setHeaderData(8, Qt::Horizontal, QObject::tr("ID C.Fidelite"));

    return model;
}

bool clientph::modifier(int i, int t, QString e, QString a, QString n, QString p, QDate nai)
{
    client :: modifier(i,e,a,t);

    QSqlQuery query;

    query.prepare("UPDATE physique SET  NOM = :nom, PRENOM = :prenom  , NAISSANCE = :nai WHERE IDC = :id") ;
    query.bindValue(":id", i);
    query.bindValue(":nom", n);
    query.bindValue(":prenom", p);
    query.bindValue(":nai", nai);

    return    query.exec();
}

QSqlQueryModel * clientph::afficherr(QString r)
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select clients.IDC, physique.CIN,physique.NOM, physique.PRENOM, physique.NAISSANCE, clients.TEL,clients.ADRESSE,clients.EMAIL"
                    " ,clients.IDF from clients join physique "
                    "on clients.idc = physique.idc "
                    "WHERE physique.cin LIKE '%"+r+"%' "
                    " OR physique.nom LIKE '%"+r+"%' "
                    " OR physique.prenom LIKE '%"+r+"%''");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("CIN"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("DATE DE NAISSANCE"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("TELEPHONE"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("ADRESSE"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("EMAIL"));
    model->setHeaderData(8, Qt::Horizontal, QObject::tr("ID C.Fidelite"));

    return model;
}




