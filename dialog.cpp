#include "dialog.h"
#include "ui_dialog.h"
#include <QModelIndex>

#include "drilldownchart.h"
#include "drilldownslice.h"
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QLegend>
#include <QtCharts/QPieSeries>
#include <QSizeF>

#include "QTextEdit"
#include <QMessageBox>
#include <QValidator>
#include <QPixmap>
#include "chart.h"
#include <iostream>
#include "smtp.h"
#include "QPdfWriter"
#include "QPainter"
#include <QPrinter>
#include "QDebug"
#include "QStyle"


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    init();
    init2(); //amine
    init3();
    //zohra
    initZohra();
    connect(ui->accepterConge_2, SIGNAL(clicked()),this, SLOT(sendMail()));
    //fin zohra
}

void Dialog:: init()
{
    ui->setupUi(this);

    ui->stackedMain->setCurrentIndex(0);
    ui->stacked_location->setCurrentIndex(0);
    ui->stacked_reservation->setCurrentIndex(0);

    ui->table_loca->setModel(tmp.afficher());
    ui->table_res->setModel(res.afficher());

    ui->loc_kmD->setValidator( new QIntValidator(0,999999,this) );
    ui->loc_km_d->setValidator( new QIntValidator(0,999999,this) );
    ui->loc_km_a->setValidator( new QIntValidator(0,999999,this) );
    ui->loc_RaP->setValidator( new QDoubleValidator(0,9999,3,this));
    ui->loc_caution->setValidator( new QDoubleValidator(0,9999,3,this));
    ui->loc_rap->setValidator( new QDoubleValidator(0,9999,3,this));
    ui->loc_Caution->setValidator( new QDoubleValidator(0,9999.999,3,this));

    ui->res_IdClient->setValidator(new QIntValidator(1,9999,this));
    ui->res_IdRes->setValidator(new QIntValidator(1,9999,this));
    ui->loc_idLoc->setValidator(new QIntValidator(1,9999,this));
    ui->loc_idloc->setValidator(new QIntValidator(1,9999,this));
    ui->loc_idres->setValidator(new QIntValidator(1,9999,this));

    ui->table_res->setSortingEnabled(true);
    ui->table_res->sortByColumn(0, Qt::AscendingOrder);
}

void Dialog::init2()
{
    ui->table_assu->setModel(assu.afficher());
    ui->table_Vign->setModel(vign.afficher());
    ui->table_Vis->setModel(vis.afficher());
//////////////////////////////////////////////////////////////////////
    QSqlQuery q;
    q.prepare("Select count(*) from voitures v inner join assurances a on "
              "v.matricule=a.matricule where current_date >= a.date_fin and a.courante=1");
    q.exec();q.next();
    ui->rAssu->setText(q.value(0).toString());

    q.prepare("Select count(*) from voitures v inner join assurances a on "
              "v.matricule=a.matricule where a.date_fin > current_date and "
              "a.date_fin < add_months(current_date,1) and a.courante=1");
    q.exec();q.next();
    ui->oAssu->setText(q.value(0).toString());

    q.prepare("Select count(*) from voitures v inner join assurances a on "
              "v.matricule=a.matricule where a.date_fin > add_months(current_date,1) "
              "and a.courante=1");
    q.exec();q.next();
    ui->vAssu->setText(q.value(0).toString());
//////////////////////////////////////////////////////////////////////
    QSqlQuery q2;
    q2.prepare("Select count(*) from voitures v inner join visite vi on "
              "v.matricule=vi.matricule where current_date >= vi.date_exp and vi.courante=1");
    q2.exec();q2.next();
    ui->rVis->setText(q2.value(0).toString());

    q2.prepare("Select count(*) from voitures v inner join visite vi on "
              "v.matricule=vi.matricule where vi.date_exp > current_date and "
              "vi.date_exp < add_months(current_date,1) and vi.courante=1");
    q2.exec();q2.next();
    ui->oVis->setText(q2.value(0).toString());

    q2.prepare("Select count(*) from voitures v inner join visite vi on "
              "v.matricule=vi.matricule where vi.date_exp > add_months(current_date,1) "
              "and vi.courante=1");
    q2.exec();q2.next();
    ui->vVis->setText(q2.value(0).toString());
//////////////////////////////////////////////////////////////////////
    QSqlQuery q3;
    q3.prepare("Select count(*) from voitures v inner join vignette vi on "
              "v.matricule=vi.matricule where current_date >= vi.date_exp and vi.courante=1");
    q3.exec();q3.next();
    ui->rVign->setText(q3.value(0).toString());

    q3.prepare("Select count(*) from voitures v inner join vignette vi on "
              "v.matricule=vi.matricule where vi.date_exp > current_date and "
              "vi.date_exp < add_months(current_date,1) and vi.courante=1");
    q3.exec();q3.next();
    ui->oVign->setText(q3.value(0).toString());

    q3.prepare("Select count(*) from voitures v inner join vignette vi on "
              "v.matricule=vi.matricule where vi.date_exp > add_months(current_date,1) "
              "and vi.courante=1");
    q3.exec();q3.next();
    ui->vVign->setText(q3.value(0).toString());
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_afficher_loc_clicked()
{
    ui->table_loca->setModel(tmp.afficher());
    ui->stacked_location->setCurrentIndex(0);

}

void Dialog::on_afficher_loc_2_clicked()
{
    ui->stacked_location->setCurrentIndex(0);
    ui->table_loca->setModel(tmp.afficher());
}

void Dialog::on_ajouter_loc_clicked()
{
    ui->stacked_location->setCurrentIndex(1);
    ui->Res_tableView->setModel(res.afficher());
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT ID_RES FROM RESERVATION WHERE ETAT=0");
    ui->loc_idRes_comboBox->setModel(model);

}

void Dialog::on_modifier_loc_clicked()
{
    QModelIndexList selection = ui->table_loca->selectionModel()->selectedRows(0);

    if (!selection.empty()) {

        QModelIndex idIndex = selection.at(0);
        QString id = idIndex.data().toString();

        ui->loc_idloc->setText(id);

        QSqlQuery qry;
        qry.prepare("SELECT * FROM locations WHERE IDLOC='"+id+"' ");
        if (qry.exec())
        {
            while (qry.next())
            {
                ui->loc_idres->setText(qry.value(1).toString());
                ui->loc_km_d->setText(qry.value(2).toString());
                ui->loc_km_a->setText(qry.value(3).toString());
                ui->loc_carbD_comboBox_2->setCurrentText(qry.value(4).toString());
                ui->loc_carbA_comboBox->setCurrentText(qry.value(5).toString());
                ui->loc_Caution->setText(qry.value(6).toString());
                ui->loc_rap->setText(qry.value(7).toString());
            }
        }

        ui->stacked_location->setCurrentIndex(2);
    } else {
        QMessageBox::information(this, tr("Modification location"),
                                 tr("Selectionnez la location que vous voulez Modifier."));
    }
}

void Dialog::on_supprimer_loc_clicked()
{
    QModelIndexList selection = ui->table_loca->selectionModel()->selectedRows(0);

    if (!selection.empty()) {
        QModelIndex idIndex = selection.at(0);
        double id = idIndex.data().toDouble();
        QString idres = idIndex.sibling(idIndex.row(), 1).data().toString();
        QString idc = idIndex.sibling(idIndex.row(), 2).data().toString();
        QString mat = idIndex.sibling(idIndex.row(), 3).data().toString();

        QMessageBox::StandardButton button;
        button = QMessageBox::question(this, tr("Suppression location"),
                                       QString(tr("Etes-vous sûr de vouloir supprimer " \
                                                  "la location '%1' de la voiture '%2' pour le client '%3'?"))
                                              .arg(id).arg(mat).arg(idc),
                                       QMessageBox::Yes | QMessageBox::No);

        if (button == QMessageBox::Yes) {
            QSqlQuery qe;
            qe.prepare("UPDATE RESERVATION SET ETAT=0 WHERE ID_RES='"+idres+"'");
            qe.exec();

           QString ids=QString::number(id);
            QSqlQuery q;
            q.prepare("delete from locations where IDLOC='"+ids+"'");
            q.exec();

        }
    } else {
        QMessageBox::information(this, tr("Suppression location"),
                                 tr("Selectionnez la location que vous voulez supprimer."));
    }
    ui->table_loca->setModel(tmp.afficher());

}


void Dialog::on_valider_ajout_clicked()
{
    double idLoc=ui->loc_idLoc->text().toDouble();
    double idRes=ui->loc_idRes_comboBox->currentText().toDouble();
    double km=ui->loc_kmD->text().toDouble();
    QString carbD=ui->loc_carbD_comboBox->currentText();
    double caution=ui->loc_caution->text().toDouble();
    double RaP=ui->loc_RaP->text().toDouble();


    QMessageBox msg;
    Location l(idLoc,idRes,km,0,carbD,"0",caution,RaP);
    if(l.ajouter())
    {
        msg.setText("Ajout avec succes.");
        msg.exec();
    }
    else
    {
        msg.setText("Echec de l'ajout.");
        msg.exec();
    }
    ui->stacked_location->setCurrentIndex(0);
    ui->table_loca->setModel(tmp.afficher());

}


void Dialog::on_valider_modif_clicked()
{
    double idloc=ui->loc_idloc->text().toDouble();
    double idres=ui->loc_idres->text().toDouble();
    double kmD=ui->loc_km_d->text().toDouble();
    double kmA=ui->loc_km_a->text().toDouble();
    QString carbD=ui->loc_carbD_comboBox_2->currentText();
    QString carbA=ui->loc_carbA_comboBox->currentText();
    double caution=ui->loc_Caution->text().toDouble();
    double rap=ui->loc_rap->text().toDouble();


    QMessageBox msg;
    Location l(idloc,idres,kmD,kmA,carbD,carbA,caution,rap);
    if(l.modifier_location())
    {
        msg.setText("Modification avec succes.");
        msg.exec();
    }
    else
    {
        msg.setText("Echec de la modification.");
        msg.exec();
    }
    ui->stacked_location->setCurrentIndex(0);
}

void Dialog::on_rafraichir_clicked()
{
    ui->table_loca->setModel(tmp.afficher());
}

void Dialog::on_recherche_textChanged(const QString &arg1)
{
    if (arg1=="")
        ui->table_loca->setModel(tmp.afficher());
   else
       this->ui->table_loca->setModel(tmp.rechercher(arg1));
}

void Dialog::on_rafraichir_res_clicked()
{
    ui->table_res->setModel(res.afficher());
}

void Dialog::on_ajouter_res_clicked()  //icon ajouter
{

    //remplir combobox client
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("(SELECT CONCAT(CONCAT(IDC,' '),CONCAT(CONCAT(NOM, ' '),PRENOM)) AS aff FROM PHYSIQUE) UNION (SELECT CONCAT(CONCAT(IDC,' '),CONCAT(CONCAT(NOM_SOC, ' de '),PROP)) AS aff FROM MORAL)");
    ui->res_IdClient_comboBox->setModel(model);

    QString tmp2=ui->res_IdClient_comboBox->currentText();
    ui->res_IdClient->setText(tmp2.mid(0,tmp2.indexOf(' ')));


    //remplir combobox voiture
    QSqlQueryModel *model2 = new QSqlQueryModel;
    model2->setQuery("SELECT MATRICULE FROM VOITURES");
    ui->res_mat_comboBox->setModel(model2);


    ui->stacked_reservation->setCurrentIndex(1);

}

void Dialog::on_modifier_res_clicked() //icon modifier
{
    QModelIndexList selection = ui->table_res->selectionModel()->selectedRows(0);

    if (!selection.empty()) {

        QModelIndex idIndex = selection.at(0);
        QString IDRES = idIndex.data().toString();

        ui->res_IDRes->setText(IDRES);

        QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery("(SELECT CONCAT(CONCAT(IDC,' '),CONCAT(CONCAT(NOM, ' '),PRENOM)) "
                        "AS aff FROM PHYSIQUE) UNION (SELECT CONCAT(CONCAT(IDC,' '),"
                        "CONCAT(CONCAT(NOM_SOC, ' de '),PROP)) AS aff FROM MORAL)");
        ui->res_IdClient_comboBox_3->setModel(model);

        QSqlQueryModel *model3 = new QSqlQueryModel;
        model3->setQuery("SELECT MATRICULE FROM VOITURES");
        ui->res_mat_comboBox_3->setModel(model3);

        QSqlQuery query;
        query.prepare("SELECT IDCLIENT,MATRICULE,DATE_DEPART,DATE_ARRIVEE,MONTANT_HT,TOTAL_TTC,"
                      "REMISE,TOTAL_G,ETAT "
                      "FROM RESERVATION WHERE ID_RES='"+IDRES+"'");
        query.exec();
        query.next();
        QString IDC=query.value(0).toString();
        QString Mat=query.value(1).toString();
        QDateTime dateD=query.value(2).toDateTime();
        QDateTime dateA=query.value(3).toDateTime();
        QString totalht=query.value(4).toString();
        QString totalttc=query.value(5).toString();
        QString totremise=query.value(6).toString();
        QString totalg=query.value(7).toString();

            //set client
        QSqlQuery query2;
        query2.prepare("SELECT NOM,PRENOM FROM PHYSIQUE WHERE IDC='"+IDC+"'");

        if(query2.exec() && query2.next())
        {
            QString q=query.value(0).toString()+" "+query2.value(0).toString()+" "+query2.value(1).toString();
            ui->res_IdClient_comboBox_3->setCurrentText(q);

        }
        else
        {
            query2.prepare("SELECT NOM_SOC,PROP FROM MORAL WHERE IDC='"+IDC+"'");
            query2.exec();
            query2.next();
            QString q=query.value(0).toString()+" "+query2.value(0).toString()+" de "+query2.value(1).toString();
            ui->res_IdClient_comboBox_3->setCurrentText(q);
        }

            //set voiture
        QSqlQuery query3;
        query3.prepare("SELECT MARQUE,MODELE,KILOMETRAGE,PRIX_J,PRIX_S,PRIX_M FROM VOITURES WHERE MATRICULE='"+Mat+"'");
        query3.exec();
        query3.next();
        ui->res_mat_comboBox_3->setCurrentText(Mat);

            //set dates
        ui->res_dateDep_3->setDateTime(dateD);
        ui->res_dateAr_3->setDateTime(dateA);

            //set devis
        ui->res_totalHT_3->setText(totalht);
        ui->res_totalTTC_3->setText(totalttc);
        ui->res_totRemise_3->setText(totremise);
        ui->res_totalG_3->setText(totalg);
        ui->res_tva_3->clear();
        ui->res_remise_3->clear();

        ui->stacked_reservation->setCurrentIndex(2);
    } else {
        QMessageBox::information(this, tr("Modification réservation"),
                                 tr("Selectionnez la réservation que vous voulez Modifier."));
    }

}

void Dialog::on_afficher_res_clicked()
{
    ui->table_res->setModel(res.afficher());
    ui->stacked_reservation->setCurrentIndex(0);
}

void Dialog::on_res_IdClient_comboBox_currentIndexChanged(const QString &arg1)
{
    QString id=arg1.mid(0,arg1.indexOf(' '));
    ui->res_IdClient->setText(id);

    QSqlQuery qry;
    qry.prepare("SELECT NOM,PRENOM FROM PHYSIQUE WHERE IDC='"+id+"' ");
    if (qry.exec() && qry.next())
    {
        qry.previous();
        while (qry.next())
        {
            ui->res_societeCl->clear();
            ui->res_nomCl->setText(qry.value(0).toString());
            ui->res_prenomCl->setText(qry.value(1).toString());
        }
    }
    else
    {
        qry.prepare("SELECT NOM_SOC FROM MORAL WHERE IDC='"+id+"' ");
        if(qry.exec())
        {
            while(qry.next())
            {
                ui->res_societeCl->setText(qry.value(0).toString());
                ui->res_nomCl->clear();
                ui->res_prenomCl->clear();
            }
        }
    }
}

void Dialog::on_res_dateDep_dateChanged(const QDate &date)
{
    QDate Ar=ui->res_dateAr->date();
    QString res=QString::number(date.daysTo(Ar));
    ui->res_nbJ->setText(res);
}

void Dialog::on_res_dateAr_dateChanged(const QDate &date)
{
    QDate Dep=ui->res_dateDep->date();
    QString res=QString::number(Dep.daysTo(date));
    ui->res_nbJ->setText(res);
}

void Dialog::on_res_calculer_clicked()
{
    if(ui->res_dateAr->dateTime()>ui->res_dateDep->dateTime())
    {
        int nbj=ui->res_nbJ->text().toInt();
        QString tot;
        if(nbj<7)
        {
            double prix=ui->res_prixJ->text().toDouble();
            tot=QString::number(prix*nbj);
            ui->res_totalHT->setText(tot);
        }
        else if (nbj<30)
        {
            double prix=ui->res_prixS->text().toDouble();
            tot=QString::number(prix*nbj/7);
            ui->res_totalHT->setText(tot);
        }
        else
        {
            double prix=ui->res_prixM->text().toDouble();
            tot=QString::number(prix*nbj/30);
            ui->res_totalHT->setText(tot);
        }

        double tot2=ui->res_totalHT->text().toDouble();

        QString tva=QString::number(tot2*0.19);
        ui->res_tva->setText(tva);

        double tva2=ui->res_tva->text().toDouble();

        QString tott=QString::number(tot2+tva2);
        ui->res_totalTTC->setText(tott);

        double tott2=ui->res_totalTTC->text().toDouble();

        double remise=10; // a regler apres
        QString remise2=QString::number(remise);
        ui->res_remise->setText(remise2);

        QString remisetot=QString::number(tott2*remise/100);
        ui->res_totRemise->setText(remisetot);

        double remisetot2=ui->res_totRemise->text().toDouble();

        QString totg=QString::number(tott2-remisetot2);
        ui->res_totalG->setText(totg);
    } else {
        QMessageBox::information(this, tr("Erreur"),
                                 tr("Dates erronées."));
    }
}

void Dialog::on_res_mat_comboBox_currentIndexChanged(const QString &arg1)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM VOITURES WHERE MATRICULE='"+arg1+"' ");

    if (query.exec())
    {
        while (query.next())
        {
            ui->res_marque->setText(query.value(1).toString());
            ui->res_modele->setText(query.value(2).toString());
            ui->res_compt->setText(query.value(5).toString());
            ui->res_prixJ->setText(query.value(9).toString());
            ui->res_prixS->setText(query.value(10).toString());
            ui->res_prixM->setText(query.value(11).toString());
        }
    }
}

void Dialog::on_recherche_res_textChanged(const QString &arg1)
{
    if (arg1=="")
        ui->table_res->setModel(res.afficher());
   else
       this->ui->table_res->setModel(res.rechercher(arg1));
}

void Dialog::on_valider_ajout_res_clicked()
{
    double idRes=ui->res_IdRes->text().toDouble();
    QString matricule=ui->res_mat_comboBox->currentText();
    double idClient=ui->res_IdClient->text().toDouble();
    QDateTime dateDep=ui->res_dateDep->dateTime();
    QDateTime dateAr=ui->res_dateAr->dateTime();
    double totalHT=ui->res_totalHT->text().toDouble();
    double totalTTC=ui->res_totalTTC->text().toDouble();
    double remise=ui->res_totRemise->text().toDouble();
    double totalG=ui->res_totalG->text().toDouble();
    double etat=0;

    QMessageBox msg;
    reservation r(idRes,matricule,idClient,dateDep,dateAr,totalHT,totalTTC,remise,totalG,etat);
    if(r.ajouter())
    {
        msg.setText("Ajout avec succes.");
        msg.exec();
    }
    else
    {
        msg.setText("Echec de l'ajout.");
        msg.exec();
    }
    ui->table_res->setModel(res.afficher());
    ui->stacked_reservation->setCurrentIndex(0);


}



void Dialog::on_res_IdClient_comboBox_3_currentIndexChanged(const QString &arg1)
{
    QString id=arg1.mid(0,arg1.indexOf(' '));
    ui->res_IdClient_3->setText(id);

    QSqlQuery qry;
    qry.prepare("SELECT NOM,PRENOM FROM PHYSIQUE WHERE IDC='"+id+"' ");
    if (qry.exec() && qry.next())
    {
        qry.previous();
        while (qry.next())
        {
            ui->res_societeCl_3->clear();
            ui->res_nomCl_3->setText(qry.value(0).toString());
            ui->res_prenomCl_3->setText(qry.value(1).toString());
        }
    }
    else
    {
        qry.prepare("SELECT NOM_SOC FROM MORAL WHERE IDC='"+id+"' ");
        if(qry.exec())
        {
            while(qry.next())
            {
                ui->res_societeCl_3->setText(qry.value(0).toString());
                ui->res_nomCl_3->clear();
                ui->res_prenomCl_3->clear();
            }
        }
    }
}

void Dialog::on_res_mat_comboBox_3_currentIndexChanged(const QString &arg1)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM VOITURES WHERE MATRICULE='"+arg1+"' ");

    if (query.exec())
    {
        while (query.next())
        {
            ui->res_marque_3->setText(query.value(1).toString());
            ui->res_modele_3->setText(query.value(2).toString());
            ui->res_compt_3->setText(query.value(5).toString());
            ui->res_prixJ_3->setText(query.value(9).toString());
            ui->res_prixS_3->setText(query.value(10).toString());
            ui->res_prixM_3->setText(query.value(11).toString());
        }
    }
}

void Dialog::on_res_dateDep_3_dateChanged(const QDate &date)
{
    QDate Ar=ui->res_dateAr_3->date();
    QString res=QString::number(date.daysTo(Ar));
    ui->res_nbJ_3->setText(res);
}

void Dialog::on_res_dateAr_3_dateChanged(const QDate &date)
{
    QDate Dep=ui->res_dateDep_3->date();
    QString res=QString::number(Dep.daysTo(date));
    ui->res_nbJ_3->setText(res);
}

void Dialog::on_res_calculer_3_clicked()
{
    if(ui->res_dateAr_3->dateTime()>ui->res_dateDep_3->dateTime())
    {
        int nbj=ui->res_nbJ_3->text().toInt();
        QString tot;
        if(nbj<7)
        {
            double prix=ui->res_prixJ_3->text().toDouble();
            tot=QString::number(prix*nbj);
            ui->res_totalHT_3->setText(tot);
        }
        else if (nbj<30)
        {
            double prix=ui->res_prixS_3->text().toDouble();
            tot=QString::number(prix*nbj/7);
            ui->res_totalHT_3->setText(tot);
        }
        else
        {
            double prix=ui->res_prixM_3->text().toDouble();
            tot=QString::number(prix*nbj/30);
            ui->res_totalHT_3->setText(tot);
        }

        double tot2=ui->res_totalHT_3->text().toDouble();

        QString tva=QString::number(tot2*0.19);
        ui->res_tva_3->setText(tva);

        double tva2=ui->res_tva_3->text().toDouble();

        QString tott=QString::number(tot2+tva2);
        ui->res_totalTTC_3->setText(tott);

        double tott2=ui->res_totalTTC_3->text().toDouble();

        double remise=10; // a regler apres
        QString remise2=QString::number(remise);
        ui->res_remise_3->setText(remise2);

        QString remisetot=QString::number(tott2*remise/100);
        ui->res_totRemise_3->setText(remisetot);

        double remisetot2=ui->res_totRemise_3->text().toDouble();

        QString totg=QString::number(tott2-remisetot2);
        ui->res_totalG_3->setText(totg);
    } else {
        QMessageBox::information(this, tr("Erreur"),
                                 tr("Dates erronées."));
    }
}


void Dialog::on_valider_modif_res_clicked()
{
    double idRes=ui->res_IDRes->text().toDouble();
    QString matricule=ui->res_mat_comboBox_3->currentText();
    double idClient=ui->res_IdClient_3->text().toDouble();
    QDateTime dateDep=ui->res_dateDep_3->dateTime();
    QDateTime dateAr=ui->res_dateAr_3->dateTime();
    double totalHT=ui->res_totalHT_3->text().toDouble();
    double totalTTC=ui->res_totalTTC_3->text().toDouble();
    double remise=ui->res_totRemise_3->text().toDouble();
    double totalG=ui->res_totalG_3->text().toDouble();
    double etat=0; //a regler

    QMessageBox msg;
    reservation r(idRes,matricule,idClient,dateDep,dateAr,totalHT,totalTTC,remise,totalG,etat);
    if(r.modifier_reservation())
    {
        msg.setText("Modification avec succes.");
        msg.exec();
    }
    else
    {
        msg.setText("Echec de la modification.");
        msg.exec();
    }
    ui->stacked_reservation->setCurrentIndex(0);
    ui->table_res->setModel(res.afficher());
}

void Dialog::on_supprimer_res_clicked()
{
    QModelIndexList selection = ui->table_res->selectionModel()->selectedRows(0);

    if (!selection.empty()) {
        QModelIndex idIndex = selection.at(0);
        double id = idIndex.data().toDouble();
        QString idc = idIndex.sibling(idIndex.row(), 1).data().toString();
        QString mat = idIndex.sibling(idIndex.row(), 2).data().toString();

        QMessageBox::StandardButton button;
        button = QMessageBox::question(this, tr("Suppression réservation"),
                                       QString(tr("Etes-vous sûr de vouloir supprimer " \
                                                  "la réservation '%1' de la voiture '%2' pour le client '%3'?"))
                                              .arg(id).arg(mat).arg(idc),
                                       QMessageBox::Yes | QMessageBox::No);

        if (button == QMessageBox::Yes) {
           QString ids=QString::number(id);
            QSqlQuery q;
            q.prepare("delete from reservation where ID_RES='"+ids+"'");
            q.exec();
        }
    } else {
        QMessageBox::information(this, tr("Suppression réservation"),
                                 tr("Selectionnez la réservation que vous voulez supprimer."));
    }
    ui->table_res->setModel(res.afficher());

}

void Dialog::on_loc_idRes_comboBox_currentIndexChanged(const QString &arg1)
{
    QSqlQuery query;
    query.prepare("SELECT r.IDCLIENT,r.MATRICULE,r.DATE_DEPART,r.DATE_ARRIVEE,"
                  "v.MARQUE,v.MODELE,r.TOTAL_G "
                  "FROM RESERVATION r INNER JOIN VOITURES v on r.MATRICULE=v.MATRICULE "
                  "WHERE r.ID_RES='"+arg1+"' ");

    if (query.exec())
    {
        while (query.next())
        {
            ui->loc_IdCl->setText(query.value(0).toString());

            QString id=query.value(0).toString();
            QSqlQuery qry;
            qry.prepare("SELECT NOM,PRENOM FROM PHYSIQUE WHERE IDC='"+id+"' ");
            if (qry.exec() && qry.next())
            {
                qry.previous();
                while (qry.next())
                {
                    ui->loc_societe->clear();
                    ui->loc_nom->setText(qry.value(0).toString());
                    ui->loc_prenom->setText(qry.value(1).toString());
                }
            }
            else
            {
                qry.prepare("SELECT NOM_SOC FROM MORAL WHERE IDC='"+id+"' ");
                if(qry.exec())
                {
                    while(qry.next())
                    {
                        ui->loc_societe->setText(qry.value(0).toString());
                        ui->loc_nom->clear();
                        ui->loc_prenom->clear();
                    }
                }
            }
            ui->loc_matricule->setText(query.value(1).toString());
            ui->loc_dateDep->setDateTime(query.value(2).toDateTime());
            ui->loc_dateArr->setDateTime(query.value(3).toDateTime());
            ui->loc_marque->setText(query.value(4).toString());
            ui->loc_modele->setText(query.value(5).toString());
            ui->loc_total->setText(query.value(6).toString());
        }
    }



    QSqlQuery q;
    q.prepare("SELECT KILOMETRAGE FROM RESERVATION r INNER JOIN VOITURES v "
              "ON r.MATRICULE=v.MATRICULE WHERE r.ID_RES='"+arg1+"' ");
    q.exec();
    q.next();
    ui->loc_kmD->setText(q.value(0).toString());
}

void Dialog::on_table_loca_activated(const QModelIndex &index)
{
    QString val=ui->table_loca->model()->data(index).toString();
    QString v=index.sibling(index.row(), 0).data().toString();
    ui->recherche->setText(v);
            ui->table_loca->selectionModel();

    QSqlQuery query;
    query.prepare("select * from locations ");
   /* query.prepare("SELECT l.IDLOC,l.IDRES,r.IDCLIENT,r.MATRICULE,v.MARQUE,v.MODELE,"
                  "r.DATE_DEPART,r.DATE_ARRIVEE,r.MONTANT_HT,r.TOTAL_TTC,r.REMISE,"
                  "r.TOTAL_G,l.RESTE_A_PAYER,l.CAUTION FROM Locations l INNER JOIN Reservation r "
                  "ON l.IDRES=r.ID_RES "
                  "INNER JOIN voitures v "
                  "on r.MATRICULE=v.MATRICULE "
                  "where l.IDLOC='"+val+"' or l.IDRES='"+val+"' or r.IDCLIENT='"+val+"' "
                  "or r.MATRICULE='"+val+"' or v.MARQUE='"+val+"' or v.MODELE='"+val+"' or r.DATE_DEPART='"+val+"' "
                  "or r.DATE_ARRIVEE='"+val+"' or r.MONTANT_HT='"+val+"' or r.TOTAL_TTC='"+val+"' "
                  "or r.REMISE='"+val+"' or r.TOTAL_G='"+val+"' or l.RESTE_A_PAYER='"+val+"' or l.CAUTION='"+val+"'");
    */

    if(query.exec())
    {
        while(query.next())
        {

        }
    }
}


void Dialog::on_afficher_res_2_clicked()
{
    ui->stacked_reservation->setCurrentIndex(0);
    ui->table_res->setModel(res.afficher());
}

void Dialog::on_tabWidget_currentChanged()
{
    ui->table_res->setModel(res.afficher());
    ui->table_loca->setModel(tmp.afficher());
    ui->stacked_location->setCurrentIndex(0);
    ui->stacked_reservation->setCurrentIndex(0);
}

void Dialog::on_stacked_location_currentChanged()
{
    ui->table_res->setModel(res.afficher());
    ui->table_loca->setModel(tmp.afficher());
}

void Dialog::on_stacked_reservation_currentChanged()
{
    ui->table_res->setModel(res.afficher());
    ui->table_loca->setModel(tmp.afficher());
}

void Dialog::on_history_clicked()
{
    ui->table_res->setModel(res.history());
}

void Dialog::on_tri_res_comboBox_currentIndexChanged(const QString &arg1)
{
    if(arg1=="Trier par ID")
    {
        ui->table_res->setModel(res.afficher());
    }
    else if(arg1=="Trier par ID client")
    {
        ui->table_res->setModel(res.afficher2());
    }
    else if(arg1=="Trier par matricule")
    {
        ui->table_res->setModel(res.afficher3());
    }
    else if(arg1=="Trier par date départ")
    {
        ui->table_res->setModel(res.afficher4());
    }
}

void Dialog::on_tri_loc_comboBox_currentIndexChanged(const QString &arg1)
{
    if(arg1=="Trier par ID")
    {
        ui->table_loca->setModel(tmp.afficher());
    }
    if(arg1=="Trier par ID réservation")
    {
        ui->table_loca->setModel(tmp.afficher2());
    }
    else if(arg1=="Trier par ID client")
    {
        ui->table_loca->setModel(tmp.afficher3());
    }
    else if(arg1=="Trier par matricule")
    {
        ui->table_loca->setModel(tmp.afficher4());
    }
    else if(arg1=="Trier par date départ")
    {
        ui->table_loca->setModel(tmp.afficher5());
    }
}

void Dialog::on_stat_clicked()
{

    DrilldownChart *chart = new DrilldownChart();
    chart->setTheme(QChart::ChartThemeQt);
    chart->setAnimationOptions(QChart::AllAnimations);
    QSizeF s(500,500);
    chart->resize(s);
    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignRight);

    QPieSeries *marqueSeries = new QPieSeries(ui->stackedMain);
    marqueSeries->setName("Location par Marque");

    QSqlQuery query;
    query.prepare("SELECT DISTINCT MARQUE from VOITURES");
    query.exec();
    while(query.next())
    {
        QString marque = query.value(0).toString();
        QPieSeries *modeleSeries = new QPieSeries(ui->stackedMain);
        modeleSeries->setName("Location par Modèle - " + marque);

        QSqlQuery q;
        q.prepare("SELECT DISTINCT MODELE from VOITURES where MARQUE='"+marque+"'");
        q.exec();
        while(q.next())
        {
            QString modele = q.value(0).toString();
            QSqlQuery qr;
            qr.prepare("select COUNT(*) from locations l inner join reservation r "
                       "on l.idres=r.id_res inner join voitures v "
                       "on r.matricule=v.matricule where v.modele='"+modele+"'");
            qr.exec();
            qr.next();
            *modeleSeries << new DrilldownSlice(qr.value(0).toInt(), modele, marqueSeries);
        }

        QObject::connect(modeleSeries, &QPieSeries::clicked, chart, &DrilldownChart::handleSliceClicked);

        *marqueSeries << new DrilldownSlice(modeleSeries->sum(), marque, modeleSeries);
    }

    QObject::connect(marqueSeries, &QPieSeries::clicked, chart, &DrilldownChart::handleSliceClicked);

    chart->changeSeries(marqueSeries);

    QChartView *chartView = new QChartView(chart,ui->Stat);
    chartView->setRenderHint(QPainter::Antialiasing);

    ui->stacked_location->setCurrentIndex(3);

}

void Dialog::on_afficher_loc_3_clicked()
{
    ui->stacked_location->setCurrentIndex(0);
}

#include <QtWidgets>
#ifndef QT_NO_PRINTER
#include <QPrinter>
#endif

void Dialog::on_pdfRes_clicked()
{
    QModelIndexList selection = ui->table_loca->selectionModel()->selectedIndexes();
    if (!selection.empty()) {
        QString idLoc = selection.at(0).data().toString();
        QString idRes = selection.at(1).data().toString();
        QString idC = selection.at(2).data().toString();
        QString matricule = selection.at(3).data().toString();
        QString marque = selection.at(4).data().toString();
        QString modele = selection.at(5).data().toString();
        QString depart = selection.at(6).data().toDateTime().toString("dd/MM/yyyy hh:mm");
        QString arrivee = selection.at(7).data().toDateTime().toString("dd/MM/yyyy hh:mm");
        QString THT = selection.at(8).data().toString();
        QString TTC = selection.at(9).data().toString();
        QString remise = selection.at(10).data().toString();
        QString tot = selection.at(11).data().toString();
        QString caution = selection.at(13).data().toString();
        QString nom;
        QString prenom;
        QString naissance;
        QString cin;
        QString nomSoc;
        QString prop;
        QString codeFisc;
        
        QSqlQuery query2;
        query2.prepare("SELECT NOM,PRENOM,NAISSANCE,CIN FROM PHYSIQUE WHERE IDC='"+idC+"'");
        query2.exec();

        if(query2.next())
        {
            nom=query2.value(0).toString();
            prenom=query2.value(1).toString();
            naissance=query2.value(3).toDateTime().toString("dd/MM/yyyy");
            cin=query2.value(4).toString();

            nomSoc="-----";
            prop="-----";
            codeFisc="-----";
        }
        else
        {
            query2.prepare("SELECT NOM_SOC,PROP,CODE_FISC FROM MORAL WHERE IDC='"+idC+"'");
            query2.exec();
            query2.next();

            nom="-----";
            prenom="-----";
            naissance="-----";
            cin="-----";

            nomSoc=query2.value(0).toString();
            prop=query2.value(1).toString();
            codeFisc=query2.value(2).toString();
        }

        QSqlQuery query;
        query.prepare("SELECT KM_DEPART,KM_ARRIVEE,CARB_DEPART,CARB_ARRIVEE from LOCATIONS where IDLOC='"+idLoc+"'");
        query.exec();
        query.next();

        QString kmD=query.value(0).toString();
        QString kmA=query.value(1).toString();
        QString carbD=query.value(2).toString();
        QString carbA=query.value(3).toString();

        QString sDate = QDate::currentDate().toString("dddd dd MMMM yyyy");
        
       QString fileName = QFileDialog::getSaveFileName((QWidget* )0, "Export PDF", QString(), "*.pdf");
       if (QFileInfo(fileName).suffix().isEmpty()) { fileName.append(".pdf"); }
    
       QPrinter printer(QPrinter::PrinterResolution);
       printer.setOutputFormat(QPrinter::PdfFormat);
       printer.setPaperSize(QPrinter::A4);
       printer.setOutputFileName(fileName);
        
       QString strStream;
       QTextStream out(&strStream);
    
        out<< "<div style=\"margin-left: 20%; margin-right: 20pt\">\
              <h1 style=\"text-align:center;\">Contrat de location de voiture</h1>\
              <table align=\"center\" width=\"80%\" border=0 >\
                  <tr>\
                      <td width=\"75%\"></td>\
                      <td width=\"25%\"><h2>RENTINI</h2></td>\
                  </tr>\
                  <tr>\
                      <td width=\"75%\"></td>\
                      <td width=\"25%\">\
                          <br/><br/>";
                out<<"</td>\
                  </tr>\
              </table>";
            out<<QString("<p style=\"text-align:right; font-size: 8pt;\">Tunis le %1</p><br/><br/>").arg(sDate);

            out<<QString("<p>Nom : %1<br/>Prenom : %2<br/>CIN : %3<br/>Date de naissance : %4</p>").arg(nom).
                     arg(prenom).arg(cin).arg(naissance);
            out<<QString("<p>Societe : %1<br/>Code Fiscal : %2<br/>Proprietaire : %3</p>").arg(nomSoc).
                     arg(codeFisc).arg(prop);
            out<<QString("<p>Matricule : %1<br/>Marque : %2<br/>Modele : %3<br/>Date départ : %4<br/>Date arrivée : %5</p>")
                 .arg(matricule).arg(marque).arg(modele).arg(depart).arg(arrivee);
            out<<QString("<p>Total HT : %1<br/>Total TTC : %2<br/>Remise : %3<br/>Total général : %4<br/>Caution : %5</p></div>")
                 .arg(THT).arg(TTC).arg(remise).arg(tot).arg(caution);

       QTextDocument doc;
       doc.setHtml(strStream);
       doc.setPageSize(printer.pageRect().size()); // This is necessary if you want to hide the page number
       doc.print(&printer);

    } else {
        QMessageBox::information(this, tr("PDF"),
                                 tr("Selectionnez la location dont vous voulez avoir le contrat."));
    }
}








////////////////////AMINE////////////////////////////////





void Dialog::on_afficherVign_clicked()
{
    ui->stackedVign->setCurrentIndex(0);
    ui->table_Vign->setModel(vign.afficher());
}

void Dialog::on_ajouterVign_clicked()
{
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT MATRICULE FROM VOITURES");
    ui->matVign->setModel(model);

    ui->stackedVign->setCurrentIndex(1);

}

void Dialog::on_modifierVign_clicked()
{
    QModelIndexList selection = ui->table_Vign->selectionModel()->selectedRows(0);

    if (!selection.empty()) {

        QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery("SELECT MATRICULE FROM VOITURES");
        ui->matVign_2->setModel(model);

        QModelIndex idIndex = selection.at(0);
        QString code = idIndex.data().toString();

        ui->codeVign_2->setText(code);

        QSqlQuery qry;
        qry.prepare("SELECT * FROM VIGNETTE WHERE CODE='"+code+"' ");
        if (qry.exec())
        {
            while (qry.next())
            {
                ui->matVign_2->setCurrentText(qry.value(1).toString());
                ui->dateDebVign_2->setDateTime(qry.value(2).toDateTime());
                ui->dateExpVign_2->setDateTime(qry.value(3).toDateTime());
                ui->prixVign_2->setText(qry.value(4).toString());
            }
        }

        ui->stackedVign->setCurrentIndex(2);
    } else {
        QMessageBox::information(this, tr("Modification location"),
                                 tr("Selectionnez la vignette que vous voulez Modifier."));
    }
}

void Dialog::on_supprimerVign_clicked()
{
    QModelIndexList selection = ui->table_Vign->selectionModel()->selectedRows(0);

    if (!selection.empty()) {
        QModelIndex idIndex = selection.at(0);
        int id = idIndex.data().toInt();

        QMessageBox::StandardButton button;
        button = QMessageBox::question(this, tr("Suppression Vignette"),
                                       QString(tr("Etes-vous sûr de vouloir supprimer " \
                                                  "la Vignette '%1'?")).arg(id),
                                       QMessageBox::Yes | QMessageBox::No);

        if (button == QMessageBox::Yes) {
           QString id2=QString::number(id);
            QSqlQuery q;
            q.prepare("delete from vignette where CODE='"+id2+"'");
            q.exec();
        }
    } else {
        QMessageBox::information(this, tr("Suppression Vignette"),
                                 tr("Selectionnez la vignette que vous voulez supprimer."));
    }
    ui->table_Vign->setModel(vign.afficher());
}

void Dialog::on_afficherVis_clicked()
{
    ui->stackedVis->setCurrentIndex(0);
    ui->table_Vis->setModel(vis.afficher());
}

void Dialog::on_ajouterVis_clicked()
{
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT MATRICULE FROM VOITURES");
    ui->matVis->setModel(model);

    ui->stackedVis->setCurrentIndex(1);
}

void Dialog::on_modifierVis_clicked()
{
    QModelIndexList selection = ui->table_Vis->selectionModel()->selectedRows(0);

    if (!selection.empty()) {

        QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery("SELECT MATRICULE FROM VOITURES");
        ui->matVis_2->setModel(model);

        QModelIndex idIndex = selection.at(0);
        QString id = idIndex.data().toString();

        ui->idVis_2->setText(id);

        QSqlQuery qry;
        qry.prepare("SELECT * FROM visite WHERE ID='"+id+"' ");
        if (qry.exec())
        {
            while (qry.next())
            {
                ui->matVis_2->setCurrentText(qry.value(1).toString());
                ui->compagnieVis_2->setText(qry.value(2).toString());
                ui->codeVis_2->setText(qry.value(3).toString());
                ui->dateDebVis_2->setDateTime(qry.value(4).toDateTime());
                ui->dateExpVis_2->setDateTime(qry.value(5).toDateTime());
                ui->prixVis_2->setText(qry.value(6).toString());
            }
        }

        ui->stackedVis->setCurrentIndex(2);
    } else {
        QMessageBox::information(this, tr("Modification location"),
                                 tr("Selectionnez la visite technique que vous voulez Modifier."));
    }
}

void Dialog::on_supprimerVis_clicked()
{
    QModelIndexList selection = ui->table_Vis->selectionModel()->selectedRows(0);

    if (!selection.empty()) {
        QModelIndex idIndex = selection.at(0);
        int id = idIndex.data().toInt();

        QMessageBox::StandardButton button;
        button = QMessageBox::question(this, tr("Suppression Visite"),
                                       QString(tr("Etes-vous sûr de vouloir supprimer " \
                                                  "la Visite '%1'?")).arg(id),
                                       QMessageBox::Yes | QMessageBox::No);

        if (button == QMessageBox::Yes) {
           QString id2=QString::number(id);
            QSqlQuery q;
            q.prepare("delete from visite where ID='"+id2+"'");
            q.exec();
        }
    } else {
        QMessageBox::information(this, tr("Suppression Visite"),
                                 tr("Selectionnez la Visite que vous voulez supprimer."));
    }
    ui->table_Vis->setModel(vis.afficher());
}

void Dialog::on_afficherAssu_clicked()
{
    ui->stackedAssu->setCurrentIndex(0);
    ui->table_assu->setModel(assu.afficher());
}

void Dialog::on_ajouterAssu_clicked()
{
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT MATRICULE FROM VOITURES");
    ui->matAssu->setModel(model);

    ui->stackedAssu->setCurrentIndex(1);
}

void Dialog::on_modifierAssu_clicked()
{
    QModelIndexList selection = ui->table_assu->selectionModel()->selectedRows(0);

    if (!selection.empty()) {

        QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery("SELECT MATRICULE FROM VOITURES");
        ui->matAssu_2->setModel(model);

        QModelIndex idIndex = selection.at(0);
        QString id = idIndex.data().toString();

        ui->idAssu_2->setText(id);

        QSqlQuery qry;
        qry.prepare("SELECT * FROM assurances WHERE ID='"+id+"' ");
        if (qry.exec())
        {
            while (qry.next())
            {
                ui->matAssu_2->setCurrentText(qry.value(1).toString());
                ui->policeAssu_2->setText(qry.value(2).toString());
                ui->typeAssu_2->setCurrentText(qry.value(3).toString());
                ui->dateDebAssu_2->setDateTime(qry.value(4).toDateTime());
                ui->dateFinAssu_2->setDateTime(qry.value(5).toDateTime());
                ui->prixAssu_2->setText(qry.value(6).toString());
            }
        }

        ui->stackedAssu->setCurrentIndex(2);
    } else {
        QMessageBox::information(this, tr("Modification location"),
                                 tr("Selectionnez l'assurance que vous voulez Modifier."));
    }
}

void Dialog::on_supprimerAssu_clicked()
{
    QModelIndexList selection = ui->table_assu->selectionModel()->selectedRows(0);

    if (!selection.empty()) {
        QModelIndex idIndex = selection.at(0);
        int id = idIndex.data().toInt();

        QMessageBox::StandardButton button;
        button = QMessageBox::question(this, tr("Suppression Assurance"),
                                       QString(tr("Etes-vous sûr de vouloir supprimer " \
                                                  "l'Assurance '%1'?")).arg(id),
                                       QMessageBox::Yes | QMessageBox::No);

        if (button == QMessageBox::Yes) {
           QString id2=QString::number(id);
            QSqlQuery q;
            q.prepare("delete from assurances where ID='"+id2+"'");
            q.exec();
        }
    } else {
        QMessageBox::information(this, tr("Suppression Assurance"),
                                 tr("Selectionnez l'Assurance que vous voulez supprimer."));
    }
    ui->table_assu->setModel(assu.afficher());
}

void Dialog::on_validerAjoutVign_clicked()
{
        int code=ui->codeVign->text().toInt();
        QString matricule=ui->matVign->currentText();
        QDateTime dateDeb=ui->dateDebVign->dateTime();
        QDateTime dateExp=ui->dateExpVign->dateTime();
        double prix=ui->prixVign->text().toDouble();
        QString code2=QString::number(code);


        QMessageBox msg;
        vignette v(code,matricule,dateDeb,dateExp,prix,1);
        if(v.ajouter())
        {
            QSqlQuery q;
            q.prepare("Update vignette set courante=0 where matricule='"+matricule+"' and code<>'"+code2+"'");
            q.exec();
            msg.setText("Ajout avec succes.");
            msg.exec();
        }
        else
        {
            msg.setText("Echec de l'ajout.");
            msg.exec();
        }
        ui->stackedVign->setCurrentIndex(0);
        ui->table_Vign->setModel(vign.afficher());
}

void Dialog::on_validerAjoutVis_clicked()
{
    int id=ui->idVis->text().toInt();
    QString matricule=ui->matVis->currentText();
    QString compagnie=ui->compagnieVis->text();
    int code=ui->codeVis->text().toInt();
    QDateTime dateDeb=ui->dateDebVis->dateTime();
    QDateTime dateExp=ui->dateExpVis->dateTime();
    double prix=ui->prixVis->text().toDouble();
    QString id2=QString::number(id);

    QMessageBox msg;
    visite v(id,matricule,compagnie,code,dateDeb,dateExp,prix,1);
    if(v.ajouter())
    {
        QSqlQuery q;
        q.prepare("Update visite set courante=0 where matricule='"+matricule+"' and id<>'"+id2+"'");
        q.exec();
        msg.setText("Ajout avec succes.");
        msg.exec();
    }
    else
    {
        msg.setText("Echec de l'ajout.");
        msg.exec();
    }
    ui->stackedVis->setCurrentIndex(0);
    ui->table_Vis->setModel(vis.afficher());
}

void Dialog::on_validerAjoutAssu_clicked()
{
    int id=ui->idAssu->text().toInt();
    QString matricule=ui->matAssu->currentText();
    int npolice=ui->policeAssu->text().toInt();
    QString type=ui->typeAssu->currentText();
    QDateTime dateDeb=ui->dateDebAssu->dateTime();
    QDateTime dateFin=ui->dateFinAssu->dateTime();
    double prix=ui->prixAssu->text().toDouble();
    QString id2=QString::number(id);

    QMessageBox msg;
    assurance a(id,matricule,npolice,type,dateDeb,dateFin,prix,1);
    if(a.ajouter())
    {
        QSqlQuery q;
        q.prepare("Update assurances set courante=0 where matricule='"+matricule+"' and id<>'"+id2+"'");
        q.exec();
        msg.setText("Ajout avec succes.");
        msg.exec();
    }
    else
    {
        msg.setText("Echec de l'ajout.");
        msg.exec();
    }
    ui->stackedAssu->setCurrentIndex(0);
    ui->table_assu->setModel(assu.afficher());
}

void Dialog::on_validerModifVign_clicked()
{
    int code=ui->codeVign_2->text().toInt();
    QString matricule=ui->matVign_2->currentText();
    QDateTime dateDeb=ui->dateDebVign_2->dateTime();
    QDateTime dateExp=ui->dateExpVign_2->dateTime();
    double prix=ui->prixVign_2->text().toDouble();

    QMessageBox msg;
    vignette v(code,matricule,dateDeb,dateExp,prix,0);
    if(v.modifier())
    {
        msg.setText("Modification avec succes.");
        msg.exec();
    }
    else
    {
        msg.setText("Echec de la modification.");
        msg.exec();
    }
    ui->stackedVign->setCurrentIndex(0);
    ui->table_Vign->setModel(vign.afficher());
}

void Dialog::on_validerModifVis_clicked()
{
    int id=ui->idVis_2->text().toInt();
    QString matricule=ui->matVis_2->currentText();
    QString compagnie=ui->compagnieVis_2->text();
    int code=ui->codeVis_2->text().toInt();
    QDateTime dateDeb=ui->dateDebVis_2->dateTime();
    QDateTime dateExp=ui->dateExpVis_2->dateTime();
    double prix=ui->prixVis_2->text().toDouble();

    QMessageBox msg;
    visite v(id,matricule,compagnie,code,dateDeb,dateExp,prix,0);
    if(v.modifier())
    {
        msg.setText("Modification avec succes.");
        msg.exec();
    }
    else
    {
        msg.setText("Echec de la modification.");
        msg.exec();
    }
    ui->stackedVis->setCurrentIndex(0);
    ui->table_Vis->setModel(vis.afficher());
}

void Dialog::on_validerModifAssu_clicked()
{
    int id=ui->idAssu_2->text().toInt();
    QString matricule=ui->matAssu_2->currentText();
    int npolice=ui->policeAssu_2->text().toInt();
    QString type=ui->typeAssu_2->currentText();
    QDateTime dateDeb=ui->dateDebAssu_2->dateTime();
    QDateTime dateFin=ui->dateFinAssu_2->dateTime();
    double prix=ui->prixAssu_2->text().toDouble();

    QMessageBox msg;
    assurance a(id,matricule,npolice,type,dateDeb,dateFin,prix,0);
    if(a.modifier())
    {
        msg.setText("Modification avec succes.");
        msg.exec();
    }
    else
    {
        msg.setText("Echec de la modification.");
        msg.exec();
    }
    ui->stackedAssu->setCurrentIndex(0);
    ui->table_assu->setModel(assu.afficher());
}

void Dialog::on_rechercheVign_textChanged(const QString &arg1)
{
    if (arg1=="")
            ui->table_Vign->setModel(vign.afficher());
    else
        this->ui->table_Vign->setModel(vign.recherche(arg1));
}

void Dialog::on_rechercheVis_textChanged(const QString &arg1)
{
    if (arg1=="")
            ui->table_Vis->setModel(vis.afficher());
    else
        this->ui->table_Vis->setModel(vis.recherche(arg1));
}

void Dialog::on_rechercheAssu_textChanged(const QString &arg1)
{
    if (arg1=="")
            ui->table_assu->setModel(assu.afficher());
    else
        this->ui->table_assu->setModel(assu.recherche(arg1));
}

void Dialog::on_afficherAssu_2_clicked()
{
    ui->stackedAssu->setCurrentIndex(0);
}

void Dialog::on_afficherVis_2_clicked()
{
    ui->stackedVis->setCurrentIndex(0);
}

void Dialog::on_afficherVign_2_clicked()
{
    ui->stackedVign->setCurrentIndex(0);
}

void Dialog::on_triVign_currentIndexChanged(const QString &arg1)
{
    if(arg1=="Trier par code")
    {
        ui->table_Vign->setModel(vign.afficher());
    }
    else if(arg1=="Trier par matricule")
    {
        ui->table_Vign->setModel(vign.afficher2());
    }
    else if(arg1=="Trier par date exp")
    {
        ui->table_Vign->setModel(vign.afficher3());
    }
}

void Dialog::on_triVis_currentIndexChanged(const QString &arg1)
{
    if(arg1=="Trier par ID")
    {
        ui->table_Vis->setModel(vis.afficher());
    }
    else if(arg1=="Trier par matricule")
    {
        ui->table_Vis->setModel(vis.afficher2());
    }
    else if(arg1=="Trier par date fin")
    {
        ui->table_Vis->setModel(vis.afficher3());
    }
}

void Dialog::on_triAssu_currentIndexChanged(const QString &arg1)
{
    if(arg1=="Trier par ID")
    {
        ui->table_assu->setModel(assu.afficher());
    }
    else if(arg1=="Trier par matricule")
    {
        ui->table_assu->setModel(assu.afficher2());
    }
    else if(arg1=="Trier par n°Police")
    {
        ui->table_assu->setModel(assu.afficher3());
    }
    else if(arg1=="Trier par date fin")
    {
        ui->table_assu->setModel(assu.afficher4());
    }
}

void Dialog::on_res_pushButton_clicked()
{
    ui->stackedMain->setCurrentIndex(1);
    ui->titre->setText("Gestion des réservations");
    ui->stacked_reservation->setCurrentIndex(0);
}

void Dialog::on_loc_pushButton_clicked()
{
    ui->stackedMain->setCurrentIndex(2);
    ui->titre->setText("Gestion des locations");
    ui->stacked_location->setCurrentIndex(0);
}

void Dialog::on_client_pushButton_clicked()
{
    ui->stackedMain->setCurrentIndex(3);
    ui->titre->setText("Gestion des clients");
    ui->tabWidget_2->setCurrentWidget(0);
    ui->stackedWidget->setCurrentIndex(4);
}

void Dialog::on_voiture_pushButton_clicked()
{
    ui->stackedMain->setCurrentIndex(4);
    ui->titre->setText("Gestion des voitures");
}

void Dialog::on_gestionEmp_clicked()
{
    ui->stackedMain->setCurrentIndex(5);
    ui->titre->setText("Gestion des employés");
    QSqlQueryModel *model = new QSqlQueryModel;
    ui->tableViewEmp->setModel(tmpEmploye.afficher());
    model->setQuery("select id from employe");
    ui->comboBoxIdEmpConge->setModel(model);
    ui->tableViewCongeAll->setModel(tmpConge.afficherconge());


}

void Dialog::on_pc_pushButton_clicked()
{
    ui->stackedMain->setCurrentIndex(6);
    ui->titre->setText("Gestion des ordinateurs");
}

void Dialog::on_offre_pushButton_clicked()
{
    ui->stackedMain->setCurrentIndex(7);
    ui->titre->setText("Gestion des offres");
}

void Dialog::on_event_pushButton_clicked()
{
    ui->stackedMain->setCurrentIndex(8);
    ui->titre->setText("Gestion des évènements");
}

void Dialog::on_carte_pushButton_clicked()
{
    ui->stackedMain->setCurrentIndex(9);
    ui->titre->setText("Gestion des cartes Fid");
}

void Dialog::on_gestionCompte_clicked()
{
    ui->stackedMain->setCurrentIndex(10);
    ui->titre->setText("Gestion des comptes");
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("select employe.id from employe LEFT JOIN compte on employe.id=compte.idemploye WHERE compte.idemploye IS NULL");
    ui->comboBoxIdEmpCompte->setModel(model);
    ui->tableViewCompte->setModel(tmpCompte.afficherCompte());
    QString nom;
    QString prenom;
    QSqlQuery qry;
    qry.prepare("select nom, prenom FROM employe where id='"+ui->comboBoxIdEmpCompte->currentText()+"'");
    if(qry.exec())
    {
        while (qry.next())
        {
             nom=qry.value(0).toString();
             prenom=qry.value(1).toString();
             qDebug()<<"nom prenom idE 1"<<nom+prenom+ui->comboBoxIdEmpCompte->currentText();
        }

    }

    ui->lineEdittLogin->setText(nom+prenom+ui->comboBoxIdEmpCompte->currentText());
}

void Dialog::on_gestionConge_clicked()
{
    ui->stackedMain->setCurrentIndex(11);
    ui->titre->setText("Gestion des congés");
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("select id from employe");
    ui->comboBoxIdEmpConge->setModel(model);
    ui->tableViewCongeAll->setModel(tmpConge.afficherconge());
}

void Dialog::on_assu_pushButton_clicked()
{
    ui->stackedMain->setCurrentIndex(12);
    ui->titre->setText("Gestion des assurances");
    ui->stackedAssu->setCurrentIndex(0);
}

void Dialog::on_vignette_pushButton_clicked()
{
    ui->stackedMain->setCurrentIndex(13);
    ui->titre->setText("Gestion des vignettes");
    ui->stackedVign->setCurrentIndex(0);
}

void Dialog::on_visite_pushButton_clicked()
{
    ui->stackedMain->setCurrentIndex(14);
    ui->titre->setText("Gestion des visites");
    ui->stackedVis->setCurrentIndex(0);
}

void Dialog::on_accueil_button_clicked()
{
    ui->stackedMain->setCurrentIndex(0);
    ui->titre->setText("                        Accueil");
}

//oussema

void Dialog::test(QString role)
{
    if (role == "client")
    {
        ui->client_pushButton->setStyleSheet("QPushButton {color: white;}");
    }
}

void Dialog::init3()
{
    ui->stackedWidget->setCurrentIndex(4);

    ui->tableView_5->setModel(tmp1.afficher());
    ui->tableView_4->setModel(tmp1.afficher());
    ui->tableView_7->setModel(tmp1.afficher());
    ui->tableView_77->setModel(tmp2.afficher());
    ui->tableView_6->setModel(tmp2.afficher());
    ui->tableView_9->setModel(tmp2.afficher());
    ui->tableView2_2->setModel(tmp3.afficher());
    ui->tableView_2->setModel(tmp4.afficher1());
    ui->tableView2_3->setModel(tmp3.afficher());
    ui->tableView_3->setModel(tmp4.afficher1());
    ui->tableView2->setModel(tmp3.afficher());
    ui->tableView->setModel(tmp4.afficher1());
    for (int i = 1; i < 7; i++)
    {
        ui->tableView_5->setColumnWidth(i, this->width() / 4);
        ui->tableView_4->setColumnWidth(i, this->width() / 4);
        ui->tableView_7->setColumnWidth(i, this->width() / 4);
    }
    for (int i = 1; i < 9; i++)
    {
        ui->tableView_77->setColumnWidth(i, this->width() / 4);
        ui->tableView_6->setColumnWidth(i, this->width() / 4);
        ui->tableView_9->setColumnWidth(i, this->width() / 4);
    }
    for (int i = 0; i < 7; i++)
    {
        ui->tableView2_2->setColumnWidth(i, this->width() / 4);
        ui->tableView_2->setColumnWidth(i, this->width() / 4);
        ui->tableView2_3->setColumnWidth(i, this->width() / 4);
        ui->tableView_3->setColumnWidth(i, this->width() / 4);
        ui->tableView2->setColumnWidth(i, this->width() / 4);
        ui->tableView->setColumnWidth(i, this->width() / 4);
    }

    QHeaderView *verticalHeader = ui->tableView_5->verticalHeader();
    verticalHeader->setSectionResizeMode(QHeaderView::Fixed);
    verticalHeader->setDefaultSectionSize(40);

    QHeaderView *verticalHeader1 = ui->tableView_4->verticalHeader();
    verticalHeader1->setSectionResizeMode(QHeaderView::Fixed);
    verticalHeader1->setDefaultSectionSize(40);

    QHeaderView *verticalHeader2 = ui->tableView_7->verticalHeader();
    verticalHeader2->setSectionResizeMode(QHeaderView::Fixed);
    verticalHeader2->setDefaultSectionSize(40);

    QHeaderView *verticalHeader3 = ui->tableView_77->verticalHeader();
    verticalHeader3->setSectionResizeMode(QHeaderView::Fixed);
    verticalHeader3->setDefaultSectionSize(40);

    QHeaderView *verticalHeader4 = ui->tableView_6->verticalHeader();
    verticalHeader4->setSectionResizeMode(QHeaderView::Fixed);
    verticalHeader4->setDefaultSectionSize(40);

    QHeaderView *verticalHeader5 = ui->tableView_9->verticalHeader();
    verticalHeader5->setSectionResizeMode(QHeaderView::Fixed);
    verticalHeader5->setDefaultSectionSize(40);

    QHeaderView *verticalHeader6 = ui->tableView2_2->verticalHeader();
    verticalHeader6->setSectionResizeMode(QHeaderView::Fixed);
    verticalHeader6->setDefaultSectionSize(40);

    QHeaderView *verticalHeader7 = ui->tableView_2->verticalHeader();
    verticalHeader7->setSectionResizeMode(QHeaderView::Fixed);
    verticalHeader7->setDefaultSectionSize(40);

    QHeaderView *verticalHeader8 = ui->tableView2_3->verticalHeader();
    verticalHeader8->setSectionResizeMode(QHeaderView::Fixed);
    verticalHeader8->setDefaultSectionSize(40);

    QHeaderView *verticalHeader9 = ui->tableView_3->verticalHeader();
    verticalHeader9->setSectionResizeMode(QHeaderView::Fixed);
    verticalHeader9->setDefaultSectionSize(40);

    QHeaderView *verticalHeader10 = ui->tableView_2->verticalHeader();
    verticalHeader10->setSectionResizeMode(QHeaderView::Fixed);
    verticalHeader10->setDefaultSectionSize(40);

    QHeaderView *verticalHeader11 = ui->tableView->verticalHeader();
    verticalHeader11->setSectionResizeMode(QHeaderView::Fixed);
    verticalHeader11->setDefaultSectionSize(40);

    //INT
    ui->lineEdit_18->setValidator(new QIntValidator(0, 10, this));
    ui->lineEdit_37->setValidator(new QIntValidator(0, 10, this));

    ui->lineEdit_7->setValidator(new QIntValidator(0, 99999999, this));
    ui->lineEdit_43->setValidator(new QIntValidator(0, 99999999, this));
    ui->lineEdit_24->setValidator(new QIntValidator(0, 99999999, this));
    ui->lineEdit_2->setValidator(new QIntValidator(0, 99999999, this));
    ui->lineEdit_6->setValidator(new QIntValidator(0, 99999999, this));
    ui->lineEdit_16->setValidator(new QIntValidator(0, 99999999, this));
    ui->lineEdit_15->setValidator(new QIntValidator(0, 99999999, this));

    QRegExp re("[a-z-A-Z ]{20}");
    QRegExpValidator *validator = new QRegExpValidator(re, this);

    QRegExp re2("[A-Z-a-z-0-9 ]{30}");
    QRegExpValidator *validator2 = new QRegExpValidator(re2, this);

    QRegularExpression rx("\\b[A-Z0-9._%+-]+@[A-Z0-9.-]+\\.[A-Z]{2,4}\\b",
                          QRegularExpression::CaseInsensitiveOption);
    //email
    ui->lineEdit_4->setValidator(new QRegularExpressionValidator(rx, this));
    ui->lineEdit_23->setValidator(new QRegularExpressionValidator(rx, this));
    ui->lineEdit_41->setValidator(new QRegularExpressionValidator(rx, this));
    ui->lineEdit_13->setValidator(new QRegularExpressionValidator(rx, this));
    //normal
    ui->lineEdit->setValidator(validator);
    ui->lineEdit_3->setValidator(validator2);
    ui->lineEdit_17->setValidator(validator2);
    ui->lineEdit_44->setValidator(validator);
    ui->lineEdit_12->setValidator(validator);
    ui->lineEdit_5->setValidator(validator);
    ui->lineEdit_40->setValidator(validator);
    ui->lineEdit_20->setValidator(validator);
    ui->lineEdit_21->setValidator(validator);
    ui->lineEdit_22->setValidator(validator2);
    ui->lineEdit_45->setValidator(validator2);

    ui->lineEdit_69->setPlaceholderText("recherche par le cin/nom/prenom");
    ui->lineEdit_67->setPlaceholderText("recherche par le cin/nom/prenom");
    ui->lineEdit_70->setPlaceholderText("recherche par le cin/nom/prenom");
    ui->lineEdit_26->setPlaceholderText("recherche par le nom/code_f/prop");
    ui->lineEdit_25->setPlaceholderText("recherche par le nom/code_f/prop");
    ui->lineEdit_19->setPlaceholderText("recherche par le nom/code_f/prop");

    QSqlQuery query;
    query.prepare("SELECT count(idc) from CLIENTS where idf is null");
    query.exec();
    QString s;
    while (query.next())
    {
        s = query.value(0).toString();
    }
    ui->label_149->setText(s);
    QSqlQuery query1;
    query1.prepare("SELECT count(idc) from CLIENTS where idf is not null");
    query1.exec();
    QString s1;
    while (query1.next())
    {
        s1 = query1.value(0).toString();
    }
    ui->label_150->setText(s1);
}

void Dialog::on_m_ajouter_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void Dialog::on_m_modifier_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->tableView_4->setModel(tmp1.afficher());
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT IDC FROM moral");
    ui->combo_2->setModel(model);
}

void Dialog::on_pushButton_7_clicked()
{
    QMessageBox msgBox;
    msgBox.setText("Confirmation de modification.");
    msgBox.setInformativeText("Vous etes sure de modofier ce client?\n");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Cancel);
    msgBox.setIcon(QMessageBox::Question);

    int ret = msgBox.exec();
    switch (ret)
    {
    case QMessageBox::Yes:
    {
        QSqlQuery query;
        QString id = ui->combo_2->currentText();

        query.prepare("SELECT MORAL.code_fisc, MORAL.prop, CLIENTS.adresse ,CLIENTS.email ,CLIENTS.tel "
                      "from CLIENTS join MORAL ON MORAL.idc = CLIENTS.idc "
                      "WHERE CLIENTS.idc = '" +
                      id + "' ");
        query.exec();

        ui->stackedWidget->setCurrentIndex(2);

        while (query.next())
        {
            ui->lineEdit_16->setText(query.value(0).toString());
            ui->lineEdit_12->setText(query.value(1).toString());
            ui->lineEdit_17->setText(query.value(2).toString());
            ui->lineEdit_13->setText(query.value(3).toString());
            ui->lineEdit_15->setText(query.value(4).toString());
        }

        break;
    }

    case QMessageBox::Cancel:
        break;
    }
}

void Dialog::on_pushButton_6_clicked()
{
    int id = ui->combo_2->currentText().toInt();

    QString prop = ui->lineEdit_12->text(), ad = ui->lineEdit_17->text(), em = ui->lineEdit_13->text();
    int codef = ui->lineEdit_16->text().toInt(), tel = ui->lineEdit_15->text().toInt();
    clientmo b;
    if (b.modifier(id, tel, em, ad, prop, codef))
    {
        QMessageBox msgBox;
        msgBox.information(nullptr, QObject::tr("Modification du client."), QObject::tr("Client modifié !\n"));
        ui->stackedWidget->setCurrentIndex(4);
    }
    else
    {
        QMessageBox msgBox;
        msgBox.critical(nullptr, QObject::tr("Modification du client."), QObject::tr("Modification impossible !\n"));
    }
}

void Dialog::on_pushButton_clicked()
{
    int id = ui->comboBox->currentText().toInt();
    carte c;
    QDate d = QDate::currentDate();
    if (c.ajouter(id, d))
    {
        QMessageBox msgBox;
        msgBox.information(nullptr, QObject::tr("Ajout d'une carte de fidelité."), QObject::tr("Carte ajouté !\n"));
        QSqlQuery query;
        query.prepare("SELECT email from CLIENTS where idc = :id");
        query.bindValue(":id", id);
        QString email;
        query.exec();
        while (query.next())
        {
            email = query.value(0).toString();
        }
        mail(email, "Carte de fidelite !", "Chers clients votre carte de fidelite a etait creer avec succes \n"
                                           "et pour le moment vous avez 0 points de fidelite");
        ui->tableView2_3->setModel(tmp3.afficher());
        ui->tableView_3->setModel(tmp4.afficher1());
        ref();
        ui->stackedWidget_3->setCurrentIndex(0);
    }
    else
    {
        QMessageBox msgBox;
        msgBox.critical(nullptr, QObject::tr("Ajout d'une carte de fidelité."), QObject::tr("Ce client a déja une carte de fidelité !\n"));
    }
}

void Dialog::mail(QString email, QString sub, QString obj)
{
    Smtp *smtp = new Smtp("rentcar.projet@gmail.com", "azer123@", "smtp.gmail.com");
    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));
    smtp->sendMail(email, sub, obj);
}

void Dialog::mailSent(QString status)
{
   /* if (status == "Message sent")
        QMessageBox::information(nullptr, QObject::tr("RentCar mailing !"), QObject::tr("Un email est envoye a votre client pour l informer de\nsa nouvelle carte de fidelite!\n"));
*/}

void Dialog::on_m_supprimer_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT IDC FROM moral");
    ui->combo->setModel(model);
    ui->tableView_7->setModel(tmp1.afficher());
}

void Dialog::on_pushButton_14_clicked()
{
    int id = ui->combo->currentText().toInt();
    QMessageBox msgBox;
    client a;
    msgBox.setText("Confirmation de suppression.");
    msgBox.setInformativeText("Vous etes sure de supprimer ce client?\n");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Cancel);
    msgBox.setIcon(QMessageBox::Question);
    int ret = msgBox.exec();

    switch (ret)
    {
    case QMessageBox::Yes:
    {
        clientmo b;
        if (b.supprimer(id))
        {
            QMessageBox msgBox;
            msgBox.information(nullptr, QObject::tr("Sppression du client."), QObject::tr("Client supprimer !\n"));
            ui->tableView_7->setModel(tmp1.afficher());
            ui->stackedWidget->setCurrentIndex(3);
            QSqlQueryModel *model = new QSqlQueryModel;
            model->setQuery("SELECT IDC FROM moral");
            ui->combo->setModel(model);
        }
        else
        {
            QMessageBox msgBox;
            msgBox.critical(nullptr, QObject::tr("Sppression du client."), QObject::tr("Suppression impossible !\n"));
        }
        break;
    }

    case QMessageBox::Cancel:
        break;
    }
}

void Dialog::on_m_afficher_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    ui->tableView_5->setModel(tmp1.afficher());
}

void Dialog::on_p_afficher_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(4);
    ui->tableView_6->setModel(tmp2.afficher());
}

void Dialog::on_p_ajouter_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(0);
}

void Dialog::on_p_modifier_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(1);
    ui->tableView_9->setModel(tmp2.afficher());
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT IDC FROM physique");
    ui->comboBox_3->setModel(model);
}

void Dialog::on_pushButton_17_clicked()
{
    QMessageBox msgBox;
    msgBox.setText("Confirmation de modification.");
    msgBox.setInformativeText("Vous etes sure de modofier ce client?\n");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Cancel);
    msgBox.setIcon(QMessageBox::Question);

    int ret = msgBox.exec();
    switch (ret)
    {
    case QMessageBox::Yes:
    {
        QSqlQuery query;
        QString id = ui->comboBox_3->currentText();

        query.prepare("SELECT PHYSIQUE.nom, PHYSIQUE.prenom, CLIENTS.adresse ,CLIENTS.email ,CLIENTS.tel, PHYSIQUE.naissance "
                      "from CLIENTS join PHYSIQUE ON PHYSIQUE.idc = CLIENTS.idc "
                      "WHERE CLIENTS.idc = '" +
                      id + "' ");
        query.exec();

        ui->stackedWidget_2->setCurrentIndex(2);

        while (query.next())
        {
            ui->lineEdit_44->setText(query.value(0).toString());
            ui->lineEdit_40->setText(query.value(1).toString());
            ui->lineEdit_45->setText(query.value(2).toString());
            ui->lineEdit_41->setText(query.value(3).toString());
            ui->lineEdit_43->setText(query.value(4).toString());
            ui->dateEdit_2->setDate(query.value(5).toDate());
        }
        break;
    }

    case QMessageBox::Cancel:
        break;
    }
}

void Dialog::on_p_supprimer_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(3);
    ui->tableView_77->setModel(tmp2.afficher());
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT IDC FROM physique");
    ui->comboBox_7->setModel(model);
}

void Dialog::on_pushButton_21_clicked()
{
    int id = ui->comboBox_7->currentText().toInt();
    QMessageBox msgBox;
    client a;
    msgBox.setText("Confirmation de suppression.");
    msgBox.setInformativeText("Vous etes sure de supprimer ce client?\n");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Cancel);
    msgBox.setIcon(QMessageBox::Question);
    int ret = msgBox.exec();

    switch (ret)
    {
    case QMessageBox::Yes:
    {
        clientph b;
        if (b.supprimer(id))
        {
            QMessageBox msgBox;
            msgBox.information(nullptr, QObject::tr("Sppression du client."), QObject::tr("Client supprimer !\n"));
            ui->tableView_7->setModel(tmp1.afficher());
            ui->stackedWidget->setCurrentIndex(3);
        }
        else
        {
            QMessageBox msgBox;
            msgBox.critical(nullptr, QObject::tr("Sppression du client."), QObject::tr("Suppression impossible !\n"));
        }
        break;
    }

    case QMessageBox::Cancel:
        break;
    }
    ui->tableView_77->setModel(tmp2.afficher());
}

void Dialog::on_pushButton_19_clicked()
{
    int id = ui->comboBox_3->currentText().toInt();

    QString nom = ui->lineEdit_44->text(), prenom = ui->lineEdit_40->text(), ad = ui->lineEdit_45->text(), em = ui->lineEdit_41->text();
    int tel = ui->lineEdit_43->text().toInt();
    QDate d = ui->dateEdit_2->date();
    clientph b;
    if (b.modifier(id, tel, em, ad, nom, prenom, d))
    {
        QMessageBox msgBox;
        msgBox.information(nullptr, QObject::tr("Modification du client."), QObject::tr("Client modifié !\n"));
        ui->stackedWidget_2->setCurrentIndex(4);
        ui->tableView_6->setModel(tmp2.afficher());
    }
    else
    {
        QMessageBox msgBox;
        msgBox.critical(nullptr, QObject::tr("Modification du client."), QObject::tr("Modification impossible !\n"));
    }
}

void Dialog::on_m_afficher_2_clicked()
{
    ui->stackedWidget_3->setCurrentIndex(0);
    ui->tableView2_3->setModel(tmp3.afficher());
    ui->tableView_3->setModel(tmp4.afficher1());
}

void Dialog::on_m_ajouter_2_clicked()
{
    ui->stackedWidget_3->setCurrentIndex(1);
    ui->tableView2->setModel(tmp3.afficher());
    ui->tableView->setModel(tmp4.afficher1());
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT IDC FROM clients where idf is null");
    ui->comboBox->setModel(model);
}

void Dialog::on_m_supprimer_2_clicked()
{
    ui->stackedWidget_3->setCurrentIndex(2);
    ui->tableView2_2->setModel(tmp3.afficher());
    ui->tableView_2->setModel(tmp4.afficher1());
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT clients.IDC FROM clients join carte on clients.idc = carte.idf");
    ui->comboBox_2->setModel(model);
}

void Dialog::adjustTextColor()
{
    if (!ui->lineEdit_4->hasAcceptableInput())
        ui->lineEdit_4->setStyleSheet("QLineEdit { color: red;}");
    else
        ui->lineEdit_4->setStyleSheet("QLineEdit { color: black;}");
}

void Dialog::on_pushButton_5_clicked()
{
    if (!ui->lineEdit_4->hasAcceptableInput())
    {
        ui->lineEdit_4->setStyleSheet("QLineEdit { color: red;}");
        QMessageBox msg;
        msg.information(nullptr, QObject::tr("VERIFICATION EMAIL"), QObject::tr("E_MAIL INCORRECT ! VERIFIER VOTRE EMIL .\n"));
        msg.exec();
    }
    else
    {
        ui->lineEdit_4->setStyleSheet("QLineEdit { color: black;}");

        clientmo c(ui->lineEdit_18->text().toInt(),
                   ui->lineEdit_2->text().toInt(),
                   ui->lineEdit_4->text(),
                   ui->lineEdit_3->text(),
                   ui->lineEdit->text(),
                   ui->lineEdit_5->text(),
                   ui->lineEdit_6->text().toInt());
        client x(ui->lineEdit_18->text().toInt(),
                 ui->lineEdit_4->text(),
                 ui->lineEdit_3->text(),
                 ui->lineEdit_2->text().toInt());

        QMessageBox msg;
        if (x.ajouter() && c.ajouter())
        {
            msg.information(nullptr, QObject::tr("AJOUT CLIENT"), QObject::tr("CLIENT MORALE AJOUTE .\n"));
            msg.exec();
            ui->stackedWidget->setCurrentIndex(4);
            ui->tableView_5->setModel(tmp1.afficher());
        }
        else
        {
            msg.critical(nullptr, QObject::tr("AJOUT CLIENT"), QObject::tr("ERREUR D'AJOUT DU CLIENT .\n"));
            msg.exec();
        }
    }
}

void Dialog::on_pushButton_16_clicked()
{
    if (!ui->lineEdit_23->hasAcceptableInput())
    {
        ui->lineEdit_23->setStyleSheet("QLineEdit { color: red;}");
        QMessageBox msg;
        msg.information(nullptr, QObject::tr("VERIFICATION EMAIL"), QObject::tr("E_MAIL INCORRECT ! VERIFIER VOTRE EMIL .\n"));
        msg.exec();
    }
    else
    {
        ui->lineEdit_4->setStyleSheet("QLineEdit { color: black;}");
        clientph c(ui->lineEdit_37->text().toInt(),
                   ui->lineEdit_24->text().toInt(),
                   ui->lineEdit_23->text(),
                   ui->lineEdit_22->text(),
                   ui->lineEdit_20->text(),
                   ui->lineEdit_21->text(),
                   ui->lineEdit_7->text().toInt(),
                   ui->dateEdit->date());
        client x(ui->lineEdit_37->text().toInt(),
                 ui->lineEdit_23->text(),
                 ui->lineEdit_22->text(),
                 ui->lineEdit_24->text().toInt());

        QMessageBox msg;
        if (x.ajouter() && c.ajouter())
        {
            msg.information(nullptr, QObject::tr("AJOUT CLIENT"), QObject::tr("CLIENT PHYSIQUE AJOUTE .\n"));
            msg.exec();
            ui->stackedWidget_2->setCurrentIndex(4);
            ui->tableView_6->setModel(tmp2.afficher());
        }
        else
        {
            msg.critical(nullptr, QObject::tr("AJOUT CLIENT"), QObject::tr("ERREUR D'AJOUT DU CLIENT .\n"));
            msg.exec();
        }
    }
}

void Dialog::on_comboBox_19_textActivated(const QString &arg1)
{
    if (arg1 == "Trier par nom")
    {
        ui->tableView_7->setModel(tmp1.affichernom());
    }
    else if (arg1 == "Trier par id")
    {
        ui->tableView_7->setModel(tmp1.afficherid());
    }
    else if (arg1 == "Trier par proprietaire")
    {
        ui->tableView_7->setModel(tmp1.afficherprop());
    }
}

void Dialog::on_comboBox_15_textActivated(const QString &arg1)
{
    if (arg1 == "Trier par nom")
    {
        ui->tableView_5->setModel(tmp1.affichernom());
    }
    else if (arg1 == "Trier par id")
    {
        ui->tableView_5->setModel(tmp1.afficherid());
    }
    else if (arg1 == "Trier par proprietaire")
    {
        ui->tableView_5->setModel(tmp1.afficherprop());
    }
}

void Dialog::on_comboBox_20_textActivated(const QString &arg1)
{
    if (arg1 == "Trier par nom")
    {
        ui->tableView_4->setModel(tmp1.affichernom());
    }
    else if (arg1 == "Trier par id")
    {
        ui->tableView_4->setModel(tmp1.afficherid());
    }
    else if (arg1 == "Trier par proprietaire")
    {
        ui->tableView_4->setModel(tmp1.afficherprop());
    }
}

void Dialog::on_comboBox_27_currentTextChanged(const QString &arg1)
{
    if (arg1 == "Trier par nom")
    {
        ui->tableView_9->setModel(tmp2.affichernom());
    }
    else if (arg1 == "Trier par id")
    {
        ui->tableView_9->setModel(tmp2.afficherid());
    }
    else if (arg1 == "Trier par date")
    {
        ui->tableView_9->setModel(tmp2.afficherdate());
    }
}

void Dialog::on_comboBox_30_currentTextChanged(const QString &arg1)
{
    if (arg1 == "Trier par nom")
    {
        ui->tableView_77->setModel(tmp2.affichernom());
    }
    else if (arg1 == "Trier par id")
    {
        ui->tableView_77->setModel(tmp2.afficherid());
    }
    else if (arg1 == "Trier par date")
    {
        ui->tableView_77->setModel(tmp2.afficherdate());
    }
}

void Dialog::on_comboBox_29_currentTextChanged(const QString &arg1)
{
    if (arg1 == "Trier par nom")
    {
        ui->tableView_6->setModel(tmp2.affichernom());
    }
    else if (arg1 == "Trier par id")
    {
        ui->tableView_6->setModel(tmp2.afficherid());
    }
    else if (arg1 == "Trier par date")
    {
        ui->tableView_6->setModel(tmp2.afficherdate());
    }
}

void Dialog::on_pushButton_2_clicked()
{
    int id = ui->comboBox_2->currentText().toInt();
    QMessageBox msgBox;
    client a;
    msgBox.setText("Confirmation de suppression.");
    msgBox.setInformativeText("Vous etes sure de supprimer cette carte ?\n");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Cancel);
    msgBox.setIcon(QMessageBox::Question);
    int ret = msgBox.exec();

    switch (ret)
    {
    case QMessageBox::Yes:
    {
        carte b;
        if (b.supprimer(id))
        {
            QMessageBox msgBox;
            msgBox.information(nullptr, QObject::tr("Sppression de la carte."), QObject::tr("Carte de fidelite supprimer !\n"));
            ui->tableView2_2->setModel(tmp3.afficher());
            ui->tableView_2->setModel(tmp4.afficher1());
            QSqlQuery query;
            query.prepare("SELECT email from CLIENTS where idc = :id");
            query.bindValue(":id", id);
            QString email;
            query.exec();
            while (query.next())
            {
                email = query.value(0).toString();
            }
            mail(email, "Carte de fidelite !", "Chers clients votre carte de fidelite a etait supprimer !\n"
                                               "Nous esperons nous vous revoir bientot !");
            ref();
            ui->stackedWidget_3->setCurrentIndex(2);
            QSqlQueryModel *model = new QSqlQueryModel;
            model->setQuery("SELECT clients.IDC FROM clients join carte on clients.idc = carte.idf");
            ui->comboBox_2->setModel(model);
        }
        else
        {
            QMessageBox msgBox;
            msgBox.critical(nullptr, QObject::tr("Sppression de la carte."), QObject::tr("Suppression impossible !\n"));
        }
        break;
    }

    case QMessageBox::Cancel:
        break;
    }
}

void Dialog::ref()
{
    QSqlQuery query;
    query.prepare("SELECT count(idc) from CLIENTS where idf is null");
    query.exec();
    QString s;
    while (query.next())
    {
        s = query.value(0).toString();
    }
    ui->label_149->setText(s);
    QSqlQuery query1;
    query1.prepare("SELECT count(idc) from CLIENTS where idf is not null");
    query1.exec();
    QString s1;
    while (query1.next())
    {
        s1 = query1.value(0).toString();
    }
    ui->label_150->setText(s1);
}

void Dialog::on_m_afficher_3_clicked()
{
    QString strStream;
    QTextStream out(&strStream);

    const int rowCount = ui->tableView_5->model()->rowCount();
    const int columnCount = ui->tableView_5->model()->columnCount();

    out << "<html>\n"
           "<head>\n"
           "<meta Content=\"Text/html; charset=Windows-1251\">\n"
        << QString("<title>%1</title>\n").arg("strTitle")
        << "</head>\n"
           "<body bgcolor=#ffffff link=#5000A0>\n"
           "<center> <H1>Liste des Clients moral</H1><table border=1 cellspacing=0 cellpadding=2>\n";

    out << "<thead><tr bgcolor=#f0f0f0> <th>Numero</th>";
    for (int column = 0; column < columnCount; column++)
        if (!ui->tableView_5->isColumnHidden(column))
            out << QString("<th>%1</th>").arg(ui->tableView_5->model()->headerData(column, Qt::Horizontal).toString());
    out << "</tr></thead>\n";

    for (int row = 0; row < rowCount; row++)
    {
        out << "<tr> <td bkcolor=0>" << row + 1 << "</td>";
        for (int column = 0; column < columnCount; column++)
        {
            if (!ui->tableView_5->isColumnHidden(column))
            {
                QString data = ui->tableView_5->model()->data(ui->tableView_5->model()->index(row, column)).toString().simplified();
                out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
            }
        }
        out << "</tr>\n";
    }
    out << "</table> </center>\n"
           "</body>\n"
           "</html>\n";

    QPrinter printer(QPrinter::PrinterResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setPaperSize(QPrinter::A4);
    printer.setOutputFileName("C:/Users/souso/Desktop/reentcar/PDF/clients_morals.pdf");

    QTextDocument doc;
    doc.setHtml(strStream);
    doc.setPageSize(printer.pageRect().size()); // This is necessary if you want to hide the page number
    doc.print(&printer);
}

void Dialog::on_m_afficher_4_clicked()
{
    QString strStream;
    QTextStream out(&strStream);

    const int rowCount = ui->tableView_6->model()->rowCount();
    const int columnCount = ui->tableView_6->model()->columnCount();

    out << "<html>\n"
           "<head>\n"
           "<meta Content=\"Text/html; charset=Windows-1251\">\n"
        << QString("<title>%1</title>\n").arg("strTitle")
        << "</head>\n"
           "<body bgcolor=#ffffff link=#5000A0>\n"
           "<center> <H1>Liste des Clients physiques</H1><table border=1 cellspacing=0 cellpadding=2>\n";

    out << "<thead><tr bgcolor=#f0f0f0> <th>Numero</th>";
    for (int column = 0; column < columnCount; column++)
        if (!ui->tableView_5->isColumnHidden(column))
            out << QString("<th>%1</th>").arg(ui->tableView_6->model()->headerData(column, Qt::Horizontal).toString());
    out << "</tr></thead>\n";

    for (int row = 0; row < rowCount; row++)
    {
        out << "<tr> <td bkcolor=0>" << row + 1 << "</td>";
        for (int column = 0; column < columnCount; column++)
        {
            if (!ui->tableView_6->isColumnHidden(column))
            {
                QString data = ui->tableView_6->model()->data(ui->tableView_6->model()->index(row, column)).toString().simplified();
                out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
            }
        }
        out << "</tr>\n";
    }
    out << "</table> </center>\n"
           "</body>\n"
           "</html>\n";

    QPrinter printer(QPrinter::PrinterResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setPaperSize(QPrinter::A4);
    printer.setOutputFileName("C:/Users/souso/Desktop/reentcar/PDF/clients_physiques.pdf");

    QTextDocument doc;
    doc.setHtml(strStream);
    doc.setPageSize(printer.pageRect().size()); // This is necessary if you want to hide the page number
    doc.print(&printer);
}

void Dialog::on_lineEdit_19_textChanged(const QString &arg1)
{
    ui->tableView_5->setModel(tmp1.afficherr(arg1));
}

void Dialog::on_lineEdit_26_textChanged(const QString &arg1)
{
    ui->tableView_4->setModel(tmp1.afficherr(arg1));
}

void Dialog::on_lineEdit_25_textChanged(const QString &arg1)
{
    ui->tableView_7->setModel(tmp1.afficherr(arg1));
}

void Dialog::on_lineEdit_69_textChanged(const QString &arg1)
{
    ui->tableView_6->setModel(tmp2.afficherr(arg1));
}

void Dialog::on_lineEdit_67_textChanged(const QString &arg1)
{
    ui->tableView_9->setModel(tmp2.afficherr(arg1));
}

void Dialog::on_lineEdit_70_textChanged(const QString &arg1)
{
    ui->tableView_77->setModel(tmp2.afficherr(arg1));
}
// -------------------------------zohra--------------
void Dialog::initZohra()
{
    this->showMaximized();

    QPixmap pic(":/img/heart.png");

    int w=ui->heart->width();
    int h=ui->heart->height();
    ui->heart->setPixmap(pic.scaled(w,h,Qt::KeepAspectRatio ));

      QRegExp nom("[a-z-A-Z]{20}");
      QValidator *validatorNom = new QRegExpValidator(nom, this);
      ui->lineEditNom->setValidator(validatorNom);

      QRegExp prenom("[a-z-A-Z]{20}");
      QValidator *validatorPrenom = new QRegExpValidator(prenom, this);
      ui->lineEditPrenom->setValidator(validatorPrenom);

      QRegExp tel("[0-9]{8}");
      QValidator *validatorTel = new QRegExpValidator(tel, this);
      ui->lineEditNumTel->setValidator(validatorTel);

      ui->lineEditSoldeConge->setValidator( new QIntValidator(0,999,this) );

      QRegExp login("[a-z-A-Z]{20}");
      QValidator *validatorLogin = new QRegExpValidator(login, this);
      ui->lineEdittLogin->setValidator(validatorLogin);

      QRegularExpression email("\\b[A-Z0-9._%+-]+@[A-Z0-9.-]+\\.[A-Z]{2,4}\\b",QRegularExpression::CaseInsensitiveOption);
      ui->lineEditEmail->setValidator(new QRegularExpressionValidator(email,this));


}





void Dialog::on_majSoldeConge_clicked()
{
    ui->tableViewEmp->setModel(tmpEmploye.afficher());
    employe e;
    e.MiseaJourConge();
    QSqlQuery query;
    query.prepare ("select id from employe");
    if (query.exec())
    {
        while (query.next())
        {
            int id = query.value(0).toInt();
            tmpEmploye.MiseaJourSoldeConge(id);
        }
    }

}
void Dialog::on_afficher_clicked()
{
    ui->tableViewCongeAll->setModel(tmpConge.afficherconge());
}
void Dialog::on_comboBoxTriCompte_activated(int index)
{
    ui->tableViewCompte->setModel(tmpCompte.Tri(index));
}

void Dialog::on_comboBoxTriConge_activated(int index)
{
    ui->tableViewCongeAll->setModel(tmpConge.Tri(index));
}
void Dialog::on_comboBoxTriEmp_activated(int index)
{
    ui->tableViewEmp->setModel(tmpEmploye.Tri(index));
}
void Dialog::on_lineEditRechercherEmp_textChanged(const QString &arg)
{
   QString str=arg;
    str.replace("&", "");str.replace("/", ""); str.replace("(", ""); str.replace(")", "");str.replace("=", "");str.replace("*", "");str.replace("-", "");str.replace(".", ""); str.replace("+", "");str.replace(":", ""); str.replace(";", ""); str.replace("!", "");str.replace("§", "");str.replace("?", "");

    ui->tableViewEmp->setModel(tmpEmploye.rechercher(str));
}



void Dialog::on_pushButton_AjouterEmp_clicked()
{
    QDate date;;
    QString nom= ui->lineEditNom->text();
    QString prenom= ui->lineEditPrenom->text();
    QString email= ui->lineEditEmail->text();
    QDate dateNaiss =ui->dateNaissEdit->date();
    QString numTel = ui->lineEditNumTel->text();
    int soldeConge=ui->lineEditSoldeConge->text().toInt();
    QDate dateMajConge= date.currentDate();
    QSqlQueryModel *model = new QSqlQueryModel;
    bool etat=false;
    employe e( nom, prenom, email, dateNaiss, numTel, dateMajConge, soldeConge, etat);
    bool test=e.ajouter();


    if(numTel.length()==8 && ui->lineEditEmail->hasAcceptableInput())
    {

        if(test)
        {
            ui->tableViewEmp->setModel(tmpEmploye.afficher());
            model->setQuery("select employe.id from employe LEFT JOIN compte on employe.id=compte.idemploye WHERE compte.idemploye IS NULL");
            ui->comboBoxIdEmpCompte->setModel(model);
            ui->tableViewCompte->setModel(tmpCompte.afficherCompte());
        }

        else
        {
            QMessageBox::critical(nullptr, QObject::tr("ajout"),
                        QObject::tr("Erreur d'ajout!.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
        }
    }

    else if (numTel.length()!=8 && ui->lineEditEmail->hasAcceptableInput())
    {


        QMessageBox::warning(this, tr(" verification numéro de téléphone"),
                             tr("Vérifier que le numéro de téléphone est composé de 8 chiffres!"), QMessageBox::Ok);

    }
    else if (!ui->lineEditEmail->hasAcceptableInput() && numTel.length()==8)
    {


        QMessageBox::warning(this, tr(" verification Email"),
                             tr("le format de l'email est incorrect."), QMessageBox::Ok);

    }
    else
    {
        QMessageBox::warning(this, tr(" verification email et numéro de téléphone:"),
                             tr("vérifier l'email et le numéro de téléphone!"), QMessageBox::Ok);

    }



}

void Dialog::on_pushButtonModifierEmp_clicked()
{
    QModelIndexList selection = ui->tableViewEmp->selectionModel()->selectedRows(0);

        if (!selection.empty()) {

            QModelIndex idIndex = selection.at(0);
            QString id = idIndex.data().toString();


            ui->lineEditID->setText(id);

            QSqlQuery query;
            query.prepare ("select id,nom,prenom,dateNaiss,numTel,email,soldeConge from employe where id = '"+id+"'");
            if (query.exec())
            {
                while (query.next())
                {
                    ui->lineEditID->setText(query.value(0).toString());
                    ui->lineEditNom->setText(query.value(1).toString());
                    ui->lineEditPrenom->setText(query.value(2).toString());
                    ui->dateNaissEdit->setDate(query.value(3).toDate());
                    ui->lineEditNumTel->setText(query.value(4).toString());
                    ui->lineEditEmail->setText(query.value(5).toString());
                   ui->lineEditSoldeConge->setText(query.value(6).toString());
                }
            }


                } else {
                    QMessageBox::information(this, tr("Modification Employe"),
                                             tr("Selectionnez l'employé que vous voulez Modifier."));
                }
}

void Dialog::on_pushButtonSupprimerEmp_clicked()
{
    QModelIndexList selection = ui->tableViewEmp->selectionModel()->selectedRows(0);
    if (!selection.empty()) {
        QModelIndex idIndex = selection.at(0);
        double id = idIndex.data().toDouble();
        QString nomE = idIndex.sibling(idIndex.row(), 2).data().toString();
        QString prenomE = idIndex.sibling(idIndex.row(), 3).data().toString();
        QSqlQueryModel *model = new QSqlQueryModel;
        QMessageBox::StandardButton button;
        button = QMessageBox::question(this, tr("Suppression Employe"),
                                       QString(tr("Etes-vous sûr de vouloir supprimer " \
                                                  "l'employe '%1' : '%2' '%3'?"))
                                              .arg(id).arg(nomE).arg(prenomE),
                                       QMessageBox::Yes | QMessageBox::No);

        if (button == QMessageBox::Yes) {
           QString ids=QString::number(id);
            QSqlQuery q;
            q.prepare("delete from employe where ID='"+ids+"'");
            q.exec();

            model->setQuery("select employe.id from employe LEFT JOIN compte on employe.id=compte.idemploye WHERE compte.idemploye IS NULL");
            ui->comboBoxIdEmpCompte->setModel(model);
            ui->tableViewCompte->setModel(tmpCompte.afficherCompte());
        }
    }
    else {
        QMessageBox::information(this, tr("Suppression Employe"),
                                 tr("Selectionnez l'employe que vous voulez supprimer."));
    }
    ui->tableViewEmp->setModel(tmpEmploye.afficher());
}



void Dialog::on_pushButton_ModifierEmp_clicked()
{
    int id= ui->lineEditID->text().toInt();
    QString nom= ui->lineEditNom->text();
    QString prenom= ui->lineEditPrenom->text();
    QString email= ui->lineEditEmail->text();
    QDate dateNaiss =ui->dateNaissEdit->date();
    QString numTel = ui->lineEditNumTel->text();
    int soldeConge = ui->lineEditSoldeConge->text().toInt();
    QDate date;
    QDate dateMajConge= date.currentDate();

    employe e(id,nom,prenom,email,dateNaiss,numTel,dateMajConge,soldeConge,0);


        QMessageBox msg;

    if(numTel.length()==8 && ui->lineEditEmail->hasAcceptableInput())
    {

                if(  e.modifier(id) )
                {
                    ui->tableViewEmp->setModel(tmpEmploye.afficher());
                    msg.setText("Modification avec succes.");
                    msg.exec();


                }
                else
                {
                    msg.setText("Echec de la modification.");
                            msg.exec();

                }
    }
    else if (numTel.length()!=8 && ui->lineEditEmail->hasAcceptableInput())
    {


        QMessageBox::warning(this, tr(" verification numéro de téléphone"),
                             tr("Vérifier que le numéro de téléphone est composé de 8 chiffres!"), QMessageBox::Ok);

    }
    else if (!ui->lineEditEmail->hasAcceptableInput() && numTel.length()==8)
    {


        QMessageBox::warning(this, tr(" verification Email"),
                             tr("le format de l'email est incorrect."), QMessageBox::Ok);

    }
    else
    {
        QMessageBox::warning(this, tr(" verification email et numéro de téléphone:"),
                             tr("vérifier l'email et le numéro de téléphone!"), QMessageBox::Ok);

    }
}





void Dialog::on_buttonEnvoyerDemande_clicked()
{

    QString motif= ui->comboBoxMotif->currentText();
    QDate dateDebut =ui->datDebuteEdit->date();
    QDate dateFin =ui->dateFinEdit->date();
    QDate dateRetour =ui->dateRetourEdit->date();
    int idEmp=ui->comboBoxIdEmpConge->currentText().toInt();
  //  int idEmp=ui->lineEditIdEmpCompte->text().toInt();
   QString idEmploye=ui->comboBoxIdEmpConge->currentText();

    conge c( dateDebut, dateFin, dateRetour, motif, NULL, idEmp);

        bool test=c.ajouterconge();
            if(test)
            {
                ui->tableViewCongeAll->setModel(tmpConge.afficherconge());
                ui->tableViewCongeEmp->setModel(tmpConge.affichercongeEmp(idEmploye));
            }

            else
            {
                QMessageBox::critical(nullptr, QObject::tr("ajout"),
                            QObject::tr("Erreur d'ajout!!!!.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);
            }
}







void Dialog::on_pushButton_AjouterCompte_clicked()
{

    QString login= ui->lineEdittLogin->text();
    QString mdp= ui->lineEditMDP->text();
    QString mdp2=ui->lineEditMDP2->text();
    QString role= ui->comboBoxRole->currentText();
    int idEmploye =ui->comboBoxIdEmpCompte->currentText().toInt();
    compte c (login,mdp,role,idEmploye);
    bool test=c.ajouterCompte();
    QSqlQuery qry;

        if(mdp==mdp2)
        {
            if(test)
            {
                ui->tableViewCompte->setModel(tmpCompte.afficherCompte());
                on_gestionCompte_clicked();
            }

            else
            {
                QMessageBox::critical(nullptr, QObject::tr("ajout"),
                            QObject::tr("Erreur d'ajout!!!!.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);
            }
        }
        else
        {
            QMessageBox::critical(nullptr, QObject::tr("ajout"),
                        QObject::tr("Erreur d'ajout!\n"
                                    "Vérifier la saisie du mot de passe!."), QMessageBox::Cancel);
        }
}

void Dialog::on_pushButton_modifierEmploye_clicked()
{



    QModelIndexList selection = ui->tableViewCompte->selectionModel()->selectedRows(0);

        if (!selection.empty()) {

            QModelIndex idIndex = selection.at(0);
            QString id = idIndex.data().toString();

            ui->lineEditIDC->setText(id);
            QSqlQueryModel *model = new QSqlQueryModel;
           model->setQuery("select employe.id from employe LEFT JOIN compte on employe.id=compte.idemploye WHERE compte.idemploye IS NULL OR compte.id= '"+id+"' ");
            ui->comboBoxIdEmpCompte->setModel(model);
            QSqlQuery query;
            query.prepare ("select id,login,mdp,role,idEmploye from compte where id = '"+id+"'");
            if (query.exec())
            {
                while (query.next())
                {
                    //idcompte, login , mot de passe,role,nom,prenom,idEmp

                    ui->lineEditIDC->setText(query.value(0).toString());
                    ui->lineEdittLogin->setText(query.value(1).toString());
                    ui->lineEditMDP->setText(query.value(2).toString());
                    ui->comboBoxRole->setCurrentText(query.value(3).toString());
                    ui->comboBoxIdEmpCompte->setCurrentText(query.value(4).toString());

                }
            }


                } else {
                    QMessageBox::information(this, tr("Modification Employe"),
                                             tr("Selectionnez l'employé que vous voulez Modifier."));
                }

}


void Dialog::on_deleteCompte_clicked() //supprimer compte
{
    QModelIndexList selection = ui->tableViewCompte->selectionModel()->selectedRows(0);

        if (!selection.empty()) {
        //idcompte, login , mot de passe,role,nom,prenom,idEmp
        QModelIndex idIndex = selection.at(0);
        double id = idIndex.data().toDouble();
        QString nomE = idIndex.sibling(idIndex.row(), 4).data().toString();
        QString prenomE = idIndex.sibling(idIndex.row(), 5).data().toString();

        QMessageBox::StandardButton button;
        button = QMessageBox::question(this, tr("Suppression Compte"),
                                       QString(tr("Etes-vous sûr de vouloir supprimer " \
                                                  "ce compte '%1' associé à '%2' '%3'?"))
                                              .arg(id).arg(nomE).arg(prenomE),
                                       QMessageBox::Yes | QMessageBox::No);

        if (button == QMessageBox::Yes) {
           QString ids=QString::number(id);
            QSqlQuery q;
            q.prepare("delete from compte where ID='"+ids+"'");
            q.exec();
            on_gestionCompte_clicked();
        }
    }
    else {
        QMessageBox::information(this, tr("Suppression Employe"),
                                 tr("Selectionnez l'employe que vous voulez supprimer."));
    }
    ui->tableViewCompte->setModel(tmpCompte.afficherCompte());
}




void Dialog::on_stat1_clicked()
{
    DrilldownChart *chart = new DrilldownChart();
    chart->setTheme(QChart::ChartThemeQt);
    chart->setAnimationOptions(QChart::AllAnimations);
    QSizeF s(500,500);
    chart->resize(s);
    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignRight);

    QPieSeries *etatAllEmpSeries = new QPieSeries(ui->statBox); //lkbira


    etatAllEmpSeries->setName("Etat des employés");
    QSqlQuery query;
     query.prepare("SELECT DISTINCT etat from employe ");
     query.exec();

      while(query.next()) // ki tenzel aala les etats yhezek lel les roles fel etat hedheka
      {
          int etat = query.value(0).toInt();
          QString etatS = query.value(0).toString();
          QString etatString;

          if (etat==1)
          {
              etatString="congé";
          }
          else if (etat==0)
          {
              etatString="travail";
          }

          QPieSeries *roleSeries = new QPieSeries(ui->statBox); // detaillé
          roleSeries->setName("Role des employés en " + etatString);
          QSqlQuery q;
          q.prepare("SELECT DISTINCT compte.Role from Compte INNER JOIN employe on employe.id=compte.idemploye where etat='"+etatS+"'");
          q.exec();
          while(q.next())
          {
              QString role = q.value(0).toString();
              QSqlQuery qr;
              qr.prepare("select COUNT(*) from employe  inner join compte "
                         "on employe.id=compte.idemploye where compte.role='"+role+"'");

              qr.exec();
              qr.next();
              *roleSeries << new DrilldownSlice(qr.value(0).toInt(), role, etatAllEmpSeries);
          }
          QObject::connect(roleSeries, &QPieSeries::clicked, chart, &DrilldownChart::handleSliceClicked);
          *etatAllEmpSeries << new DrilldownSlice(roleSeries->sum(), etatString, roleSeries);
      }

      QObject::connect(etatAllEmpSeries, &QPieSeries::clicked, chart, &DrilldownChart::handleSliceClicked);

      chart->changeSeries(etatAllEmpSeries);
      QChartView *chartView = new QChartView(chart,ui->statBox);
      chartView->setRenderHint(QPainter::Antialiasing);
    ui->stackedWidgetEmp->setCurrentIndex(1);
}

void Dialog::on_rechercherConge_textChanged(const QString &arg1)
{
    QString str=arg1;
     str.replace("&", "");str.replace("/", ""); str.replace("(", ""); str.replace(")", "");str.replace("=", "");str.replace("*", "");str.replace("-", "");str.replace(".", ""); str.replace("+", "");str.replace(":", ""); str.replace(";", ""); str.replace("!", "");str.replace("§", "");str.replace("?", "");

     ui->tableViewCongeAll->setModel(tmpConge.rechercher(str));
}


void Dialog::on_refuserConge_clicked()
{

   //     ui->stackedWidgetConge->setCurrentIndex(0);
    sendMailRefus();

}

void Dialog::on_GestionCongeRH_clicked()
{

        ui->stackedWidgetConge->setCurrentIndex(1);

}

void Dialog::on_returnEmp_clicked()
{
    ui->stackedWidgetEmp->setCurrentIndex(0);
}

void Dialog::on_pushButton_ModifierCompte_clicked()
{
    int idC= ui->lineEditIDC->text().toInt();
    QString login= ui->lineEdittLogin->text();
    QString mdp= ui->lineEditMDP->text();
    QString mdp2= ui->lineEditMDP2->text();
    int idEmp = ui->comboBoxIdEmpCompte->currentText().toInt();
    QString role= ui->comboBoxRole->currentText();
    compte c(idC,login,mdp,role,idEmp);
    QMessageBox msg;

        if(mdp==mdp2)
        {
            if(  c.modifierCompte() )
            {
                ui->tableViewCompte->setModel(tmpCompte.afficherCompte());
                on_gestionCompte_clicked();
                msg.setText("Modification avec succes.");
                msg.exec();


            }
            else
            {
                msg.setText("Echec de la modification.");
                msg.exec();

            }
        }

        else
        {
            QMessageBox msg;
            QMessageBox::critical(nullptr, QObject::tr("Modification"),
            QObject::tr("Erreur de modification!\n"
            "Vérifier la saisie du mot de passe!."), QMessageBox::Cancel);
        }
}

void Dialog::on_accepterConge_2_clicked()
{
    QModelIndexList selection = ui->tableViewCongeAll->selectionModel()->selectedRows(0);
    QSqlQuery qry;
    if (!selection.empty()) {
        QModelIndex idIndex = selection.at(0);
        int id = idIndex.sibling(idIndex.row(),0).data().toInt();
        QString idS= QString::number(id);
        int etat=idIndex.sibling(idIndex.row(),5).data().toInt();
        int idEmploye=idIndex.sibling(idIndex.row(),6).data().toInt();
        QString idEmp= QString::number(idEmploye);
        qDebug() << "id:" << id;
        qDebug() << "etat:" << etat;

        if (etat==0)
        {
            employe e;
            bool test=e.affecterCongeEmp(id);
            if (test)
            {
                qDebug() << "t3adat!" ;
                ui->tableViewCongeAll->setModel(tmpConge.afficherconge());
                ui->tableViewCongeEmp->setModel(tmpConge.affichercongeEmp(idEmp));
                QMessageBox::information(this, tr("Congé accepté!"),
                                                           tr("cliquez encore une fois sur ce bouton pour envoyer un mail "));
            }
            else
            {
                QMessageBox::information(this, tr("Impossible de faire ceci"),
                                                           tr("erreur "));
            }
         }
     }
     else {
         QMessageBox::information(this, tr("Impossible!"),
                                             tr("Selectionnez l'employé que vous voulez Modifier."));
     }
}

void Dialog::on_modifierConge_clicked()
{
    QModelIndexList selection = ui->tableViewCongeEmp->selectionModel()->selectedRows(0);

        if (!selection.empty()) {

            QModelIndex idIndex = selection.at(0);
            QString id = idIndex.data().toString();


            ui->comboBoxIdEmpConge->setCurrentText(id);

            QSqlQuery query;
            query.prepare ("select * from conge where id = '"+id+"'");
            if (query.exec())
            {
                while (query.next())
                {
                    ui->IDConge->setText(query.value(0).toString());
                    ui->datDebuteEdit->setDate(query.value(1).toDate());
                    ui->dateFinEdit->setDate(query.value(2).toDate());
                    ui->dateRetourEdit->setDate(query.value(3).toDate());
                    ui->comboBoxMotif->setCurrentText(query.value(4).toString());
                    ui->comboBoxIdEmpCompte->setCurrentText(query.value(6).toString());
                }
            }


                } else {
                    QMessageBox::information(this, tr("Modification Employe"),
                                             tr("Selectionnez l'employé que vous voulez Modifier."));
                }
}
void Dialog::on_editConge_clicked()
{
    int id= ui->IDConge->text().toInt();
    QDate dateDebut= ui->datDebuteEdit->date();
    QDate dateFin= ui->dateFinEdit->date();
    QDate dateRetour= ui->dateRetourEdit->date();
    QString motif= ui->comboBoxMotif->currentText();
    int idEmploye= ui->comboBoxIdEmpConge->currentText().toInt();
    QString idEmp= ui->comboBoxIdEmpConge->currentText();
    conge c ( id,dateDebut,dateFin,dateRetour,motif, idEmploye);
    qDebug()<<"1id"<<id;
    qDebug()<<"1dateDebut"<<dateDebut;
    qDebug()<<"1dateFin"<<dateFin;
    qDebug()<<"1dateRetour"<<dateRetour;
    qDebug()<<"1motif"<<motif;
    qDebug()<<"1idEmploye"<<idEmploye;


        QMessageBox msg;

    if(  c.modifierconge() )
    {
        ui->tableViewCongeAll->setModel(tmpConge.afficherconge());
        ui->tableViewCongeEmp->setModel(tmpConge.affichercongeEmp(idEmp));
        msg.setText("Modification avec succes.");
        msg.exec();


    }
    else
    {
        msg.setText("Echec de la modification.");
                msg.exec();

    }

}

void Dialog::on_deleteConge_clicked()
{
    QModelIndexList selection = ui->tableViewCongeEmp->selectionModel()->selectedRows(0);
    if (!selection.empty())
    {
        on_modifierConge_clicked();
        QString idEmploye= ui->comboBoxIdEmpConge->currentText();
        QModelIndex idIndex = selection.at(0);
        double id = idIndex.data().toDouble();
        QString motif = idIndex.sibling(idIndex.row(), 4).data().toString();


        QMessageBox::StandardButton button;
        button = QMessageBox::question(this, tr("Suppression Conge"),
                                       QString(tr("Etes-vous sûr de vouloir supprimer " \
                                                  "le  %1  qui a comme ID '%2' ?"))
                                              .arg(motif).arg(id),
                                       QMessageBox::Yes | QMessageBox::No);

            if (button == QMessageBox::Yes)
            {
                QString ids=QString::number(id);
                QSqlQuery q1 , q;
                q.prepare("delete from conge where ID='"+ids+"'");
                q.exec();
                ui->tableViewCongeAll->setModel(tmpConge.afficherconge());
                ui->tableViewCongeEmp->setModel(tmpConge.affichercongeEmp(idEmploye));
            }
    }
    else
    {
        QMessageBox::information(this, tr("Suppression Congé"),
                                 tr("Selectionnez le congé que vous voulez supprimer."));
    }



}

void Dialog::on_GestionCongeEmp_clicked()
{
    QSqlQueryModel *model = new QSqlQueryModel;
     ui->stackedWidgetConge->setCurrentIndex(0);
     model->setQuery("select id from employe");
     ui->comboBoxIdEmpConge->setModel(model);
     ui->tableViewCongeAll->setModel(tmpConge.afficherconge());

}
void Dialog::sendMail()
{

    Smtp* smtp = new Smtp("haribizohra1@gmail.com", "weonlylive1", "smtp.gmail.com", 465);
    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));

    QModelIndexList selection = ui->tableViewCongeAll->selectionModel()->selectedRows(0);
    QSqlQuery qry;
    QString idConge="";
    QString motif="";
    QString nom="";
    QString prenom="";
    QString email="";

    if (!selection.empty()) {
        QModelIndex idIndex = selection.at(0);
        int id = idIndex.sibling(idIndex.row(),0).data().toInt();
        QString idS= QString::number(id);
        QSqlQuery query;
        QString msg="non";
        query.prepare("select conge.id  , conge.motif , employe.nom , employe.prenom , employe.email FROM employe  INNER JOIN conge on employe.id=conge.idEmploye AND conge.id='"+idS+"'");

        if (query.exec())
        {
            while (query.next()) {
                 idConge=QString::number(query.value(0).toInt());
                 motif=query.value(1).toString();
                 nom=query.value(2).toString();
                 prenom=query.value(3).toString();
                 email=query.value(4).toString();


            }
        }
        qDebug()<<"idConge motif nom prenom email "<< idConge + motif+ nom +prenom +email;
         msg="Cher employé "+nom+" "+prenom +" Votre conge qui a comme ID " + idConge +" a été accepté! Prenez soin de vous!";
         smtp->sendMail(email , "congé accepté!",msg);
         QMessageBox::information(this, tr("Mail"),
                                             tr("Mail Envoyé!"));

     }
     else {
         QMessageBox::information(this, tr("Impossible!"),
                                             tr("Selectionnez l'employé que vous voulez Modifier."));
     }

}
void Dialog::sendMailRefus()
{

    Smtp* smtp = new Smtp("haribizohra1@gmail.com", "weonlylive1", "smtp.gmail.com", 465);
    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));

    QModelIndexList selection = ui->tableViewCongeAll->selectionModel()->selectedRows(0);
    QSqlQuery qry;
    QString idConge="";
    QString motif="";
    QString nom="";
    QString prenom="";
    QString email="";

    if (!selection.empty()) {
        QModelIndex idIndex = selection.at(0);
        int id = idIndex.sibling(idIndex.row(),0).data().toInt();
        int etat = idIndex.sibling(idIndex.row(),5).data().toInt();
        QString idS= QString::number(id);
        QSqlQuery query;
        QString msg="non";
        if (etat==0)
        {
            query.prepare("select conge.id  , conge.motif , employe.nom , employe.prenom , employe.email FROM employe  INNER JOIN conge on employe.id=conge.idEmploye AND conge.id='"+idS+"'");

            if (query.exec())
            {
                while (query.next()) {
                     idConge=QString::number(query.value(0).toInt());
                     motif=query.value(1).toString();
                     nom=query.value(2).toString();
                     prenom=query.value(3).toString();
                     email=query.value(4).toString();


                }
            }
            qDebug()<<"idConge motif nom prenom email "<< idConge + motif+ nom +prenom +email;
             msg="Cher employé "+nom+" "+prenom +" Votre conge qui a comme ID " + idConge +" a été refusé! !";
             smtp->sendMail(email, "congé refusé!",msg);
             QMessageBox::information(this, tr("Mail"),
                                                 tr("Mail Envoyé!"));

             QMessageBox::StandardButton button;
             button = QMessageBox::question(this, tr("Suppression Conge"),
                                            QString(tr("Un mail de refus du congé %1 a été envoyé " \
                                                       "Etes-vous sûr de vouloir le supprimer?"))
                                                   .arg(id),
                                            QMessageBox::Yes | QMessageBox::No);

                 if (button == QMessageBox::Yes)
                 {
                     QString ids=QString::number(id);
                     QSqlQuery q;
                     q.prepare("delete from conge where ID='"+ids+"'");
                     q.exec();
                     ui->tableViewCongeAll->setModel(tmpConge.afficherconge());
                    // ui->tableViewCongeEmp->setModel(tmpConge.affichercongeEmp(idEmploye));
                 }
        }
        else
        {
            QMessageBox::information(this, tr("Impossible!"),
                                                tr("Ce congé a été accepté!."));
        }

     }
     else
    {
         QMessageBox::information(this, tr("Impossible!"),
                                             tr("Selectionnez l'employé que vous voulez Modifier."));
     }

}





/*void Dialog::mailSent(QString status)
{
    if(status == "Message sent")
        QMessageBox::warning( 0, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );
}*/

void Dialog::on_comboBoxIdEmpCompte_textActivated(const QString &arg1)
{
    QString nom;
    QString prenom;
    QSqlQuery qry;
    qry.prepare("select nom, prenom FROM employe where id='"+arg1+"'");
    if(qry.exec())
    {
        while (qry.next())
        {
             nom=qry.value(0).toString();
             prenom=qry.value(1).toString();
             qDebug()<<"nom prenom idE 1"<<nom+prenom+arg1;
        }

    }
    qDebug()<<"nom prenom idE 2 "<<nom+prenom+arg1;
    ui->lineEdittLogin->setText(nom+prenom+arg1);

}

