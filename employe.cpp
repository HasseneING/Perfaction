#include "employe.h"

#include "conge.h"
#include<QDebug>
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

bool employe::modifier(int id)
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
    model->setQuery("select * from employe where (UPPER(employe.nom) LIKE UPPER('"+c+"%')) OR (UPPER(employe.prenom) LIKE UPPER('"+c+"%')) OR (employe.id LIKE '"+c+"%') ");
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

void employe::MiseaJourSoldeConge(int id)
{
   QString idS= QString::number(id);
    QSqlQuery query;
    QSqlQuery query1;
    QSqlQuery q;
    QDate date;
    q.prepare("select dateMajConge FROM employe where id='"+idS+"'");
    if (q.exec())
    {
       while (q.next())
       {
            QDate maj = q.value(0).toDate();
            if(maj.month()+1 == date.currentDate().month())
            {
                query.prepare("UPDATE employe SET soldeConge=soldeConge+2 where id='"+idS+"'");
                query1.prepare("UPDATE employe set dateMajConge=:dateMajConge where id='"+idS+"'");
                query1.bindValue(":dateMajConge",date.currentDate());
                query1.exec();
                query.exec();

            }
       }
    }
}


void employe::MiseaJourConge()
{
    QSqlQuery query;
    QSqlQuery q;
    QDate date;
    q.prepare("select * FROM employe inner join conge on conge.idemploye=employe.id where employe.etat=1");
    if (q.exec())
    {
       while (q.next())
       {
            QDate date_fin = q.value(12).toDate();
            QString id= QString::number(q.value(0).toInt());
            QString etatE= QString::number(0);

            if(date_fin <= date.currentDate())
            {
                query.prepare("UPDATE employe SET etat=:etat where id=:id");
                query.bindValue(":etat",etatE);
                query.bindValue(":id",id);
                query.exec();
            }
       }
    }
}



bool employe::affecterCongeEmp(int id)
{
    QSqlQuery query;
    QString idS= QString::number(id);
     QSqlQuery query1;
     QSqlQuery q;
     QSqlQuery q1;
     QSqlQuery q2;
      int solde=0;
      int soldeTotal=0;


            q.prepare("SELECT datedebut, dateFIN,idemploye FROM conge WHERE id='"+idS+"' ");
            if (q.exec())
            {
               while (q.next())
               {
                    QDate dateD = q.value(0).toDate();
                    QDate dateF = q.value(1).toDate();
                    solde= dateF.day()-dateD.day();

               }
            }

            q1.prepare("SELECT employe.soldeConge FROM employe WHERE  employe.id=(select conge.idemploye from conge where id='"+idS+"')");


            if (q1.exec())
            {
               while (q1.next())
               {
                     soldeTotal = q1.value(0).toInt();

               }
            }
        soldeConge=(soldeTotal-solde);
        query.prepare("UPDATE employe SET etat=:etat,soldeConge=:soldeConge WHERE  employe.id=(select conge.idemploye from conge where id=:id) ");
        query1.prepare("UPDATE conge SET etat=:etat WHERE id=:id ");
        query.bindValue(":soldeConge",soldeConge);
        query.bindValue(":etat",1);
       query1.bindValue(":etat",1);
       query.bindValue(":id", idS);
       query1.bindValue(":id", idS);
         bool test=query.exec();
         bool test1=query1.exec();
         qDebug() << "fct1!"<<test ;
         qDebug() << "fct2!"<<test1 ;
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
