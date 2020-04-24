#include "dialog.h"
#include "ui_dialog.h"
#include<qmessagebox.h>
#include"evenements.h"
#include "offres.h"
#include <QMediaPlayer>
#include <QItemSelectionModel>


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->tableView_3->setModel(tmp.afficher());
    ui->afficher3_3->setModel(tmp1.afficher());


}

Dialog::~Dialog()
{
    delete ui;
}
evenements e ;
offres o;

//afficher


void Dialog::on_bouttonPajouter_5_clicked()
{
      QMediaPlayer * music = new QMediaPlayer();
      connect(music, SIGNAL(positionChanged(qint64)), this, SLOT(positionChanged(qint64)));
      music->setMedia(QUrl::fromLocalFile("/Users/zouari sarra/Desktop/copie qt/rentcar/img/coolsong.mp3"));
      music->play();
      music->setVolume(50);
      music->play();

    ui->SW_3->setCurrentIndex(0);
}
//ajouter


void Dialog::on_bouttonPajouter_4_clicked()
{
    QMediaPlayer * music = new QMediaPlayer();
    connect(music, SIGNAL(positionChanged(qint64)), this, SLOT(positionChanged(qint64)));
    music->setMedia(QUrl::fromLocalFile("/Users/zouari sarra/Desktop/copie qt/rentcar/img/coolsong.mp3"));
    music->play();
    music->setVolume(50);
    music->play();

    ui->SW_3->setCurrentIndex(1);

}
//modifier
void Dialog::on_bouttonPmodifier_4_clicked()
{
    ui->SW_3->setCurrentIndex(2);
}
//mail
void Dialog::on_bouttonPmail_3_clicked()
{
    ui->SW_3->setCurrentIndex(3);
}
//statistique
void Dialog::on_bouttonPstatistique_4_clicked()
{
    ui->SW_3->setCurrentIndex(4);
}


//ajouter fonction
void Dialog::on_pushButton_15_clicked()
{
    int id = ui->lineEdit_id_3->text().toInt();
       QString nom= ui->lineEdit_nom_3->text();
       QString lieu= ui->lineEdit_lieu_3->text();
       QDateTime datedebut=ui->dateTimeEdit_13->dateTime();
       QDateTime datefin=ui->dateTimeEdit_14->dateTime();



     evenements e(id,nom,lieu,datedebut,datefin);
     bool test=e.ajouter();
     if(test)
          {

            ui->tableView_3->setModel(tmp.afficher());//refresh
           QMessageBox::information(nullptr, QObject::tr("Ajouter un evenement"), QObject::tr("Evenement ajouté.\n" "Click Cancel to exit."), QMessageBox::Cancel);

           }
     else
         QMessageBox::critical(nullptr, QObject::tr("Ajouter un evenement"), QObject::tr("Erreur !.\n" "Click Cancel to exit."), QMessageBox::Cancel);


}
//rechercher fonction
void Dialog::on_bouttonPrechercher_3_clicked()
{
    int id = ui->recherche_6->text().toInt(); //colone


    if( e.EvenementsisExiste(id) == false)
        QMessageBox::warning(this,"Erreur","evenements  n'existe pas");
    else
        ui->tableView_3->setModel(e.RechercherEvenements(id));
}
//trier fonction
void Dialog::on_trier_5_activated(int index)
{
         ui->tableView_3->setModel(e.trie_evenements(index));
}
//supprimer fonction
void Dialog::on_bouttonPsupprimer_3_clicked()
{

    int id=ui->lineEdit_6->text().toInt();
    bool test = e.supprimer(id);
    if(test)
    {ui->tableView_3->setModel(e.afficher());//refresh
        QMessageBox::information(this,"SUPPRIMER","evenement supprimee avec succés");;

    }
    else
        QMessageBox::warning(this,"erreur","erreur");
    ui->tableView_3->setModel(e.afficher());
}
//modifier fonction
void Dialog::on_afficherBevenement_8_clicked()
{
    bool test;

    test= e.Modifier_evenements(ui->idmodifier_3->text().toInt(),ui->nom_6->text(), ui->lieu_4->text(),ui->dateTimeEdit_15->dateTime(),ui->dateTimeEdit_16->dateTime() ) ;

    if (test)

     {

    QMessageBox::information(this,"Modifier","evenement Modifiee avec succés");
    ui->tableView_3->setModel(e.afficher());// refresh
    ui->SW_3->setCurrentIndex(0);


      }
    else
    QMessageBox::warning(this,"erreur","erreur");
}
//offres----------------------------------------------------------------------------------------------------------------
//afficher
void Dialog::on_pushButton_ajouter_4_clicked()
{   QMediaPlayer * music = new QMediaPlayer();
    connect(music, SIGNAL(positionChanged(qint64)), this, SLOT(positionChanged(qint64)));
    music->setMedia(QUrl::fromLocalFile("/Users/zouari sarra/Desktop/copie qt/rentcar/img/coolsong.mp3"));
    music->play();
    music->setVolume(50);
    music->play();

    ui->sw_3->setCurrentIndex(0);
}
//ajouter
void Dialog::on_pushButton_ajouter_3_clicked()
{
    QMediaPlayer * music = new QMediaPlayer();
    connect(music, SIGNAL(positionChanged(qint64)), this, SLOT(positionChanged(qint64)));
    music->setMedia(QUrl::fromLocalFile("/Users/zouari sarra/Desktop/copie qt/rentcar/img/coolsong.mp3"));
    music->play();
    music->setVolume(50);
    music->play();
    ui->sw_3->setCurrentIndex(1);

}
//modifier
void Dialog::on_modifierBoffre_3_clicked()
{
    ui->sw_3->setCurrentIndex(2);
}
//mail
void Dialog::on_mail_3_clicked()
{
   ui->sw_3->setCurrentIndex(3);
}
//stat
void Dialog::on_pushButton_16_clicked()
{
    ui->sw_3->setCurrentIndex(4);

}


//ajouter fonction
void Dialog::on_pushButton_ajouteroffres_3_clicked()
{

    int id = ui->lineEdit_7->text().toInt();
    QString nom= ui->lineEdit_8->text();
    QString description= ui->lineEdit_9->text();
    QDateTime datedebut=ui->dateTimeEdit_17->dateTime();
    QDateTime datefin=ui->dateTimeEdit_18->dateTime();



  offres o(id,nom,description,datedebut,datefin);
  bool test=o.ajouter();
  if(test)
{

      ui->afficher3_3->setModel(tmp1.afficher());
     QMessageBox::information(nullptr, QObject::tr("Ajouter un evenement"),
                  QObject::tr("Evenement ajouté.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter un evenement"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);
}
//modifier fonction
void Dialog::on_ajoutBmodifier_event_3_clicked()
{
    bool test;

    test= o.Modifier_offres(ui->id_4->text().toInt(),ui->nom_7->text(), ui->description_5->text(),ui->datee_7->dateTime(),ui->datee_8->dateTime() ) ;
//if( test1 == true)

    if (test)

     {

    QMessageBox::information(this,"Modifier","offre Modifiee avec succés");
    ui->afficher3_3->setModel(o.afficher());// refresh
    ui->sw_3->setCurrentIndex(0);


      }
    else
    QMessageBox::warning(this,"erreur","erreur");
   }
//rechercher fonction
void Dialog::on_pushButton_recherche_5_clicked()
{

    int id = ui->recherche_7->text().toInt(); //colone


    if( o.OffresisExiste(id) == false)
        QMessageBox::warning(this,"Erreur","offre n'existe pas");
    else
        ui->afficher3_3->setModel(o.RechercherOffres(id));
}
// trier fonction
void Dialog::on_trier_6_activated(int index)
{
    ui->afficher3_3->setModel(o.trie_offres(index));

}
//supprimer fonction
void Dialog::on_supprimer_5_clicked()
{
    int id=ui->idd_3->text().toInt();
    bool test = o.supprimer(id);
    if(test)
    {ui->afficher3_3->setModel(o.afficher());//refresh
        QMessageBox::information(this,"SUPPRIMER","offre supprimee avec succés");;

    }
    else
        QMessageBox::warning(this,"erreur","erreur");
    ui->afficher3_3->setModel(o.afficher());
}
