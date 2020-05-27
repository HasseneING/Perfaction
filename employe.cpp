#include "employe.h"
#include "conge.h"

//int id; QString nom; QString prenom; QString email; QDate dateNaiss;  QString numTel; QDate dateMajConge;int soldeConge;bool etat;
employe::employe()
{
    QDate date;
    dateMajConge=date.currentDate();
    soldeConge=0;
}

 employe::employe(QString nom,QString prenom,QString email,QDate dateNaiss,QString numTel,QDate dateMajConge,int soldeConge,bool etat)
{
    this->nom=nom;
    this->prenom=prenom;
    this->email=email;
    this->dateNaiss=dateNaiss;
    this->numTel=numTel;
     this->dateMajConge=dateMajConge;
     this->soldeConge=soldeConge;
     this->etat=etat;

}

 employe::employe(int id,QString nom,QString prenom,QString email,QDate dateNaiss,QString numTel,QDate dateMajConge,int soldeConge,bool etat)
{
     this->id=id;
    this->nom=nom;
    this->prenom=prenom;
    this->email=email;
    this->dateNaiss=dateNaiss;
    this->numTel=numTel;
     this->dateMajConge=dateMajConge;
     this->soldeConge=soldeConge;
    this->etat=etat;

}

bool employe::supprimer(int ID)
{
    int count=0;
    QSqlQuery query;
    QSqlQuery query1;
    QString res= QString::number(ID);
    query1.prepare("select id from employe where id =:id");
    query1.bindValue(":id", res);
    if (query1.exec())
    {
        while(query1.next()==true)
        {
            count++;
        }
        if(count==1)
        {
            query.prepare("Delete from employe where id=:id");
            query.bindValue(":id",res);
        }

    }
    return    query.exec();
}
bool employe::ajouter()
{
    QSqlQuery query;
     QString soldeCongeE= QString::number(soldeConge);

    //int id; QString nom; QString prenom; QString email; QDate dateNaiss;  QString numTel; QDate dateMajConge;int soldeConge;bool etat;

    query.prepare("INSERT INTO employe (id,nom,prenom,email,dateNaiss,numTel,dateMajConge,soldeConge,etat) "
                    "VALUES (seq_Employe.nextval,:nom,:prenom,:email,:dateNaiss,:numTel,:dateMajConge,:soldeConge,0)");

    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":email", email);
    query.bindValue(":dateNaiss", dateNaiss);
    query.bindValue(":numTel", numTel);
    query.bindValue(":dateMajConge", dateMajConge);
    query.bindValue(":soldeConge", soldeCongeE);
    return    query.exec();
}

bool employe::modifier()
{



    //int id; QString nom; QString prenom; QString email; QDate dateNaiss;  QString numTel; QDate dateMajConge;int soldeConge;bool etat;

    QSqlQuery query;
    QString id_e= QString::number(id);
    QString solde= QString::number(soldeConge);
    QString etatE= QString::number(etat);

   query.prepare("UPDATE employe SET nom=:nom,prenom=:prenom,email=:email,dateNaiss=:dateNaiss,numTel=:numTel, dateMajConge=:dateMajConge,soldeConge=:soldeConge ,etat=:etat WHERE ID=:ID ");
    query.bindValue(":ID", id_e);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":email", email);
    query.bindValue(":dateNaiss", dateNaiss);
    query.bindValue(":numTel", numTel);
    query.bindValue(":dateMajConge",dateMajConge);
    query.bindValue(":soldeConge",solde);
    query.bindValue(":etat",etatE);

    return    query.exec();
}



employe employe::getEmploye(int id)
{
    QSqlQuery query;
    query.prepare("select * from employe where id=:id");
    query.bindValue(":id", id);
    employe *e=new employe;
    query.exec();
    while (query.next())
    {
        //int id; QString nom; QString prenom; QString email; QDate dateNaiss;  QString numTel; QDate dateMajConge;int soldeConge;bool etat;
            e->setId(query.value(0).toInt());
            e->setNom(query.value(1).toString());
            e->setPrenom(query.value(2).toString());
            e->setEmail(query.value(3).toString());
            e->setDateNaiss(query.value(4).toDate());
            e->setNumTel(query.value(5).toString());
             e->setDateMajConge(query.value(6).toDate());
              e->setSoldeConge(query.value(7).toInt());
               e->setEtat(query.value(8).toBool());
    }
    return  (*e);
}
QSqlQueryModel * employe::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    //int id; QString nom; QString prenom; QString email; QDate dateNaiss;  QString numTel; QDate dateMajConge;int soldeConge;bool etat;

    model->setQuery("select * from employe");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Email"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Date de Naissance"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("numero de téléphone"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Maj congé"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("solde Congé"));
    model->setHeaderData(8, Qt::Horizontal, QObject::tr("etat"));


    return model;
}

//int id; QString nom; QString prenom; QString email; QDate dateNaiss;  QString numTel; QDate dateMajConge;int soldeConge;bool etat;

QSqlQueryModel *employe::rechercher( QString c)
{


    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * from employe where (employe.nom LIKE '"+c+"%') OR (employe.prenom LIKE '"+c+"%') OR (employe.id LIKE '"+c+"%') ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Email"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Date de Naissance"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("numero de téléphone"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Maj congé"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("solde Congé"));
    model->setHeaderData(8, Qt::Horizontal, QObject::tr("etat"));

    return model;
}
QSqlQueryModel * employe::Tri(int pos)
{
    QSqlQueryModel * model = new QSqlQueryModel;
    QSqlQuery * q= new QSqlQuery;

    switch (pos) {
        case 0:
        {
            q->prepare("SELECT * FROM employe ORDER BY id  ASC");
        }
        break;

        case 1:
        {
            q->prepare("SELECT * FROM employe ORDER BY id  DESC");

        }
        break;

        case 2:
        {
            q->prepare("SELECT * FROM employe ORDER BY dateNaiss  ASC");
        }
        break;
        case 3:
        {
            q->prepare("SELECT * FROM employe ORDER BY dateNaiss  DESC");

        }
        break;
        case 4:
        {
            q->prepare("SELECT * FROM employe ORDER BY nom  ASC");
        }
        break;
        case 5:
        {
            q->prepare("SELECT * FROM employe ORDER BY nom  DESC");

        }
        break;

    }

    q->exec();
    model->setQuery(*q);
    return model;
}

bool employe::MiseaJourSoldeConge()
{
    QSqlQuery query;
    QSqlQuery query1;
    QDate date;
    while (true)
    {
        if(dateMajConge.month()<date.currentDate().month())
        {
            dateMajConge=date.currentDate();
            query.prepare("UPDATE employe SET soldeConge=soldeConge+2");
            query1.prepare("UPDATE employe set dateMajConge=:dateMajConge ");
            query1.bindValue(":dateMajConge",dateMajConge);

        }
    }
}



bool employe::affecterCongeEmp( int id )
{
    employe e;
 //   QDate date;
    QSqlQuery query;
     QSqlQuery query1;
      conge c;
      QDate dateDebut =c.getconge(id).getDateDebut();
      QDate dateFin =c.getconge(id).getDateFin();
      //QDate dateRetour =c.getconge(id).getDateRetour();
     // int date = dateDebut.daysTo(dateFin);
      int date = dateFin.day()-dateDebut.day();

  //   int solde= 5- date;

    query.prepare("UPDATE employe SET soldeConge=:soldeConge, etat=:etat WHERE  employe.id=(select idemploye from conge where conge.id=:id) ");
    query1.prepare("UPDATE conge SET etat=:etat WHERE id=:id ");

    query.bindValue(":soldeConge",date);
    query.bindValue(":etat",1);
    query1.bindValue(":etat",1);

   query.bindValue(":id",id);
   query1.bindValue(":id",id);
   bool test=query.exec();
   bool test1=query1.exec();

return  (test & test1);

}


bool employe::refuserConge(int id)
{
//mailing

    QString idC= QString::number(id);
    QSqlQuery query;
    employe e;
    e.setEtat(false);
    query.prepare("UPDATE employe SET  etat=:etat WHERE ID=:ID");
    query.bindValue(":etat",e.getEtat());
    query.bindValue(":id",idC);
    //mail
    return    query.exec();
}


















