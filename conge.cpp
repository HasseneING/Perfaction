#include "conge.h"
#include "employe.h"

// conge(QDate,QDate,QDate,QString,bool,int,float,QDate);
conge::conge()
{
   // etat=0;
}
conge::conge(QDate dateDebut,QDate dateFin,QDate dateRetour,QString motif,bool etat,int idEmploye)
{
    this->dateFin=dateFin;
    this->dateDebut=dateDebut;
    this->dateRetour=dateRetour;
    this->motif=motif;
    this->etat=etat;
    this->idEmploye=idEmploye;
}
 bool conge::ajouterconge()
 {
     QSqlQuery query;
     //conge::conge(QDate dateDebut,QDate dateFin,QDate dateRetour,QString motif,bool etat,int idEmploye)
    QString idEmployeC= QString::number(idEmploye);
     QString etatC= QString::number(etat);
   query.prepare("INSERT INTO conge (id,dateDebut,dateFin,dateRetour,motif,etat,idEmploye) "
                         "VALUES (seq_conge.nextval,:dateDebut,:dateFin,:dateRetour,:motif,:etat,:idEmploye)");

     query.bindValue(":dateDebut", dateDebut);
     query.bindValue(":dateFin", dateFin);
     query.bindValue(":dateRetour", dateRetour);
     query.bindValue(":motif", motif);
     query.bindValue(":etat", etatC);
     query.bindValue(":idEmploye", idEmployeC);
     return    query.exec();
 }
bool conge::modifierconge()
{
    //int id;QDate dateDebut; QDate dateFin; QDate dateRetour;QString motif;bool etat; int idEmploye;
    QSqlQuery query;
    QString id_e= QString::number(id);
    QString idEmployeC= QString::number(idEmploye);
     QString etatC= QString::number(etat);
   query.prepare("UPDATE conge SET dateDebut=:dateDebut , dateFin=:dateFin , dateRetour=:dateRetour , motif=:motif , etat=:etat , idEmploye=:idEmploye WHERE ID=:ID");
    query.bindValue(":ID", id_e);
    query.bindValue(":dateDebut", dateDebut);
    query.bindValue(":dateFin", dateFin);
    query.bindValue(":dateRetour", dateRetour);
    query.bindValue(":motif", motif);
    query.bindValue(":etat", etatC);
    query.bindValue(":idEmploye", idEmployeC);

    return    query.exec();

}
bool conge::supprimerconge(int ID)
{
    int count=0;
    QSqlQuery query;
    QSqlQuery query1;
    QString res= QString::number(ID);
    query1.prepare("select id from conge where id = :id");
    query1.bindValue(":id", res);
    if (query1.exec())
    {
        while(query1.next()==true)
        {
            count++;
        }
        if(count==1)
        {
            query.prepare("Delete from conge where id=:id");
            query.bindValue(":id",res);
        }

    }
    return    query.exec();
}
conge conge::getconge(int id)
{
    QSqlQuery query;
    query.prepare("select * from conge where id=:id");
    query.bindValue(":id", id);
    conge *e=new conge;
    query.exec();
    while (query.next())
    {
       //int id ,QDate dateDebut,QDate dateFin,QDate dateRetour,QString motif,bool etat,int idEmploye,float soldeConge, QDate dateMaj)
            e->setID(query.value(0).toInt());
            e->setDateDebut(query.value(1).toDate());
            e->setDateFin(query.value(2).toDate());
            e->setDateRetour(query.value(3).toDate());
            e->setMotif(query.value(4).toString());
            e->setIdEmploye(query.value(6).toInt());
            e->setEtat(query.value(5).toInt());

    }
    return  (*e);
}
QSqlQueryModel * conge::afficherconge()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select conge.id, conge.datedebut , conge.datefin , conge.dateretour , conge.motif , conge.etat ,employe.id,employe.nom , employe.prenom   FROM employe  INNER JOIN conge on employe.id=conge.idEmploye");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id Congé"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("dateDebut"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("dateFin"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date de Retour"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Motif"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Etat"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Id employé"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(8, Qt::Horizontal, QObject::tr("Prenom"));




    return model;
}
QSqlQueryModel * conge::affichercongeEmp(QString ID)
{
    QSqlQueryModel * model= new QSqlQueryModel();
    QSqlQuery query;
    model->setQuery("select conge.id, conge.datedebut , conge.datefin , conge.dateretour , conge.motif , conge.etat FROM employe  INNER JOIN conge on employe.id=conge.idEmploye AND employe.id= '" +ID+ "' ");
   // query.bindValue(":id",ID);

    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Id Congé"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("dateDebut"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("dateFin"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Date de Retour"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("Motif"));
    model->setHeaderData(8, Qt::Horizontal, QObject::tr("Etat"));
return model;
}
QSqlQueryModel *conge::rechercher( QString c)
{

    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select employe.id,employe.nom , employe.prenom , conge.id, conge.datedebut , conge.datefin , conge.dateretour , conge.motif , conge.etat employe  INNER JOIN conge on employe.id=conge.idEmploye AND ((conge.id LIKE '"+c+"%')  OR (employe.nom LIKE '"+c+"%') OR (employe.prenom LIKE '"+c+"%'))");

    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Id Congé"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("dateDebut"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("dateFin"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Date de Retour"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("Motif"));
    model->setHeaderData(8, Qt::Horizontal, QObject::tr("Etat"));
    return model;

}
QSqlQueryModel * conge::Tri(int pos)
{
    QSqlQueryModel * model = new QSqlQueryModel;
    QSqlQuery * q= new QSqlQuery;
    switch (pos) {
        case 0:
        {
            q->prepare("select employe.id,employe.nom , employe.prenom , conge.id, conge.datedebut , conge.datefin , conge.dateretour , conge.motif , conge.etat employe  INNER JOIN conge on employe.id=conge.idEmploye ORDER BY conge.id ASC");
        }
        break;
        case 1:
        {
            q->prepare("select employe.id,employe.nom , employe.prenom , conge.id, conge.datedebut , conge.datefin , conge.dateretour , conge.motif , conge.etat employe  INNER JOIN conge on employe.id=conge.idEmploye ORDER BY conge.id DESC");
        }

    }


    q->exec();
    model->setQuery(*q);
    return model;
}























