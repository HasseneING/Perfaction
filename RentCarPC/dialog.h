#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <fournisseur.h>
#include <voiture.h>
#include <ordinateur.h>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:

    void on_FournisseurWin_clicked();

    void on_VehiculeWin_clicked();

    void on_OrdinateurWin_clicked();

    void on_AjouterOrdinateur_clicked();

    void on_AnnulerOrd_clicked();

    void on_Add_Ord_clicked();

    void on_AddVoiture_clicked();

    void on_AnnulerVoit_clicked();

    void on_AddVoit_clicked();

    void on_AjouterFour_clicked();

    void on_AnnulerFour_clicked();

    void on_AddFournisseur_clicked();

    void on_PcSearch_clicked();

    void on_SupprimerOrdinateur_clicked();

    void on_IDFOURSEARCH_clicked();

    void on_SuppFour_clicked();

    void on_SearchCar_clicked();

    void on_DELCAR_clicked();

    void on_PcSearch_3_clicked();

    void on_IDFOURSEARCH_3_clicked();

    void on_SearchCar_3_clicked();

    void on_AnnulerVoit_2_clicked();

    void on_AddVoit_2_clicked();

    void on_AnnulerOrd_2_clicked();

    void on_Add_Ord_2_clicked();

    void on_MacpcRecherche_textChanged(const QString &arg1);

    void on_SearchCarMat_textChanged(const QString &arg1);

    void on_AddFournisseur_2_clicked();

    void on_AnnulerFour_2_clicked();

    void on_IDFOUR_textChanged(const QString &arg1);

private:
    Ui::Dialog *ui;
    ordinateur tmpOrd;
    voiture tmpVoit;
    fournisseur tmpFour;

};

#endif // DIALOG_H
