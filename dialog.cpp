
#include "dialog.h"
#include "ui_dialog.h"

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


void Dialog::on_afficherVign_clicked()
{
    ui->stackedVign->setCurrentIndex(0);
    ui->table_Vign->setModel(vign.afficher());
}

void Dialog::on_ajouterVign_clicked()
{
    ui->stackedVign->setCurrentIndex(1);

}

void Dialog::on_modifierVign_clicked()
{
    ui->stackedVign->setCurrentIndex(2);
}

void Dialog::on_supprimerVign_clicked()
{
    ui->stackedVign->setCurrentIndex(3);

    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT CODE FROM vignette");
    ui->supprimer_vign_comboBox->setModel(model);

    ui->table_Vign2->setModel(vign.afficher());
}

void Dialog::on_afficherVis_clicked()
{
    ui->stackedVis->setCurrentIndex(0);
    ui->table_Vis->setModel(vis.afficher());
}

void Dialog::on_ajouterVis_clicked()
{
    ui->stackedVis->setCurrentIndex(1);
}

void Dialog::on_modifierVis_clicked()
{
    ui->stackedVis->setCurrentIndex(2);
}

void Dialog::on_supprimerVis_clicked()
{
    ui->stackedVis->setCurrentIndex(3);

    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT ID FROM visite");
    ui->supprimer_vis_comboBox->setModel(model);

    ui->table_Vis2->setModel(vis.afficher());
}

void Dialog::on_afficherAssu_clicked()
{
    ui->stackedAssu->setCurrentIndex(0);
    ui->table_assu->setModel(assu.afficher());
}

void Dialog::on_ajouterAssu_clicked()
{
    ui->stackedAssu->setCurrentIndex(1);
}

void Dialog::on_modifierAssu_clicked()
{
    ui->stackedAssu->setCurrentIndex(2);
}

void Dialog::on_supprimerAssu_clicked()
{
    ui->stackedAssu->setCurrentIndex(3);

    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT ID FROM assurances");
    ui->supprimer_assu_comboBox->setModel(model);

    ui->table_Assu2->setModel(assu.afficher());
}

void Dialog::on_validerAjoutVign_clicked()
{
        int code=ui->codeVign->text().toInt();
        QString matricule=ui->matVign->text();
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
    QString matricule=ui->matVis->text();
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
    QString matricule=ui->matAssu->text();
    int npolice=ui->policeAssu->text().toInt();
    QString type=ui->typeAssu->text();
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
    QString matricule=ui->matVign_2->text();
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
    QString matricule=ui->matVis_2->text();
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
    QString matricule=ui->matAssu_2->text();
    int npolice=ui->policeAssu_2->text().toInt();
    QString type=ui->typeAssu_2->text();
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

void Dialog::on_validerSupprVign_clicked()
{
    QString code=ui->supprimer_vign_comboBox->currentText();
    QSqlQuery query;
    query.prepare("DELETE FROM vignette WHERE CODE='"+code+"' ");
    query.exec();

    ui->table_Vign2->setModel(vign.afficher());
}

void Dialog::on_validerSupprVis_clicked()
{
    QString id=ui->supprimer_vis_comboBox->currentText();
    QSqlQuery query;
    query.prepare("DELETE FROM visite WHERE ID='"+id+"' ");
    query.exec();

    ui->table_Vis2->setModel(vis.afficher());
}

void Dialog::on_validerSupprAssu_clicked()
{
    QString id=ui->supprimer_assu_comboBox->currentText();
    QSqlQuery query;
    query.prepare("DELETE FROM assurances WHERE ID='"+id+"' ");
    query.exec();

    ui->table_Assu2->setModel(assu.afficher());
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
