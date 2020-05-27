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


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    init();
}

void Dialog:: init()
{
    ui->setupUi(this);

    ui->tabWidget->setCurrentIndex(0);
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

   /*
    QRegExp re("[a-z-A-Z ]{3}");
    QRegExpValidator *v = new QRegExpValidator(re, this);

    QRegExp re2("[A-Z-a-z-0-9 ]{30}");
    QRegExpValidator *v2 = new QRegExpValidator(re2, this);

     //email
    QRegularExpression rx("\\b[A-Z0-9._%+-]+@[A-Z0-9.-]+\\.[A-Z]{2,4}\\b",
                          QRegularExpression::CaseInsensitiveOption);
    ui->lineEdit_4->setValidator(new QRegularExpressionValidator(rx, this));
    */

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
        qry.prepare("SELECT * FROM locations2 WHERE IDLOC='"+id+"' ");
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
            q.prepare("delete from locations2 where IDLOC='"+ids+"'");
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
    query.prepare("select * from locations2 ");
   /* query.prepare("SELECT l.IDLOC,l.IDRES,r.IDCLIENT,r.MATRICULE,v.MARQUE,v.MODELE,"
                  "r.DATE_DEPART,r.DATE_ARRIVEE,r.MONTANT_HT,r.TOTAL_TTC,r.REMISE,"
                  "r.TOTAL_G,l.RESTE_A_PAYER,l.CAUTION FROM Locations2 l INNER JOIN Reservation r "
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

    QPieSeries *marqueSeries = new QPieSeries(ui->tabWidget);
    marqueSeries->setName("Location par Marque");

    QSqlQuery query;
    query.prepare("SELECT DISTINCT MARQUE from VOITURES");
    query.exec();
    while(query.next())
    {
        QString marque = query.value(0).toString();
        QPieSeries *modeleSeries = new QPieSeries(ui->tabWidget);
        modeleSeries->setName("Location par Modèle - " + marque);

        QSqlQuery q;
        q.prepare("SELECT DISTINCT MODELE from VOITURES where MARQUE='"+marque+"'");
        q.exec();
        while(q.next())
        {
            QString modele = q.value(0).toString();
            QSqlQuery qr;
            qr.prepare("select COUNT(*) from locations2 l inner join reservation r "
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
        query.prepare("SELECT KM_DEPART,KM_ARRIVEE,CARB_DEPART,CARB_ARRIVEE from LOCATIONS2 where IDLOC='"+idLoc+"'");
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
