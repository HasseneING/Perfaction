#include "client.h"

clientmo::clientmo()
{

}

clientmo::clientmo(int i, int t, QString e, QString a, QString nom_s, QString p, int code) : client(i,e,a,t)
{
    nom_soc = nom_s;
    codef = code;
    prop = p;
}

bool clientmo::ajouter()
{
    QSqlQuery query;
    query.prepare("INSERT INTO MORAL (NOM_SOC,IDC, CODE_FISC, PROP) "
                  "VALUES (:nom, :id ,:code, :prop)");
    query.bindValue(":nom", nom_soc);
    query.bindValue(":code", codef);
    query.bindValue(":prop", prop);
    query.bindValue(":id", idc);


    return    query.exec();
}

QSqlQueryModel * clientmo::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select clients.IDC,moral.nom_soc,moral.code_fisc,moral.prop,clients.TEL,clients.ADRESSE,clients.email,clients.idf "
                    "from clients join moral on clients.idc = moral.idc");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM DE LA SOCIETE"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("CODE FISCALE"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("PROPRIETAIRE"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("TELEPHONE"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("ADRESSE"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("EMAIL"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("IDF "));

    return model;
}

QSqlQueryModel * clientmo::affichernom()
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select clients.IDC,moral.nom_soc,moral.code_fisc,moral.prop,clients.TEL,clients.ADRESSE,clients.email,clients.idf "
                    "from clients join moral on clients.idc = moral.idc "
                    "ORDER BY moral.NOM_SOC ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM DE LA SOCIETE"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("CODE FISCALE"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("PROPRIETAIRE"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("TELEPHONE"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("ADRESSE"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("EMAIL"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("IDF "));

    return model;
}

QSqlQueryModel * clientmo::afficherid()
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select clients.IDC,moral.nom_soc,moral.code_fisc,moral.prop,clients.TEL,clients.ADRESSE,clients.email,clients.idf "
                    "from clients join moral on clients.idc = moral.idc "
                    "ORDER BY moral.IDC ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM DE LA SOCIETE"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("CODE FISCALE"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("PROPRIETAIRE"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("TELEPHONE"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("ADRESSE"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("EMAIL"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("IDF "));

    return model;
}

QSqlQueryModel * clientmo::afficherprop()
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select clients.IDC,moral.nom_soc,moral.code_fisc,moral.prop,clients.TEL,clients.ADRESSE,clients.email,clients.idf "
                    "from clients join moral on clients.idc = moral.idc "
                    "ORDER BY moral.prop ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM DE LA SOCIETE"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("CODE FISCALE"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("PROPRIETAIRE"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("TELEPHONE"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("ADRESSE"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("EMAIL"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("IDF "));

    return model;
}

bool clientmo::supprimer(int id)
{
    client::supprimer(id);

    QSqlQuery query;

    query.prepare("Delete from MORAL where IDC = :id ");
    query.bindValue(":id", id);

    return    query.exec();
}

bool clientmo::modifier(int i, int t, QString e, QString a, QString p, int code)
{
    client :: modifier(i,e,a,t);

    QSqlQuery query;

    query.prepare("UPDATE moral SET  CODE_FISC = :code , PROP = :prop WHERE IDC = :id") ;
    query.bindValue(":id", i);
    query.bindValue(":prop", p);
    query.bindValue(":code", code);

    return    query.exec();
}

QSqlQueryModel * clientmo::afficherr(QString r)
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select clients.IDC,moral.nom_soc,moral.code_fisc,moral.prop,clients.TEL,clients.ADRESSE,clients.email,clients.idf "
                    "from clients join moral on clients.idc = moral.idc "
                    "WHERE moral.NOM_SOC LIKE '%"+r+"%' "
                    " OR moral.code_fisc LIKE '%"+r+"%' "
                    " OR moral.prop LIKE '%"+r+"%' ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM DE LA SOCIETE"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("CODE FISCALE"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("PROPRIETAIRE"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("TELEPHONE"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("ADRESSE"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("EMAIL"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("IDF "));

    return model;
}








