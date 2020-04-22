#include "dialog.h"
#include "ui_dialog.h"
#include <QModelIndex>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
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
                ui->loc_carbD->setText(qry.value(4).toString());
                ui->loc_carbA->setText(qry.value(5).toString());
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
        QString idc = idIndex.sibling(idIndex.row(), 2).data().toString();
        QString mat = idIndex.sibling(idIndex.row(), 3).data().toString();

        QMessageBox::StandardButton button;
        button = QMessageBox::question(this, tr("Suppression location"),
                                       QString(tr("Etes-vous sûr de vouloir supprimer " \
                                                  "la location '%1' de la voiture '%2' pour le client '%3'?"))
                                              .arg(id).arg(mat).arg(idc),
                                       QMessageBox::Yes | QMessageBox::No);

        if (button == QMessageBox::Yes) {
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
    QString carbD=ui->loc_carbD->text();
    QString carbA=ui->loc_carbA->text();
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
        model->setQuery("(SELECT CONCAT(CONCAT(IDC,' '),CONCAT(CONCAT(NOM, ' '),PRENOM)) AS aff FROM PHYSIQUE) UNION (SELECT CONCAT(CONCAT(IDC,' '),CONCAT(CONCAT(NOM_SOC, ' de '),PROP)) AS aff FROM MORAL)");
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
            ui->loc_societe->setText(query.value(1).toString());
            ui->loc_nom->setText(query.value(1).toString());
            ui->loc_prenom->setText(query.value(1).toString());
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

void Dialog::on_tabWidget_currentChanged(int index)
{
    ui->table_res->setModel(res.afficher());
    ui->table_loca->setModel(tmp.afficher());
}
