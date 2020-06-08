#ifndef DIALOG_H
#define DIALOG_H

#include "location.h"
#include "reservation.h"
#include "assurance.h"
#include "visite.h"
#include "vignette.h"
#include <QString>
#include <QDialog>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QVariant>
#include <QMessageBox>
#include <client.h>
#include <carte.h>
#include"employe.h"
#include"compte.h"
#include"conge.h"
#include "drilldownchart.h"
#include "drilldownslice.h"
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtCore/QRandomGenerator>
#include <QtCharts/QChartView>
#include <QtCharts/QLegend>
#include <QtCharts/QPieSeries>

QT_CHARTS_USE_NAMESPACE

#include <QDialog>
#include "smtp.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

    int flip;

    void set_lab(QString a, QString b);

    void test(QString role);

private slots:
    void init();

    void init2(); //amine

    void on_afficher_loc_clicked();

    void on_afficher_loc_2_clicked();

    void on_ajouter_loc_clicked();

    void on_modifier_loc_clicked();

    void on_supprimer_loc_clicked();

    void on_valider_ajout_clicked();

    void on_valider_modif_clicked();

    void on_rafraichir_clicked();

    void on_recherche_textChanged(const QString &arg1);

    void on_rafraichir_res_clicked();

    void on_ajouter_res_clicked();

    void on_modifier_res_clicked();

    void on_afficher_res_clicked();

    void on_res_IdClient_comboBox_currentIndexChanged(const QString &arg1);

    void on_res_dateDep_dateChanged(const QDate &date);

    void on_res_dateAr_dateChanged(const QDate &date);

    void on_res_calculer_clicked();

    void on_res_mat_comboBox_currentIndexChanged(const QString &arg1);

    void on_recherche_res_textChanged(const QString &arg1);

    void on_valider_ajout_res_clicked();

    void on_res_IdClient_comboBox_3_currentIndexChanged(const QString &arg1);

    void on_res_mat_comboBox_3_currentIndexChanged(const QString &arg1);

    void on_res_dateDep_3_dateChanged(const QDate &date);

    void on_res_dateAr_3_dateChanged(const QDate &date);

    void on_res_calculer_3_clicked();

    void on_valider_modif_res_clicked();

    void on_supprimer_res_clicked();

    void on_loc_idRes_comboBox_currentIndexChanged(const QString &arg1);

    void on_table_loca_activated(const QModelIndex &index);

    void on_afficher_res_2_clicked();

    void on_tabWidget_currentChanged();

    void on_stacked_location_currentChanged();

    void on_stacked_reservation_currentChanged();

    void on_history_clicked();

    void on_tri_res_comboBox_currentIndexChanged(const QString &arg1);

    void on_tri_loc_comboBox_currentIndexChanged(const QString &arg1);

    void on_stat_clicked();

    void on_afficher_loc_3_clicked();

    void on_pdfRes_clicked();


    void on_afficherVign_clicked();

    void on_ajouterVign_clicked();

    void on_modifierVign_clicked();

    void on_supprimerVign_clicked();

    void on_afficherVis_clicked();

    void on_ajouterVis_clicked();

    void on_modifierVis_clicked();

    void on_supprimerVis_clicked();

    void on_afficherAssu_clicked();

    void on_ajouterAssu_clicked();

    void on_modifierAssu_clicked();

    void on_supprimerAssu_clicked();

    void on_validerAjoutVign_clicked();

    void on_validerAjoutVis_clicked();

    void on_validerAjoutAssu_clicked();

    void on_validerModifVign_clicked();

    void on_validerModifVis_clicked();

    void on_validerModifAssu_clicked();

    void on_rechercheVign_textChanged(const QString &arg1);

    void on_rechercheVis_textChanged(const QString &arg1);

    void on_rechercheAssu_textChanged(const QString &arg1);

    void on_afficherAssu_2_clicked();

    void on_afficherVis_2_clicked();

    void on_afficherVign_2_clicked();

    void on_triVign_currentIndexChanged(const QString &arg1);

    void on_triVis_currentIndexChanged(const QString &arg1);

    void on_triAssu_currentIndexChanged(const QString &arg1);

    void on_res_pushButton_clicked();

    void on_loc_pushButton_clicked();

    void on_client_pushButton_clicked();

    void on_voiture_pushButton_clicked();


    void on_pc_pushButton_clicked();

    void on_offre_pushButton_clicked();

    void on_event_pushButton_clicked();

    void on_carte_pushButton_clicked();

    void on_assu_pushButton_clicked();

    void on_vignette_pushButton_clicked();

    void on_visite_pushButton_clicked();

    //oussema

    void on_m_ajouter_clicked();

    void on_m_modifier_clicked();

    void on_pushButton_7_clicked();

    void on_m_supprimer_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_5_clicked();

    void on_m_afficher_clicked();

    void on_p_afficher_clicked();

    void on_p_ajouter_clicked();

    void on_p_modifier_clicked();

    void on_pushButton_17_clicked();

    void on_p_supprimer_clicked();

    void on_m_afficher_2_clicked();

    void on_m_ajouter_2_clicked();

    void on_m_supprimer_2_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_clicked();

    void on_comboBox_19_textActivated(const QString &arg1);

    void on_comboBox_15_textActivated(const QString &arg1);

    void on_comboBox_20_textActivated(const QString &arg1);

    void on_pushButton_21_clicked();

    void on_pushButton_19_clicked();

    void on_comboBox_27_currentTextChanged(const QString &arg1);

    void on_comboBox_30_currentTextChanged(const QString &arg1);

    void on_comboBox_29_currentTextChanged(const QString &arg1);

    void init3();

    void adjustTextColor();

    void on_pushButton_2_clicked();

    void ref();

    void mail(QString email, QString sub, QString obj);

    void mailSent(QString);

    void on_m_afficher_3_clicked();

    void on_lineEdit_19_textChanged(const QString &arg1);

    void on_lineEdit_26_textChanged(const QString &arg1);

    void on_lineEdit_25_textChanged(const QString &arg1);

    void on_lineEdit_69_textChanged(const QString &arg1);

    void on_lineEdit_67_textChanged(const QString &arg1);

    void on_lineEdit_70_textChanged(const QString &arg1);

    void on_m_afficher_4_clicked();

    void on_accueil_button_clicked();
    //zohra
    void initZohra();
    void sendMail();
    void sendMailRefus();
    void on_gestionEmp_clicked();

    void on_gestionConge_clicked();

    void on_gestionCompte_clicked();

    void on_lineEditRechercherEmp_textChanged(const QString &arg1);

    void on_pushButton_AjouterEmp_clicked();

    void on_pushButtonModifierEmp_clicked();

    void on_pushButtonSupprimerEmp_clicked();

    void on_majSoldeConge_clicked();

    void on_pushButton_ModifierEmp_clicked();

    void on_comboBoxTriEmp_activated(int index);

    void on_buttonEnvoyerDemande_clicked();

    void on_afficher_clicked();

    void on_pushButton_AjouterCompte_clicked();

    void on_pushButton_modifierEmploye_clicked();

    void on_deleteCompte_clicked();

    void on_editConge_clicked();

    void on_comboBoxTriCompte_activated(int index);

    void on_comboBoxTriConge_activated(int index);

    void on_stat1_clicked();

    void on_rechercherConge_textChanged(const QString &arg1);

    void on_refuserConge_clicked();

    void on_GestionCongeRH_clicked();

    void on_returnEmp_clicked();

    void on_pushButton_ModifierCompte_clicked();

    void on_accepterConge_2_clicked();

    void on_modifierConge_clicked();

    void on_deleteConge_clicked();

    void on_GestionCongeEmp_clicked();

    void on_comboBoxIdEmpCompte_textActivated(const QString &arg1);

private:
    Ui::Dialog *ui;
    Location tmp;
    reservation res;
    assurance assu;
    visite vis;
    vignette vign;

    //oussema
    clientmo tmp1;
    clientph tmp2;
    carte tmp3;
    carte tmp4;
    //zohra
    compte tmpCompte;
    conge tmpConge;
    employe tmpEmploye;


};

#endif // DIALOG_H
