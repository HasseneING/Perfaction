#include "compte.h"

compte::compte()
{

}
compte::compte(int id,QString login, QString mdp,QString role,int idEmploye)
{
    this->id=id;
    this->login=login;
    this->mdp=mdp;
    this->role=role;
    this->idEmploye=idEmploye;
}
compte::compte(QString login, QString mdp,QString role,int idEmploye)
{
    this->login=login;
    this->mdp=mdp;
    this->role=role;
    this->idEmploye=idEmploye;
}
bool compte::ajouterCompte()
{
QSqlQuery query;
QString idEmployeC= QString::number(idEmploye);

query.prepare("INSERT INTO compte (id,login,mdp,role,idEmploye) "
                    "VALUES (seq_Compte.nextval,:login,:mdp,:role,:idEmploye)");

query.bindValue(":login", login);
query.bindValue(":mdp", mdp);
query.bindValue(":role", role);
query.bindValue(":idEmploye", idEmployeC);
return    query.exec();

}
QSqlQueryModel * compte::afficherCompte()
{
    QSqlQueryModel * model= new QSqlQueryModel();
//idcompte, login , mot de passe,role,nom,prenom,idEmp
    model->setQuery("select compte.id,compte.login,compte.mdp,compte.role,employe.nom,employe.prenom,employe.id FROM employe  INNER JOIN compte on employe.id=compte.idEmploye");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id Compte"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr(" Login"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Mot de passe"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Role"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Prenom"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("id Employe"));


    return model;
}
bool compte::supprimerCompte(int ID)
{
    int count=0;
    QSqlQuery query;
    QSqlQuery query1;
    QString res= QString::number(ID);
    query1.prepare("select ID from compte where ID = :id");
    query1.bindValue(":id", res);
    if (query1.exec())
    {
        while(query1.next()==true)
                               {

                                   count++;

                               }
                               if(count==1)
                               {
                                    query.prepare("Delete from compte where ID=:id");
                                    query.bindValue(":id",res);
                               }


    }
    return    query.exec();
}
bool compte::modifierCompte()
{
    //int id, QString login , QString mdp, QString role ,int idemploye , int etat

    QSqlQuery query;
    QString idC= QString::number(id);
    QString idEmployeC= QString::number(idEmploye);

    query.prepare("UPDATE compte SET login=:login,mdp=:mdp,role=:role , idEmploye=:idEmploye where ID=:ID");
    query.bindValue(":ID", idC);
    query.bindValue(":login", login);
    query.bindValue(":mdp", mdp);
    query.bindValue(":role", role);
    query.bindValue(":idEmploye", idEmployeC);
    return    query.exec();

}

compte compte::getCompte(int id)
{
    compte *p = new compte();
   QSqlQuery q;
    q.prepare("SELECT * from compte where ID=:id");
    q.bindValue(":id",id);
    q.exec();

    while (q.next()) {
            p->setID(q.value(0).toInt());
            p->setLogin(q.value(1).toString());
            p->setMdp(q.value(2).toString());
            p->setRole(q.value(3).toString());
            p->setIdEmploye(q.value(4).toInt());

        }
return *p;
}
QSqlQueryModel *compte::rechercher( QString c)
{

    //int id;QString nom;QString prenom;QString email;QDate dateNaiss;int numTel;

    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select compte.id,compte.login,compte.mdp,compte.role,employe.nom,employe.prenom,employe.id FROM employe INNER JOIN compte ON employe.id=compte.idEmploye AND ((UPPER(compte.login) LIKE UPPER('"+c+"%')) OR (compte.id LIKE '"+c+"%') OR (UPPER(employe.nom) LIKE UPPER('"+c+"%')) OR (UPPER(employe.prenom) LIKE UPPER('"+c+"%')) )");


    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id employé"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr(" id Compte"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("login"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("mot de passe"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("role"));


    return model;

}



QSqlQueryModel * compte::Tri(int pos)
{
    QSqlQueryModel * model = new QSqlQueryModel;
    QSqlQuery * q= new QSqlQuery;
    switch (pos) {
        case 0:
        {
            q->prepare("select compte.id,compte.login,compte.mdp,compte.role,employe.nom,employe.prenom,employe.id FROM employe  INNER JOIN compte on employe.id=compte.idEmploye ORDER BY Compte.id ASC");
        }
        break;
        case 1:
        {
            q->prepare("select compte.id,compte.login,compte.mdp,compte.role,employe.nom,employe.prenom,employe.id FROM employe  INNER JOIN compte on employe.id=compte.idEmploye ORDER BY Compte.id DESC");
        }

    }


    q->exec();
    model->setQuery(*q);
    return model;
}
