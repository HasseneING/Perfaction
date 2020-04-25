#include "dialog.h"
#include "ui_dialog.h"
#include <QStackedWidget>
#include <ordinateur.h>
#include <voiture.h>
#include <QMessageBox>
#include <QDebug>
#include <QModelIndex>



Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->AfficherOrdTab->setModel(tmpOrd.AfficherOrd());
    ui->AfficherTabVoit->setModel(tmpVoit.AfficherVoit());
    ui->AfficherTabFour->setModel(tmpFour.AfficherFour());
    ui->stackedWidget->setCurrentIndex(0);
    ui->CATEG->addItem("A");
    ui->CATEG->addItem("B");
    ui->CATEG->addItem("C");
    ui->CATEG_2->addItem("A");
    ui->CATEG_2->addItem("B");
    ui->CATEG_2->addItem("C");
    ui->CPU->addItem("I3");
    ui->CPU->addItem("I5");
    ui->CPU->addItem("I7");
    ui->CPU_2->addItem("I3");
    ui->CPU_2->addItem("I5");
    ui->CPU_2->addItem("I7");
    ui->GPU->addItem("Nvidia");
    ui->GPU->addItem("Intel integrated Graphics");
    ui->GPU->addItem("AMD");
    ui->GPU_2->addItem("Nvidia");
    ui->GPU_2->addItem("Intel integrated Graphics");
    ui->GPU_2->addItem("AMD");
    ui->RAM->addItem("2Go");
    ui->RAM->addItem("4Go");
    ui->RAM->addItem("8Go");
    ui->RAM_2->addItem("2Go");
    ui->RAM_2->addItem("4Go");
    ui->RAM_2->addItem("8Go");



}

Dialog::~Dialog()
{
    delete ui;
}

/*-----------------INDEXWORK---------------------*/
void Dialog::on_OrdinateurWin_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}

void Dialog::on_VehiculeWin_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void Dialog::on_FournisseurWin_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}



void Dialog::on_AjouterOrdinateur_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);

}

void Dialog::on_AnnulerOrd_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}


void Dialog::on_AddVoiture_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);

}

void Dialog::on_AnnulerVoit_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void Dialog::on_AjouterFour_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void Dialog::on_AnnulerFour_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);

}


/*-----------------DATABASEWORK---------------------*/

void Dialog::on_Add_Ord_clicked()
{
    ordinateur O;
    if(ui->MAC->text().length()!=17)
    {
        QMessageBox msgBox;
        msgBox.setText("Adresse MAC Invalide!");
        msgBox.exec();
    }
    else{
            O.setMAC(ui->MAC->text());
            O.setCPU(ui->CPU->currentText());
            O.setGPU(ui->GPU->currentText());
            O.setRAM(ui->RAM->currentText());
            O.setDesc(ui->DESC->text());
            if(O.ajouterOrd())
            {
                ui->AfficherOrdTab->setModel(tmpOrd.AfficherOrd());
                QMessageBox msgBox;
                msgBox.setText("Ajout Avec Success!");
                msgBox.exec();
                ui->stackedWidget->setCurrentIndex(0);
            }
            else
            {
                QMessageBox msgBox;
                msgBox.setText("Echec! Champ(s) Manquant(s)!");
                msgBox.exec();
                ui->stackedWidget->setCurrentIndex(0);
            }
    }
}


void Dialog::on_AddVoit_clicked()
{
    voiture V;
    if(ui->MATRICULE->text().length()!=10)
    {
        QMessageBox msgBox;
        msgBox.setText("Matricule Invalide!");
        msgBox.exec();
    }
    else
    {
        V.setMatricule(ui->MATRICULE->text());
        V.setMarque(ui->MARQUE->text());
        V.setModele(ui->MODELE->text());
        V.setNbPlace(ui->NBPLACE->text().toUInt());
        V.setPuissance(ui->PUISSANCE->text());
        V.setCouleur(ui->COULEUR->text());
        V.setCatG(ui->CATEG->currentText());
        V.setConsommation(ui->CONSOMMATIO->text());
        V.setForfaitJour(ui->FORFAITJ->text().toInt());
        V.setForfaitSem(ui->FORFAITSEM->text().toInt());
        V.setForfaitMois(ui->FORFAITMOIS->text().toInt());
        V.setDescription(ui->descVoiture->text());
        if(V.AjouterVoit())
        {
            ui->AfficherTabVoit->setModel(tmpVoit.AfficherVoit());
            QMessageBox msgBox;
            msgBox.setText("Ajout Avec Success!");
            msgBox.exec();
            ui->stackedWidget->setCurrentIndex(1);
        }
        else
        {
            QMessageBox msgBox;
            msgBox.setText("Echec! Champ(s) Manquant(s)!");
            msgBox.exec();
            ui->stackedWidget->setCurrentIndex(1);
        }

    }

}




void Dialog::on_AddFournisseur_clicked()
{
    fournisseur F;

    if(ui->ID->text().length()!=0)
    {
        QMessageBox msgBox;
        msgBox.setText("ID Invalide!");
        msgBox.exec();
    }
    else{
            F.setID(ui->ID->text().toInt());
            F.setSOCIETE(ui->Societe->text());
            F.setADRESSE(ui->Adresse->text());
            F.setTELEPHONE(ui->Telephone->text().toInt());
            F.setEMAIL(ui->Email->text());
            if(F.ajouterFour())
            {
                ui->AfficherTabFour->setModel(tmpFour.AfficherFour());
                QMessageBox msgBox;
                msgBox.setText("Ajout Avec Success!");
                msgBox.exec();
                ui->stackedWidget->setCurrentIndex(2);
            }
            else
            {
                QMessageBox msgBox;
                msgBox.setText("Echec! Champ(s) Manquant(s)!");
                msgBox.exec();
                ui->stackedWidget->setCurrentIndex(2);
            }
    }
}

/*----------------PCDELMODIF------------------*/


void Dialog::on_PcSearch_clicked()
{

    QModelIndexList selection = ui->AfficherOrdTab->selectionModel()->selectedRows(0);

    if (!selection.empty()) {

        QModelIndex idIndex = selection.at(0);
        QString id = idIndex.data().toString();
        ui->MAC_2->setText(id);
        ui->stackedWidget->setCurrentIndex(6);

    }
}


void Dialog::on_PcSearch_3_clicked()
{
        ui->AfficherOrdTab->setModel(tmpOrd.AfficherOrd());
        ui->stackedWidget->setCurrentIndex(0);
}

void Dialog::on_SupprimerOrdinateur_clicked()
{


    QModelIndexList selection = ui->AfficherOrdTab->selectionModel()->selectedRows(0);

    if (!selection.empty()) {

        QModelIndex idIndex = selection.at(0);
        QString id = idIndex.data().toString();
    if(tmpOrd.SupprimerOrd(id))
           {
        ui->AfficherOrdTab->setModel(tmpOrd.AfficherOrd());
        QMessageBox msgBox;
        msgBox.setText("Suppression avec Success!");
        msgBox.exec();
        ui->stackedWidget->setCurrentIndex(0);
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("Echec de Suppression! ");
        msgBox.exec();
        ui->stackedWidget->setCurrentIndex(0);
        }
    }
}


void Dialog::on_AnnulerOrd_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void Dialog::on_Add_Ord_2_clicked()
{
    ordinateur O;
            O.setMAC(ui->MAC_2->text());
            O.setCPU(ui->CPU_2->currentText());
            O.setGPU(ui->GPU_2->currentText());
            O.setRAM(ui->RAM_2->currentText());
            O.setDesc(ui->DESC_2->text());
            if(O.ModifierOrd())
            {
                ui->AfficherOrdTab->setModel(tmpOrd.AfficherOrd());
                QMessageBox msgBox;
                msgBox.setText("Modification Avec Success!");
                msgBox.exec();
                ui->stackedWidget->setCurrentIndex(0);
            }
            else
            {
                QMessageBox msgBox;
                msgBox.setText("Echec! Champ(s) Manquant(s)!");
                msgBox.exec();
                ui->stackedWidget->setCurrentIndex(0);
            }
}








void Dialog::on_MacpcRecherche_textChanged(const QString &arg1)
{
    if (arg1=="")
        ui->AfficherOrdTab->setModel(tmpOrd.AfficherOrd());
   else
       this->ui->AfficherOrdTab->setModel(tmpOrd.SearchOrd(arg1));
}







/*----------------FOURDELMODIF------------------*/

void Dialog::on_IDFOURSEARCH_clicked()
{
    ui->AfficherTabFour->setModel(tmpFour.AfficherFour());
}



void Dialog::on_IDFOURSEARCH_3_clicked() // Modifier Fournisseur
{
    QModelIndexList selection = ui->AfficherTabFour->selectionModel()->selectedRows(0);

    if (!selection.empty()) {

        QModelIndex idIndex = selection.at(0);
        QString id = idIndex.data().toString();

        ui->ID_2->setText(id);
        ui->stackedWidget->setCurrentIndex(7);
    }
}


void Dialog::on_SuppFour_clicked()
{
    QModelIndexList selection = ui->AfficherTabFour->selectionModel()->selectedRows(0);

    if (!selection.empty()) {

        QModelIndex idIndex = selection.at(0);
        int id = idIndex.data().toInt();
    if(tmpFour.SupprimerFour(id))
           {
        ui->AfficherTabFour->setModel(tmpFour.AfficherFour());
        QMessageBox msgBox;
        msgBox.setText("Suppression avec Success!");
        msgBox.exec();
        ui->stackedWidget->setCurrentIndex(2);
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("Echec de Suppression! ");
        msgBox.exec();
        ui->stackedWidget->setCurrentIndex(2);
        }
    }
}


void Dialog::on_AnnulerFour_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void Dialog::on_AddFournisseur_2_clicked()
{
    fournisseur F;

    F.setID(ui->ID_2->text().toInt());
    F.setSOCIETE(ui->Societe_2->text());
    F.setADRESSE(ui->Adresse_2->text());
    F.setTELEPHONE(ui->Telephone_2->text().toInt());
    F.setEMAIL(ui->Email_2->text());
    if(F.ModifierFour())
    {
        ui->AfficherTabFour->setModel(tmpFour.AfficherFour());
        QMessageBox msgBox;
        msgBox.setText("Ajout Avec Success!");
        msgBox.exec();
        ui->stackedWidget->setCurrentIndex(2);
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("Echec! Champ(s) Manquant(s)!");
        msgBox.exec();
        ui->stackedWidget->setCurrentIndex(2);
    }

}




void Dialog::on_IDFOUR_textChanged(const QString &arg1)
{
    if (arg1=="")
        ui->AfficherTabFour->setModel(tmpFour.AfficherFour());
   else
       this->ui->AfficherTabFour->setModel(tmpFour.SearchFour(arg1));
}











/*----------------CARDELMODIF------------------*/

void Dialog::on_SearchCar_clicked()

{
    QModelIndexList selection = ui->AfficherTabVoit->selectionModel()->selectedRows(0);

    if (!selection.empty()) {

        QModelIndex idIndex = selection.at(0);
        QString id = idIndex.data().toString();
        ui->MATRICULE_2->setText(id);
       ui->stackedWidget->setCurrentIndex(8);
    }
}

void Dialog::on_SearchCar_3_clicked()
{
        ui->AfficherTabVoit->setModel(tmpVoit.AfficherVoit());
}

void Dialog::on_DELCAR_clicked()
{


    QModelIndexList selection = ui->AfficherTabVoit->selectionModel()->selectedRows(0);

    if (!selection.empty()) {

        QModelIndex idIndex = selection.at(0);
        QString mat = idIndex.data().toString();

    if(tmpVoit.SupprimerVoit(mat))
           {
        ui->AfficherTabVoit->setModel(tmpVoit.AfficherVoit());
        QMessageBox msgBox;
        msgBox.setText("Suppression avec Success!");
        msgBox.exec();
        ui->stackedWidget->setCurrentIndex(1);
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("Echec de Suppression! ");
        msgBox.exec();
        ui->stackedWidget->setCurrentIndex(1);
        }
    }
}





void Dialog::on_AnnulerVoit_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}




void Dialog::on_AddVoit_2_clicked()
{
    voiture V;


        V.setMatricule(ui->SearchCarMat->text());
        V.setMarque(ui->MARQUE_2->text());
        V.setModele(ui->MODELE_2->text());
        V.setNbPlace(ui->NBPLACE_2->text().toUInt());
        V.setPuissance(ui->PUISSANCE_2->text());
        V.setCouleur(ui->COULEUR_2->text());
        V.setCatG(ui->CATEG_2->currentText());
        V.setConsommation(ui->CONSOMMATIO_2->text());
        V.setForfaitJour(ui->FORFAITJ_2->text().toInt());
        V.setForfaitSem(ui->FORFAITSEM_2->text().toInt());
        V.setForfaitMois(ui->FORFAITMOIS_2->text().toInt());
        V.setDescription(ui->descVoiture_2->text());



        if(V.modifierVoit(ui->SearchCarMat->text()))
        {
            ui->AfficherTabVoit->setModel(tmpVoit.AfficherVoit());
            QMessageBox msgBox;
            msgBox.setText("Modification Avec Success!");
            msgBox.exec();
            ui->stackedWidget->setCurrentIndex(1);
        }
        else
        {
            QMessageBox msgBox;
            msgBox.setText("Echec! Champ(s) Manquant(s)!");
            msgBox.exec();
            ui->stackedWidget->setCurrentIndex(1);
        }

    }



void Dialog::on_SearchCarMat_textChanged(const QString &arg1)
{
    if (arg1=="")
        ui->AfficherTabVoit->setModel(tmpVoit.AfficherVoit());
   else
       this->ui->AfficherTabVoit->setModel(tmpVoit.SearchVoit(arg1));
}


