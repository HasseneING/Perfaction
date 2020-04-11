#include "dialog.h"
#include "ui_dialog.h"
#include <QStackedWidget>
#include <ordinateur.h>
#include <voiture.h>
#include <QMessageBox>
#include <QDebug>



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
            O.setCPU(ui->CPU->text());
            O.setGPU(ui->GPU->text());
            O.setRAM(ui->RAM->text());
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

    if(ui->MacpcRecherche->text().length()!=17)
    {
        QMessageBox msgBox;
        msgBox.setText("Adresse MAC Invalide!");
        msgBox.exec();
         ui->stackedWidget->setCurrentIndex(0);
    }
    else
    {
        if(tmpOrd.SearchOrd(ui->MacpcRecherche->text()))
        {
            ui->stackedWidget->setCurrentIndex(6);
        }
            else
        {
            QMessageBox msgBox;
            msgBox.setText("Ordinateur inexsitant!");
            msgBox.exec();
        }
    }
}


void Dialog::on_PcSearch_3_clicked()
{
    if(ui->MacpcRecherche->text().length()!=17)
    {
        QMessageBox msgBox;
        msgBox.setText("Adresse MAC Invalide!");
        msgBox.exec();
        ui->AfficherOrdTab->setModel(tmpOrd.AfficherOrd());
        ui->stackedWidget->setCurrentIndex(0);
    }
    else
    {
      ui->AfficherOrdTab->setModel(tmpOrd.SearchOrd(ui->MacpcRecherche->text()));
    }
}

void Dialog::on_SupprimerOrdinateur_clicked()
{

    QString mac=ui->MacpcRecherche->text();
    if(tmpOrd.SupprimerOrd(mac))
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



void Dialog::on_ModifierOrdinateur_clicked()
{
    QString mac=ui->MacpcRecherche->text();
}
/*----------------FOURDELMODIF------------------*/

void Dialog::on_IDFOURSEARCH_clicked()
{
    if(ui->IDFOUR->text().length()==0)
    {
        QMessageBox msgBox;
        msgBox.setText("ID Invalide!");
        msgBox.exec();
        ui->AfficherTabFour->setModel(tmpFour.AfficherFour());
    }
    else
        ui->AfficherTabFour->setModel(tmpFour.SearchFour(ui->IDFOUR->text().toInt())); ;
}


void Dialog::on_IDFOURSEARCH_3_clicked()
{
    if(ui->IDFOUR->text().length()==0)
    {
        QMessageBox msgBox;
        msgBox.setText("ID Invalide!");
        msgBox.exec();
    }
    else
        ui->stackedWidget->setCurrentIndex(7);
}



void Dialog::on_SuppFour_clicked()
{
    int id=ui->IDFOUR->text().toInt();
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




/*----------------CARDELMODIF------------------*/

void Dialog::on_SearchCar_clicked()

{
    if(ui->SearchCarMat->text().length()!=10)
    {
        QMessageBox msgBox;
        msgBox.setText("Matricule Invalide!");
        msgBox.exec();
    }
    else
        ui->stackedWidget->setCurrentIndex(8);
}

void Dialog::on_SearchCar_3_clicked()
{
    if(ui->SearchCarMat->text().length()!=10)
    {
        QMessageBox msgBox;
        msgBox.setText("Matricule Invalide!");
        msgBox.exec();
        ui->AfficherTabVoit->setModel(tmpVoit.AfficherVoit());

    }
    else
        ui->AfficherTabVoit->setModel(tmpVoit.SearchVoit(ui->SearchCarMat->text()));
}

void Dialog::on_DELCAR_clicked()
{
    QString mat=ui->SearchCarMat->text();
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


