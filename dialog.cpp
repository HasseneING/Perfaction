#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->table_assu->setModel(assu.afficher());
    ui->table_Vign->setModel(vign.afficher());
    ui->table_Vis->setModel(vis.afficher());
}

Dialog::~Dialog()
{
    delete ui;
}


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

        QMessageBox msg;
        vignette v(code,matricule,dateDeb,dateExp,prix);
        if(v.ajouter())
        {
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

    QMessageBox msg;
    visite v(id,matricule,compagnie,code,dateDeb,dateExp,prix);
    if(v.ajouter())
    {
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

    QMessageBox msg;
    assurance a(id,matricule,npolice,type,dateDeb,dateFin,prix);
    if(a.ajouter())
    {
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
    vignette v(code,matricule,dateDeb,dateExp,prix);
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
    visite v(id,matricule,compagnie,code,dateDeb,dateExp,prix);
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
    assurance a(id,matricule,npolice,type,dateDeb,dateFin,prix);
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
