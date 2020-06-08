/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>
#include "chart.h"

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QStackedWidget *stackedMain;
    QWidget *Accueil;
    QToolBox *toolBox;
    QWidget *page;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_7;
    QLabel *vAssu;
    QLabel *oAssu;
    QLabel *rAssu;
    QWidget *page_2;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *vVis;
    QLabel *oVis;
    QLabel *rVis;
    QWidget *page_3;
    QLabel *label_18;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *vVign;
    QLabel *oVign;
    QLabel *rVign;
    QWidget *Reservation;
    QStackedWidget *stacked_reservation;
    QWidget *page_afficher_res;
    QLineEdit *recherche_res;
    QLabel *label_34;
    QPushButton *rafraichir_res;
    QPushButton *modifier_res;
    QPushButton *ajouter_res;
    QPushButton *supprimer_res;
    QLabel *label_42;
    QTableView *table_res;
    QPushButton *history;
    QComboBox *tri_res_comboBox;
    QWidget *page_ajouter_res;
    QGroupBox *groupBox_3;
    QPushButton *valider_ajout_res;
    QLabel *label_39;
    QLineEdit *res_IdRes;
    QGroupBox *detailsLocataire;
    QComboBox *res_IdClient_comboBox;
    QLabel *label_38;
    QLineEdit *res_IdClient;
    QLabel *label_51;
    QLineEdit *res_societeCl;
    QLineEdit *res_nomCl;
    QLabel *label_52;
    QLineEdit *res_prenomCl;
    QLabel *label_53;
    QLabel *label_55;
    QPushButton *res_nv_client;
    QGroupBox *groupBox_5;
    QDateTimeEdit *res_dateAr;
    QDateTimeEdit *res_dateDep;
    QLabel *label_36;
    QLabel *label_35;
    QLabel *label_56;
    QLineEdit *res_nbJ;
    QGroupBox *groupBox_6;
    QLabel *label_8;
    QLabel *label_57;
    QLineEdit *res_marque;
    QLabel *label_58;
    QLineEdit *res_modele;
    QLineEdit *res_compt;
    QLabel *label_59;
    QLabel *label_60;
    QLineEdit *res_prixJ;
    QLineEdit *res_prixS;
    QLineEdit *res_prixM;
    QLabel *label_61;
    QLabel *label_62;
    QLabel *label_63;
    QComboBox *res_mat_comboBox;
    QGroupBox *groupBox_7;
    QLineEdit *res_remise;
    QLineEdit *res_totalTTC;
    QLabel *label_50;
    QLineEdit *res_totalHT;
    QLabel *label_37;
    QLabel *label_49;
    QLabel *label_64;
    QLineEdit *res_totRemise;
    QLineEdit *res_totalG;
    QLabel *label_65;
    QFrame *line;
    QLineEdit *res_tva;
    QLabel *label_66;
    QPushButton *res_calculer;
    QPushButton *afficher_res;
    QWidget *page_modifier_res;
    QPushButton *valider_modif_res;
    QGroupBox *groupBox_4;
    QLabel *label_47;
    QGroupBox *groupBox_8;
    QLineEdit *res_remise_3;
    QLineEdit *res_totalTTC_3;
    QLabel *label_83;
    QLineEdit *res_totalHT_3;
    QLabel *label_45;
    QLabel *label_84;
    QLabel *label_85;
    QLineEdit *res_totRemise_3;
    QLineEdit *res_totalG_3;
    QLabel *label_86;
    QFrame *line_3;
    QLineEdit *res_tva_3;
    QLabel *label_87;
    QPushButton *res_calculer_3;
    QGroupBox *detailsLocataire_2;
    QComboBox *res_IdClient_comboBox_3;
    QLabel *label_90;
    QLineEdit *res_IdClient_3;
    QLabel *label_91;
    QLineEdit *res_societeCl_3;
    QLineEdit *res_nomCl_3;
    QLabel *label_92;
    QLineEdit *res_prenomCl_3;
    QLabel *label_93;
    QLabel *label_94;
    QPushButton *res_nv_client_3;
    QGroupBox *groupBox_9;
    QDateTimeEdit *res_dateAr_3;
    QDateTimeEdit *res_dateDep_3;
    QLabel *label_46;
    QLabel *label_88;
    QLabel *label_89;
    QLineEdit *res_nbJ_3;
    QGroupBox *groupBox_10;
    QLabel *label_95;
    QLabel *label_96;
    QLineEdit *res_marque_3;
    QLabel *label_97;
    QLineEdit *res_modele_3;
    QLineEdit *res_compt_3;
    QLabel *label_98;
    QLabel *label_99;
    QLineEdit *res_prixJ_3;
    QLineEdit *res_prixS_3;
    QLineEdit *res_prixM_3;
    QLabel *label_100;
    QLabel *label_101;
    QLabel *label_102;
    QComboBox *res_mat_comboBox_3;
    QLineEdit *res_IDRes;
    QPushButton *afficher_res_2;
    QWidget *Location;
    QStackedWidget *stacked_location;
    QWidget *page_afficher_loc;
    QLineEdit *recherche;
    QLabel *label_33;
    QPushButton *rafraichir;
    QPushButton *supprimer_loc;
    QPushButton *modifier_loc;
    QPushButton *ajouter_loc;
    QLabel *label_40;
    QTableView *table_loca;
    QComboBox *tri_loc_comboBox;
    QPushButton *stat;
    QPushButton *pdfRes;
    QWidget *page_ajouter_loc;
    QGroupBox *ajouter_2;
    QLabel *label_19;
    QComboBox *loc_idRes_comboBox;
    QGroupBox *detailsRes;
    QLineEdit *loc_IdCl;
    QLabel *label_105;
    QLabel *label_106;
    QLineEdit *loc_societe;
    QLabel *label_107;
    QLabel *label_108;
    QLineEdit *loc_nom;
    QLabel *label_109;
    QLineEdit *loc_prenom;
    QLabel *label_110;
    QLabel *label_111;
    QLineEdit *loc_marque;
    QLabel *label_112;
    QLineEdit *loc_modele;
    QLabel *label_113;
    QLineEdit *loc_total;
    QLineEdit *loc_matricule;
    QLabel *label_114;
    QDateTimeEdit *loc_dateDep;
    QDateTimeEdit *loc_dateArr;
    QGroupBox *detailsSortie;
    QLineEdit *loc_RaP;
    QLabel *label_25;
    QLabel *label_21;
    QLineEdit *loc_caution;
    QLabel *label_22;
    QLabel *label_104;
    QLineEdit *loc_kmD;
    QComboBox *loc_carbD_comboBox;
    QLabel *label_20;
    QLineEdit *loc_idLoc;
    QPushButton *valider_ajout;
    QTableView *Res_tableView;
    QLabel *label_3;
    QPushButton *afficher_loc;
    QWidget *page_modifier_loc;
    QGroupBox *groupBox_2;
    QLineEdit *loc_idres;
    QLabel *label_27;
    QLabel *label_24;
    QLineEdit *loc_idloc;
    QPushButton *valider_modif;
    QGroupBox *details_sortie;
    QComboBox *loc_carbD_comboBox_2;
    QLabel *label_23;
    QLineEdit *loc_km_d;
    QLabel *label_26;
    QGroupBox *details_entree;
    QComboBox *loc_carbA_comboBox;
    QLineEdit *loc_km_a;
    QLabel *label_28;
    QLabel *label_29;
    QGroupBox *details_paiment;
    QLineEdit *loc_rap;
    QLabel *label_41;
    QLineEdit *loc_Caution;
    QLabel *label_32;
    QPushButton *afficher_loc_2;
    QWidget *page_stat;
    QGroupBox *Stat;
    QPushButton *afficher_loc_3;
    QWidget *Clients;
    QTabWidget *tabWidget_2;
    QWidget *mo;
    QPushButton *m_afficher;
    QStackedWidget *stackedWidget;
    QWidget *ajouter;
    QLabel *label_16;
    QGroupBox *groupBox_17;
    QLabel *cin_16;
    QPushButton *pushButton_5;
    QLineEdit *lineEdit_18;
    QLineEdit *lineEdit_2;
    QLabel *cin;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLabel *cin_6;
    QLabel *cin_7;
    QLabel *cin_3;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_5;
    QLabel *cin_4;
    QLabel *cin_5;
    QWidget *mod;
    QLabel *label_17;
    QLabel *cin_14;
    QPushButton *pushButton_7;
    QTableView *tableView_4;
    QComboBox *combo_2;
    QComboBox *comboBox_20;
    QLineEdit *lineEdit_26;
    QWidget *modifier;
    QLabel *label_122;
    QGroupBox *groupBox;
    QLabel *cin_8;
    QLineEdit *lineEdit_13;
    QLabel *cin_12;
    QLabel *cin_10;
    QLabel *cin_9;
    QLineEdit *lineEdit_16;
    QLineEdit *lineEdit_17;
    QLineEdit *lineEdit_15;
    QPushButton *pushButton_6;
    QLabel *cin_13;
    QLineEdit *lineEdit_12;
    QWidget *supprimer_2;
    QLabel *cin_15;
    QPushButton *pushButton_14;
    QLabel *label_133;
    QComboBox *combo;
    QTableView *tableView_7;
    QLineEdit *lineEdit_25;
    QComboBox *comboBox_19;
    QWidget *afficher;
    QLabel *label_134;
    QLineEdit *lineEdit_19;
    QComboBox *comboBox_15;
    QTableView *tableView_5;
    QPushButton *m_afficher_3;
    QPushButton *m_ajouter;
    QPushButton *m_modifier;
    QPushButton *m_supprimer;
    QWidget *ph;
    QPushButton *p_ajouter;
    QPushButton *p_afficher;
    QStackedWidget *stackedWidget_2;
    QWidget *ajouter_3;
    QLabel *label_135;
    QGroupBox *groupBox_18;
    QLabel *cin_20;
    QLineEdit *lineEdit_7;
    QLabel *cin_21;
    QLineEdit *lineEdit_22;
    QLabel *cin_18;
    QLabel *cin_22;
    QLabel *cin_17;
    QLineEdit *lineEdit_24;
    QLineEdit *lineEdit_21;
    QLabel *cin_31;
    QLineEdit *lineEdit_23;
    QDateEdit *dateEdit;
    QLabel *cin_2;
    QLineEdit *lineEdit_20;
    QLabel *cin_19;
    QLineEdit *lineEdit_37;
    QPushButton *pushButton_16;
    QWidget *mod_2;
    QLabel *label_136;
    QLabel *cin_23;
    QPushButton *pushButton_17;
    QTableView *tableView_9;
    QComboBox *comboBox_3;
    QComboBox *comboBox_27;
    QLineEdit *lineEdit_67;
    QWidget *modifier_2;
    QLabel *label_137;
    QGroupBox *groupBox_19;
    QPushButton *pushButton_19;
    QLabel *cin_24;
    QLineEdit *lineEdit_44;
    QLabel *cin_28;
    QDateEdit *dateEdit_2;
    QLabel *cin_29;
    QLineEdit *lineEdit_43;
    QLineEdit *lineEdit_40;
    QLabel *cin_25;
    QLabel *cin_32;
    QLineEdit *lineEdit_41;
    QLineEdit *lineEdit_45;
    QLabel *cin_26;
    QWidget *supprimer_3;
    QLabel *cin_30;
    QPushButton *pushButton_21;
    QLabel *label_138;
    QTableView *tableView_77;
    QComboBox *comboBox_7;
    QLineEdit *lineEdit_70;
    QComboBox *comboBox_30;
    QWidget *afficher_2;
    QLabel *label_139;
    QTableView *tableView_6;
    QComboBox *comboBox_29;
    QLineEdit *lineEdit_69;
    QPushButton *m_afficher_4;
    QPushButton *p_modifier;
    QPushButton *p_supprimer;
    QWidget *tab;
    QPushButton *m_afficher_2;
    QPushButton *m_ajouter_2;
    QStackedWidget *stackedWidget_3;
    QWidget *page_4;
    QLabel *label_140;
    QLabel *label_6;
    QLabel *label_9;
    QTableView *tableView_3;
    QTableView *tableView2_3;
    QWidget *page_5;
    QTableView *tableView2;
    QLabel *label_141;
    QPushButton *pushButton;
    QLabel *cin_33;
    QComboBox *comboBox;
    QTableView *tableView;
    QLabel *label_5;
    QLabel *label_10;
    QWidget *page_6;
    QLabel *cin_34;
    QPushButton *pushButton_2;
    QComboBox *comboBox_2;
    QTableView *tableView_2;
    QTableView *tableView2_2;
    QLabel *label_142;
    QLabel *label_143;
    QLabel *label_144;
    QPushButton *m_supprimer_2;
    QWidget *Stats;
    chart *widget;
    QLabel *label_145;
    QLabel *label_146;
    QLabel *label_147;
    QLabel *label_148;
    QLabel *label_149;
    QLabel *label_150;
    QWidget *Voitures;
    QWidget *Employes;
    QLabel *label_151;
    QStackedWidget *stackedWidgetEmp;
    QWidget *page_7;
    QComboBox *comboBoxTriEmp;
    QLabel *label_152;
    QLabel *label_153;
    QLabel *label_154;
    QLineEdit *lineEditSoldeConge;
    QLabel *label_155;
    QLabel *label_156;
    QLineEdit *lineEditEmail;
    QPushButton *pushButton_AjouterEmp;
    QGroupBox *groupBox_20;
    QLabel *label_160;
    QLabel *label_161;
    QLabel *label_162;
    QLabel *label_163;
    QDateEdit *dateNaissEdit;
    QPushButton *pushButton_ModifierEmp;
    QTableView *tableViewEmp;
    QLineEdit *lineEditNom;
    QPushButton *pushButtonModifierEmp;
    QLineEdit *lineEditPrenom;
    QLineEdit *lineEditNumTel;
    QPushButton *pushButtonSupprimerEmp;
    QLabel *label_157;
    QLineEdit *lineEditRechercherEmp;
    QLineEdit *lineEditID;
    QLabel *label_158;
    QPushButton *majSoldeConge;
    QLabel *label_159;
    QPushButton *stat1;
    QWidget *page_8;
    QGroupBox *statBox;
    QPushButton *returnEmp;
    QWidget *Ordinateurs;
    QWidget *Offres;
    QWidget *page_10;
    QWidget *Events;
    QWidget *page_9;
    QGroupBox *groupBox_22;
    QPushButton *pushButton_3;
    QLabel *label_176;
    QLabel *label_177;
    QPushButton *pushButton_ModifierCompte;
    QLineEdit *lineEditRechercherCompte;
    QPushButton *deleteCompte;
    QComboBox *comboBoxTriCompte;
    QLabel *label_178;
    QPushButton *pushButton_AjouterCompte;
    QTableView *tableViewCompte;
    QLabel *label_179;
    QLabel *label_180;
    QLineEdit *lineEdittLogin;
    QLabel *label_181;
    QComboBox *comboBoxIdEmpCompte;
    QLineEdit *lineEditIDC;
    QPushButton *pushButton_modifierEmploye;
    QComboBox *comboBoxRole;
    QLabel *label_182;
    QLineEdit *lineEditMDP;
    QLabel *label_183;
    QLineEdit *lineEditMDP2;
    QWidget *Cartes;
    QCalendarWidget *calendarWidget;
    QPushButton *GestionCongeRH;
    QPushButton *GestionCongeEmp;
    QLabel *label_164;
    QLabel *label_165;
    QStackedWidget *stackedWidgetConge;
    QWidget *stackedWidget_2Page1;
    QTableView *tableViewCongeEmp;
    QLabel *label_166;
    QLabel *heart;
    QLabel *label_167;
    QGroupBox *groupBox_21;
    QDateEdit *dateFinEdit;
    QPushButton *editConge;
    QLabel *label_168;
    QLabel *label_169;
    QLabel *label_170;
    QComboBox *comboBoxMotif;
    QComboBox *comboBoxIdEmpConge;
    QPushButton *buttonEnvoyerDemande;
    QDateEdit *dateRetourEdit;
    QLabel *label_171;
    QLabel *label_172;
    QDateEdit *datDebuteEdit;
    QLabel *label_173;
    QLineEdit *IDConge;
    QPushButton *modifierConge;
    QLabel *label_174;
    QPushButton *deleteConge;
    QWidget *stackedWidget_2Page2;
    QTableView *tableViewCongeAll;
    QLineEdit *rechercherConge;
    QPushButton *pushButtonRecherche;
    QPushButton *refuserConge;
    QLabel *label_175;
    QPushButton *afficher_3;
    QComboBox *comboBoxTriConge;
    QPushButton *accepterConge_2;
    QWidget *Comptes;
    QWidget *Conges;
    QWidget *Vidange;
    QStackedWidget *stackedAssu;
    QWidget *afficher_assu;
    QTableView *table_assu;
    QComboBox *triAssu;
    QLineEdit *rechercheAssu;
    QLabel *label_4;
    QPushButton *supprimerAssu;
    QPushButton *modifierAssu;
    QPushButton *ajouterAssu;
    QWidget *ajouter_assu;
    QGroupBox *groupBox_11;
    QPushButton *validerAjoutAssu;
    QLabel *label_48;
    QLabel *label_54;
    QLabel *label_67;
    QLabel *label_68;
    QLineEdit *idAssu;
    QLineEdit *prixAssu;
    QLabel *label_69;
    QLabel *label_70;
    QLabel *label_71;
    QLineEdit *policeAssu;
    QComboBox *matAssu;
    QComboBox *typeAssu;
    QDateEdit *dateDebAssu;
    QDateEdit *dateFinAssu;
    QPushButton *afficherAssu;
    QWidget *modifier_assu;
    QGroupBox *groupBox_12;
    QPushButton *validerModifAssu;
    QLabel *label_72;
    QLabel *label_73;
    QLabel *label_74;
    QLabel *label_75;
    QLineEdit *idAssu_2;
    QLineEdit *prixAssu_2;
    QLabel *label_76;
    QLabel *label_77;
    QLabel *label_78;
    QLineEdit *policeAssu_2;
    QComboBox *typeAssu_2;
    QComboBox *matAssu_2;
    QDateEdit *dateDebAssu_2;
    QDateEdit *dateFinAssu_2;
    QPushButton *afficherAssu_2;
    QWidget *Vignette;
    QStackedWidget *stackedVign;
    QWidget *afficher_vign;
    QTableView *table_Vign;
    QComboBox *triVign;
    QLabel *label;
    QLineEdit *rechercheVign;
    QPushButton *ajouterVign;
    QPushButton *supprimerVign;
    QPushButton *modifierVign;
    QWidget *ajouter_vign;
    QGroupBox *groupBox_15;
    QPushButton *validerAjoutVign;
    QLabel *label_123;
    QLabel *label_124;
    QLabel *label_125;
    QLabel *label_126;
    QLineEdit *codeVign;
    QLineEdit *prixVign;
    QLabel *label_127;
    QComboBox *matVign;
    QDateEdit *dateDebVign;
    QDateEdit *dateExpVign;
    QPushButton *afficherVign;
    QWidget *modifier_vign;
    QGroupBox *groupBox_16;
    QPushButton *validerModifVign;
    QLabel *label_128;
    QLabel *label_129;
    QLabel *label_130;
    QLabel *label_131;
    QLineEdit *codeVign_2;
    QLineEdit *prixVign_2;
    QLabel *label_132;
    QComboBox *matVign_2;
    QDateEdit *dateDebVign_2;
    QDateEdit *dateExpVign_2;
    QPushButton *afficherVign_2;
    QWidget *Visite;
    QStackedWidget *stackedVis;
    QWidget *afficher_vis;
    QTableView *table_Vis;
    QLineEdit *rechercheVis;
    QComboBox *triVis;
    QLabel *label_2;
    QPushButton *supprimerVis;
    QPushButton *modifierVis;
    QPushButton *ajouterVis;
    QWidget *ajouter_vis;
    QGroupBox *groupBox_13;
    QPushButton *validerAjoutVis;
    QLabel *label_43;
    QLabel *label_44;
    QLabel *label_79;
    QLabel *label_80;
    QLineEdit *idVis;
    QLineEdit *prixVis;
    QLabel *label_81;
    QLineEdit *codeVis;
    QLabel *label_82;
    QLabel *label_103;
    QLineEdit *compagnieVis;
    QComboBox *matVis;
    QDateEdit *dateDebVis;
    QDateEdit *dateExpVis;
    QPushButton *afficherVis;
    QWidget *modifier_vis;
    QGroupBox *groupBox_14;
    QPushButton *validerModifVis;
    QLabel *label_115;
    QLabel *label_116;
    QLabel *label_117;
    QLabel *label_118;
    QLineEdit *idVis_2;
    QLineEdit *prixVis_2;
    QLabel *label_119;
    QLineEdit *codeVis_2;
    QLabel *label_120;
    QLabel *label_121;
    QLineEdit *compagnieVis_2;
    QComboBox *matVis_2;
    QDateEdit *dateDebVis_2;
    QDateEdit *dateExpVis_2;
    QPushButton *afficherVis_2;
    QLabel *menu;
    QPushButton *maintenance_button;
    QFrame *frame;
    QPushButton *reservation_button;
    QPushButton *location_button;
    QPushButton *clients_button;
    QPushButton *voitures_button;
    QPushButton *employes_button;
    QPushButton *pc_button;
    QPushButton *offres_button;
    QPushButton *event_button;
    QPushButton *carte_button;
    QPushButton *loc_pushButton;
    QPushButton *client_pushButton;
    QPushButton *voiture_pushButton;
    QPushButton *gestionEmp;
    QPushButton *pc_pushButton;
    QPushButton *offre_pushButton;
    QPushButton *event_pushButton;
    QPushButton *carte_pushButton;
    QLabel *logo;
    QPushButton *res_pushButton;
    QPushButton *compte_button;
    QPushButton *conge_button;
    QPushButton *assu_button;
    QPushButton *vignette_button;
    QPushButton *visite_button;
    QPushButton *gestionCompte;
    QPushButton *gestionConge;
    QPushButton *assu_pushButton;
    QPushButton *vignette_pushButton;
    QPushButton *visite_pushButton;
    QPushButton *accueil_button;
    QLabel *titre;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(1366, 700);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(27, 36, 50, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(40, 54, 75, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(33, 45, 62, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(13, 18, 25, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(18, 24, 33, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        QBrush brush8(QColor(255, 255, 255, 128));
        brush8.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        Dialog->setPalette(palette);
        stackedMain = new QStackedWidget(Dialog);
        stackedMain->setObjectName(QString::fromUtf8("stackedMain"));
        stackedMain->setGeometry(QRect(135, 50, 1231, 731));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QBrush brush9(QColor(27, 153, 139, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush9);
        QBrush brush10(QColor(40, 230, 209, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush10);
        QBrush brush11(QColor(33, 191, 174, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        QBrush brush12(QColor(13, 76, 69, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush12);
        QBrush brush13(QColor(18, 102, 93, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        QBrush brush14(QColor(141, 204, 197, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        QBrush brush15(QColor(0, 0, 0, 128));
        brush15.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        stackedMain->setPalette(palette1);
        stackedMain->setAutoFillBackground(false);
        stackedMain->setStyleSheet(QString::fromUtf8("background-color: rgb(27, 153, 139);"));
        Accueil = new QWidget();
        Accueil->setObjectName(QString::fromUtf8("Accueil"));
        toolBox = new QToolBox(Accueil);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setGeometry(QRect(480, 150, 251, 221));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        toolBox->setFont(font);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 100, 30));
        label_11 = new QLabel(page);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(50, 90, 201, 20));
        label_12 = new QLabel(page);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(50, 50, 201, 20));
        label_7 = new QLabel(page);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(50, 10, 201, 20));
        vAssu = new QLabel(page);
        vAssu->setObjectName(QString::fromUtf8("vAssu"));
        vAssu->setGeometry(QRect(10, 90, 21, 21));
        QPalette palette2;
        QBrush brush16(QColor(0, 255, 0, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush16);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush16);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush16);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush16);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush16);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush16);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush16);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush16);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush16);
        vAssu->setPalette(palette2);
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        vAssu->setFont(font1);
        vAssu->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));
        oAssu = new QLabel(page);
        oAssu->setObjectName(QString::fromUtf8("oAssu"));
        oAssu->setGeometry(QRect(10, 50, 21, 21));
        QPalette palette3;
        QBrush brush17(QColor(255, 170, 0, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush17);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush17);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush17);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush17);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush17);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush17);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush17);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush17);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush17);
        oAssu->setPalette(palette3);
        oAssu->setFont(font1);
        oAssu->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        rAssu = new QLabel(page);
        rAssu->setObjectName(QString::fromUtf8("rAssu"));
        rAssu->setGeometry(QRect(10, 10, 21, 21));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QBrush brush18(QColor(255, 0, 0, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush18);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush18);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush18);
        QBrush brush19(QColor(0, 0, 0, 128));
        brush19.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush19);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush18);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush18);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush18);
        QBrush brush20(QColor(0, 0, 0, 128));
        brush20.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush20);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush18);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush18);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush18);
        QBrush brush21(QColor(0, 0, 0, 128));
        brush21.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush21);
#endif
        rAssu->setPalette(palette4);
        rAssu->setFont(font1);
        rAssu->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        toolBox->addItem(page, QString::fromUtf8("Assurances"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 100, 30));
        label_13 = new QLabel(page_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(50, 50, 201, 20));
        label_14 = new QLabel(page_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(50, 90, 201, 20));
        label_15 = new QLabel(page_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(50, 10, 201, 20));
        vVis = new QLabel(page_2);
        vVis->setObjectName(QString::fromUtf8("vVis"));
        vVis->setGeometry(QRect(10, 90, 21, 21));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Button, brush16);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush16);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush16);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush16);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush16);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush16);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush16);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush16);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush16);
        vVis->setPalette(palette5);
        vVis->setFont(font1);
        vVis->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));
        oVis = new QLabel(page_2);
        oVis->setObjectName(QString::fromUtf8("oVis"));
        oVis->setGeometry(QRect(10, 50, 21, 21));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Button, brush17);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush17);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush17);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush17);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush17);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush17);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush17);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush17);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush17);
        oVis->setPalette(palette6);
        oVis->setFont(font1);
        oVis->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        rVis = new QLabel(page_2);
        rVis->setObjectName(QString::fromUtf8("rVis"));
        rVis->setGeometry(QRect(10, 10, 21, 21));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::Button, brush18);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush18);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush18);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush18);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush18);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush18);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush18);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush18);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush18);
        rVis->setPalette(palette7);
        rVis->setFont(font1);
        rVis->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        toolBox->addItem(page_2, QString::fromUtf8("Visites Techniques"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setGeometry(QRect(0, 0, 251, 137));
        label_18 = new QLabel(page_3);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(50, 50, 201, 20));
        label_30 = new QLabel(page_3);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(50, 90, 201, 20));
        label_31 = new QLabel(page_3);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(50, 10, 201, 20));
        vVign = new QLabel(page_3);
        vVign->setObjectName(QString::fromUtf8("vVign"));
        vVign->setGeometry(QRect(10, 90, 21, 21));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::Button, brush16);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush16);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush16);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush16);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush16);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush16);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush16);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush16);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush16);
        vVign->setPalette(palette8);
        vVign->setFont(font1);
        vVign->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));
        oVign = new QLabel(page_3);
        oVign->setObjectName(QString::fromUtf8("oVign"));
        oVign->setGeometry(QRect(10, 50, 21, 21));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::Button, brush17);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush17);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush17);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush17);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush17);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush17);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush17);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush17);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush17);
        oVign->setPalette(palette9);
        oVign->setFont(font1);
        oVign->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        rVign = new QLabel(page_3);
        rVign->setObjectName(QString::fromUtf8("rVign"));
        rVign->setGeometry(QRect(10, 10, 21, 21));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::Button, brush18);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush18);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush18);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush18);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush18);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush18);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush18);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush18);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush18);
        rVign->setPalette(palette10);
        rVign->setFont(font1);
        rVign->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        toolBox->addItem(page_3, QString::fromUtf8("Vignette"));
        stackedMain->addWidget(Accueil);
        Reservation = new QWidget();
        Reservation->setObjectName(QString::fromUtf8("Reservation"));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        Reservation->setPalette(palette11);
        Reservation->setAutoFillBackground(false);
        stacked_reservation = new QStackedWidget(Reservation);
        stacked_reservation->setObjectName(QString::fromUtf8("stacked_reservation"));
        stacked_reservation->setGeometry(QRect(0, 0, 1201, 551));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette12.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush9);
        QBrush brush22(QColor(0, 0, 0, 128));
        brush22.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Active, QPalette::PlaceholderText, brush22);
#endif
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette12.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        QBrush brush23(QColor(0, 0, 0, 128));
        brush23.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush23);
#endif
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette12.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        QBrush brush24(QColor(0, 0, 0, 128));
        brush24.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush24);
#endif
        stacked_reservation->setPalette(palette12);
        stacked_reservation->setAutoFillBackground(false);
        stacked_reservation->setStyleSheet(QString::fromUtf8("background-color: rgb(27, 153, 139);"));
        stacked_reservation->setFrameShape(QFrame::NoFrame);
        stacked_reservation->setFrameShadow(QFrame::Plain);
        page_afficher_res = new QWidget();
        page_afficher_res->setObjectName(QString::fromUtf8("page_afficher_res"));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette13.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette13.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette13.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette13.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette13.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette13.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        page_afficher_res->setPalette(palette13);
        recherche_res = new QLineEdit(page_afficher_res);
        recherche_res->setObjectName(QString::fromUtf8("recherche_res"));
        recherche_res->setGeometry(QRect(270, 25, 191, 20));
        recherche_res->setFont(font);
        recherche_res->setAutoFillBackground(false);
        recherche_res->setStyleSheet(QString::fromUtf8(""));
        recherche_res->setFrame(false);
        recherche_res->setEchoMode(QLineEdit::Normal);
        recherche_res->setCursorMoveStyle(Qt::VisualMoveStyle);
        recherche_res->setClearButtonEnabled(false);
        label_34 = new QLabel(page_afficher_res);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(160, 25, 101, 20));
        rafraichir_res = new QPushButton(page_afficher_res);
        rafraichir_res->setObjectName(QString::fromUtf8("rafraichir_res"));
        rafraichir_res->setGeometry(QRect(1110, 20, 30, 30));
        rafraichir_res->setStyleSheet(QString::fromUtf8("#rafraichir_res{\n"
"background-color : transparent;\n"
"border-image : url(:/img/refresh.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        modifier_res = new QPushButton(page_afficher_res);
        modifier_res->setObjectName(QString::fromUtf8("modifier_res"));
        modifier_res->setGeometry(QRect(740, 520, 30, 30));
        modifier_res->setStyleSheet(QString::fromUtf8("#modifier_res{\n"
"background-color : transparent;\n"
"border-image : url(:/img/edit.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        ajouter_res = new QPushButton(page_afficher_res);
        ajouter_res->setObjectName(QString::fromUtf8("ajouter_res"));
        ajouter_res->setGeometry(QRect(10, 20, 30, 30));
        ajouter_res->setFont(font);
        ajouter_res->setStyleSheet(QString::fromUtf8("#ajouter_res{\n"
"background-color : transparent;\n"
"border-image : url(:/img/add.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        supprimer_res = new QPushButton(page_afficher_res);
        supprimer_res->setObjectName(QString::fromUtf8("supprimer_res"));
        supprimer_res->setGeometry(QRect(790, 520, 30, 30));
        supprimer_res->setStyleSheet(QString::fromUtf8("#supprimer_res{\n"
"background-color : transparent;\n"
"border-image : url(:/img/delete.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        label_42 = new QLabel(page_afficher_res);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setGeometry(QRect(440, 530, 281, 20));
        table_res = new QTableView(page_afficher_res);
        table_res->setObjectName(QString::fromUtf8("table_res"));
        table_res->setGeometry(QRect(20, 60, 1171, 431));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette14.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette14.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette14.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette14.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette14.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette14.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette14.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        table_res->setPalette(palette14);
        table_res->setAlternatingRowColors(true);
        table_res->horizontalHeader()->setStretchLastSection(true);
        history = new QPushButton(page_afficher_res);
        history->setObjectName(QString::fromUtf8("history"));
        history->setGeometry(QRect(1150, 22, 32, 32));
        history->setStyleSheet(QString::fromUtf8("#history{\n"
"background-color : transparent;\n"
"border-image : url(:/img/history.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        history->setIconSize(QSize(20, 20));
        tri_res_comboBox = new QComboBox(page_afficher_res);
        tri_res_comboBox->addItem(QString());
        tri_res_comboBox->addItem(QString());
        tri_res_comboBox->addItem(QString());
        tri_res_comboBox->addItem(QString());
        tri_res_comboBox->setObjectName(QString::fromUtf8("tri_res_comboBox"));
        tri_res_comboBox->setGeometry(QRect(950, 25, 141, 22));
        QFont font2;
        tri_res_comboBox->setFont(font2);
        tri_res_comboBox->setStyleSheet(QString::fromUtf8(""));
        stacked_reservation->addWidget(page_afficher_res);
        page_ajouter_res = new QWidget();
        page_ajouter_res->setObjectName(QString::fromUtf8("page_ajouter_res"));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette15.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette15.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette15.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette15.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette15.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette15.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette15.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette15.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        page_ajouter_res->setPalette(palette15);
        groupBox_3 = new QGroupBox(page_ajouter_res);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(0, 0, 1191, 550));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette16.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette16.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette16.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette16.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette16.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette16.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette16.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette16.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        groupBox_3->setPalette(palette16);
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        groupBox_3->setFont(font3);
        valider_ajout_res = new QPushButton(groupBox_3);
        valider_ajout_res->setObjectName(QString::fromUtf8("valider_ajout_res"));
        valider_ajout_res->setGeometry(QRect(540, 500, 141, 31));
        QFont font4;
        font4.setPointSize(9);
        font4.setBold(false);
        font4.setWeight(50);
        valider_ajout_res->setFont(font4);
        valider_ajout_res->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        valider_ajout_res->setIcon(icon);
        valider_ajout_res->setIconSize(QSize(20, 20));
        label_39 = new QLabel(groupBox_3);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setGeometry(QRect(20, 90, 121, 16));
        QFont font5;
        font5.setPointSize(12);
        label_39->setFont(font5);
        res_IdRes = new QLineEdit(groupBox_3);
        res_IdRes->setObjectName(QString::fromUtf8("res_IdRes"));
        res_IdRes->setEnabled(false);
        res_IdRes->setGeometry(QRect(20, 120, 85, 20));
        QFont font6;
        font6.setPointSize(12);
        font6.setBold(false);
        font6.setWeight(50);
        res_IdRes->setFont(font6);
        detailsLocataire = new QGroupBox(groupBox_3);
        detailsLocataire->setObjectName(QString::fromUtf8("detailsLocataire"));
        detailsLocataire->setGeometry(QRect(250, 30, 350, 231));
        detailsLocataire->setFont(font3);
        res_IdClient_comboBox = new QComboBox(detailsLocataire);
        res_IdClient_comboBox->setObjectName(QString::fromUtf8("res_IdClient_comboBox"));
        res_IdClient_comboBox->setGeometry(QRect(140, 40, 170, 20));
        res_IdClient_comboBox->setFont(font6);
        label_38 = new QLabel(detailsLocataire);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(40, 40, 90, 16));
        label_38->setFont(font6);
        res_IdClient = new QLineEdit(detailsLocataire);
        res_IdClient->setObjectName(QString::fromUtf8("res_IdClient"));
        res_IdClient->setGeometry(QRect(70, 40, 41, 20));
        res_IdClient->setFont(font6);
        label_51 = new QLabel(detailsLocataire);
        label_51->setObjectName(QString::fromUtf8("label_51"));
        label_51->setGeometry(QRect(39, 70, 90, 16));
        label_51->setFont(font6);
        res_societeCl = new QLineEdit(detailsLocataire);
        res_societeCl->setObjectName(QString::fromUtf8("res_societeCl"));
        res_societeCl->setEnabled(false);
        res_societeCl->setGeometry(QRect(140, 70, 170, 20));
        res_societeCl->setFont(font6);
        res_nomCl = new QLineEdit(detailsLocataire);
        res_nomCl->setObjectName(QString::fromUtf8("res_nomCl"));
        res_nomCl->setEnabled(false);
        res_nomCl->setGeometry(QRect(140, 100, 170, 20));
        res_nomCl->setFont(font6);
        label_52 = new QLabel(detailsLocataire);
        label_52->setObjectName(QString::fromUtf8("label_52"));
        label_52->setGeometry(QRect(40, 100, 90, 16));
        label_52->setFont(font6);
        res_prenomCl = new QLineEdit(detailsLocataire);
        res_prenomCl->setObjectName(QString::fromUtf8("res_prenomCl"));
        res_prenomCl->setEnabled(false);
        res_prenomCl->setGeometry(QRect(140, 130, 170, 20));
        res_prenomCl->setFont(font6);
        label_53 = new QLabel(detailsLocataire);
        label_53->setObjectName(QString::fromUtf8("label_53"));
        label_53->setGeometry(QRect(40, 130, 90, 16));
        label_53->setFont(font6);
        label_55 = new QLabel(detailsLocataire);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        label_55->setGeometry(QRect(40, 170, 251, 20));
        QFont font7;
        font7.setPointSize(10);
        font7.setBold(false);
        font7.setWeight(50);
        label_55->setFont(font7);
        res_nv_client = new QPushButton(detailsLocataire);
        res_nv_client->setObjectName(QString::fromUtf8("res_nv_client"));
        res_nv_client->setGeometry(QRect(290, 170, 20, 20));
        QFont font8;
        font8.setPointSize(10);
        font8.setBold(true);
        font8.setWeight(75);
        res_nv_client->setFont(font8);
        res_nv_client->setStyleSheet(QString::fromUtf8("#res_nv_client{\n"
"background-color : transparent;\n"
"border-image : url(:/img/add.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        groupBox_5 = new QGroupBox(groupBox_3);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(630, 30, 350, 181));
        groupBox_5->setFont(font3);
        res_dateAr = new QDateTimeEdit(groupBox_5);
        res_dateAr->setObjectName(QString::fromUtf8("res_dateAr"));
        res_dateAr->setGeometry(QRect(140, 100, 170, 20));
        res_dateAr->setFont(font6);
        res_dateDep = new QDateTimeEdit(groupBox_5);
        res_dateDep->setObjectName(QString::fromUtf8("res_dateDep"));
        res_dateDep->setGeometry(QRect(140, 70, 170, 20));
        res_dateDep->setFont(font6);
        label_36 = new QLabel(groupBox_5);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(40, 100, 90, 20));
        label_36->setFont(font6);
        label_35 = new QLabel(groupBox_5);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(40, 70, 90, 20));
        label_35->setFont(font6);
        label_56 = new QLabel(groupBox_5);
        label_56->setObjectName(QString::fromUtf8("label_56"));
        label_56->setGeometry(QRect(40, 40, 90, 20));
        label_56->setFont(font6);
        res_nbJ = new QLineEdit(groupBox_5);
        res_nbJ->setObjectName(QString::fromUtf8("res_nbJ"));
        res_nbJ->setEnabled(false);
        res_nbJ->setGeometry(QRect(140, 40, 51, 20));
        res_nbJ->setFont(font6);
        groupBox_6 = new QGroupBox(groupBox_3);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(250, 280, 350, 211));
        groupBox_6->setFont(font3);
        label_8 = new QLabel(groupBox_6);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(40, 40, 90, 16));
        label_8->setFont(font6);
        label_57 = new QLabel(groupBox_6);
        label_57->setObjectName(QString::fromUtf8("label_57"));
        label_57->setGeometry(QRect(40, 70, 90, 16));
        label_57->setFont(font6);
        res_marque = new QLineEdit(groupBox_6);
        res_marque->setObjectName(QString::fromUtf8("res_marque"));
        res_marque->setEnabled(false);
        res_marque->setGeometry(QRect(140, 70, 170, 20));
        res_marque->setFont(font6);
        label_58 = new QLabel(groupBox_6);
        label_58->setObjectName(QString::fromUtf8("label_58"));
        label_58->setGeometry(QRect(39, 100, 90, 16));
        label_58->setFont(font6);
        res_modele = new QLineEdit(groupBox_6);
        res_modele->setObjectName(QString::fromUtf8("res_modele"));
        res_modele->setEnabled(false);
        res_modele->setGeometry(QRect(140, 100, 170, 20));
        res_modele->setFont(font6);
        res_compt = new QLineEdit(groupBox_6);
        res_compt->setObjectName(QString::fromUtf8("res_compt"));
        res_compt->setEnabled(false);
        res_compt->setGeometry(QRect(140, 130, 170, 20));
        res_compt->setFont(font6);
        label_59 = new QLabel(groupBox_6);
        label_59->setObjectName(QString::fromUtf8("label_59"));
        label_59->setGeometry(QRect(40, 130, 90, 16));
        label_59->setFont(font6);
        label_60 = new QLabel(groupBox_6);
        label_60->setObjectName(QString::fromUtf8("label_60"));
        label_60->setGeometry(QRect(39, 160, 61, 16));
        label_60->setFont(font6);
        res_prixJ = new QLineEdit(groupBox_6);
        res_prixJ->setObjectName(QString::fromUtf8("res_prixJ"));
        res_prixJ->setEnabled(false);
        res_prixJ->setGeometry(QRect(140, 160, 40, 20));
        res_prixJ->setFont(font6);
        res_prixS = new QLineEdit(groupBox_6);
        res_prixS->setObjectName(QString::fromUtf8("res_prixS"));
        res_prixS->setEnabled(false);
        res_prixS->setGeometry(QRect(200, 160, 40, 20));
        res_prixS->setFont(font6);
        res_prixM = new QLineEdit(groupBox_6);
        res_prixM->setObjectName(QString::fromUtf8("res_prixM"));
        res_prixM->setEnabled(false);
        res_prixM->setGeometry(QRect(260, 160, 40, 20));
        res_prixM->setFont(font6);
        label_61 = new QLabel(groupBox_6);
        label_61->setObjectName(QString::fromUtf8("label_61"));
        label_61->setGeometry(QRect(180, 160, 16, 16));
        label_61->setFont(font6);
        label_62 = new QLabel(groupBox_6);
        label_62->setObjectName(QString::fromUtf8("label_62"));
        label_62->setGeometry(QRect(240, 160, 20, 20));
        label_62->setFont(font6);
        label_63 = new QLabel(groupBox_6);
        label_63->setObjectName(QString::fromUtf8("label_63"));
        label_63->setGeometry(QRect(300, 160, 21, 16));
        label_63->setFont(font6);
        res_mat_comboBox = new QComboBox(groupBox_6);
        res_mat_comboBox->setObjectName(QString::fromUtf8("res_mat_comboBox"));
        res_mat_comboBox->setGeometry(QRect(140, 40, 170, 20));
        res_mat_comboBox->setFont(font6);
        groupBox_7 = new QGroupBox(groupBox_3);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(630, 230, 350, 261));
        groupBox_7->setFont(font3);
        res_remise = new QLineEdit(groupBox_7);
        res_remise->setObjectName(QString::fromUtf8("res_remise"));
        res_remise->setEnabled(false);
        res_remise->setGeometry(QRect(140, 130, 170, 20));
        res_remise->setFont(font6);
        res_totalTTC = new QLineEdit(groupBox_7);
        res_totalTTC->setObjectName(QString::fromUtf8("res_totalTTC"));
        res_totalTTC->setEnabled(false);
        res_totalTTC->setGeometry(QRect(140, 100, 170, 20));
        res_totalTTC->setFont(font6);
        label_50 = new QLabel(groupBox_7);
        label_50->setObjectName(QString::fromUtf8("label_50"));
        label_50->setGeometry(QRect(40, 130, 90, 20));
        label_50->setFont(font6);
        res_totalHT = new QLineEdit(groupBox_7);
        res_totalHT->setObjectName(QString::fromUtf8("res_totalHT"));
        res_totalHT->setEnabled(false);
        res_totalHT->setGeometry(QRect(140, 40, 170, 20));
        res_totalHT->setFont(font6);
        label_37 = new QLabel(groupBox_7);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(40, 40, 90, 20));
        label_37->setFont(font6);
        label_49 = new QLabel(groupBox_7);
        label_49->setObjectName(QString::fromUtf8("label_49"));
        label_49->setGeometry(QRect(40, 100, 90, 20));
        label_49->setFont(font6);
        label_64 = new QLabel(groupBox_7);
        label_64->setObjectName(QString::fromUtf8("label_64"));
        label_64->setGeometry(QRect(40, 160, 90, 20));
        label_64->setFont(font6);
        res_totRemise = new QLineEdit(groupBox_7);
        res_totRemise->setObjectName(QString::fromUtf8("res_totRemise"));
        res_totRemise->setEnabled(false);
        res_totRemise->setGeometry(QRect(140, 160, 170, 20));
        res_totRemise->setFont(font);
        res_totalG = new QLineEdit(groupBox_7);
        res_totalG->setObjectName(QString::fromUtf8("res_totalG"));
        res_totalG->setEnabled(false);
        res_totalG->setGeometry(QRect(140, 210, 170, 20));
        label_65 = new QLabel(groupBox_7);
        label_65->setObjectName(QString::fromUtf8("label_65"));
        label_65->setGeometry(QRect(30, 210, 101, 20));
        label_65->setFont(font6);
        line = new QFrame(groupBox_7);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(20, 190, 301, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        res_tva = new QLineEdit(groupBox_7);
        res_tva->setObjectName(QString::fromUtf8("res_tva"));
        res_tva->setEnabled(false);
        res_tva->setGeometry(QRect(140, 70, 170, 20));
        res_tva->setFont(font);
        label_66 = new QLabel(groupBox_7);
        label_66->setObjectName(QString::fromUtf8("label_66"));
        label_66->setGeometry(QRect(40, 70, 90, 20));
        label_66->setFont(font6);
        res_calculer = new QPushButton(groupBox_7);
        res_calculer->setObjectName(QString::fromUtf8("res_calculer"));
        res_calculer->setGeometry(QRect(315, 15, 30, 30));
        res_calculer->setStyleSheet(QString::fromUtf8("#res_calculer{\n"
"background-color : transparent;\n"
"border-image : url(:/img/calcul.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        afficher_res = new QPushButton(groupBox_3);
        afficher_res->setObjectName(QString::fromUtf8("afficher_res"));
        afficher_res->setGeometry(QRect(10, 40, 30, 30));
        afficher_res->setStyleSheet(QString::fromUtf8("#afficher_res{\n"
"background-color : transparent;\n"
"border-image : url(:/img/return.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        stacked_reservation->addWidget(page_ajouter_res);
        page_modifier_res = new QWidget();
        page_modifier_res->setObjectName(QString::fromUtf8("page_modifier_res"));
        valider_modif_res = new QPushButton(page_modifier_res);
        valider_modif_res->setObjectName(QString::fromUtf8("valider_modif_res"));
        valider_modif_res->setGeometry(QRect(610, 500, 141, 31));
        valider_modif_res->setFont(font7);
        valider_modif_res->setStyleSheet(QString::fromUtf8(""));
        valider_modif_res->setIcon(icon);
        valider_modif_res->setIconSize(QSize(20, 20));
        groupBox_4 = new QGroupBox(page_modifier_res);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(0, 0, 1191, 550));
        groupBox_4->setFont(font5);
        label_47 = new QLabel(groupBox_4);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        label_47->setGeometry(QRect(20, 60, 171, 31));
        label_47->setFont(font3);
        groupBox_8 = new QGroupBox(groupBox_4);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(630, 230, 350, 261));
        groupBox_8->setFont(font3);
        res_remise_3 = new QLineEdit(groupBox_8);
        res_remise_3->setObjectName(QString::fromUtf8("res_remise_3"));
        res_remise_3->setEnabled(false);
        res_remise_3->setGeometry(QRect(140, 130, 170, 20));
        res_remise_3->setFont(font6);
        res_totalTTC_3 = new QLineEdit(groupBox_8);
        res_totalTTC_3->setObjectName(QString::fromUtf8("res_totalTTC_3"));
        res_totalTTC_3->setEnabled(false);
        res_totalTTC_3->setGeometry(QRect(140, 100, 170, 20));
        res_totalTTC_3->setFont(font6);
        label_83 = new QLabel(groupBox_8);
        label_83->setObjectName(QString::fromUtf8("label_83"));
        label_83->setGeometry(QRect(40, 130, 90, 20));
        label_83->setFont(font6);
        res_totalHT_3 = new QLineEdit(groupBox_8);
        res_totalHT_3->setObjectName(QString::fromUtf8("res_totalHT_3"));
        res_totalHT_3->setEnabled(false);
        res_totalHT_3->setGeometry(QRect(140, 40, 170, 20));
        res_totalHT_3->setFont(font6);
        label_45 = new QLabel(groupBox_8);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setGeometry(QRect(40, 40, 90, 20));
        label_45->setFont(font6);
        label_84 = new QLabel(groupBox_8);
        label_84->setObjectName(QString::fromUtf8("label_84"));
        label_84->setGeometry(QRect(40, 100, 90, 20));
        label_84->setFont(font6);
        label_85 = new QLabel(groupBox_8);
        label_85->setObjectName(QString::fromUtf8("label_85"));
        label_85->setGeometry(QRect(40, 160, 90, 20));
        label_85->setFont(font6);
        res_totRemise_3 = new QLineEdit(groupBox_8);
        res_totRemise_3->setObjectName(QString::fromUtf8("res_totRemise_3"));
        res_totRemise_3->setEnabled(false);
        res_totRemise_3->setGeometry(QRect(140, 160, 170, 20));
        res_totRemise_3->setFont(font6);
        res_totalG_3 = new QLineEdit(groupBox_8);
        res_totalG_3->setObjectName(QString::fromUtf8("res_totalG_3"));
        res_totalG_3->setEnabled(false);
        res_totalG_3->setGeometry(QRect(140, 210, 170, 20));
        res_totalG_3->setFont(font5);
        label_86 = new QLabel(groupBox_8);
        label_86->setObjectName(QString::fromUtf8("label_86"));
        label_86->setGeometry(QRect(30, 210, 101, 20));
        label_86->setFont(font6);
        line_3 = new QFrame(groupBox_8);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(20, 190, 301, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        res_tva_3 = new QLineEdit(groupBox_8);
        res_tva_3->setObjectName(QString::fromUtf8("res_tva_3"));
        res_tva_3->setEnabled(false);
        res_tva_3->setGeometry(QRect(140, 70, 170, 20));
        res_tva_3->setFont(font6);
        label_87 = new QLabel(groupBox_8);
        label_87->setObjectName(QString::fromUtf8("label_87"));
        label_87->setGeometry(QRect(40, 70, 90, 20));
        label_87->setFont(font6);
        res_calculer_3 = new QPushButton(groupBox_8);
        res_calculer_3->setObjectName(QString::fromUtf8("res_calculer_3"));
        res_calculer_3->setGeometry(QRect(315, 15, 30, 30));
        res_calculer_3->setStyleSheet(QString::fromUtf8("#res_calculer_3{\n"
"background-color : transparent;\n"
"border-image : url(:/img/calcul.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        detailsLocataire_2 = new QGroupBox(groupBox_4);
        detailsLocataire_2->setObjectName(QString::fromUtf8("detailsLocataire_2"));
        detailsLocataire_2->setGeometry(QRect(250, 30, 350, 231));
        detailsLocataire_2->setFont(font3);
        res_IdClient_comboBox_3 = new QComboBox(detailsLocataire_2);
        res_IdClient_comboBox_3->setObjectName(QString::fromUtf8("res_IdClient_comboBox_3"));
        res_IdClient_comboBox_3->setGeometry(QRect(140, 40, 170, 20));
        res_IdClient_comboBox_3->setFont(font6);
        label_90 = new QLabel(detailsLocataire_2);
        label_90->setObjectName(QString::fromUtf8("label_90"));
        label_90->setGeometry(QRect(40, 40, 90, 16));
        label_90->setFont(font6);
        res_IdClient_3 = new QLineEdit(detailsLocataire_2);
        res_IdClient_3->setObjectName(QString::fromUtf8("res_IdClient_3"));
        res_IdClient_3->setGeometry(QRect(70, 40, 41, 20));
        res_IdClient_3->setFont(font6);
        label_91 = new QLabel(detailsLocataire_2);
        label_91->setObjectName(QString::fromUtf8("label_91"));
        label_91->setGeometry(QRect(39, 70, 90, 16));
        label_91->setFont(font6);
        res_societeCl_3 = new QLineEdit(detailsLocataire_2);
        res_societeCl_3->setObjectName(QString::fromUtf8("res_societeCl_3"));
        res_societeCl_3->setEnabled(false);
        res_societeCl_3->setGeometry(QRect(140, 70, 170, 20));
        res_societeCl_3->setFont(font6);
        res_nomCl_3 = new QLineEdit(detailsLocataire_2);
        res_nomCl_3->setObjectName(QString::fromUtf8("res_nomCl_3"));
        res_nomCl_3->setEnabled(false);
        res_nomCl_3->setGeometry(QRect(140, 100, 170, 20));
        res_nomCl_3->setFont(font6);
        label_92 = new QLabel(detailsLocataire_2);
        label_92->setObjectName(QString::fromUtf8("label_92"));
        label_92->setGeometry(QRect(40, 100, 90, 16));
        label_92->setFont(font6);
        res_prenomCl_3 = new QLineEdit(detailsLocataire_2);
        res_prenomCl_3->setObjectName(QString::fromUtf8("res_prenomCl_3"));
        res_prenomCl_3->setEnabled(false);
        res_prenomCl_3->setGeometry(QRect(140, 130, 170, 20));
        res_prenomCl_3->setFont(font6);
        label_93 = new QLabel(detailsLocataire_2);
        label_93->setObjectName(QString::fromUtf8("label_93"));
        label_93->setGeometry(QRect(40, 130, 90, 16));
        label_93->setFont(font6);
        label_94 = new QLabel(detailsLocataire_2);
        label_94->setObjectName(QString::fromUtf8("label_94"));
        label_94->setGeometry(QRect(40, 170, 251, 20));
        label_94->setFont(font7);
        res_nv_client_3 = new QPushButton(detailsLocataire_2);
        res_nv_client_3->setObjectName(QString::fromUtf8("res_nv_client_3"));
        res_nv_client_3->setGeometry(QRect(290, 170, 20, 20));
        res_nv_client_3->setFont(font8);
        res_nv_client_3->setStyleSheet(QString::fromUtf8("#res_nv_client_3{\n"
"background-color : transparent;\n"
"border-image : url(:/add.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        groupBox_9 = new QGroupBox(groupBox_4);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setGeometry(QRect(630, 30, 350, 181));
        groupBox_9->setFont(font3);
        res_dateAr_3 = new QDateTimeEdit(groupBox_9);
        res_dateAr_3->setObjectName(QString::fromUtf8("res_dateAr_3"));
        res_dateAr_3->setGeometry(QRect(140, 100, 170, 20));
        res_dateAr_3->setFont(font6);
        res_dateDep_3 = new QDateTimeEdit(groupBox_9);
        res_dateDep_3->setObjectName(QString::fromUtf8("res_dateDep_3"));
        res_dateDep_3->setGeometry(QRect(140, 70, 170, 20));
        res_dateDep_3->setFont(font6);
        label_46 = new QLabel(groupBox_9);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setGeometry(QRect(40, 100, 90, 20));
        label_46->setFont(font6);
        label_88 = new QLabel(groupBox_9);
        label_88->setObjectName(QString::fromUtf8("label_88"));
        label_88->setGeometry(QRect(40, 70, 90, 20));
        label_88->setFont(font6);
        label_89 = new QLabel(groupBox_9);
        label_89->setObjectName(QString::fromUtf8("label_89"));
        label_89->setGeometry(QRect(40, 40, 90, 20));
        label_89->setFont(font6);
        res_nbJ_3 = new QLineEdit(groupBox_9);
        res_nbJ_3->setObjectName(QString::fromUtf8("res_nbJ_3"));
        res_nbJ_3->setEnabled(false);
        res_nbJ_3->setGeometry(QRect(140, 40, 51, 20));
        res_nbJ_3->setFont(font6);
        groupBox_10 = new QGroupBox(groupBox_4);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        groupBox_10->setGeometry(QRect(250, 280, 350, 211));
        groupBox_10->setFont(font3);
        label_95 = new QLabel(groupBox_10);
        label_95->setObjectName(QString::fromUtf8("label_95"));
        label_95->setGeometry(QRect(40, 40, 90, 16));
        label_95->setFont(font6);
        label_96 = new QLabel(groupBox_10);
        label_96->setObjectName(QString::fromUtf8("label_96"));
        label_96->setGeometry(QRect(40, 70, 90, 16));
        label_96->setFont(font6);
        res_marque_3 = new QLineEdit(groupBox_10);
        res_marque_3->setObjectName(QString::fromUtf8("res_marque_3"));
        res_marque_3->setEnabled(false);
        res_marque_3->setGeometry(QRect(140, 70, 170, 20));
        res_marque_3->setFont(font6);
        label_97 = new QLabel(groupBox_10);
        label_97->setObjectName(QString::fromUtf8("label_97"));
        label_97->setGeometry(QRect(39, 100, 90, 16));
        label_97->setFont(font6);
        res_modele_3 = new QLineEdit(groupBox_10);
        res_modele_3->setObjectName(QString::fromUtf8("res_modele_3"));
        res_modele_3->setEnabled(false);
        res_modele_3->setGeometry(QRect(140, 100, 170, 20));
        res_modele_3->setFont(font6);
        res_compt_3 = new QLineEdit(groupBox_10);
        res_compt_3->setObjectName(QString::fromUtf8("res_compt_3"));
        res_compt_3->setEnabled(false);
        res_compt_3->setGeometry(QRect(140, 130, 170, 20));
        res_compt_3->setFont(font6);
        label_98 = new QLabel(groupBox_10);
        label_98->setObjectName(QString::fromUtf8("label_98"));
        label_98->setGeometry(QRect(40, 130, 90, 16));
        label_98->setFont(font6);
        label_99 = new QLabel(groupBox_10);
        label_99->setObjectName(QString::fromUtf8("label_99"));
        label_99->setGeometry(QRect(39, 160, 61, 16));
        label_99->setFont(font6);
        res_prixJ_3 = new QLineEdit(groupBox_10);
        res_prixJ_3->setObjectName(QString::fromUtf8("res_prixJ_3"));
        res_prixJ_3->setEnabled(false);
        res_prixJ_3->setGeometry(QRect(140, 160, 40, 20));
        res_prixJ_3->setFont(font6);
        res_prixS_3 = new QLineEdit(groupBox_10);
        res_prixS_3->setObjectName(QString::fromUtf8("res_prixS_3"));
        res_prixS_3->setEnabled(false);
        res_prixS_3->setGeometry(QRect(200, 160, 40, 20));
        res_prixS_3->setFont(font6);
        res_prixM_3 = new QLineEdit(groupBox_10);
        res_prixM_3->setObjectName(QString::fromUtf8("res_prixM_3"));
        res_prixM_3->setEnabled(false);
        res_prixM_3->setGeometry(QRect(260, 160, 40, 20));
        res_prixM_3->setFont(font6);
        label_100 = new QLabel(groupBox_10);
        label_100->setObjectName(QString::fromUtf8("label_100"));
        label_100->setGeometry(QRect(180, 160, 16, 16));
        label_100->setFont(font6);
        label_101 = new QLabel(groupBox_10);
        label_101->setObjectName(QString::fromUtf8("label_101"));
        label_101->setGeometry(QRect(240, 160, 20, 20));
        label_101->setFont(font6);
        label_102 = new QLabel(groupBox_10);
        label_102->setObjectName(QString::fromUtf8("label_102"));
        label_102->setGeometry(QRect(300, 160, 21, 16));
        label_102->setFont(font6);
        res_mat_comboBox_3 = new QComboBox(groupBox_10);
        res_mat_comboBox_3->setObjectName(QString::fromUtf8("res_mat_comboBox_3"));
        res_mat_comboBox_3->setGeometry(QRect(140, 40, 170, 20));
        res_mat_comboBox_3->setFont(font6);
        res_IDRes = new QLineEdit(groupBox_4);
        res_IDRes->setObjectName(QString::fromUtf8("res_IDRes"));
        res_IDRes->setEnabled(false);
        res_IDRes->setGeometry(QRect(20, 90, 113, 20));
        afficher_res_2 = new QPushButton(groupBox_4);
        afficher_res_2->setObjectName(QString::fromUtf8("afficher_res_2"));
        afficher_res_2->setGeometry(QRect(20, 30, 30, 30));
        afficher_res_2->setStyleSheet(QString::fromUtf8("#afficher_res_2{\n"
"background-color : transparent;\n"
"border-image : url(:/img/return.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        stacked_reservation->addWidget(page_modifier_res);
        groupBox_4->raise();
        valider_modif_res->raise();
        stackedMain->addWidget(Reservation);
        Location = new QWidget();
        Location->setObjectName(QString::fromUtf8("Location"));
        stacked_location = new QStackedWidget(Location);
        stacked_location->setObjectName(QString::fromUtf8("stacked_location"));
        stacked_location->setGeometry(QRect(0, 0, 1201, 551));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette17.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette17.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette17.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette17.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette17.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette17.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette17.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette17.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        stacked_location->setPalette(palette17);
        stacked_location->setAutoFillBackground(false);
        stacked_location->setFrameShape(QFrame::NoFrame);
        stacked_location->setFrameShadow(QFrame::Plain);
        page_afficher_loc = new QWidget();
        page_afficher_loc->setObjectName(QString::fromUtf8("page_afficher_loc"));
        recherche = new QLineEdit(page_afficher_loc);
        recherche->setObjectName(QString::fromUtf8("recherche"));
        recherche->setGeometry(QRect(270, 25, 191, 20));
        recherche->setFont(font);
        recherche->setAutoFillBackground(false);
        recherche->setStyleSheet(QString::fromUtf8(""));
        recherche->setFrame(false);
        recherche->setEchoMode(QLineEdit::Normal);
        recherche->setCursorMoveStyle(Qt::VisualMoveStyle);
        recherche->setClearButtonEnabled(false);
        label_33 = new QLabel(page_afficher_loc);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(160, 25, 111, 20));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette18.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette18.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette18.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette18.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette18.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette18.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette18.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette18.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette18.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette18.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette18.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        label_33->setPalette(palette18);
        rafraichir = new QPushButton(page_afficher_loc);
        rafraichir->setObjectName(QString::fromUtf8("rafraichir"));
        rafraichir->setGeometry(QRect(1110, 20, 30, 30));
        rafraichir->setToolTipDuration(-1);
        rafraichir->setStyleSheet(QString::fromUtf8("#rafraichir{\n"
"background-color : transparent;\n"
"border-image : url(:/img/refresh.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        supprimer_loc = new QPushButton(page_afficher_loc);
        supprimer_loc->setObjectName(QString::fromUtf8("supprimer_loc"));
        supprimer_loc->setGeometry(QRect(790, 520, 30, 30));
        supprimer_loc->setStyleSheet(QString::fromUtf8("#supprimer_loc{\n"
"background-color : transparent;\n"
"border-image : url(:/img/delete.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        modifier_loc = new QPushButton(page_afficher_loc);
        modifier_loc->setObjectName(QString::fromUtf8("modifier_loc"));
        modifier_loc->setGeometry(QRect(740, 520, 30, 30));
        modifier_loc->setStyleSheet(QString::fromUtf8("#modifier_loc{\n"
"background-color : transparent;\n"
"border-image : url(:/img/edit.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        ajouter_loc = new QPushButton(page_afficher_loc);
        ajouter_loc->setObjectName(QString::fromUtf8("ajouter_loc"));
        ajouter_loc->setGeometry(QRect(10, 20, 30, 30));
        ajouter_loc->setFont(font);
        ajouter_loc->setStyleSheet(QString::fromUtf8("#ajouter_loc{\n"
"background-color : transparent;\n"
"border-image : url(:/img/add.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        label_40 = new QLabel(page_afficher_loc);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setGeometry(QRect(450, 530, 271, 20));
        QFont font9;
        font9.setPointSize(9);
        label_40->setFont(font9);
        table_loca = new QTableView(page_afficher_loc);
        table_loca->setObjectName(QString::fromUtf8("table_loca"));
        table_loca->setGeometry(QRect(20, 60, 1171, 431));
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette19.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette19.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette19.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette19.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette19.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette19.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette19.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette19.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette19.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette19.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette19.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette19.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette19.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette19.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        table_loca->setPalette(palette19);
        table_loca->setAlternatingRowColors(true);
        tri_loc_comboBox = new QComboBox(page_afficher_loc);
        tri_loc_comboBox->addItem(QString());
        tri_loc_comboBox->addItem(QString());
        tri_loc_comboBox->addItem(QString());
        tri_loc_comboBox->addItem(QString());
        tri_loc_comboBox->addItem(QString());
        tri_loc_comboBox->setObjectName(QString::fromUtf8("tri_loc_comboBox"));
        tri_loc_comboBox->setGeometry(QRect(950, 25, 141, 22));
        QPalette palette20;
        palette20.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette20.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette20.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette20.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette20.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette20.setBrush(QPalette::Active, QPalette::Window, brush9);
        QBrush brush25(QColor(0, 0, 0, 128));
        brush25.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Active, QPalette::PlaceholderText, brush25);
#endif
        palette20.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette20.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette20.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette20.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette20.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette20.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        QBrush brush26(QColor(0, 0, 0, 128));
        brush26.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush26);
#endif
        palette20.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette20.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette20.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette20.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette20.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette20.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        QBrush brush27(QColor(0, 0, 0, 128));
        brush27.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush27);
#endif
        tri_loc_comboBox->setPalette(palette20);
        stat = new QPushButton(page_afficher_loc);
        stat->setObjectName(QString::fromUtf8("stat"));
        stat->setGeometry(QRect(1150, 20, 30, 30));
        stat->setStyleSheet(QString::fromUtf8("#stat{\n"
"background-color : transparent;\n"
"border-image : url(:/img/stat.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        pdfRes = new QPushButton(page_afficher_loc);
        pdfRes->setObjectName(QString::fromUtf8("pdfRes"));
        pdfRes->setGeometry(QRect(840, 520, 30, 30));
        pdfRes->setStyleSheet(QString::fromUtf8("#pdfRes{\n"
"background-color : transparent;\n"
"border-image : url(:/img/pdf.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        stacked_location->addWidget(page_afficher_loc);
        page_ajouter_loc = new QWidget();
        page_ajouter_loc->setObjectName(QString::fromUtf8("page_ajouter_loc"));
        ajouter_2 = new QGroupBox(page_ajouter_loc);
        ajouter_2->setObjectName(QString::fromUtf8("ajouter_2"));
        ajouter_2->setEnabled(true);
        ajouter_2->setGeometry(QRect(20, 250, 1171, 291));
        ajouter_2->setFont(font3);
        label_19 = new QLabel(ajouter_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(21, 60, 121, 16));
        label_19->setFont(font3);
        loc_idRes_comboBox = new QComboBox(ajouter_2);
        loc_idRes_comboBox->setObjectName(QString::fromUtf8("loc_idRes_comboBox"));
        loc_idRes_comboBox->setGeometry(QRect(31, 80, 131, 22));
        detailsRes = new QGroupBox(ajouter_2);
        detailsRes->setObjectName(QString::fromUtf8("detailsRes"));
        detailsRes->setEnabled(false);
        detailsRes->setGeometry(QRect(180, 30, 631, 211));
        detailsRes->setFont(font3);
        loc_IdCl = new QLineEdit(detailsRes);
        loc_IdCl->setObjectName(QString::fromUtf8("loc_IdCl"));
        loc_IdCl->setGeometry(QRect(150, 40, 160, 20));
        loc_IdCl->setFont(font);
        label_105 = new QLabel(detailsRes);
        label_105->setObjectName(QString::fromUtf8("label_105"));
        label_105->setGeometry(QRect(30, 70, 121, 16));
        label_105->setFont(font6);
        label_106 = new QLabel(detailsRes);
        label_106->setObjectName(QString::fromUtf8("label_106"));
        label_106->setGeometry(QRect(30, 160, 121, 16));
        label_106->setFont(font6);
        loc_societe = new QLineEdit(detailsRes);
        loc_societe->setObjectName(QString::fromUtf8("loc_societe"));
        loc_societe->setGeometry(QRect(150, 70, 160, 20));
        loc_societe->setFont(font);
        label_107 = new QLabel(detailsRes);
        label_107->setObjectName(QString::fromUtf8("label_107"));
        label_107->setGeometry(QRect(30, 100, 121, 16));
        label_107->setFont(font6);
        label_108 = new QLabel(detailsRes);
        label_108->setObjectName(QString::fromUtf8("label_108"));
        label_108->setGeometry(QRect(30, 130, 121, 16));
        label_108->setFont(font6);
        loc_nom = new QLineEdit(detailsRes);
        loc_nom->setObjectName(QString::fromUtf8("loc_nom"));
        loc_nom->setGeometry(QRect(150, 100, 160, 20));
        loc_nom->setFont(font);
        label_109 = new QLabel(detailsRes);
        label_109->setObjectName(QString::fromUtf8("label_109"));
        label_109->setGeometry(QRect(330, 40, 121, 16));
        label_109->setFont(font6);
        loc_prenom = new QLineEdit(detailsRes);
        loc_prenom->setObjectName(QString::fromUtf8("loc_prenom"));
        loc_prenom->setGeometry(QRect(150, 130, 160, 20));
        loc_prenom->setFont(font);
        label_110 = new QLabel(detailsRes);
        label_110->setObjectName(QString::fromUtf8("label_110"));
        label_110->setGeometry(QRect(330, 70, 121, 16));
        label_110->setFont(font6);
        label_111 = new QLabel(detailsRes);
        label_111->setObjectName(QString::fromUtf8("label_111"));
        label_111->setGeometry(QRect(330, 100, 121, 16));
        label_111->setFont(font6);
        loc_marque = new QLineEdit(detailsRes);
        loc_marque->setObjectName(QString::fromUtf8("loc_marque"));
        loc_marque->setGeometry(QRect(450, 100, 160, 20));
        loc_marque->setFont(font);
        label_112 = new QLabel(detailsRes);
        label_112->setObjectName(QString::fromUtf8("label_112"));
        label_112->setGeometry(QRect(330, 130, 121, 16));
        label_112->setFont(font6);
        loc_modele = new QLineEdit(detailsRes);
        loc_modele->setObjectName(QString::fromUtf8("loc_modele"));
        loc_modele->setGeometry(QRect(450, 130, 160, 20));
        loc_modele->setFont(font);
        label_113 = new QLabel(detailsRes);
        label_113->setObjectName(QString::fromUtf8("label_113"));
        label_113->setGeometry(QRect(330, 160, 121, 16));
        label_113->setFont(font6);
        loc_total = new QLineEdit(detailsRes);
        loc_total->setObjectName(QString::fromUtf8("loc_total"));
        loc_total->setGeometry(QRect(450, 160, 161, 20));
        loc_total->setFont(font);
        loc_matricule = new QLineEdit(detailsRes);
        loc_matricule->setObjectName(QString::fromUtf8("loc_matricule"));
        loc_matricule->setGeometry(QRect(150, 160, 160, 20));
        loc_matricule->setFont(font);
        label_114 = new QLabel(detailsRes);
        label_114->setObjectName(QString::fromUtf8("label_114"));
        label_114->setGeometry(QRect(30, 40, 121, 16));
        label_114->setFont(font6);
        loc_dateDep = new QDateTimeEdit(detailsRes);
        loc_dateDep->setObjectName(QString::fromUtf8("loc_dateDep"));
        loc_dateDep->setGeometry(QRect(450, 40, 160, 22));
        loc_dateDep->setFont(font);
        loc_dateArr = new QDateTimeEdit(detailsRes);
        loc_dateArr->setObjectName(QString::fromUtf8("loc_dateArr"));
        loc_dateArr->setGeometry(QRect(450, 70, 160, 22));
        loc_dateArr->setFont(font);
        detailsSortie = new QGroupBox(ajouter_2);
        detailsSortie->setObjectName(QString::fromUtf8("detailsSortie"));
        detailsSortie->setGeometry(QRect(820, 30, 331, 211));
        detailsSortie->setFont(font3);
        loc_RaP = new QLineEdit(detailsSortie);
        loc_RaP->setObjectName(QString::fromUtf8("loc_RaP"));
        loc_RaP->setGeometry(QRect(150, 130, 160, 20));
        loc_RaP->setFont(font);
        label_25 = new QLabel(detailsSortie);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(30, 70, 121, 16));
        label_25->setFont(font6);
        label_21 = new QLabel(detailsSortie);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(30, 40, 121, 16));
        label_21->setFont(font6);
        loc_caution = new QLineEdit(detailsSortie);
        loc_caution->setObjectName(QString::fromUtf8("loc_caution"));
        loc_caution->setGeometry(QRect(150, 100, 160, 20));
        loc_caution->setFont(font);
        label_22 = new QLabel(detailsSortie);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(30, 100, 121, 16));
        label_22->setFont(font6);
        label_104 = new QLabel(detailsSortie);
        label_104->setObjectName(QString::fromUtf8("label_104"));
        label_104->setGeometry(QRect(30, 130, 121, 16));
        label_104->setFont(font6);
        loc_kmD = new QLineEdit(detailsSortie);
        loc_kmD->setObjectName(QString::fromUtf8("loc_kmD"));
        loc_kmD->setGeometry(QRect(150, 40, 160, 20));
        loc_kmD->setFont(font);
        loc_kmD->setClearButtonEnabled(false);
        loc_carbD_comboBox = new QComboBox(detailsSortie);
        loc_carbD_comboBox->addItem(QString());
        loc_carbD_comboBox->addItem(QString());
        loc_carbD_comboBox->addItem(QString());
        loc_carbD_comboBox->addItem(QString());
        loc_carbD_comboBox->setObjectName(QString::fromUtf8("loc_carbD_comboBox"));
        loc_carbD_comboBox->setGeometry(QRect(150, 70, 161, 22));
        label_20 = new QLabel(ajouter_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(21, 130, 121, 16));
        label_20->setFont(font3);
        loc_idLoc = new QLineEdit(ajouter_2);
        loc_idLoc->setObjectName(QString::fromUtf8("loc_idLoc"));
        loc_idLoc->setEnabled(false);
        loc_idLoc->setGeometry(QRect(30, 150, 131, 20));
        loc_idLoc->setFont(font);
        valider_ajout = new QPushButton(ajouter_2);
        valider_ajout->setObjectName(QString::fromUtf8("valider_ajout"));
        valider_ajout->setGeometry(QRect(474, 250, 111, 31));
        valider_ajout->setIcon(icon);
        valider_ajout->setIconSize(QSize(25, 25));
        Res_tableView = new QTableView(page_ajouter_loc);
        Res_tableView->setObjectName(QString::fromUtf8("Res_tableView"));
        Res_tableView->setGeometry(QRect(50, 40, 1141, 201));
        QPalette palette21;
        palette21.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette21.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette21.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette21.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette21.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette21.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette21.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette21.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette21.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette21.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette21.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette21.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette21.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette21.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette21.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        Res_tableView->setPalette(palette21);
        label_3 = new QLabel(page_ajouter_loc);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 20, 181, 16));
        QPalette palette22;
        palette22.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette22.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette22.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette22.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette22.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette22.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette22.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette22.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette22.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette22.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette22.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette22.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette22.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette22.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette22.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        label_3->setPalette(palette22);
        label_3->setFont(font5);
        afficher_loc = new QPushButton(page_ajouter_loc);
        afficher_loc->setObjectName(QString::fromUtf8("afficher_loc"));
        afficher_loc->setGeometry(QRect(10, 50, 30, 30));
        afficher_loc->setStyleSheet(QString::fromUtf8("#afficher_loc{\n"
"background-color : transparent;\n"
"border-image : url(:/img/return.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        stacked_location->addWidget(page_ajouter_loc);
        page_modifier_loc = new QWidget();
        page_modifier_loc->setObjectName(QString::fromUtf8("page_modifier_loc"));
        groupBox_2 = new QGroupBox(page_modifier_loc);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 50, 1151, 491));
        groupBox_2->setFont(font3);
        loc_idres = new QLineEdit(groupBox_2);
        loc_idres->setObjectName(QString::fromUtf8("loc_idres"));
        loc_idres->setEnabled(false);
        loc_idres->setGeometry(QRect(570, 100, 150, 20));
        label_27 = new QLabel(groupBox_2);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(440, 100, 121, 16));
        label_27->setFont(font5);
        label_24 = new QLabel(groupBox_2);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(440, 140, 121, 16));
        label_24->setFont(font5);
        loc_idloc = new QLineEdit(groupBox_2);
        loc_idloc->setObjectName(QString::fromUtf8("loc_idloc"));
        loc_idloc->setEnabled(false);
        loc_idloc->setGeometry(QRect(570, 140, 150, 20));
        valider_modif = new QPushButton(groupBox_2);
        valider_modif->setObjectName(QString::fromUtf8("valider_modif"));
        valider_modif->setGeometry(QRect(530, 370, 111, 31));
        valider_modif->setIcon(icon);
        valider_modif->setIconSize(QSize(25, 25));
        details_sortie = new QGroupBox(groupBox_2);
        details_sortie->setObjectName(QString::fromUtf8("details_sortie"));
        details_sortie->setGeometry(QRect(50, 200, 331, 131));
        details_sortie->setFont(font3);
        loc_carbD_comboBox_2 = new QComboBox(details_sortie);
        loc_carbD_comboBox_2->addItem(QString());
        loc_carbD_comboBox_2->addItem(QString());
        loc_carbD_comboBox_2->addItem(QString());
        loc_carbD_comboBox_2->addItem(QString());
        loc_carbD_comboBox_2->setObjectName(QString::fromUtf8("loc_carbD_comboBox_2"));
        loc_carbD_comboBox_2->setGeometry(QRect(160, 80, 151, 20));
        label_23 = new QLabel(details_sortie);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(10, 80, 150, 20));
        label_23->setFont(font5);
        loc_km_d = new QLineEdit(details_sortie);
        loc_km_d->setObjectName(QString::fromUtf8("loc_km_d"));
        loc_km_d->setGeometry(QRect(160, 40, 151, 20));
        label_26 = new QLabel(details_sortie);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(10, 40, 150, 16));
        label_26->setFont(font5);
        details_entree = new QGroupBox(groupBox_2);
        details_entree->setObjectName(QString::fromUtf8("details_entree"));
        details_entree->setGeometry(QRect(410, 200, 331, 131));
        details_entree->setFont(font3);
        loc_carbA_comboBox = new QComboBox(details_entree);
        loc_carbA_comboBox->addItem(QString());
        loc_carbA_comboBox->addItem(QString());
        loc_carbA_comboBox->addItem(QString());
        loc_carbA_comboBox->addItem(QString());
        loc_carbA_comboBox->setObjectName(QString::fromUtf8("loc_carbA_comboBox"));
        loc_carbA_comboBox->setGeometry(QRect(160, 80, 151, 20));
        loc_km_a = new QLineEdit(details_entree);
        loc_km_a->setObjectName(QString::fromUtf8("loc_km_a"));
        loc_km_a->setGeometry(QRect(160, 40, 151, 20));
        label_28 = new QLabel(details_entree);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(10, 80, 150, 20));
        label_28->setFont(font5);
        label_29 = new QLabel(details_entree);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(10, 40, 150, 20));
        label_29->setFont(font5);
        details_paiment = new QGroupBox(groupBox_2);
        details_paiment->setObjectName(QString::fromUtf8("details_paiment"));
        details_paiment->setGeometry(QRect(770, 200, 331, 131));
        details_paiment->setFont(font3);
        loc_rap = new QLineEdit(details_paiment);
        loc_rap->setObjectName(QString::fromUtf8("loc_rap"));
        loc_rap->setGeometry(QRect(170, 80, 150, 20));
        label_41 = new QLabel(details_paiment);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setGeometry(QRect(20, 80, 150, 20));
        label_41->setFont(font5);
        loc_Caution = new QLineEdit(details_paiment);
        loc_Caution->setObjectName(QString::fromUtf8("loc_Caution"));
        loc_Caution->setGeometry(QRect(170, 40, 150, 20));
        label_32 = new QLabel(details_paiment);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(20, 40, 150, 20));
        label_32->setFont(font5);
        afficher_loc_2 = new QPushButton(groupBox_2);
        afficher_loc_2->setObjectName(QString::fromUtf8("afficher_loc_2"));
        afficher_loc_2->setGeometry(QRect(10, 40, 30, 30));
        afficher_loc_2->setStyleSheet(QString::fromUtf8("#afficher_loc_2{\n"
"background-color : transparent;\n"
"border-image : url(:/img/return.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        stacked_location->addWidget(page_modifier_loc);
        page_stat = new QWidget();
        page_stat->setObjectName(QString::fromUtf8("page_stat"));
        Stat = new QGroupBox(page_stat);
        Stat->setObjectName(QString::fromUtf8("Stat"));
        Stat->setGeometry(QRect(370, 40, 500, 500));
        Stat->setFont(font3);
        afficher_loc_3 = new QPushButton(page_stat);
        afficher_loc_3->setObjectName(QString::fromUtf8("afficher_loc_3"));
        afficher_loc_3->setGeometry(QRect(20, 40, 30, 30));
        afficher_loc_3->setStyleSheet(QString::fromUtf8("#afficher_loc_3{\n"
"background-color : transparent;\n"
"border-image : url(:/img/return.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        stacked_location->addWidget(page_stat);
        stackedMain->addWidget(Location);
        Clients = new QWidget();
        Clients->setObjectName(QString::fromUtf8("Clients"));
        tabWidget_2 = new QTabWidget(Clients);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(10, 10, 1191, 801));
        QPalette palette23;
        palette23.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QBrush brush28(QColor(229, 243, 255, 255));
        brush28.setStyle(Qt::SolidPattern);
        palette23.setBrush(QPalette::Active, QPalette::Button, brush28);
        palette23.setBrush(QPalette::Active, QPalette::Light, brush);
        QBrush brush29(QColor(179, 179, 179, 255));
        brush29.setStyle(Qt::SolidPattern);
        palette23.setBrush(QPalette::Active, QPalette::Midlight, brush29);
        QBrush brush30(QColor(62, 62, 62, 255));
        brush30.setStyle(Qt::SolidPattern);
        palette23.setBrush(QPalette::Active, QPalette::Dark, brush30);
        QBrush brush31(QColor(116, 153, 147, 255));
        brush31.setStyle(Qt::SolidPattern);
        palette23.setBrush(QPalette::Active, QPalette::Mid, brush31);
        palette23.setBrush(QPalette::Active, QPalette::Text, brush6);
        QBrush brush32(QColor(116, 124, 153, 255));
        brush32.setStyle(Qt::SolidPattern);
        palette23.setBrush(QPalette::Active, QPalette::BrightText, brush32);
        palette23.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette23.setBrush(QPalette::Active, QPalette::Base, brush28);
        palette23.setBrush(QPalette::Active, QPalette::Window, brush28);
        palette23.setBrush(QPalette::Active, QPalette::NoRole, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette23.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette23.setBrush(QPalette::Inactive, QPalette::Button, brush28);
        palette23.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::Midlight, brush29);
        palette23.setBrush(QPalette::Inactive, QPalette::Dark, brush30);
        palette23.setBrush(QPalette::Inactive, QPalette::Mid, brush31);
        palette23.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette23.setBrush(QPalette::Inactive, QPalette::BrightText, brush32);
        palette23.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette23.setBrush(QPalette::Inactive, QPalette::Base, brush28);
        palette23.setBrush(QPalette::Inactive, QPalette::Window, brush28);
        palette23.setBrush(QPalette::Inactive, QPalette::NoRole, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette23.setBrush(QPalette::Disabled, QPalette::WindowText, brush30);
        palette23.setBrush(QPalette::Disabled, QPalette::Button, brush28);
        palette23.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette23.setBrush(QPalette::Disabled, QPalette::Midlight, brush29);
        palette23.setBrush(QPalette::Disabled, QPalette::Dark, brush30);
        palette23.setBrush(QPalette::Disabled, QPalette::Mid, brush31);
        palette23.setBrush(QPalette::Disabled, QPalette::Text, brush30);
        palette23.setBrush(QPalette::Disabled, QPalette::BrightText, brush32);
        palette23.setBrush(QPalette::Disabled, QPalette::ButtonText, brush30);
        palette23.setBrush(QPalette::Disabled, QPalette::Base, brush28);
        palette23.setBrush(QPalette::Disabled, QPalette::Window, brush28);
        palette23.setBrush(QPalette::Disabled, QPalette::NoRole, brush);
        QBrush brush33(QColor(27, 153, 139, 128));
        brush33.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush33);
#endif
        tabWidget_2->setPalette(palette23);
        QFont font10;
        font10.setBold(false);
        font10.setItalic(false);
        font10.setWeight(50);
        tabWidget_2->setFont(font10);
        tabWidget_2->setLayoutDirection(Qt::LeftToRight);
        tabWidget_2->setAutoFillBackground(false);
        tabWidget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 243, 255)"));
        tabWidget_2->setTabShape(QTabWidget::Triangular);
        tabWidget_2->setElideMode(Qt::ElideMiddle);
        tabWidget_2->setTabBarAutoHide(false);
        mo = new QWidget();
        mo->setObjectName(QString::fromUtf8("mo"));
        m_afficher = new QPushButton(mo);
        m_afficher->setObjectName(QString::fromUtf8("m_afficher"));
        m_afficher->setGeometry(QRect(20, 140, 291, 51));
        m_afficher->setFont(font10);
        m_afficher->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(42, 95, 113, 255),stop:1 rgba(12, 53, 97, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"font: 20px;\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(167, 214, 50, 255),stop:1 rgba(98, 169, 67, 255));\n"
"	color: #fff;\n"
"\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(147, 194, 30, 255),stop:1 rgba(78, 149, 47, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"\n"
"}"));
        stackedWidget = new QStackedWidget(mo);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(330, 10, 851, 691));
        ajouter = new QWidget();
        ajouter->setObjectName(QString::fromUtf8("ajouter"));
        label_16 = new QLabel(ajouter);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(220, -10, 451, 51));
        QFont font11;
        font11.setFamily(QString::fromUtf8("Helvetica"));
        font11.setPointSize(18);
        font11.setBold(true);
        font11.setUnderline(true);
        font11.setWeight(75);
        label_16->setFont(font11);
        groupBox_17 = new QGroupBox(ajouter);
        groupBox_17->setObjectName(QString::fromUtf8("groupBox_17"));
        groupBox_17->setGeometry(QRect(40, 40, 811, 511));
        groupBox_17->setStyleSheet(QString::fromUtf8("QLabel {\n"
"        qproperty-alignment: AlignCenter;\n"
"	border: 1px solid #FF17365D;\n"
"	border-top-left-radius: 15px;\n"
"	border-top-right-radius: 15px;\n"
"	background-color: #FF17365D;\n"
"	padding: 5px 0px;\n"
"	color: rgb(255, 255, 255);\n"
"	max-height: 25px;\n"
"        font-size: 14px;\n"
"}\n"
"QGroupBox {\n"
"    border: 1px solid gray;\n"
"    border-color: #FF17365D;\n"
"    margin-top: 27px;\n"
"    font-size: 14px;\n"
"    border-bottom-left-radius: 15px;\n"
"    border-bottom-right-radius: 15px;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center;\n"
"    border-top-left-radius: 15px;\n"
"    border-top-right-radius: 15px;\n"
"    padding: 5px 150px;\n"
"    background-color: #FF17365D;\n"
"    color: rgb(255, 255, 255);\n"
"}\n"
"QLineEdit {\n"
"background-color: rgb(255, 255, 255);\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;\n"
"	font: bold 14px;"
                        "\n"
"}\n"
""));
        cin_16 = new QLabel(groupBox_17);
        cin_16->setObjectName(QString::fromUtf8("cin_16"));
        cin_16->setGeometry(QRect(40, 40, 341, 37));
        QFont font12;
        font12.setFamily(QString::fromUtf8("Yu Gothic UI"));
        font12.setBold(false);
        font12.setWeight(50);
        cin_16->setFont(font12);
        pushButton_5 = new QPushButton(groupBox_17);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(630, 460, 171, 41));
        pushButton_5->setFont(font5);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(42, 95, 113, 255),stop:1 rgba(12, 53, 97, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(167, 214, 50, 255),stop:1 rgba(98, 169, 67, 255));\n"
"	color: #fff;\n"
"\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(147, 194, 30, 255),stop:1 rgba(78, 149, 47, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"\n"
"}"));
        lineEdit_18 = new QLineEdit(groupBox_17);
        lineEdit_18->setObjectName(QString::fromUtf8("lineEdit_18"));
        lineEdit_18->setGeometry(QRect(400, 40, 401, 51));
        QFont font13;
        font13.setBold(true);
        font13.setItalic(false);
        font13.setWeight(75);
        lineEdit_18->setFont(font13);
        lineEdit_18->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;\n"
""));
        lineEdit_2 = new QLineEdit(groupBox_17);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(400, 400, 401, 51));
        lineEdit_2->setFont(font13);
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        cin = new QLabel(groupBox_17);
        cin->setObjectName(QString::fromUtf8("cin"));
        cin->setGeometry(QRect(40, 160, 341, 37));
        cin->setFont(font12);
        lineEdit_3 = new QLineEdit(groupBox_17);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(400, 280, 401, 51));
        lineEdit_3->setFont(font13);
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        lineEdit_4 = new QLineEdit(groupBox_17);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(400, 340, 401, 51));
        lineEdit_4->setFont(font13);
        lineEdit_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        cin_6 = new QLabel(groupBox_17);
        cin_6->setObjectName(QString::fromUtf8("cin_6"));
        cin_6->setGeometry(QRect(40, 340, 341, 37));
        cin_6->setFont(font12);
        cin_7 = new QLabel(groupBox_17);
        cin_7->setObjectName(QString::fromUtf8("cin_7"));
        cin_7->setGeometry(QRect(40, 400, 341, 37));
        cin_7->setFont(font12);
        cin_3 = new QLabel(groupBox_17);
        cin_3->setObjectName(QString::fromUtf8("cin_3"));
        cin_3->setGeometry(QRect(40, 100, 341, 37));
        cin_3->setFont(font12);
        lineEdit_6 = new QLineEdit(groupBox_17);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(400, 100, 401, 51));
        lineEdit_6->setFont(font13);
        lineEdit_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        lineEdit = new QLineEdit(groupBox_17);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(400, 160, 401, 51));
        lineEdit->setFont(font13);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        lineEdit_5 = new QLineEdit(groupBox_17);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(400, 220, 401, 51));
        lineEdit_5->setFont(font13);
        lineEdit_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        cin_4 = new QLabel(groupBox_17);
        cin_4->setObjectName(QString::fromUtf8("cin_4"));
        cin_4->setGeometry(QRect(40, 280, 341, 37));
        cin_4->setFont(font12);
        cin_5 = new QLabel(groupBox_17);
        cin_5->setObjectName(QString::fromUtf8("cin_5"));
        cin_5->setGeometry(QRect(40, 220, 341, 37));
        cin_5->setFont(font12);
        stackedWidget->addWidget(ajouter);
        mod = new QWidget();
        mod->setObjectName(QString::fromUtf8("mod"));
        label_17 = new QLabel(mod);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(210, 0, 461, 41));
        label_17->setFont(font11);
        cin_14 = new QLabel(mod);
        cin_14->setObjectName(QString::fromUtf8("cin_14"));
        cin_14->setGeometry(QRect(100, 510, 351, 41));
        QFont font14;
        font14.setFamily(QString::fromUtf8("Yu Gothic UI"));
        font14.setPointSize(12);
        font14.setBold(false);
        font14.setWeight(50);
        cin_14->setFont(font14);
        pushButton_7 = new QPushButton(mod);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(690, 510, 151, 41));
        QFont font15;
        font15.setFamily(QString::fromUtf8("Helvetica"));
        font15.setBold(false);
        font15.setItalic(false);
        font15.setWeight(50);
        pushButton_7->setFont(font15);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(42, 95, 113, 255),stop:1 rgba(12, 53, 97, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"font: 20px;\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(167, 214, 50, 255),stop:1 rgba(98, 169, 67, 255));\n"
"	color: #fff;\n"
"\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(147, 194, 30, 255),stop:1 rgba(78, 149, 47, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"\n"
"}"));
        tableView_4 = new QTableView(mod);
        tableView_4->setObjectName(QString::fromUtf8("tableView_4"));
        tableView_4->setGeometry(QRect(0, 100, 841, 401));
        QFont font16;
        font16.setPointSize(20);
        tableView_4->setFont(font16);
        tableView_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        combo_2 = new QComboBox(mod);
        combo_2->setObjectName(QString::fromUtf8("combo_2"));
        combo_2->setGeometry(QRect(460, 520, 211, 31));
        combo_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        comboBox_20 = new QComboBox(mod);
        comboBox_20->addItem(QString());
        comboBox_20->addItem(QString());
        comboBox_20->addItem(QString());
        comboBox_20->setObjectName(QString::fromUtf8("comboBox_20"));
        comboBox_20->setGeometry(QRect(620, 50, 221, 41));
        QFont font17;
        font17.setFamily(QString::fromUtf8("Helvetica"));
        font17.setPointSize(12);
        comboBox_20->setFont(font17);
        comboBox_20->setLayoutDirection(Qt::LeftToRight);
        comboBox_20->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        comboBox_20->setMaxVisibleItems(3);
        comboBox_20->setInsertPolicy(QComboBox::InsertAtTop);
        lineEdit_26 = new QLineEdit(mod);
        lineEdit_26->setObjectName(QString::fromUtf8("lineEdit_26"));
        lineEdit_26->setGeometry(QRect(0, 50, 281, 41));
        lineEdit_26->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        stackedWidget->addWidget(mod);
        modifier = new QWidget();
        modifier->setObjectName(QString::fromUtf8("modifier"));
        label_122 = new QLabel(modifier);
        label_122->setObjectName(QString::fromUtf8("label_122"));
        label_122->setGeometry(QRect(190, 10, 461, 41));
        label_122->setFont(font11);
        groupBox = new QGroupBox(modifier);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 60, 801, 501));
        groupBox->setStyleSheet(QString::fromUtf8("QLabel {\n"
"        qproperty-alignment: AlignCenter;\n"
"	border: 1px solid #FF17365D;\n"
"	border-top-left-radius: 15px;\n"
"	border-top-right-radius: 15px;\n"
"	background-color: #FF17365D;\n"
"	padding: 5px 0px;\n"
"	color: rgb(255, 255, 255);\n"
"	max-height: 25px;\n"
"        font-size: 14px;\n"
"}\n"
"QGroupBox {\n"
"    border: 1px solid gray;\n"
"    border-color: #FF17365D;\n"
"    margin-top: 27px;\n"
"    font-size: 14px;\n"
"    border-bottom-left-radius: 15px;\n"
"    border-bottom-right-radius: 15px;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center;\n"
"    border-top-left-radius: 15px;\n"
"    border-top-right-radius: 15px;\n"
"    padding: 5px 150px;\n"
"    background-color: #FF17365D;\n"
"    color: rgb(255, 255, 255);\n"
"}\n"
"QLineEdit {\n"
"background-color: rgb(255, 255, 255);\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;\n"
"	font: bold 14px;"
                        "\n"
"}\n"
""));
        cin_8 = new QLabel(groupBox);
        cin_8->setObjectName(QString::fromUtf8("cin_8"));
        cin_8->setGeometry(QRect(10, 130, 341, 37));
        cin_8->setFont(font12);
        lineEdit_13 = new QLineEdit(groupBox);
        lineEdit_13->setObjectName(QString::fromUtf8("lineEdit_13"));
        lineEdit_13->setGeometry(QRect(370, 270, 421, 51));
        lineEdit_13->setFont(font13);
        lineEdit_13->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        cin_12 = new QLabel(groupBox);
        cin_12->setObjectName(QString::fromUtf8("cin_12"));
        cin_12->setGeometry(QRect(10, 50, 341, 37));
        cin_12->setFont(font12);
        cin_10 = new QLabel(groupBox);
        cin_10->setObjectName(QString::fromUtf8("cin_10"));
        cin_10->setGeometry(QRect(10, 360, 341, 37));
        cin_10->setFont(font12);
        cin_9 = new QLabel(groupBox);
        cin_9->setObjectName(QString::fromUtf8("cin_9"));
        cin_9->setGeometry(QRect(10, 210, 341, 37));
        cin_9->setFont(font12);
        lineEdit_16 = new QLineEdit(groupBox);
        lineEdit_16->setObjectName(QString::fromUtf8("lineEdit_16"));
        lineEdit_16->setGeometry(QRect(370, 40, 421, 51));
        lineEdit_16->setFont(font13);
        lineEdit_16->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        lineEdit_17 = new QLineEdit(groupBox);
        lineEdit_17->setObjectName(QString::fromUtf8("lineEdit_17"));
        lineEdit_17->setGeometry(QRect(370, 200, 421, 51));
        lineEdit_17->setFont(font13);
        lineEdit_17->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        lineEdit_15 = new QLineEdit(groupBox);
        lineEdit_15->setObjectName(QString::fromUtf8("lineEdit_15"));
        lineEdit_15->setGeometry(QRect(370, 350, 421, 51));
        lineEdit_15->setFont(font13);
        lineEdit_15->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(590, 420, 191, 41));
        pushButton_6->setFont(font15);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(42, 95, 113, 255),stop:1 rgba(12, 53, 97, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"font: 20px;\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(167, 214, 50, 255),stop:1 rgba(98, 169, 67, 255));\n"
"	color: #fff;\n"
"\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(147, 194, 30, 255),stop:1 rgba(78, 149, 47, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"\n"
"}"));
        cin_13 = new QLabel(groupBox);
        cin_13->setObjectName(QString::fromUtf8("cin_13"));
        cin_13->setGeometry(QRect(10, 290, 341, 37));
        cin_13->setFont(font12);
        lineEdit_12 = new QLineEdit(groupBox);
        lineEdit_12->setObjectName(QString::fromUtf8("lineEdit_12"));
        lineEdit_12->setGeometry(QRect(370, 120, 421, 51));
        lineEdit_12->setFont(font13);
        lineEdit_12->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        stackedWidget->addWidget(modifier);
        supprimer_2 = new QWidget();
        supprimer_2->setObjectName(QString::fromUtf8("supprimer_2"));
        cin_15 = new QLabel(supprimer_2);
        cin_15->setObjectName(QString::fromUtf8("cin_15"));
        cin_15->setGeometry(QRect(150, 510, 351, 51));
        cin_15->setFont(font14);
        pushButton_14 = new QPushButton(supprimer_2);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setGeometry(QRect(700, 510, 141, 41));
        pushButton_14->setFont(font15);
        pushButton_14->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(42, 95, 113, 255),stop:1 rgba(12, 53, 97, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"font: 20px;\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(167, 214, 50, 255),stop:1 rgba(98, 169, 67, 255));\n"
"	color: #fff;\n"
"\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(147, 194, 30, 255),stop:1 rgba(78, 149, 47, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"\n"
"}"));
        label_133 = new QLabel(supprimer_2);
        label_133->setObjectName(QString::fromUtf8("label_133"));
        label_133->setGeometry(QRect(230, 10, 491, 41));
        label_133->setFont(font11);
        combo = new QComboBox(supprimer_2);
        combo->setObjectName(QString::fromUtf8("combo"));
        combo->setGeometry(QRect(520, 520, 161, 31));
        QFont font18;
        font18.setPointSize(14);
        font18.setBold(false);
        font18.setItalic(false);
        font18.setWeight(50);
        combo->setFont(font18);
        combo->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        tableView_7 = new QTableView(supprimer_2);
        tableView_7->setObjectName(QString::fromUtf8("tableView_7"));
        tableView_7->setGeometry(QRect(20, 110, 821, 391));
        tableView_7->setFont(font16);
        tableView_7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        lineEdit_25 = new QLineEdit(supprimer_2);
        lineEdit_25->setObjectName(QString::fromUtf8("lineEdit_25"));
        lineEdit_25->setGeometry(QRect(20, 67, 281, 41));
        lineEdit_25->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        comboBox_19 = new QComboBox(supprimer_2);
        comboBox_19->addItem(QString());
        comboBox_19->addItem(QString());
        comboBox_19->addItem(QString());
        comboBox_19->setObjectName(QString::fromUtf8("comboBox_19"));
        comboBox_19->setGeometry(QRect(610, 60, 221, 41));
        comboBox_19->setFont(font17);
        comboBox_19->setLayoutDirection(Qt::LeftToRight);
        comboBox_19->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        comboBox_19->setMaxVisibleItems(3);
        comboBox_19->setInsertPolicy(QComboBox::InsertAtTop);
        stackedWidget->addWidget(supprimer_2);
        afficher = new QWidget();
        afficher->setObjectName(QString::fromUtf8("afficher"));
        label_134 = new QLabel(afficher);
        label_134->setObjectName(QString::fromUtf8("label_134"));
        label_134->setGeometry(QRect(200, 0, 481, 41));
        label_134->setFont(font11);
        lineEdit_19 = new QLineEdit(afficher);
        lineEdit_19->setObjectName(QString::fromUtf8("lineEdit_19"));
        lineEdit_19->setGeometry(QRect(20, 90, 281, 41));
        lineEdit_19->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        comboBox_15 = new QComboBox(afficher);
        comboBox_15->addItem(QString());
        comboBox_15->addItem(QString());
        comboBox_15->addItem(QString());
        comboBox_15->setObjectName(QString::fromUtf8("comboBox_15"));
        comboBox_15->setGeometry(QRect(620, 90, 221, 41));
        comboBox_15->setFont(font17);
        comboBox_15->setLayoutDirection(Qt::LeftToRight);
        comboBox_15->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        comboBox_15->setMaxVisibleItems(3);
        comboBox_15->setInsertPolicy(QComboBox::InsertAtTop);
        tableView_5 = new QTableView(afficher);
        tableView_5->setObjectName(QString::fromUtf8("tableView_5"));
        tableView_5->setGeometry(QRect(20, 140, 821, 421));
        tableView_5->setFont(font16);
        tableView_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        m_afficher_3 = new QPushButton(afficher);
        m_afficher_3->setObjectName(QString::fromUtf8("m_afficher_3"));
        m_afficher_3->setGeometry(QRect(20, 50, 281, 31));
        QFont font19;
        font19.setFamily(QString::fromUtf8("Helvetica"));
        font19.setPointSize(10);
        m_afficher_3->setFont(font19);
        m_afficher_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(42, 95, 113, 255),stop:1 rgba(12, 53, 97, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(167, 214, 50, 255),stop:1 rgba(98, 169, 67, 255));\n"
"	color: #fff;\n"
"\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(147, 194, 30, 255),stop:1 rgba(78, 149, 47, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"\n"
"}"));
        stackedWidget->addWidget(afficher);
        m_ajouter = new QPushButton(mo);
        m_ajouter->setObjectName(QString::fromUtf8("m_ajouter"));
        m_ajouter->setGeometry(QRect(20, 240, 291, 51));
        m_ajouter->setFont(font10);
        m_ajouter->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(42, 95, 113, 255),stop:1 rgba(12, 53, 97, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"font: 20px;\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(167, 214, 50, 255),stop:1 rgba(98, 169, 67, 255));\n"
"	color: #fff;\n"
"\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(147, 194, 30, 255),stop:1 rgba(78, 149, 47, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"\n"
"}"));
        m_modifier = new QPushButton(mo);
        m_modifier->setObjectName(QString::fromUtf8("m_modifier"));
        m_modifier->setGeometry(QRect(20, 350, 291, 51));
        m_modifier->setFont(font10);
        m_modifier->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(42, 95, 113, 255),stop:1 rgba(12, 53, 97, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"font: 20px;\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(167, 214, 50, 255),stop:1 rgba(98, 169, 67, 255));\n"
"	color: #fff;\n"
"\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(147, 194, 30, 255),stop:1 rgba(78, 149, 47, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"\n"
"}"));
        m_supprimer = new QPushButton(mo);
        m_supprimer->setObjectName(QString::fromUtf8("m_supprimer"));
        m_supprimer->setGeometry(QRect(20, 450, 291, 51));
        m_supprimer->setFont(font10);
        m_supprimer->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(42, 95, 113, 255),stop:1 rgba(12, 53, 97, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"font: 20px;\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(167, 214, 50, 255),stop:1 rgba(98, 169, 67, 255));\n"
"	color: #fff;\n"
"\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(147, 194, 30, 255),stop:1 rgba(78, 149, 47, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"\n"
"}"));
        tabWidget_2->addTab(mo, QString());
        ph = new QWidget();
        ph->setObjectName(QString::fromUtf8("ph"));
        p_ajouter = new QPushButton(ph);
        p_ajouter->setObjectName(QString::fromUtf8("p_ajouter"));
        p_ajouter->setGeometry(QRect(20, 240, 271, 51));
        p_ajouter->setFont(font10);
        p_ajouter->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(42, 95, 113, 255),stop:1 rgba(12, 53, 97, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"font: 20px;\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(167, 214, 50, 255),stop:1 rgba(98, 169, 67, 255));\n"
"	color: #fff;\n"
"\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(147, 194, 30, 255),stop:1 rgba(78, 149, 47, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"\n"
"}"));
        p_afficher = new QPushButton(ph);
        p_afficher->setObjectName(QString::fromUtf8("p_afficher"));
        p_afficher->setGeometry(QRect(20, 120, 271, 51));
        p_afficher->setFont(font10);
        p_afficher->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(42, 95, 113, 255),stop:1 rgba(12, 53, 97, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"font: 20px;\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(167, 214, 50, 255),stop:1 rgba(98, 169, 67, 255));\n"
"	color: #fff;\n"
"\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(147, 194, 30, 255),stop:1 rgba(78, 149, 47, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"\n"
"}"));
        stackedWidget_2 = new QStackedWidget(ph);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(300, 10, 891, 561));
        QPalette palette24;
        palette24.setBrush(QPalette::Active, QPalette::Button, brush28);
        QBrush brush34(QColor(79, 122, 122, 255));
        brush34.setStyle(Qt::SolidPattern);
        palette24.setBrush(QPalette::Active, QPalette::Text, brush34);
        palette24.setBrush(QPalette::Active, QPalette::Base, brush28);
        palette24.setBrush(QPalette::Active, QPalette::Window, brush28);
        QBrush brush35(QColor(79, 122, 122, 128));
        brush35.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette24.setBrush(QPalette::Active, QPalette::PlaceholderText, brush35);
#endif
        palette24.setBrush(QPalette::Inactive, QPalette::Button, brush28);
        palette24.setBrush(QPalette::Inactive, QPalette::Text, brush34);
        palette24.setBrush(QPalette::Inactive, QPalette::Base, brush28);
        palette24.setBrush(QPalette::Inactive, QPalette::Window, brush28);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette24.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush35);
#endif
        palette24.setBrush(QPalette::Disabled, QPalette::Button, brush28);
        QBrush brush36(QColor(120, 120, 120, 255));
        brush36.setStyle(Qt::SolidPattern);
        palette24.setBrush(QPalette::Disabled, QPalette::Text, brush36);
        palette24.setBrush(QPalette::Disabled, QPalette::Base, brush28);
        palette24.setBrush(QPalette::Disabled, QPalette::Window, brush28);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette24.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        stackedWidget_2->setPalette(palette24);
        ajouter_3 = new QWidget();
        ajouter_3->setObjectName(QString::fromUtf8("ajouter_3"));
        label_135 = new QLabel(ajouter_3);
        label_135->setObjectName(QString::fromUtf8("label_135"));
        label_135->setGeometry(QRect(210, 0, 481, 31));
        label_135->setFont(font11);
        groupBox_18 = new QGroupBox(ajouter_3);
        groupBox_18->setObjectName(QString::fromUtf8("groupBox_18"));
        groupBox_18->setGeometry(QRect(30, 50, 831, 501));
        groupBox_18->setStyleSheet(QString::fromUtf8("QLabel {\n"
"        qproperty-alignment: AlignCenter;\n"
"	border: 1px solid #FF17365D;\n"
"	border-top-left-radius: 15px;\n"
"	border-top-right-radius: 15px;\n"
"	background-color: #FF17365D;\n"
"	padding: 5px 0px;\n"
"	color: rgb(255, 255, 255);\n"
"	max-height: 25px;\n"
"        font-size: 14px;\n"
"}\n"
"QGroupBox {\n"
"    border: 1px solid gray;\n"
"    border-color: #FF17365D;\n"
"    margin-top: 27px;\n"
"    font-size: 14px;\n"
"    border-bottom-left-radius: 15px;\n"
"    border-bottom-right-radius: 15px;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center;\n"
"    border-top-left-radius: 15px;\n"
"    border-top-right-radius: 15px;\n"
"    padding: 5px 150px;\n"
"    background-color: #FF17365D;\n"
"    color: rgb(255, 255, 255);\n"
"}\n"
"QLineEdit {\n"
"background-color: rgb(255, 255, 255);\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;\n"
"	font: bold 14px;"
                        "\n"
"}\n"
""));
        cin_20 = new QLabel(groupBox_18);
        cin_20->setObjectName(QString::fromUtf8("cin_20"));
        cin_20->setGeometry(QRect(20, 290, 221, 37));
        cin_20->setFont(font12);
        lineEdit_7 = new QLineEdit(groupBox_18);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(270, 90, 541, 41));
        lineEdit_7->setFont(font13);
        lineEdit_7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        cin_21 = new QLabel(groupBox_18);
        cin_21->setObjectName(QString::fromUtf8("cin_21"));
        cin_21->setGeometry(QRect(20, 340, 221, 37));
        cin_21->setFont(font12);
        lineEdit_22 = new QLineEdit(groupBox_18);
        lineEdit_22->setObjectName(QString::fromUtf8("lineEdit_22"));
        lineEdit_22->setGeometry(QRect(270, 240, 541, 41));
        lineEdit_22->setFont(font13);
        lineEdit_22->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        cin_18 = new QLabel(groupBox_18);
        cin_18->setObjectName(QString::fromUtf8("cin_18"));
        cin_18->setGeometry(QRect(20, 240, 221, 37));
        cin_18->setFont(font12);
        cin_22 = new QLabel(groupBox_18);
        cin_22->setObjectName(QString::fromUtf8("cin_22"));
        cin_22->setGeometry(QRect(20, 40, 221, 37));
        cin_22->setFont(font12);
        cin_17 = new QLabel(groupBox_18);
        cin_17->setObjectName(QString::fromUtf8("cin_17"));
        cin_17->setGeometry(QRect(20, 140, 221, 37));
        cin_17->setFont(font12);
        lineEdit_24 = new QLineEdit(groupBox_18);
        lineEdit_24->setObjectName(QString::fromUtf8("lineEdit_24"));
        lineEdit_24->setGeometry(QRect(270, 340, 541, 41));
        lineEdit_24->setFont(font13);
        lineEdit_24->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        lineEdit_21 = new QLineEdit(groupBox_18);
        lineEdit_21->setObjectName(QString::fromUtf8("lineEdit_21"));
        lineEdit_21->setGeometry(QRect(270, 190, 541, 41));
        lineEdit_21->setFont(font13);
        lineEdit_21->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        cin_31 = new QLabel(groupBox_18);
        cin_31->setObjectName(QString::fromUtf8("cin_31"));
        cin_31->setGeometry(QRect(20, 390, 221, 37));
        cin_31->setFont(font12);
        lineEdit_23 = new QLineEdit(groupBox_18);
        lineEdit_23->setObjectName(QString::fromUtf8("lineEdit_23"));
        lineEdit_23->setGeometry(QRect(270, 290, 541, 41));
        lineEdit_23->setFont(font13);
        lineEdit_23->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        dateEdit = new QDateEdit(groupBox_18);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(270, 390, 541, 41));
        dateEdit->setFont(font16);
        dateEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        cin_2 = new QLabel(groupBox_18);
        cin_2->setObjectName(QString::fromUtf8("cin_2"));
        cin_2->setGeometry(QRect(20, 90, 221, 37));
        cin_2->setFont(font12);
        lineEdit_20 = new QLineEdit(groupBox_18);
        lineEdit_20->setObjectName(QString::fromUtf8("lineEdit_20"));
        lineEdit_20->setGeometry(QRect(270, 140, 541, 41));
        lineEdit_20->setFont(font13);
        lineEdit_20->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        cin_19 = new QLabel(groupBox_18);
        cin_19->setObjectName(QString::fromUtf8("cin_19"));
        cin_19->setGeometry(QRect(20, 190, 221, 37));
        cin_19->setFont(font12);
        lineEdit_37 = new QLineEdit(groupBox_18);
        lineEdit_37->setObjectName(QString::fromUtf8("lineEdit_37"));
        lineEdit_37->setGeometry(QRect(270, 40, 541, 41));
        lineEdit_37->setFont(font13);
        lineEdit_37->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        pushButton_16 = new QPushButton(groupBox_18);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setGeometry(QRect(650, 450, 161, 41));
        pushButton_16->setFont(font10);
        pushButton_16->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(42, 95, 113, 255),stop:1 rgba(12, 53, 97, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"font: 20px;\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(167, 214, 50, 255),stop:1 rgba(98, 169, 67, 255));\n"
"	color: #fff;\n"
"\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(147, 194, 30, 255),stop:1 rgba(78, 149, 47, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"\n"
"}"));
        stackedWidget_2->addWidget(ajouter_3);
        mod_2 = new QWidget();
        mod_2->setObjectName(QString::fromUtf8("mod_2"));
        label_136 = new QLabel(mod_2);
        label_136->setObjectName(QString::fromUtf8("label_136"));
        label_136->setGeometry(QRect(210, 0, 481, 41));
        label_136->setFont(font11);
        cin_23 = new QLabel(mod_2);
        cin_23->setObjectName(QString::fromUtf8("cin_23"));
        cin_23->setGeometry(QRect(90, 520, 331, 31));
        cin_23->setFont(font14);
        pushButton_17 = new QPushButton(mod_2);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));
        pushButton_17->setGeometry(QRect(720, 520, 151, 31));
        pushButton_17->setFont(font10);
        pushButton_17->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(42, 95, 113, 255),stop:1 rgba(12, 53, 97, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"font: 20px;\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(167, 214, 50, 255),stop:1 rgba(98, 169, 67, 255));\n"
"	color: #fff;\n"
"\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(147, 194, 30, 255),stop:1 rgba(78, 149, 47, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"\n"
"}"));
        tableView_9 = new QTableView(mod_2);
        tableView_9->setObjectName(QString::fromUtf8("tableView_9"));
        tableView_9->setGeometry(QRect(20, 110, 861, 401));
        tableView_9->setFont(font16);
        tableView_9->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        comboBox_3 = new QComboBox(mod_2);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(420, 520, 251, 31));
        comboBox_3->setFont(font16);
        comboBox_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        comboBox_27 = new QComboBox(mod_2);
        comboBox_27->addItem(QString());
        comboBox_27->addItem(QString());
        comboBox_27->addItem(QString());
        comboBox_27->setObjectName(QString::fromUtf8("comboBox_27"));
        comboBox_27->setGeometry(QRect(670, 70, 211, 41));
        QFont font20;
        font20.setFamily(QString::fromUtf8("Helvetica"));
        font20.setPointSize(16);
        comboBox_27->setFont(font20);
        comboBox_27->setLayoutDirection(Qt::LeftToRight);
        comboBox_27->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        comboBox_27->setMaxVisibleItems(3);
        comboBox_27->setInsertPolicy(QComboBox::InsertAtTop);
        lineEdit_67 = new QLineEdit(mod_2);
        lineEdit_67->setObjectName(QString::fromUtf8("lineEdit_67"));
        lineEdit_67->setGeometry(QRect(20, 60, 251, 41));
        lineEdit_67->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        stackedWidget_2->addWidget(mod_2);
        modifier_2 = new QWidget();
        modifier_2->setObjectName(QString::fromUtf8("modifier_2"));
        label_137 = new QLabel(modifier_2);
        label_137->setObjectName(QString::fromUtf8("label_137"));
        label_137->setGeometry(QRect(210, 0, 491, 41));
        label_137->setFont(font11);
        groupBox_19 = new QGroupBox(modifier_2);
        groupBox_19->setObjectName(QString::fromUtf8("groupBox_19"));
        groupBox_19->setGeometry(QRect(10, 40, 871, 481));
        groupBox_19->setStyleSheet(QString::fromUtf8("QLabel {\n"
"        qproperty-alignment: AlignCenter;\n"
"	border: 1px solid #FF17365D;\n"
"	border-top-left-radius: 15px;\n"
"	border-top-right-radius: 15px;\n"
"	background-color: #FF17365D;\n"
"	padding: 5px 0px;\n"
"	color: rgb(255, 255, 255);\n"
"	max-height: 25px;\n"
"        font-size: 14px;\n"
"}\n"
"QGroupBox {\n"
"    border: 1px solid gray;\n"
"    border-color: #FF17365D;\n"
"    margin-top: 27px;\n"
"    font-size: 14px;\n"
"    border-bottom-left-radius: 15px;\n"
"    border-bottom-right-radius: 15px;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center;\n"
"    border-top-left-radius: 15px;\n"
"    border-top-right-radius: 15px;\n"
"    padding: 5px 150px;\n"
"    background-color: #FF17365D;\n"
"    color: rgb(255, 255, 255);\n"
"}\n"
"QLineEdit {\n"
"background-color: rgb(255, 255, 255);\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;\n"
"	font: bold 14px;"
                        "\n"
"}\n"
""));
        pushButton_19 = new QPushButton(groupBox_19);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));
        pushButton_19->setGeometry(QRect(690, 430, 171, 41));
        pushButton_19->setFont(font10);
        pushButton_19->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(42, 95, 113, 255),stop:1 rgba(12, 53, 97, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"font: 20px;\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(167, 214, 50, 255),stop:1 rgba(98, 169, 67, 255));\n"
"	color: #fff;\n"
"\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(147, 194, 30, 255),stop:1 rgba(78, 149, 47, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"\n"
"}"));
        cin_24 = new QLabel(groupBox_19);
        cin_24->setObjectName(QString::fromUtf8("cin_24"));
        cin_24->setGeometry(QRect(30, 110, 221, 37));
        cin_24->setFont(font12);
        lineEdit_44 = new QLineEdit(groupBox_19);
        lineEdit_44->setObjectName(QString::fromUtf8("lineEdit_44"));
        lineEdit_44->setGeometry(QRect(290, 50, 571, 41));
        lineEdit_44->setFont(font13);
        lineEdit_44->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        cin_28 = new QLabel(groupBox_19);
        cin_28->setObjectName(QString::fromUtf8("cin_28"));
        cin_28->setGeometry(QRect(30, 50, 221, 37));
        cin_28->setFont(font12);
        dateEdit_2 = new QDateEdit(groupBox_19);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));
        dateEdit_2->setGeometry(QRect(460, 350, 401, 41));
        QFont font21;
        font21.setPointSize(22);
        font21.setBold(false);
        font21.setWeight(50);
        dateEdit_2->setFont(font21);
        dateEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        cin_29 = new QLabel(groupBox_19);
        cin_29->setObjectName(QString::fromUtf8("cin_29"));
        cin_29->setGeometry(QRect(30, 230, 221, 37));
        cin_29->setFont(font12);
        lineEdit_43 = new QLineEdit(groupBox_19);
        lineEdit_43->setObjectName(QString::fromUtf8("lineEdit_43"));
        lineEdit_43->setGeometry(QRect(290, 290, 571, 41));
        lineEdit_43->setFont(font13);
        lineEdit_43->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        lineEdit_40 = new QLineEdit(groupBox_19);
        lineEdit_40->setObjectName(QString::fromUtf8("lineEdit_40"));
        lineEdit_40->setGeometry(QRect(290, 110, 571, 41));
        lineEdit_40->setFont(font13);
        lineEdit_40->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        cin_25 = new QLabel(groupBox_19);
        cin_25->setObjectName(QString::fromUtf8("cin_25"));
        cin_25->setGeometry(QRect(30, 170, 221, 37));
        cin_25->setFont(font12);
        cin_32 = new QLabel(groupBox_19);
        cin_32->setObjectName(QString::fromUtf8("cin_32"));
        cin_32->setGeometry(QRect(30, 350, 221, 37));
        cin_32->setFont(font12);
        lineEdit_41 = new QLineEdit(groupBox_19);
        lineEdit_41->setObjectName(QString::fromUtf8("lineEdit_41"));
        lineEdit_41->setGeometry(QRect(290, 230, 571, 41));
        lineEdit_41->setFont(font13);
        lineEdit_41->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        lineEdit_45 = new QLineEdit(groupBox_19);
        lineEdit_45->setObjectName(QString::fromUtf8("lineEdit_45"));
        lineEdit_45->setGeometry(QRect(290, 170, 571, 41));
        lineEdit_45->setFont(font13);
        lineEdit_45->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        cin_26 = new QLabel(groupBox_19);
        cin_26->setObjectName(QString::fromUtf8("cin_26"));
        cin_26->setGeometry(QRect(30, 290, 221, 37));
        cin_26->setFont(font12);
        stackedWidget_2->addWidget(modifier_2);
        supprimer_3 = new QWidget();
        supprimer_3->setObjectName(QString::fromUtf8("supprimer_3"));
        cin_30 = new QLabel(supprimer_3);
        cin_30->setObjectName(QString::fromUtf8("cin_30"));
        cin_30->setGeometry(QRect(210, 510, 301, 31));
        QFont font22;
        font22.setFamily(QString::fromUtf8("Yu Gothic UI"));
        font22.setPointSize(10);
        font22.setBold(false);
        font22.setWeight(50);
        cin_30->setFont(font22);
        pushButton_21 = new QPushButton(supprimer_3);
        pushButton_21->setObjectName(QString::fromUtf8("pushButton_21"));
        pushButton_21->setGeometry(QRect(730, 510, 151, 41));
        pushButton_21->setFont(font10);
        pushButton_21->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(42, 95, 113, 255),stop:1 rgba(12, 53, 97, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"font: 20px;\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(167, 214, 50, 255),stop:1 rgba(98, 169, 67, 255));\n"
"	color: #fff;\n"
"\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(147, 194, 30, 255),stop:1 rgba(78, 149, 47, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"\n"
"}"));
        label_138 = new QLabel(supprimer_3);
        label_138->setObjectName(QString::fromUtf8("label_138"));
        label_138->setGeometry(QRect(200, 20, 511, 41));
        label_138->setFont(font11);
        tableView_77 = new QTableView(supprimer_3);
        tableView_77->setObjectName(QString::fromUtf8("tableView_77"));
        tableView_77->setGeometry(QRect(20, 160, 861, 341));
        QFont font23;
        font23.setPointSize(20);
        font23.setBold(false);
        font23.setWeight(50);
        tableView_77->setFont(font23);
        tableView_77->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        comboBox_7 = new QComboBox(supprimer_3);
        comboBox_7->setObjectName(QString::fromUtf8("comboBox_7"));
        comboBox_7->setGeometry(QRect(530, 510, 181, 31));
        QFont font24;
        font24.setPointSize(10);
        comboBox_7->setFont(font24);
        comboBox_7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        lineEdit_70 = new QLineEdit(supprimer_3);
        lineEdit_70->setObjectName(QString::fromUtf8("lineEdit_70"));
        lineEdit_70->setGeometry(QRect(20, 100, 281, 41));
        lineEdit_70->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        comboBox_30 = new QComboBox(supprimer_3);
        comboBox_30->addItem(QString());
        comboBox_30->addItem(QString());
        comboBox_30->addItem(QString());
        comboBox_30->setObjectName(QString::fromUtf8("comboBox_30"));
        comboBox_30->setGeometry(QRect(710, 110, 161, 41));
        comboBox_30->setFont(font17);
        comboBox_30->setLayoutDirection(Qt::LeftToRight);
        comboBox_30->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        comboBox_30->setMaxVisibleItems(3);
        comboBox_30->setInsertPolicy(QComboBox::InsertAtTop);
        stackedWidget_2->addWidget(supprimer_3);
        afficher_2 = new QWidget();
        afficher_2->setObjectName(QString::fromUtf8("afficher_2"));
        label_139 = new QLabel(afficher_2);
        label_139->setObjectName(QString::fromUtf8("label_139"));
        label_139->setGeometry(QRect(250, 0, 501, 71));
        label_139->setFont(font11);
        tableView_6 = new QTableView(afficher_2);
        tableView_6->setObjectName(QString::fromUtf8("tableView_6"));
        tableView_6->setGeometry(QRect(30, 140, 851, 391));
        tableView_6->setFont(font16);
        tableView_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        comboBox_29 = new QComboBox(afficher_2);
        comboBox_29->addItem(QString());
        comboBox_29->addItem(QString());
        comboBox_29->addItem(QString());
        comboBox_29->setObjectName(QString::fromUtf8("comboBox_29"));
        comboBox_29->setGeometry(QRect(700, 100, 171, 31));
        comboBox_29->setFont(font17);
        comboBox_29->setLayoutDirection(Qt::LeftToRight);
        comboBox_29->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        comboBox_29->setMaxVisibleItems(3);
        comboBox_29->setInsertPolicy(QComboBox::InsertAtTop);
        lineEdit_69 = new QLineEdit(afficher_2);
        lineEdit_69->setObjectName(QString::fromUtf8("lineEdit_69"));
        lineEdit_69->setGeometry(QRect(30, 100, 221, 31));
        lineEdit_69->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        m_afficher_4 = new QPushButton(afficher_2);
        m_afficher_4->setObjectName(QString::fromUtf8("m_afficher_4"));
        m_afficher_4->setGeometry(QRect(30, 60, 221, 31));
        m_afficher_4->setFont(font15);
        m_afficher_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(42, 95, 113, 255),stop:1 rgba(12, 53, 97, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"font: 15px;\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(167, 214, 50, 255),stop:1 rgba(98, 169, 67, 255));\n"
"	color: #fff;\n"
"\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(147, 194, 30, 255),stop:1 rgba(78, 149, 47, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"\n"
"}"));
        stackedWidget_2->addWidget(afficher_2);
        p_modifier = new QPushButton(ph);
        p_modifier->setObjectName(QString::fromUtf8("p_modifier"));
        p_modifier->setGeometry(QRect(20, 360, 271, 51));
        p_modifier->setFont(font10);
        p_modifier->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(42, 95, 113, 255),stop:1 rgba(12, 53, 97, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"font: 20px;\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(167, 214, 50, 255),stop:1 rgba(98, 169, 67, 255));\n"
"	color: #fff;\n"
"\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(147, 194, 30, 255),stop:1 rgba(78, 149, 47, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"\n"
"}"));
        p_supprimer = new QPushButton(ph);
        p_supprimer->setObjectName(QString::fromUtf8("p_supprimer"));
        p_supprimer->setGeometry(QRect(20, 470, 271, 51));
        p_supprimer->setFont(font10);
        p_supprimer->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(42, 95, 113, 255),stop:1 rgba(12, 53, 97, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"font: 20px;\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(167, 214, 50, 255),stop:1 rgba(98, 169, 67, 255));\n"
"	color: #fff;\n"
"\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(147, 194, 30, 255),stop:1 rgba(78, 149, 47, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"\n"
"}"));
        tabWidget_2->addTab(ph, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        m_afficher_2 = new QPushButton(tab);
        m_afficher_2->setObjectName(QString::fromUtf8("m_afficher_2"));
        m_afficher_2->setGeometry(QRect(10, 190, 271, 51));
        m_afficher_2->setFont(font15);
        m_afficher_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(42, 95, 113, 255),stop:1 rgba(12, 53, 97, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"font: 20px;\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(167, 214, 50, 255),stop:1 rgba(98, 169, 67, 255));\n"
"	color: #fff;\n"
"\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(147, 194, 30, 255),stop:1 rgba(78, 149, 47, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"\n"
"}"));
        m_ajouter_2 = new QPushButton(tab);
        m_ajouter_2->setObjectName(QString::fromUtf8("m_ajouter_2"));
        m_ajouter_2->setGeometry(QRect(10, 290, 271, 41));
        m_ajouter_2->setFont(font15);
        m_ajouter_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(42, 95, 113, 255),stop:1 rgba(12, 53, 97, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"font: 20px;\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(167, 214, 50, 255),stop:1 rgba(98, 169, 67, 255));\n"
"	color: #fff;\n"
"\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(147, 194, 30, 255),stop:1 rgba(78, 149, 47, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"\n"
"}"));
        stackedWidget_3 = new QStackedWidget(tab);
        stackedWidget_3->setObjectName(QString::fromUtf8("stackedWidget_3"));
        stackedWidget_3->setGeometry(QRect(290, 0, 901, 581));
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        label_140 = new QLabel(page_4);
        label_140->setObjectName(QString::fromUtf8("label_140"));
        label_140->setGeometry(QRect(280, -10, 571, 91));
        label_140->setFont(font11);
        label_6 = new QLabel(page_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(370, 310, 211, 21));
        QFont font25;
        font25.setPointSize(14);
        label_6->setFont(font25);
        label_9 = new QLabel(page_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(380, 60, 171, 31));
        label_9->setFont(font25);
        tableView_3 = new QTableView(page_4);
        tableView_3->setObjectName(QString::fromUtf8("tableView_3"));
        tableView_3->setGeometry(QRect(10, 340, 871, 231));
        tableView_3->setFont(font16);
        tableView_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255)"));
        tableView2_3 = new QTableView(page_4);
        tableView2_3->setObjectName(QString::fromUtf8("tableView2_3"));
        tableView2_3->setGeometry(QRect(10, 90, 871, 211));
        tableView2_3->setFont(font16);
        tableView2_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255)"));
        stackedWidget_3->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        tableView2 = new QTableView(page_5);
        tableView2->setObjectName(QString::fromUtf8("tableView2"));
        tableView2->setGeometry(QRect(10, 80, 851, 181));
        tableView2->setFont(font16);
        tableView2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255)"));
        label_141 = new QLabel(page_5);
        label_141->setObjectName(QString::fromUtf8("label_141"));
        label_141->setGeometry(QRect(200, 0, 541, 41));
        label_141->setFont(font11);
        pushButton = new QPushButton(page_5);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(732, 510, 131, 51));
        pushButton->setFont(font10);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(42, 95, 113, 255),stop:1 rgba(12, 53, 97, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"font: 20px;\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(167, 214, 50, 255),stop:1 rgba(98, 169, 67, 255));\n"
"	color: #fff;\n"
"\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(147, 194, 30, 255),stop:1 rgba(78, 149, 47, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"\n"
"}"));
        cin_33 = new QLabel(page_5);
        cin_33->setObjectName(QString::fromUtf8("cin_33"));
        cin_33->setGeometry(QRect(360, 510, 171, 51));
        QFont font26;
        font26.setFamily(QString::fromUtf8("Yu Gothic UI"));
        font26.setPointSize(14);
        font26.setBold(false);
        font26.setWeight(50);
        cin_33->setFont(font26);
        comboBox = new QComboBox(page_5);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(550, 520, 161, 31));
        comboBox->setFont(font25);
        comboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        tableView = new QTableView(page_5);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 310, 851, 191));
        tableView->setFont(font16);
        tableView->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255)"));
        label_5 = new QLabel(page_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(370, 40, 211, 31));
        QFont font27;
        font27.setPointSize(16);
        label_5->setFont(font27);
        label_10 = new QLabel(page_5);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(350, 270, 241, 31));
        label_10->setFont(font27);
        stackedWidget_3->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        cin_34 = new QLabel(page_6);
        cin_34->setObjectName(QString::fromUtf8("cin_34"));
        cin_34->setGeometry(QRect(290, 530, 291, 41));
        cin_34->setFont(font14);
        pushButton_2 = new QPushButton(page_6);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(750, 527, 141, 41));
        pushButton_2->setFont(font10);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(42, 95, 113, 255),stop:1 rgba(12, 53, 97, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"font: 20px;\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(167, 214, 50, 255),stop:1 rgba(98, 169, 67, 255));\n"
"	color: #fff;\n"
"\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(147, 194, 30, 255),stop:1 rgba(78, 149, 47, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"\n"
"}\n"
""));
        comboBox_2 = new QComboBox(page_6);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(590, 530, 141, 41));
        comboBox_2->setFont(font24);
        comboBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color: darkgray;"));
        tableView_2 = new QTableView(page_6);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));
        tableView_2->setGeometry(QRect(20, 310, 871, 201));
        tableView_2->setFont(font16);
        tableView_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255)"));
        tableView2_2 = new QTableView(page_6);
        tableView2_2->setObjectName(QString::fromUtf8("tableView2_2"));
        tableView2_2->setGeometry(QRect(20, 70, 871, 191));
        tableView2_2->setFont(font16);
        tableView2_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255)"));
        label_142 = new QLabel(page_6);
        label_142->setObjectName(QString::fromUtf8("label_142"));
        label_142->setGeometry(QRect(340, 270, 211, 31));
        label_142->setFont(font25);
        label_143 = new QLabel(page_6);
        label_143->setObjectName(QString::fromUtf8("label_143"));
        label_143->setGeometry(QRect(350, 30, 171, 31));
        label_143->setFont(font25);
        label_144 = new QLabel(page_6);
        label_144->setObjectName(QString::fromUtf8("label_144"));
        label_144->setGeometry(QRect(160, 0, 581, 31));
        label_144->setFont(font11);
        stackedWidget_3->addWidget(page_6);
        m_supprimer_2 = new QPushButton(tab);
        m_supprimer_2->setObjectName(QString::fromUtf8("m_supprimer_2"));
        m_supprimer_2->setGeometry(QRect(10, 390, 271, 41));
        m_supprimer_2->setFont(font15);
        m_supprimer_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(42, 95, 113, 255),stop:1 rgba(12, 53, 97, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"font: 20px;\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(167, 214, 50, 255),stop:1 rgba(98, 169, 67, 255));\n"
"	color: #fff;\n"
"\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(147, 194, 30, 255),stop:1 rgba(78, 149, 47, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"\n"
"}"));
        tabWidget_2->addTab(tab, QString());
        Stats = new QWidget();
        Stats->setObjectName(QString::fromUtf8("Stats"));
        widget = new chart(Stats);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(710, 40, 451, 481));
        label_145 = new QLabel(Stats);
        label_145->setObjectName(QString::fromUtf8("label_145"));
        label_145->setGeometry(QRect(0, 30, 551, 41));
        QFont font28;
        font28.setFamily(QString::fromUtf8("Yu Gothic UI"));
        font28.setPointSize(14);
        font28.setBold(true);
        font28.setWeight(75);
        label_145->setFont(font28);
        label_146 = new QLabel(Stats);
        label_146->setObjectName(QString::fromUtf8("label_146"));
        label_146->setGeometry(QRect(560, 30, 31, 31));
        label_146->setStyleSheet(QString::fromUtf8(" background-color: rgb(59,106,122)"));
        label_147 = new QLabel(Stats);
        label_147->setObjectName(QString::fromUtf8("label_147"));
        label_147->setGeometry(QRect(40, 90, 531, 41));
        label_147->setFont(font28);
        label_148 = new QLabel(Stats);
        label_148->setObjectName(QString::fromUtf8("label_148"));
        label_148->setGeometry(QRect(560, 90, 31, 31));
        label_148->setStyleSheet(QString::fromUtf8(" background-color: rgb(109,114,190)"));
        label_149 = new QLabel(Stats);
        label_149->setObjectName(QString::fromUtf8("label_149"));
        label_149->setGeometry(QRect(600, 20, 81, 41));
        QFont font29;
        font29.setPointSize(14);
        font29.setBold(true);
        font29.setWeight(75);
        label_149->setFont(font29);
        label_150 = new QLabel(Stats);
        label_150->setObjectName(QString::fromUtf8("label_150"));
        label_150->setGeometry(QRect(600, 80, 81, 41));
        label_150->setFont(font29);
        tabWidget_2->addTab(Stats, QString());
        stackedMain->addWidget(Clients);
        Voitures = new QWidget();
        Voitures->setObjectName(QString::fromUtf8("Voitures"));
        stackedMain->addWidget(Voitures);
        Employes = new QWidget();
        Employes->setObjectName(QString::fromUtf8("Employes"));
        label_151 = new QLabel(Employes);
        label_151->setObjectName(QString::fromUtf8("label_151"));
        label_151->setGeometry(QRect(521, 20, 931, 91));
        QFont font30;
        font30.setFamily(QString::fromUtf8("Script MT Bold"));
        font30.setPointSize(20);
        font30.setBold(true);
        font30.setWeight(75);
        label_151->setFont(font30);
        label_151->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
""));
        stackedWidgetEmp = new QStackedWidget(Employes);
        stackedWidgetEmp->setObjectName(QString::fromUtf8("stackedWidgetEmp"));
        stackedWidgetEmp->setGeometry(QRect(-80, 100, 1351, 581));
        page_7 = new QWidget();
        page_7->setObjectName(QString::fromUtf8("page_7"));
        comboBoxTriEmp = new QComboBox(page_7);
        comboBoxTriEmp->addItem(QString());
        comboBoxTriEmp->addItem(QString());
        comboBoxTriEmp->addItem(QString());
        comboBoxTriEmp->addItem(QString());
        comboBoxTriEmp->addItem(QString());
        comboBoxTriEmp->addItem(QString());
        comboBoxTriEmp->setObjectName(QString::fromUtf8("comboBoxTriEmp"));
        comboBoxTriEmp->setGeometry(QRect(1170, 1, 101, 31));
        QPalette palette25;
        palette25.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette25.setBrush(QPalette::Active, QPalette::Button, brush9);
        QBrush brush37(QColor(228, 228, 228, 255));
        brush37.setStyle(Qt::SolidPattern);
        palette25.setBrush(QPalette::Active, QPalette::Light, brush37);
        QBrush brush38(QColor(190, 190, 190, 255));
        brush38.setStyle(Qt::SolidPattern);
        palette25.setBrush(QPalette::Active, QPalette::Midlight, brush38);
        QBrush brush39(QColor(76, 76, 76, 255));
        brush39.setStyle(Qt::SolidPattern);
        palette25.setBrush(QPalette::Active, QPalette::Dark, brush39);
        QBrush brush40(QColor(101, 101, 101, 255));
        brush40.setStyle(Qt::SolidPattern);
        palette25.setBrush(QPalette::Active, QPalette::Mid, brush40);
        palette25.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette25.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette25.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette25.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette25.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette25.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        QBrush brush41(QColor(203, 203, 203, 255));
        brush41.setStyle(Qt::SolidPattern);
        palette25.setBrush(QPalette::Active, QPalette::AlternateBase, brush41);
        palette25.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette25.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette25.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette25.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette25.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette25.setBrush(QPalette::Inactive, QPalette::Light, brush37);
        palette25.setBrush(QPalette::Inactive, QPalette::Midlight, brush38);
        palette25.setBrush(QPalette::Inactive, QPalette::Dark, brush39);
        palette25.setBrush(QPalette::Inactive, QPalette::Mid, brush40);
        palette25.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette25.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette25.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette25.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette25.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette25.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush41);
        palette25.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette25.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette25.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette25.setBrush(QPalette::Disabled, QPalette::WindowText, brush39);
        palette25.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette25.setBrush(QPalette::Disabled, QPalette::Light, brush37);
        palette25.setBrush(QPalette::Disabled, QPalette::Midlight, brush38);
        palette25.setBrush(QPalette::Disabled, QPalette::Dark, brush39);
        palette25.setBrush(QPalette::Disabled, QPalette::Mid, brush40);
        palette25.setBrush(QPalette::Disabled, QPalette::Text, brush39);
        palette25.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette25.setBrush(QPalette::Disabled, QPalette::ButtonText, brush39);
        palette25.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette25.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette25.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        QBrush brush42(QColor(152, 152, 152, 255));
        brush42.setStyle(Qt::SolidPattern);
        palette25.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush42);
        palette25.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette25.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette25.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        comboBoxTriEmp->setPalette(palette25);
        comboBoxTriEmp->setLayoutDirection(Qt::LeftToRight);
        comboBoxTriEmp->setStyleSheet(QString::fromUtf8(""));
        comboBoxTriEmp->setMaxVisibleItems(3);
        comboBoxTriEmp->setInsertPolicy(QComboBox::InsertAtTop);
        label_152 = new QLabel(page_7);
        label_152->setObjectName(QString::fromUtf8("label_152"));
        label_152->setGeometry(QRect(820, 380, 47, 14));
        label_152->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        label_153 = new QLabel(page_7);
        label_153->setObjectName(QString::fromUtf8("label_153"));
        label_153->setGeometry(QRect(480, 380, 47, 14));
        label_153->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        label_154 = new QLabel(page_7);
        label_154->setObjectName(QString::fromUtf8("label_154"));
        label_154->setGeometry(QRect(500, 470, 361, 21));
        label_154->setStyleSheet(QString::fromUtf8("font: 12pt \"MS Shell Dlg 2\";\n"
"color: rgb(221, 221, 221);"));
        lineEditSoldeConge = new QLineEdit(page_7);
        lineEditSoldeConge->setObjectName(QString::fromUtf8("lineEditSoldeConge"));
        lineEditSoldeConge->setGeometry(QRect(920, 400, 161, 31));
        lineEditSoldeConge->setStyleSheet(QString::fromUtf8("border-radius:5%;\n"
"background-color: rgb(255, 255, 255);"));
        label_155 = new QLabel(page_7);
        label_155->setObjectName(QString::fromUtf8("label_155"));
        label_155->setGeometry(QRect(330, 380, 47, 14));
        label_155->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        label_156 = new QLabel(page_7);
        label_156->setObjectName(QString::fromUtf8("label_156"));
        label_156->setGeometry(QRect(1110, 380, 111, 16));
        label_156->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        lineEditEmail = new QLineEdit(page_7);
        lineEditEmail->setObjectName(QString::fromUtf8("lineEditEmail"));
        lineEditEmail->setGeometry(QRect(760, 400, 151, 31));
        lineEditEmail->setStyleSheet(QString::fromUtf8("border-radius:5%;\n"
"background-color: rgb(255, 255, 255);"));
        pushButton_AjouterEmp = new QPushButton(page_7);
        pushButton_AjouterEmp->setObjectName(QString::fromUtf8("pushButton_AjouterEmp"));
        pushButton_AjouterEmp->setGeometry(QRect(1250, 380, 71, 21));
        pushButton_AjouterEmp->setStyleSheet(QString::fromUtf8("image: url(:/img/add.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        groupBox_20 = new QGroupBox(page_7);
        groupBox_20->setObjectName(QString::fromUtf8("groupBox_20"));
        groupBox_20->setGeometry(QRect(90, 360, 1161, 91));
        groupBox_20->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"MS Shell Dlg 2\";"));
        label_160 = new QLabel(groupBox_20);
        label_160->setObjectName(QString::fromUtf8("label_160"));
        label_160->setGeometry(QRect(230, 20, 47, 14));
        label_160->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        label_161 = new QLabel(groupBox_20);
        label_161->setObjectName(QString::fromUtf8("label_161"));
        label_161->setGeometry(QRect(390, 20, 47, 14));
        label_161->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        label_162 = new QLabel(groupBox_20);
        label_162->setObjectName(QString::fromUtf8("label_162"));
        label_162->setGeometry(QRect(680, 20, 141, 20));
        label_162->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        label_163 = new QLabel(groupBox_20);
        label_163->setObjectName(QString::fromUtf8("label_163"));
        label_163->setGeometry(QRect(1010, 20, 111, 16));
        label_163->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        dateNaissEdit = new QDateEdit(page_7);
        dateNaissEdit->setObjectName(QString::fromUtf8("dateNaissEdit"));
        dateNaissEdit->setGeometry(QRect(1090, 400, 151, 31));
        dateNaissEdit->setStyleSheet(QString::fromUtf8(""));
        dateNaissEdit->setDateTime(QDateTime(QDate(2020, 4, 30), QTime(0, 0, 0)));
        pushButton_ModifierEmp = new QPushButton(page_7);
        pushButton_ModifierEmp->setObjectName(QString::fromUtf8("pushButton_ModifierEmp"));
        pushButton_ModifierEmp->setGeometry(QRect(1260, 410, 51, 21));
        pushButton_ModifierEmp->setStyleSheet(QString::fromUtf8("image: url(:/img/edit.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        tableViewEmp = new QTableView(page_7);
        tableViewEmp->setObjectName(QString::fromUtf8("tableViewEmp"));
        tableViewEmp->setGeometry(QRect(90, 40, 1191, 311));
        tableViewEmp->setMaximumSize(QSize(16777215, 16777215));
        tableViewEmp->setAutoFillBackground(false);
        tableViewEmp->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"alternate-background-color: rgb(32, 189, 171);\n"
"border-radius:5%;"));
        tableViewEmp->setAlternatingRowColors(true);
        tableViewEmp->horizontalHeader()->setCascadingSectionResizes(false);
        tableViewEmp->horizontalHeader()->setDefaultSectionSize(134);
        lineEditNom = new QLineEdit(page_7);
        lineEditNom->setObjectName(QString::fromUtf8("lineEditNom"));
        lineEditNom->setGeometry(QRect(270, 400, 151, 31));
        lineEditNom->setStyleSheet(QString::fromUtf8("border-radius:5%;\n"
"background-color: rgb(255, 255, 255);"));
        pushButtonModifierEmp = new QPushButton(page_7);
        pushButtonModifierEmp->setObjectName(QString::fromUtf8("pushButtonModifierEmp"));
        pushButtonModifierEmp->setGeometry(QRect(640, 500, 31, 23));
        pushButtonModifierEmp->setStyleSheet(QString::fromUtf8("image: url(:/img/edit.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        lineEditPrenom = new QLineEdit(page_7);
        lineEditPrenom->setObjectName(QString::fromUtf8("lineEditPrenom"));
        lineEditPrenom->setGeometry(QRect(430, 400, 161, 31));
        lineEditPrenom->setStyleSheet(QString::fromUtf8("border-radius:5%;\n"
"background-color: rgb(255, 255, 255);"));
        lineEditNumTel = new QLineEdit(page_7);
        lineEditNumTel->setObjectName(QString::fromUtf8("lineEditNumTel"));
        lineEditNumTel->setGeometry(QRect(600, 400, 151, 31));
        lineEditNumTel->setStyleSheet(QString::fromUtf8("border-radius:5%;\n"
"background-color: rgb(255, 255, 255);"));
        pushButtonSupprimerEmp = new QPushButton(page_7);
        pushButtonSupprimerEmp->setObjectName(QString::fromUtf8("pushButtonSupprimerEmp"));
        pushButtonSupprimerEmp->setGeometry(QRect(700, 500, 31, 23));
        pushButtonSupprimerEmp->setStyleSheet(QString::fromUtf8("image: url(:/img/delete.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        label_157 = new QLabel(page_7);
        label_157->setObjectName(QString::fromUtf8("label_157"));
        label_157->setGeometry(QRect(960, 380, 111, 16));
        label_157->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        lineEditRechercherEmp = new QLineEdit(page_7);
        lineEditRechercherEmp->setObjectName(QString::fromUtf8("lineEditRechercherEmp"));
        lineEditRechercherEmp->setGeometry(QRect(100, -1, 161, 31));
        lineEditRechercherEmp->setStyleSheet(QString::fromUtf8("border-radius:5%;\n"
"background-color: rgb(255, 255, 255);"));
        lineEditID = new QLineEdit(page_7);
        lineEditID->setObjectName(QString::fromUtf8("lineEditID"));
        lineEditID->setGeometry(QRect(170, 400, 91, 31));
        lineEditID->setStyleSheet(QString::fromUtf8("border-radius:5%;\n"
"background-color: rgb(203, 203, 203);\n"
"\n"
""));
        lineEditID->setReadOnly(true);
        label_158 = new QLabel(page_7);
        label_158->setObjectName(QString::fromUtf8("label_158"));
        label_158->setGeometry(QRect(210, 380, 21, 16));
        label_158->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        majSoldeConge = new QPushButton(page_7);
        majSoldeConge->setObjectName(QString::fromUtf8("majSoldeConge"));
        majSoldeConge->setGeometry(QRect(1130, 0, 31, 31));
        majSoldeConge->setStyleSheet(QString::fromUtf8("image: url(:/img/refresh.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        label_159 = new QLabel(page_7);
        label_159->setObjectName(QString::fromUtf8("label_159"));
        label_159->setGeometry(QRect(610, 380, 141, 20));
        label_159->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        stat1 = new QPushButton(page_7);
        stat1->setObjectName(QString::fromUtf8("stat1"));
        stat1->setGeometry(QRect(1090, 0, 31, 31));
        stat1->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border-image: url(:/img/stat.png);"));
        stackedWidgetEmp->addWidget(page_7);
        label_152->raise();
        label_153->raise();
        label_154->raise();
        label_155->raise();
        label_156->raise();
        groupBox_20->raise();
        label_157->raise();
        label_158->raise();
        label_159->raise();
        comboBoxTriEmp->raise();
        pushButton_AjouterEmp->raise();
        pushButton_ModifierEmp->raise();
        tableViewEmp->raise();
        pushButtonModifierEmp->raise();
        pushButtonSupprimerEmp->raise();
        lineEditRechercherEmp->raise();
        majSoldeConge->raise();
        lineEditSoldeConge->raise();
        lineEditNom->raise();
        lineEditID->raise();
        lineEditEmail->raise();
        lineEditPrenom->raise();
        lineEditNumTel->raise();
        dateNaissEdit->raise();
        stat1->raise();
        page_8 = new QWidget();
        page_8->setObjectName(QString::fromUtf8("page_8"));
        statBox = new QGroupBox(page_8);
        statBox->setObjectName(QString::fromUtf8("statBox"));
        statBox->setGeometry(QRect(490, 0, 471, 451));
        returnEmp = new QPushButton(page_8);
        returnEmp->setObjectName(QString::fromUtf8("returnEmp"));
        returnEmp->setGeometry(QRect(50, 0, 31, 31));
        returnEmp->setStyleSheet(QString::fromUtf8("border-image: url(\":/img/return.png\");\n"
"backgroung-color: transparent;"));
        stackedWidgetEmp->addWidget(page_8);
        stackedMain->addWidget(Employes);
        Ordinateurs = new QWidget();
        Ordinateurs->setObjectName(QString::fromUtf8("Ordinateurs"));
        stackedMain->addWidget(Ordinateurs);
        Offres = new QWidget();
        Offres->setObjectName(QString::fromUtf8("Offres"));
        stackedMain->addWidget(Offres);
        page_10 = new QWidget();
        page_10->setObjectName(QString::fromUtf8("page_10"));
        stackedMain->addWidget(page_10);
        Events = new QWidget();
        Events->setObjectName(QString::fromUtf8("Events"));
        stackedMain->addWidget(Events);
        page_9 = new QWidget();
        page_9->setObjectName(QString::fromUtf8("page_9"));
        groupBox_22 = new QGroupBox(page_9);
        groupBox_22->setObjectName(QString::fromUtf8("groupBox_22"));
        groupBox_22->setGeometry(QRect(19, 440, 1181, 80));
        groupBox_22->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"MS Shell Dlg 2\";"));
        pushButton_3 = new QPushButton(page_9);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(500, 0, 821, 41));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(27, 153, 139);\n"
"text-decoration: underline;\n"
"font: 8pt \"MS Shell Dlg 2\";\n"
"font: 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);\n"
"border: none;\n"
"background-repeat: none;"));
        label_176 = new QLabel(page_9);
        label_176->setObjectName(QString::fromUtf8("label_176"));
        label_176->setGeometry(QRect(280, 460, 81, 16));
        label_176->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"MS Shell Dlg 2\";"));
        label_177 = new QLabel(page_9);
        label_177->setObjectName(QString::fromUtf8("label_177"));
        label_177->setGeometry(QRect(780, 460, 171, 20));
        label_177->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"MS Shell Dlg 2\";"));
        pushButton_ModifierCompte = new QPushButton(page_9);
        pushButton_ModifierCompte->setObjectName(QString::fromUtf8("pushButton_ModifierCompte"));
        pushButton_ModifierCompte->setGeometry(QRect(1180, 490, 71, 21));
        pushButton_ModifierCompte->setStyleSheet(QString::fromUtf8("\n"
"\n"
"image: url(:/img/edit.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
""));
        lineEditRechercherCompte = new QLineEdit(page_9);
        lineEditRechercherCompte->setObjectName(QString::fromUtf8("lineEditRechercherCompte"));
        lineEditRechercherCompte->setGeometry(QRect(20, 80, 161, 31));
        lineEditRechercherCompte->setStyleSheet(QString::fromUtf8("border-radius: 5%;\n"
"background-color: rgb(255, 255, 255);"));
        deleteCompte = new QPushButton(page_9);
        deleteCompte->setObjectName(QString::fromUtf8("deleteCompte"));
        deleteCompte->setGeometry(QRect(640, 560, 31, 23));
        deleteCompte->setStyleSheet(QString::fromUtf8("image: url(:/img/delete.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        comboBoxTriCompte = new QComboBox(page_9);
        comboBoxTriCompte->addItem(QString());
        comboBoxTriCompte->addItem(QString());
        comboBoxTriCompte->setObjectName(QString::fromUtf8("comboBoxTriCompte"));
        comboBoxTriCompte->setGeometry(QRect(1110, 80, 101, 31));
        QPalette palette26;
        QBrush brush43(QColor(70, 70, 70, 255));
        brush43.setStyle(Qt::SolidPattern);
        palette26.setBrush(QPalette::Active, QPalette::WindowText, brush43);
        palette26.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette26.setBrush(QPalette::Active, QPalette::Text, brush43);
        palette26.setBrush(QPalette::Active, QPalette::ButtonText, brush43);
        palette26.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette26.setBrush(QPalette::Active, QPalette::Window, brush9);
        QBrush brush44(QColor(70, 70, 70, 128));
        brush44.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette26.setBrush(QPalette::Active, QPalette::PlaceholderText, brush44);
#endif
        palette26.setBrush(QPalette::Inactive, QPalette::WindowText, brush43);
        palette26.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette26.setBrush(QPalette::Inactive, QPalette::Text, brush43);
        palette26.setBrush(QPalette::Inactive, QPalette::ButtonText, brush43);
        palette26.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette26.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        QBrush brush45(QColor(70, 70, 70, 128));
        brush45.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette26.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush45);
#endif
        palette26.setBrush(QPalette::Disabled, QPalette::WindowText, brush43);
        palette26.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette26.setBrush(QPalette::Disabled, QPalette::Text, brush43);
        palette26.setBrush(QPalette::Disabled, QPalette::ButtonText, brush43);
        palette26.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette26.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        QBrush brush46(QColor(70, 70, 70, 128));
        brush46.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette26.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush46);
#endif
        comboBoxTriCompte->setPalette(palette26);
        QFont font31;
        font31.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font31.setPointSize(8);
        font31.setBold(false);
        font31.setItalic(false);
        font31.setWeight(50);
        font31.setKerning(true);
        font31.setStyleStrategy(QFont::PreferDefault);
        comboBoxTriCompte->setFont(font31);
        comboBoxTriCompte->setFocusPolicy(Qt::WheelFocus);
        comboBoxTriCompte->setAutoFillBackground(false);
        comboBoxTriCompte->setStyleSheet(QString::fromUtf8("color:rgb(70, 70, 70);\n"
"font: 8pt \"MS Shell Dlg 2\";\n"
"\n"
""));
        comboBoxTriCompte->setFrame(true);
        label_178 = new QLabel(page_9);
        label_178->setObjectName(QString::fromUtf8("label_178"));
        label_178->setGeometry(QRect(470, 460, 61, 20));
        label_178->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"MS Shell Dlg 2\";"));
        pushButton_AjouterCompte = new QPushButton(page_9);
        pushButton_AjouterCompte->setObjectName(QString::fromUtf8("pushButton_AjouterCompte"));
        pushButton_AjouterCompte->setGeometry(QRect(1180, 460, 71, 21));
        pushButton_AjouterCompte->setStyleSheet(QString::fromUtf8("\n"
"\n"
"image: url(:/img/add.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
""));
        tableViewCompte = new QTableView(page_9);
        tableViewCompte->setObjectName(QString::fromUtf8("tableViewCompte"));
        tableViewCompte->setGeometry(QRect(10, 120, 1211, 321));
        tableViewCompte->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:5%;\n"
"alternate-background-color: rgb(32, 189, 171);"));
        tableViewCompte->setAlternatingRowColors(true);
        tableViewCompte->horizontalHeader()->setDefaultSectionSize(170);
        label_179 = new QLabel(page_9);
        label_179->setObjectName(QString::fromUtf8("label_179"));
        label_179->setGeometry(QRect(150, 460, 47, 16));
        label_179->setAutoFillBackground(false);
        label_179->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"MS Shell Dlg 2\";"));
        label_180 = new QLabel(page_9);
        label_180->setObjectName(QString::fromUtf8("label_180"));
        label_180->setGeometry(QRect(440, 530, 361, 21));
        label_180->setAutoFillBackground(false);
        label_180->setStyleSheet(QString::fromUtf8("font: 12pt \"MS Shell Dlg 2\";\n"
"color: rgb(221, 221, 221);"));
        lineEdittLogin = new QLineEdit(page_9);
        lineEdittLogin->setObjectName(QString::fromUtf8("lineEdittLogin"));
        lineEdittLogin->setGeometry(QRect(410, 480, 171, 31));
        lineEdittLogin->setStyleSheet(QString::fromUtf8("border-radius: 5%;\n"
"background-color: rgb(255, 255, 255);"));
        label_181 = new QLabel(page_9);
        label_181->setObjectName(QString::fromUtf8("label_181"));
        label_181->setGeometry(QRect(630, 460, 121, 20));
        label_181->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"MS Shell Dlg 2\";"));
        comboBoxIdEmpCompte = new QComboBox(page_9);
        comboBoxIdEmpCompte->setObjectName(QString::fromUtf8("comboBoxIdEmpCompte"));
        comboBoxIdEmpCompte->setGeometry(QRect(230, 480, 171, 31));
        QPalette palette27;
        palette27.setBrush(QPalette::Active, QPalette::WindowText, brush43);
        palette27.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette27.setBrush(QPalette::Active, QPalette::Text, brush43);
        palette27.setBrush(QPalette::Active, QPalette::ButtonText, brush43);
        palette27.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette27.setBrush(QPalette::Active, QPalette::Window, brush9);
        QBrush brush47(QColor(70, 70, 70, 128));
        brush47.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette27.setBrush(QPalette::Active, QPalette::PlaceholderText, brush47);
#endif
        palette27.setBrush(QPalette::Inactive, QPalette::WindowText, brush43);
        palette27.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette27.setBrush(QPalette::Inactive, QPalette::Text, brush43);
        palette27.setBrush(QPalette::Inactive, QPalette::ButtonText, brush43);
        palette27.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette27.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        QBrush brush48(QColor(70, 70, 70, 128));
        brush48.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette27.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush48);
#endif
        palette27.setBrush(QPalette::Disabled, QPalette::WindowText, brush43);
        palette27.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette27.setBrush(QPalette::Disabled, QPalette::Text, brush43);
        palette27.setBrush(QPalette::Disabled, QPalette::ButtonText, brush43);
        palette27.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette27.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        QBrush brush49(QColor(70, 70, 70, 128));
        brush49.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette27.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush49);
#endif
        comboBoxIdEmpCompte->setPalette(palette27);
        comboBoxIdEmpCompte->setFont(font31);
        comboBoxIdEmpCompte->setFocusPolicy(Qt::WheelFocus);
        comboBoxIdEmpCompte->setAutoFillBackground(false);
        comboBoxIdEmpCompte->setStyleSheet(QString::fromUtf8("color:rgb(70, 70, 70);\n"
"font: 8pt \"MS Shell Dlg 2\";\n"
"\n"
""));
        comboBoxIdEmpCompte->setFrame(true);
        lineEditIDC = new QLineEdit(page_9);
        lineEditIDC->setObjectName(QString::fromUtf8("lineEditIDC"));
        lineEditIDC->setGeometry(QRect(110, 480, 111, 31));
        lineEditIDC->setStyleSheet(QString::fromUtf8("border-radius: 5%;\n"
"background-color: rgb(203, 203, 203);"));
        lineEditIDC->setReadOnly(true);
        pushButton_modifierEmploye = new QPushButton(page_9);
        pushButton_modifierEmploye->setObjectName(QString::fromUtf8("pushButton_modifierEmploye"));
        pushButton_modifierEmploye->setGeometry(QRect(580, 560, 31, 23));
        pushButton_modifierEmploye->setStyleSheet(QString::fromUtf8("image: url(:/img/edit.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        comboBoxRole = new QComboBox(page_9);
        comboBoxRole->addItem(QString());
        comboBoxRole->addItem(QString());
        comboBoxRole->addItem(QString());
        comboBoxRole->addItem(QString());
        comboBoxRole->addItem(QString());
        comboBoxRole->setObjectName(QString::fromUtf8("comboBoxRole"));
        comboBoxRole->setGeometry(QRect(950, 480, 171, 31));
        QPalette palette28;
        palette28.setBrush(QPalette::Active, QPalette::WindowText, brush43);
        palette28.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette28.setBrush(QPalette::Active, QPalette::Text, brush43);
        palette28.setBrush(QPalette::Active, QPalette::ButtonText, brush43);
        palette28.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette28.setBrush(QPalette::Active, QPalette::Window, brush9);
        QBrush brush50(QColor(70, 70, 70, 128));
        brush50.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette28.setBrush(QPalette::Active, QPalette::PlaceholderText, brush50);
#endif
        palette28.setBrush(QPalette::Inactive, QPalette::WindowText, brush43);
        palette28.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette28.setBrush(QPalette::Inactive, QPalette::Text, brush43);
        palette28.setBrush(QPalette::Inactive, QPalette::ButtonText, brush43);
        palette28.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette28.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        QBrush brush51(QColor(70, 70, 70, 128));
        brush51.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette28.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush51);
#endif
        palette28.setBrush(QPalette::Disabled, QPalette::WindowText, brush43);
        palette28.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette28.setBrush(QPalette::Disabled, QPalette::Text, brush43);
        palette28.setBrush(QPalette::Disabled, QPalette::ButtonText, brush43);
        palette28.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette28.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        QBrush brush52(QColor(70, 70, 70, 128));
        brush52.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette28.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush52);
#endif
        comboBoxRole->setPalette(palette28);
        comboBoxRole->setFont(font31);
        comboBoxRole->setFocusPolicy(Qt::WheelFocus);
        comboBoxRole->setAutoFillBackground(false);
        comboBoxRole->setStyleSheet(QString::fromUtf8("color:rgb(70, 70, 70);\n"
"font: 8pt \"MS Shell Dlg 2\";\n"
"\n"
""));
        comboBoxRole->setFrame(true);
        label_182 = new QLabel(page_9);
        label_182->setObjectName(QString::fromUtf8("label_182"));
        label_182->setGeometry(QRect(530, 10, 221, 91));
        label_182->setFont(font30);
        label_182->setMouseTracking(false);
        label_182->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_182->setMargin(0);
        lineEditMDP = new QLineEdit(page_9);
        lineEditMDP->setObjectName(QString::fromUtf8("lineEditMDP"));
        lineEditMDP->setGeometry(QRect(590, 480, 171, 31));
        lineEditMDP->setStyleSheet(QString::fromUtf8("border-radius: 5%;\n"
"background-color: rgb(255, 255, 255);"));
        label_183 = new QLabel(page_9);
        label_183->setObjectName(QString::fromUtf8("label_183"));
        label_183->setGeometry(QRect(1010, 460, 51, 16));
        label_183->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"MS Shell Dlg 2\";"));
        lineEditMDP2 = new QLineEdit(page_9);
        lineEditMDP2->setObjectName(QString::fromUtf8("lineEditMDP2"));
        lineEditMDP2->setGeometry(QRect(770, 480, 171, 31));
        lineEditMDP2->setStyleSheet(QString::fromUtf8("border-radius: 5%;\n"
"background-color: rgb(255, 255, 255);"));
        stackedMain->addWidget(page_9);
        Cartes = new QWidget();
        Cartes->setObjectName(QString::fromUtf8("Cartes"));
        calendarWidget = new QCalendarWidget(Cartes);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(990, 170, 231, 201));
        calendarWidget->setStyleSheet(QString::fromUtf8("selection-color: rgb(27, 136, 155);\n"
"background-color: rgb(255, 255, 255);\n"
"color:rgb(27, 153, 139);\n"
"font-size:10px;\n"
""));
        GestionCongeRH = new QPushButton(Cartes);
        GestionCongeRH->setObjectName(QString::fromUtf8("GestionCongeRH"));
        GestionCongeRH->setGeometry(QRect(70, 30, 61, 31));
        GestionCongeRH->setStyleSheet(QString::fromUtf8("image: url(:/img/list2.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        GestionCongeEmp = new QPushButton(Cartes);
        GestionCongeEmp->setObjectName(QString::fromUtf8("GestionCongeEmp"));
        GestionCongeEmp->setGeometry(QRect(10, 30, 71, 31));
        GestionCongeEmp->setStyleSheet(QString::fromUtf8("image: url(:/img/list.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        label_164 = new QLabel(Cartes);
        label_164->setObjectName(QString::fromUtf8("label_164"));
        label_164->setGeometry(QRect(560, -10, 211, 101));
        label_164->setFont(font30);
        label_164->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        label_165 = new QLabel(Cartes);
        label_165->setObjectName(QString::fromUtf8("label_165"));
        label_165->setGeometry(QRect(1070, 140, 101, 16));
        label_165->setStyleSheet(QString::fromUtf8("font: 12pt \"MS Shell Dlg 2\";\n"
"color:rgb(227, 227, 227)"));
        stackedWidgetConge = new QStackedWidget(Cartes);
        stackedWidgetConge->setObjectName(QString::fromUtf8("stackedWidgetConge"));
        stackedWidgetConge->setGeometry(QRect(20, 80, 971, 431));
        QPalette palette29;
        palette29.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette29.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette29.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette29.setBrush(QPalette::Active, QPalette::Window, brush9);
        QBrush brush53(QColor(0, 0, 0, 128));
        brush53.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette29.setBrush(QPalette::Active, QPalette::PlaceholderText, brush53);
#endif
        palette29.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette29.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette29.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette29.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        QBrush brush54(QColor(0, 0, 0, 128));
        brush54.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette29.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush54);
#endif
        palette29.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette29.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette29.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette29.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        QBrush brush55(QColor(0, 0, 0, 128));
        brush55.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette29.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush55);
#endif
        stackedWidgetConge->setPalette(palette29);
        stackedWidgetConge->setAutoFillBackground(false);
        stackedWidget_2Page1 = new QWidget();
        stackedWidget_2Page1->setObjectName(QString::fromUtf8("stackedWidget_2Page1"));
        tableViewCongeEmp = new QTableView(stackedWidget_2Page1);
        tableViewCongeEmp->setObjectName(QString::fromUtf8("tableViewCongeEmp"));
        tableViewCongeEmp->setGeometry(QRect(0, 60, 671, 271));
        tableViewCongeEmp->setStyleSheet(QString::fromUtf8("border-radius: 5% ;\n"
"background-color: rgb(255, 255, 255);\n"
"alternate-background-color: rgb(32, 189, 171);"));
        tableViewCongeEmp->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableViewCongeEmp->setAlternatingRowColors(true);
        tableViewCongeEmp->horizontalHeader()->setCascadingSectionResizes(true);
        tableViewCongeEmp->horizontalHeader()->setMinimumSectionSize(10);
        tableViewCongeEmp->horizontalHeader()->setDefaultSectionSize(120);
        label_166 = new QLabel(stackedWidget_2Page1);
        label_166->setObjectName(QString::fromUtf8("label_166"));
        label_166->setGeometry(QRect(670, 360, 361, 21));
        label_166->setAutoFillBackground(false);
        label_166->setStyleSheet(QString::fromUtf8("font: 12pt \"MS Shell Dlg 2\";\n"
"color: rgb(221, 221, 221);"));
        heart = new QLabel(stackedWidget_2Page1);
        heart->setObjectName(QString::fromUtf8("heart"));
        heart->setGeometry(QRect(850, 370, 31, 31));
        label_167 = new QLabel(stackedWidget_2Page1);
        label_167->setObjectName(QString::fromUtf8("label_167"));
        label_167->setGeometry(QRect(670, 390, 131, 21));
        label_167->setAutoFillBackground(false);
        label_167->setStyleSheet(QString::fromUtf8("font: 12pt \"MS Shell Dlg 2\";\n"
"color: rgb(221, 221, 221);"));
        groupBox_21 = new QGroupBox(stackedWidget_2Page1);
        groupBox_21->setObjectName(QString::fromUtf8("groupBox_21"));
        groupBox_21->setGeometry(QRect(680, 50, 251, 291));
        groupBox_21->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"MS Shell Dlg 2\";"));
        dateFinEdit = new QDateEdit(groupBox_21);
        dateFinEdit->setObjectName(QString::fromUtf8("dateFinEdit"));
        dateFinEdit->setGeometry(QRect(110, 190, 121, 31));
        dateFinEdit->setAutoFillBackground(false);
        dateFinEdit->setStyleSheet(QString::fromUtf8("color:rgb(70, 70, 70);\n"
"font: 8pt \"MS Shell Dlg 2\";\n"
"\n"
""));
        editConge = new QPushButton(groupBox_21);
        editConge->setObjectName(QString::fromUtf8("editConge"));
        editConge->setGeometry(QRect(200, 260, 21, 31));
        editConge->setStyleSheet(QString::fromUtf8("image: url(:/img/edit.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        label_168 = new QLabel(groupBox_21);
        label_168->setObjectName(QString::fromUtf8("label_168"));
        label_168->setGeometry(QRect(10, 220, 91, 31));
        label_168->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        label_169 = new QLabel(groupBox_21);
        label_169->setObjectName(QString::fromUtf8("label_169"));
        label_169->setGeometry(QRect(10, 180, 91, 31));
        label_169->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        label_170 = new QLabel(groupBox_21);
        label_170->setObjectName(QString::fromUtf8("label_170"));
        label_170->setGeometry(QRect(10, 100, 71, 31));
        label_170->setStyleSheet(QString::fromUtf8("font: 11pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        comboBoxMotif = new QComboBox(groupBox_21);
        comboBoxMotif->addItem(QString());
        comboBoxMotif->addItem(QString());
        comboBoxMotif->addItem(QString());
        comboBoxMotif->addItem(QString());
        comboBoxMotif->addItem(QString());
        comboBoxMotif->addItem(QString());
        comboBoxMotif->addItem(QString());
        comboBoxMotif->addItem(QString());
        comboBoxMotif->addItem(QString());
        comboBoxMotif->setObjectName(QString::fromUtf8("comboBoxMotif"));
        comboBoxMotif->setGeometry(QRect(110, 110, 121, 31));
        QPalette palette30;
        palette30.setBrush(QPalette::Active, QPalette::WindowText, brush43);
        palette30.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette30.setBrush(QPalette::Active, QPalette::Text, brush43);
        palette30.setBrush(QPalette::Active, QPalette::ButtonText, brush43);
        palette30.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette30.setBrush(QPalette::Active, QPalette::Window, brush9);
        QBrush brush56(QColor(70, 70, 70, 128));
        brush56.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette30.setBrush(QPalette::Active, QPalette::PlaceholderText, brush56);
#endif
        palette30.setBrush(QPalette::Inactive, QPalette::WindowText, brush43);
        palette30.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette30.setBrush(QPalette::Inactive, QPalette::Text, brush43);
        palette30.setBrush(QPalette::Inactive, QPalette::ButtonText, brush43);
        palette30.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette30.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        QBrush brush57(QColor(70, 70, 70, 128));
        brush57.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette30.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush57);
#endif
        palette30.setBrush(QPalette::Disabled, QPalette::WindowText, brush43);
        palette30.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette30.setBrush(QPalette::Disabled, QPalette::Text, brush43);
        palette30.setBrush(QPalette::Disabled, QPalette::ButtonText, brush43);
        palette30.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette30.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        QBrush brush58(QColor(70, 70, 70, 128));
        brush58.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette30.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush58);
#endif
        comboBoxMotif->setPalette(palette30);
        comboBoxMotif->setFont(font31);
        comboBoxMotif->setFocusPolicy(Qt::WheelFocus);
        comboBoxMotif->setAutoFillBackground(false);
        comboBoxMotif->setStyleSheet(QString::fromUtf8("color:rgb(70, 70, 70);\n"
"font: 8pt \"MS Shell Dlg 2\";\n"
"\n"
""));
        comboBoxMotif->setFrame(true);
        comboBoxIdEmpConge = new QComboBox(groupBox_21);
        comboBoxIdEmpConge->setObjectName(QString::fromUtf8("comboBoxIdEmpConge"));
        comboBoxIdEmpConge->setGeometry(QRect(110, 70, 121, 31));
        QPalette palette31;
        palette31.setBrush(QPalette::Active, QPalette::WindowText, brush43);
        palette31.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette31.setBrush(QPalette::Active, QPalette::Text, brush43);
        palette31.setBrush(QPalette::Active, QPalette::ButtonText, brush43);
        palette31.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette31.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette31.setBrush(QPalette::Active, QPalette::HighlightedText, brush6);
        QBrush brush59(QColor(70, 70, 70, 128));
        brush59.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette31.setBrush(QPalette::Active, QPalette::PlaceholderText, brush59);
#endif
        palette31.setBrush(QPalette::Inactive, QPalette::WindowText, brush43);
        palette31.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette31.setBrush(QPalette::Inactive, QPalette::Text, brush43);
        palette31.setBrush(QPalette::Inactive, QPalette::ButtonText, brush43);
        palette31.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette31.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette31.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush6);
        QBrush brush60(QColor(70, 70, 70, 128));
        brush60.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette31.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush60);
#endif
        palette31.setBrush(QPalette::Disabled, QPalette::WindowText, brush43);
        palette31.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette31.setBrush(QPalette::Disabled, QPalette::Text, brush43);
        palette31.setBrush(QPalette::Disabled, QPalette::ButtonText, brush43);
        palette31.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette31.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette31.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush6);
        QBrush brush61(QColor(70, 70, 70, 128));
        brush61.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette31.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush61);
#endif
        comboBoxIdEmpConge->setPalette(palette31);
        comboBoxIdEmpConge->setFont(font31);
        comboBoxIdEmpConge->setFocusPolicy(Qt::WheelFocus);
        comboBoxIdEmpConge->setAutoFillBackground(false);
        comboBoxIdEmpConge->setStyleSheet(QString::fromUtf8("color:rgb(70, 70, 70);\n"
"font: 8pt \"MS Shell Dlg 2\";\n"
"selection-color: rgb(0, 0, 0);\n"
"\n"
""));
        comboBoxIdEmpConge->setFrame(true);
        buttonEnvoyerDemande = new QPushButton(groupBox_21);
        buttonEnvoyerDemande->setObjectName(QString::fromUtf8("buttonEnvoyerDemande"));
        buttonEnvoyerDemande->setGeometry(QRect(170, 260, 21, 31));
        buttonEnvoyerDemande->setStyleSheet(QString::fromUtf8("image: url(:/img/add.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        dateRetourEdit = new QDateEdit(groupBox_21);
        dateRetourEdit->setObjectName(QString::fromUtf8("dateRetourEdit"));
        dateRetourEdit->setGeometry(QRect(110, 230, 121, 31));
        dateRetourEdit->setAutoFillBackground(false);
        dateRetourEdit->setStyleSheet(QString::fromUtf8("color:rgb(70, 70, 70);\n"
"font: 8pt \"MS Shell Dlg 2\";\n"
"\n"
""));
        label_171 = new QLabel(groupBox_21);
        label_171->setObjectName(QString::fromUtf8("label_171"));
        label_171->setGeometry(QRect(10, 60, 71, 31));
        label_171->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        label_172 = new QLabel(groupBox_21);
        label_172->setObjectName(QString::fromUtf8("label_172"));
        label_172->setGeometry(QRect(10, 140, 81, 31));
        label_172->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        datDebuteEdit = new QDateEdit(groupBox_21);
        datDebuteEdit->setObjectName(QString::fromUtf8("datDebuteEdit"));
        datDebuteEdit->setGeometry(QRect(110, 150, 121, 31));
        datDebuteEdit->setAutoFillBackground(false);
        datDebuteEdit->setStyleSheet(QString::fromUtf8("color:rgb(70, 70, 70);\n"
"font: 8pt \"MS Shell Dlg 2\";\n"
"\n"
""));
        label_173 = new QLabel(groupBox_21);
        label_173->setObjectName(QString::fromUtf8("label_173"));
        label_173->setGeometry(QRect(10, 30, 71, 16));
        label_173->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        IDConge = new QLineEdit(groupBox_21);
        IDConge->setObjectName(QString::fromUtf8("IDConge"));
        IDConge->setGeometry(QRect(110, 30, 121, 31));
        IDConge->setStyleSheet(QString::fromUtf8("border-radius:5%;\n"
"background-color: rgb(203, 203, 203);\n"
"\n"
""));
        IDConge->setReadOnly(true);
        modifierConge = new QPushButton(stackedWidget_2Page1);
        modifierConge->setObjectName(QString::fromUtf8("modifierConge"));
        modifierConge->setGeometry(QRect(280, 370, 21, 31));
        modifierConge->setStyleSheet(QString::fromUtf8("image: url(:/img/edit.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        label_174 = new QLabel(stackedWidget_2Page1);
        label_174->setObjectName(QString::fromUtf8("label_174"));
        label_174->setGeometry(QRect(150, 340, 361, 21));
        label_174->setStyleSheet(QString::fromUtf8("font: 12pt \"MS Shell Dlg 2\";\n"
"color: rgb(221, 221, 221);"));
        deleteConge = new QPushButton(stackedWidget_2Page1);
        deleteConge->setObjectName(QString::fromUtf8("deleteConge"));
        deleteConge->setGeometry(QRect(320, 370, 21, 31));
        deleteConge->setStyleSheet(QString::fromUtf8("image: url(:/img/delete.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        stackedWidgetConge->addWidget(stackedWidget_2Page1);
        label_166->raise();
        label_167->raise();
        groupBox_21->raise();
        label_174->raise();
        tableViewCongeEmp->raise();
        heart->raise();
        modifierConge->raise();
        deleteConge->raise();
        stackedWidget_2Page2 = new QWidget();
        stackedWidget_2Page2->setObjectName(QString::fromUtf8("stackedWidget_2Page2"));
        tableViewCongeAll = new QTableView(stackedWidget_2Page2);
        tableViewCongeAll->setObjectName(QString::fromUtf8("tableViewCongeAll"));
        tableViewCongeAll->setGeometry(QRect(30, 60, 921, 281));
        tableViewCongeAll->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"alternate-background-color: rgb(32, 189, 171);"));
        tableViewCongeAll->setAlternatingRowColors(true);
        rechercherConge = new QLineEdit(stackedWidget_2Page2);
        rechercherConge->setObjectName(QString::fromUtf8("rechercherConge"));
        rechercherConge->setGeometry(QRect(30, 20, 161, 31));
        rechercherConge->setStyleSheet(QString::fromUtf8("border-radius:5%;\n"
"\n"
"background-color: rgb(255, 255, 255);"));
        pushButtonRecherche = new QPushButton(stackedWidget_2Page2);
        pushButtonRecherche->setObjectName(QString::fromUtf8("pushButtonRecherche"));
        pushButtonRecherche->setGeometry(QRect(200, 10, 31, 23));
        pushButtonRecherche->setStyleSheet(QString::fromUtf8("image: url(:/resources/img/search.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        refuserConge = new QPushButton(stackedWidget_2Page2);
        refuserConge->setObjectName(QString::fromUtf8("refuserConge"));
        refuserConge->setGeometry(QRect(470, 390, 31, 23));
        refuserConge->setStyleSheet(QString::fromUtf8("image: url(:/img/delete.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        label_175 = new QLabel(stackedWidget_2Page2);
        label_175->setObjectName(QString::fromUtf8("label_175"));
        label_175->setGeometry(QRect(280, 360, 361, 21));
        label_175->setAutoFillBackground(false);
        label_175->setStyleSheet(QString::fromUtf8("font: 12pt \"MS Shell Dlg 2\";\n"
"color: rgb(221, 221, 221);"));
        afficher_3 = new QPushButton(stackedWidget_2Page2);
        afficher_3->setObjectName(QString::fromUtf8("afficher_3"));
        afficher_3->setGeometry(QRect(820, 20, 21, 31));
        afficher_3->setStyleSheet(QString::fromUtf8("image: url(:/img/refresh.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        comboBoxTriConge = new QComboBox(stackedWidget_2Page2);
        comboBoxTriConge->addItem(QString());
        comboBoxTriConge->addItem(QString());
        comboBoxTriConge->addItem(QString());
        comboBoxTriConge->setObjectName(QString::fromUtf8("comboBoxTriConge"));
        comboBoxTriConge->setGeometry(QRect(850, 20, 101, 31));
        QPalette palette32;
        palette32.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette32.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette32.setBrush(QPalette::Active, QPalette::Light, brush37);
        palette32.setBrush(QPalette::Active, QPalette::Midlight, brush38);
        palette32.setBrush(QPalette::Active, QPalette::Dark, brush39);
        palette32.setBrush(QPalette::Active, QPalette::Mid, brush40);
        palette32.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette32.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette32.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette32.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette32.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette32.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette32.setBrush(QPalette::Active, QPalette::AlternateBase, brush41);
        palette32.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette32.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette32.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette32.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette32.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette32.setBrush(QPalette::Inactive, QPalette::Light, brush37);
        palette32.setBrush(QPalette::Inactive, QPalette::Midlight, brush38);
        palette32.setBrush(QPalette::Inactive, QPalette::Dark, brush39);
        palette32.setBrush(QPalette::Inactive, QPalette::Mid, brush40);
        palette32.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette32.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette32.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette32.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette32.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette32.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette32.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush41);
        palette32.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette32.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette32.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette32.setBrush(QPalette::Disabled, QPalette::WindowText, brush39);
        palette32.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette32.setBrush(QPalette::Disabled, QPalette::Light, brush37);
        palette32.setBrush(QPalette::Disabled, QPalette::Midlight, brush38);
        palette32.setBrush(QPalette::Disabled, QPalette::Dark, brush39);
        palette32.setBrush(QPalette::Disabled, QPalette::Mid, brush40);
        palette32.setBrush(QPalette::Disabled, QPalette::Text, brush39);
        palette32.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette32.setBrush(QPalette::Disabled, QPalette::ButtonText, brush39);
        palette32.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette32.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette32.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette32.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush42);
        palette32.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette32.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette32.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        comboBoxTriConge->setPalette(palette32);
        comboBoxTriConge->setLayoutDirection(Qt::LeftToRight);
        comboBoxTriConge->setStyleSheet(QString::fromUtf8(""));
        comboBoxTriConge->setMaxVisibleItems(3);
        comboBoxTriConge->setInsertPolicy(QComboBox::InsertAtTop);
        accepterConge_2 = new QPushButton(stackedWidget_2Page2);
        accepterConge_2->setObjectName(QString::fromUtf8("accepterConge_2"));
        accepterConge_2->setGeometry(QRect(410, 390, 31, 23));
        accepterConge_2->setStyleSheet(QString::fromUtf8("image: url(:/img/tick.png);\n"
"background-color: transparent;\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        stackedWidgetConge->addWidget(stackedWidget_2Page2);
        stackedMain->addWidget(Cartes);
        Comptes = new QWidget();
        Comptes->setObjectName(QString::fromUtf8("Comptes"));
        stackedMain->addWidget(Comptes);
        Conges = new QWidget();
        Conges->setObjectName(QString::fromUtf8("Conges"));
        stackedMain->addWidget(Conges);
        Vidange = new QWidget();
        Vidange->setObjectName(QString::fromUtf8("Vidange"));
        stackedAssu = new QStackedWidget(Vidange);
        stackedAssu->setObjectName(QString::fromUtf8("stackedAssu"));
        stackedAssu->setGeometry(QRect(0, 0, 1201, 551));
        afficher_assu = new QWidget();
        afficher_assu->setObjectName(QString::fromUtf8("afficher_assu"));
        table_assu = new QTableView(afficher_assu);
        table_assu->setObjectName(QString::fromUtf8("table_assu"));
        table_assu->setGeometry(QRect(20, 60, 1171, 431));
        table_assu->setAlternatingRowColors(true);
        table_assu->setGridStyle(Qt::DashLine);
        table_assu->horizontalHeader()->setCascadingSectionResizes(true);
        table_assu->horizontalHeader()->setDefaultSectionSize(120);
        table_assu->horizontalHeader()->setStretchLastSection(true);
        table_assu->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        triAssu = new QComboBox(afficher_assu);
        triAssu->addItem(QString());
        triAssu->addItem(QString());
        triAssu->addItem(QString());
        triAssu->addItem(QString());
        triAssu->setObjectName(QString::fromUtf8("triAssu"));
        triAssu->setGeometry(QRect(930, 30, 141, 21));
        triAssu->setLayoutDirection(Qt::LeftToRight);
        triAssu->setMaxVisibleItems(3);
        triAssu->setInsertPolicy(QComboBox::InsertAtTop);
        rechercheAssu = new QLineEdit(afficher_assu);
        rechercheAssu->setObjectName(QString::fromUtf8("rechercheAssu"));
        rechercheAssu->setGeometry(QRect(250, 30, 131, 20));
        label_4 = new QLabel(afficher_assu);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(160, 30, 81, 16));
        label_4->setFont(font5);
        supprimerAssu = new QPushButton(afficher_assu);
        supprimerAssu->setObjectName(QString::fromUtf8("supprimerAssu"));
        supprimerAssu->setGeometry(QRect(670, 520, 30, 30));
        supprimerAssu->setStyleSheet(QString::fromUtf8("#supprimerAssu{\n"
"background-color : transparent;\n"
"border-image : url(:/img/delete.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        modifierAssu = new QPushButton(afficher_assu);
        modifierAssu->setObjectName(QString::fromUtf8("modifierAssu"));
        modifierAssu->setGeometry(QRect(500, 520, 30, 30));
        modifierAssu->setStyleSheet(QString::fromUtf8("#modifierAssu{\n"
"background-color : transparent;\n"
"border-image : url(:/img/edit.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        ajouterAssu = new QPushButton(afficher_assu);
        ajouterAssu->setObjectName(QString::fromUtf8("ajouterAssu"));
        ajouterAssu->setGeometry(QRect(10, 20, 30, 30));
        ajouterAssu->setStyleSheet(QString::fromUtf8("#ajouterAssu{\n"
"background-color : transparent;\n"
"border-image : url(:/img/add.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        stackedAssu->addWidget(afficher_assu);
        ajouter_assu = new QWidget();
        ajouter_assu->setObjectName(QString::fromUtf8("ajouter_assu"));
        groupBox_11 = new QGroupBox(ajouter_assu);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        groupBox_11->setGeometry(QRect(470, 90, 341, 371));
        groupBox_11->setFont(font3);
        validerAjoutAssu = new QPushButton(groupBox_11);
        validerAjoutAssu->setObjectName(QString::fromUtf8("validerAjoutAssu"));
        validerAjoutAssu->setGeometry(QRect(130, 280, 81, 31));
        validerAjoutAssu->setFont(font5);
        label_48 = new QLabel(groupBox_11);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        label_48->setGeometry(QRect(50, 80, 71, 18));
        label_48->setFont(font5);
        label_54 = new QLabel(groupBox_11);
        label_54->setObjectName(QString::fromUtf8("label_54"));
        label_54->setGeometry(QRect(50, 230, 47, 18));
        label_54->setFont(font5);
        label_67 = new QLabel(groupBox_11);
        label_67->setObjectName(QString::fromUtf8("label_67"));
        label_67->setGeometry(QRect(50, 50, 47, 18));
        label_67->setFont(font5);
        label_68 = new QLabel(groupBox_11);
        label_68->setObjectName(QString::fromUtf8("label_68"));
        label_68->setGeometry(QRect(50, 170, 91, 18));
        label_68->setFont(font5);
        idAssu = new QLineEdit(groupBox_11);
        idAssu->setObjectName(QString::fromUtf8("idAssu"));
        idAssu->setGeometry(QRect(150, 50, 151, 20));
        idAssu->setFont(font5);
        prixAssu = new QLineEdit(groupBox_11);
        prixAssu->setObjectName(QString::fromUtf8("prixAssu"));
        prixAssu->setGeometry(QRect(150, 230, 151, 20));
        prixAssu->setFont(font5);
        label_69 = new QLabel(groupBox_11);
        label_69->setObjectName(QString::fromUtf8("label_69"));
        label_69->setGeometry(QRect(50, 200, 81, 18));
        label_69->setFont(font5);
        label_70 = new QLabel(groupBox_11);
        label_70->setObjectName(QString::fromUtf8("label_70"));
        label_70->setGeometry(QRect(50, 140, 47, 18));
        label_70->setFont(font5);
        label_71 = new QLabel(groupBox_11);
        label_71->setObjectName(QString::fromUtf8("label_71"));
        label_71->setGeometry(QRect(50, 110, 81, 18));
        label_71->setFont(font5);
        policeAssu = new QLineEdit(groupBox_11);
        policeAssu->setObjectName(QString::fromUtf8("policeAssu"));
        policeAssu->setGeometry(QRect(150, 110, 151, 20));
        policeAssu->setFont(font5);
        matAssu = new QComboBox(groupBox_11);
        matAssu->setObjectName(QString::fromUtf8("matAssu"));
        matAssu->setGeometry(QRect(150, 80, 151, 22));
        matAssu->setFont(font5);
        typeAssu = new QComboBox(groupBox_11);
        typeAssu->addItem(QString());
        typeAssu->addItem(QString());
        typeAssu->setObjectName(QString::fromUtf8("typeAssu"));
        typeAssu->setGeometry(QRect(150, 140, 151, 22));
        QFont font32;
        font32.setPointSize(11);
        typeAssu->setFont(font32);
        dateDebAssu = new QDateEdit(groupBox_11);
        dateDebAssu->setObjectName(QString::fromUtf8("dateDebAssu"));
        dateDebAssu->setGeometry(QRect(150, 170, 151, 22));
        dateDebAssu->setFont(font5);
        dateFinAssu = new QDateEdit(groupBox_11);
        dateFinAssu->setObjectName(QString::fromUtf8("dateFinAssu"));
        dateFinAssu->setGeometry(QRect(150, 200, 151, 22));
        dateFinAssu->setFont(font5);
        afficherAssu = new QPushButton(ajouter_assu);
        afficherAssu->setObjectName(QString::fromUtf8("afficherAssu"));
        afficherAssu->setGeometry(QRect(30, 20, 30, 30));
        afficherAssu->setStyleSheet(QString::fromUtf8("#afficherAssu{\n"
"background-color : transparent;\n"
"border-image : url(:/img/return.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        stackedAssu->addWidget(ajouter_assu);
        modifier_assu = new QWidget();
        modifier_assu->setObjectName(QString::fromUtf8("modifier_assu"));
        groupBox_12 = new QGroupBox(modifier_assu);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        groupBox_12->setGeometry(QRect(470, 90, 341, 361));
        groupBox_12->setFont(font3);
        validerModifAssu = new QPushButton(groupBox_12);
        validerModifAssu->setObjectName(QString::fromUtf8("validerModifAssu"));
        validerModifAssu->setGeometry(QRect(130, 290, 91, 23));
        validerModifAssu->setFont(font5);
        label_72 = new QLabel(groupBox_12);
        label_72->setObjectName(QString::fromUtf8("label_72"));
        label_72->setGeometry(QRect(50, 80, 71, 16));
        label_72->setFont(font5);
        label_73 = new QLabel(groupBox_12);
        label_73->setObjectName(QString::fromUtf8("label_73"));
        label_73->setGeometry(QRect(50, 230, 47, 14));
        label_73->setFont(font5);
        label_74 = new QLabel(groupBox_12);
        label_74->setObjectName(QString::fromUtf8("label_74"));
        label_74->setGeometry(QRect(50, 50, 47, 14));
        label_74->setFont(font5);
        label_75 = new QLabel(groupBox_12);
        label_75->setObjectName(QString::fromUtf8("label_75"));
        label_75->setGeometry(QRect(50, 170, 81, 16));
        label_75->setFont(font5);
        idAssu_2 = new QLineEdit(groupBox_12);
        idAssu_2->setObjectName(QString::fromUtf8("idAssu_2"));
        idAssu_2->setGeometry(QRect(150, 50, 150, 20));
        idAssu_2->setFont(font5);
        prixAssu_2 = new QLineEdit(groupBox_12);
        prixAssu_2->setObjectName(QString::fromUtf8("prixAssu_2"));
        prixAssu_2->setGeometry(QRect(150, 230, 150, 20));
        prixAssu_2->setFont(font5);
        label_76 = new QLabel(groupBox_12);
        label_76->setObjectName(QString::fromUtf8("label_76"));
        label_76->setGeometry(QRect(50, 200, 81, 16));
        label_76->setFont(font5);
        label_77 = new QLabel(groupBox_12);
        label_77->setObjectName(QString::fromUtf8("label_77"));
        label_77->setGeometry(QRect(50, 130, 47, 31));
        label_77->setFont(font5);
        label_78 = new QLabel(groupBox_12);
        label_78->setObjectName(QString::fromUtf8("label_78"));
        label_78->setGeometry(QRect(50, 110, 71, 16));
        label_78->setFont(font5);
        policeAssu_2 = new QLineEdit(groupBox_12);
        policeAssu_2->setObjectName(QString::fromUtf8("policeAssu_2"));
        policeAssu_2->setGeometry(QRect(150, 110, 150, 20));
        policeAssu_2->setFont(font5);
        typeAssu_2 = new QComboBox(groupBox_12);
        typeAssu_2->addItem(QString());
        typeAssu_2->addItem(QString());
        typeAssu_2->setObjectName(QString::fromUtf8("typeAssu_2"));
        typeAssu_2->setGeometry(QRect(150, 140, 151, 22));
        typeAssu_2->setFont(font5);
        matAssu_2 = new QComboBox(groupBox_12);
        matAssu_2->setObjectName(QString::fromUtf8("matAssu_2"));
        matAssu_2->setGeometry(QRect(150, 80, 151, 22));
        matAssu_2->setFont(font5);
        dateDebAssu_2 = new QDateEdit(groupBox_12);
        dateDebAssu_2->setObjectName(QString::fromUtf8("dateDebAssu_2"));
        dateDebAssu_2->setGeometry(QRect(150, 170, 151, 22));
        dateDebAssu_2->setFont(font5);
        dateFinAssu_2 = new QDateEdit(groupBox_12);
        dateFinAssu_2->setObjectName(QString::fromUtf8("dateFinAssu_2"));
        dateFinAssu_2->setGeometry(QRect(150, 200, 151, 22));
        dateFinAssu_2->setFont(font5);
        afficherAssu_2 = new QPushButton(modifier_assu);
        afficherAssu_2->setObjectName(QString::fromUtf8("afficherAssu_2"));
        afficherAssu_2->setGeometry(QRect(20, 20, 30, 30));
        afficherAssu_2->setStyleSheet(QString::fromUtf8("#afficherAssu_2{\n"
"background-color : transparent;\n"
"border-image : url(:/img/return.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        stackedAssu->addWidget(modifier_assu);
        stackedMain->addWidget(Vidange);
        Vignette = new QWidget();
        Vignette->setObjectName(QString::fromUtf8("Vignette"));
        stackedVign = new QStackedWidget(Vignette);
        stackedVign->setObjectName(QString::fromUtf8("stackedVign"));
        stackedVign->setGeometry(QRect(0, 0, 1201, 531));
        afficher_vign = new QWidget();
        afficher_vign->setObjectName(QString::fromUtf8("afficher_vign"));
        table_Vign = new QTableView(afficher_vign);
        table_Vign->setObjectName(QString::fromUtf8("table_Vign"));
        table_Vign->setGeometry(QRect(20, 60, 1171, 421));
        QPalette palette33;
        palette33.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette33.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette33.setBrush(QPalette::Active, QPalette::Light, brush);
        palette33.setBrush(QPalette::Active, QPalette::Midlight, brush);
        QBrush brush62(QColor(127, 127, 127, 255));
        brush62.setStyle(Qt::SolidPattern);
        palette33.setBrush(QPalette::Active, QPalette::Dark, brush62);
        QBrush brush63(QColor(170, 170, 170, 255));
        brush63.setStyle(Qt::SolidPattern);
        palette33.setBrush(QPalette::Active, QPalette::Mid, brush63);
        palette33.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette33.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette33.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette33.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette33.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette33.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette33.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette33.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette33.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette33.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette33.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette33.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette33.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette33.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette33.setBrush(QPalette::Inactive, QPalette::Dark, brush62);
        palette33.setBrush(QPalette::Inactive, QPalette::Mid, brush63);
        palette33.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette33.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette33.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette33.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette33.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette33.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette33.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette33.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette33.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette33.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette33.setBrush(QPalette::Disabled, QPalette::WindowText, brush62);
        palette33.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette33.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette33.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette33.setBrush(QPalette::Disabled, QPalette::Dark, brush62);
        palette33.setBrush(QPalette::Disabled, QPalette::Mid, brush63);
        palette33.setBrush(QPalette::Disabled, QPalette::Text, brush62);
        palette33.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette33.setBrush(QPalette::Disabled, QPalette::ButtonText, brush62);
        palette33.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette33.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette33.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette33.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette33.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette33.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette33.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        table_Vign->setPalette(palette33);
        table_Vign->setAutoFillBackground(false);
        table_Vign->setAlternatingRowColors(true);
        table_Vign->setGridStyle(Qt::DashLine);
        table_Vign->horizontalHeader()->setCascadingSectionResizes(true);
        table_Vign->horizontalHeader()->setDefaultSectionSize(120);
        table_Vign->horizontalHeader()->setStretchLastSection(true);
        table_Vign->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        triVign = new QComboBox(afficher_vign);
        triVign->addItem(QString());
        triVign->addItem(QString());
        triVign->addItem(QString());
        triVign->setObjectName(QString::fromUtf8("triVign"));
        triVign->setGeometry(QRect(930, 30, 141, 21));
        triVign->setLayoutDirection(Qt::LeftToRight);
        triVign->setMaxVisibleItems(3);
        triVign->setInsertPolicy(QComboBox::InsertAtTop);
        label = new QLabel(afficher_vign);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 30, 81, 16));
        label->setFont(font5);
        rechercheVign = new QLineEdit(afficher_vign);
        rechercheVign->setObjectName(QString::fromUtf8("rechercheVign"));
        rechercheVign->setGeometry(QRect(270, 30, 131, 20));
        ajouterVign = new QPushButton(afficher_vign);
        ajouterVign->setObjectName(QString::fromUtf8("ajouterVign"));
        ajouterVign->setGeometry(QRect(10, 20, 30, 30));
        ajouterVign->setStyleSheet(QString::fromUtf8("#ajouterVign{\n"
"background-color : transparent;\n"
"border-image : url(:/img/add.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        supprimerVign = new QPushButton(afficher_vign);
        supprimerVign->setObjectName(QString::fromUtf8("supprimerVign"));
        supprimerVign->setGeometry(QRect(660, 500, 30, 30));
        supprimerVign->setStyleSheet(QString::fromUtf8("#supprimerVign{\n"
"background-color : transparent;\n"
"border-image : url(:/img/delete.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        modifierVign = new QPushButton(afficher_vign);
        modifierVign->setObjectName(QString::fromUtf8("modifierVign"));
        modifierVign->setGeometry(QRect(500, 500, 30, 30));
        modifierVign->setStyleSheet(QString::fromUtf8("#modifierVign{\n"
"background-color : transparent;\n"
"border-image : url(:/img/edit.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        stackedVign->addWidget(afficher_vign);
        ajouter_vign = new QWidget();
        ajouter_vign->setObjectName(QString::fromUtf8("ajouter_vign"));
        groupBox_15 = new QGroupBox(ajouter_vign);
        groupBox_15->setObjectName(QString::fromUtf8("groupBox_15"));
        groupBox_15->setGeometry(QRect(450, 90, 341, 301));
        groupBox_15->setFont(font3);
        validerAjoutVign = new QPushButton(groupBox_15);
        validerAjoutVign->setObjectName(QString::fromUtf8("validerAjoutVign"));
        validerAjoutVign->setGeometry(QRect(150, 220, 75, 31));
        validerAjoutVign->setFont(font5);
        label_123 = new QLabel(groupBox_15);
        label_123->setObjectName(QString::fromUtf8("label_123"));
        label_123->setGeometry(QRect(40, 80, 81, 16));
        label_123->setFont(font5);
        label_124 = new QLabel(groupBox_15);
        label_124->setObjectName(QString::fromUtf8("label_124"));
        label_124->setGeometry(QRect(40, 170, 47, 14));
        label_124->setFont(font5);
        label_125 = new QLabel(groupBox_15);
        label_125->setObjectName(QString::fromUtf8("label_125"));
        label_125->setGeometry(QRect(40, 50, 47, 14));
        label_125->setFont(font5);
        label_126 = new QLabel(groupBox_15);
        label_126->setObjectName(QString::fromUtf8("label_126"));
        label_126->setGeometry(QRect(40, 110, 91, 16));
        label_126->setFont(font5);
        codeVign = new QLineEdit(groupBox_15);
        codeVign->setObjectName(QString::fromUtf8("codeVign"));
        codeVign->setGeometry(QRect(160, 50, 150, 20));
        codeVign->setFont(font5);
        prixVign = new QLineEdit(groupBox_15);
        prixVign->setObjectName(QString::fromUtf8("prixVign"));
        prixVign->setGeometry(QRect(160, 170, 150, 20));
        prixVign->setFont(font5);
        label_127 = new QLabel(groupBox_15);
        label_127->setObjectName(QString::fromUtf8("label_127"));
        label_127->setGeometry(QRect(40, 140, 111, 16));
        label_127->setFont(font5);
        matVign = new QComboBox(groupBox_15);
        matVign->setObjectName(QString::fromUtf8("matVign"));
        matVign->setGeometry(QRect(160, 80, 151, 22));
        matVign->setFont(font5);
        dateDebVign = new QDateEdit(groupBox_15);
        dateDebVign->setObjectName(QString::fromUtf8("dateDebVign"));
        dateDebVign->setGeometry(QRect(160, 110, 151, 22));
        dateDebVign->setFont(font5);
        dateExpVign = new QDateEdit(groupBox_15);
        dateExpVign->setObjectName(QString::fromUtf8("dateExpVign"));
        dateExpVign->setGeometry(QRect(160, 140, 151, 22));
        dateExpVign->setFont(font5);
        afficherVign = new QPushButton(ajouter_vign);
        afficherVign->setObjectName(QString::fromUtf8("afficherVign"));
        afficherVign->setGeometry(QRect(30, 30, 30, 30));
        afficherVign->setStyleSheet(QString::fromUtf8("#afficherVign{\n"
"background-color : transparent;\n"
"border-image : url(:/img/return.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        stackedVign->addWidget(ajouter_vign);
        modifier_vign = new QWidget();
        modifier_vign->setObjectName(QString::fromUtf8("modifier_vign"));
        groupBox_16 = new QGroupBox(modifier_vign);
        groupBox_16->setObjectName(QString::fromUtf8("groupBox_16"));
        groupBox_16->setGeometry(QRect(450, 100, 341, 301));
        groupBox_16->setFont(font3);
        validerModifVign = new QPushButton(groupBox_16);
        validerModifVign->setObjectName(QString::fromUtf8("validerModifVign"));
        validerModifVign->setGeometry(QRect(140, 220, 75, 23));
        validerModifVign->setFont(font32);
        label_128 = new QLabel(groupBox_16);
        label_128->setObjectName(QString::fromUtf8("label_128"));
        label_128->setGeometry(QRect(40, 80, 71, 16));
        label_128->setFont(font32);
        label_129 = new QLabel(groupBox_16);
        label_129->setObjectName(QString::fromUtf8("label_129"));
        label_129->setGeometry(QRect(40, 170, 47, 14));
        label_129->setFont(font32);
        label_130 = new QLabel(groupBox_16);
        label_130->setObjectName(QString::fromUtf8("label_130"));
        label_130->setGeometry(QRect(40, 50, 47, 14));
        label_130->setFont(font32);
        label_131 = new QLabel(groupBox_16);
        label_131->setObjectName(QString::fromUtf8("label_131"));
        label_131->setGeometry(QRect(40, 110, 91, 16));
        label_131->setFont(font32);
        codeVign_2 = new QLineEdit(groupBox_16);
        codeVign_2->setObjectName(QString::fromUtf8("codeVign_2"));
        codeVign_2->setGeometry(QRect(160, 50, 150, 20));
        codeVign_2->setFont(font32);
        prixVign_2 = new QLineEdit(groupBox_16);
        prixVign_2->setObjectName(QString::fromUtf8("prixVign_2"));
        prixVign_2->setGeometry(QRect(160, 170, 150, 20));
        prixVign_2->setFont(font32);
        label_132 = new QLabel(groupBox_16);
        label_132->setObjectName(QString::fromUtf8("label_132"));
        label_132->setGeometry(QRect(40, 140, 121, 16));
        label_132->setFont(font32);
        matVign_2 = new QComboBox(groupBox_16);
        matVign_2->setObjectName(QString::fromUtf8("matVign_2"));
        matVign_2->setGeometry(QRect(160, 80, 151, 22));
        matVign_2->setFont(font32);
        dateDebVign_2 = new QDateEdit(groupBox_16);
        dateDebVign_2->setObjectName(QString::fromUtf8("dateDebVign_2"));
        dateDebVign_2->setGeometry(QRect(160, 110, 151, 22));
        dateDebVign_2->setFont(font32);
        dateExpVign_2 = new QDateEdit(groupBox_16);
        dateExpVign_2->setObjectName(QString::fromUtf8("dateExpVign_2"));
        dateExpVign_2->setGeometry(QRect(160, 140, 151, 22));
        dateExpVign_2->setFont(font32);
        afficherVign_2 = new QPushButton(modifier_vign);
        afficherVign_2->setObjectName(QString::fromUtf8("afficherVign_2"));
        afficherVign_2->setGeometry(QRect(30, 40, 30, 30));
        afficherVign_2->setStyleSheet(QString::fromUtf8("#afficherVign_2{\n"
"background-color : transparent;\n"
"border-image : url(:/img/return.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        stackedVign->addWidget(modifier_vign);
        stackedMain->addWidget(Vignette);
        Visite = new QWidget();
        Visite->setObjectName(QString::fromUtf8("Visite"));
        stackedVis = new QStackedWidget(Visite);
        stackedVis->setObjectName(QString::fromUtf8("stackedVis"));
        stackedVis->setGeometry(QRect(0, 0, 1201, 531));
        stackedVis->setFont(font);
        afficher_vis = new QWidget();
        afficher_vis->setObjectName(QString::fromUtf8("afficher_vis"));
        table_Vis = new QTableView(afficher_vis);
        table_Vis->setObjectName(QString::fromUtf8("table_Vis"));
        table_Vis->setGeometry(QRect(20, 60, 1171, 421));
        table_Vis->setAlternatingRowColors(true);
        table_Vis->setGridStyle(Qt::DashLine);
        table_Vis->horizontalHeader()->setCascadingSectionResizes(true);
        table_Vis->horizontalHeader()->setDefaultSectionSize(120);
        table_Vis->horizontalHeader()->setStretchLastSection(true);
        table_Vis->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        rechercheVis = new QLineEdit(afficher_vis);
        rechercheVis->setObjectName(QString::fromUtf8("rechercheVis"));
        rechercheVis->setGeometry(QRect(280, 30, 131, 20));
        triVis = new QComboBox(afficher_vis);
        triVis->addItem(QString());
        triVis->addItem(QString());
        triVis->addItem(QString());
        triVis->setObjectName(QString::fromUtf8("triVis"));
        triVis->setGeometry(QRect(920, 30, 141, 21));
        triVis->setLayoutDirection(Qt::LeftToRight);
        triVis->setMaxVisibleItems(3);
        triVis->setInsertPolicy(QComboBox::InsertAtTop);
        label_2 = new QLabel(afficher_vis);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(190, 30, 81, 16));
        label_2->setFont(font5);
        supprimerVis = new QPushButton(afficher_vis);
        supprimerVis->setObjectName(QString::fromUtf8("supprimerVis"));
        supprimerVis->setGeometry(QRect(680, 500, 30, 30));
        supprimerVis->setStyleSheet(QString::fromUtf8("#supprimerVis{\n"
"background-color : transparent;\n"
"border-image : url(:/img/delete.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        modifierVis = new QPushButton(afficher_vis);
        modifierVis->setObjectName(QString::fromUtf8("modifierVis"));
        modifierVis->setGeometry(QRect(510, 500, 30, 30));
        modifierVis->setStyleSheet(QString::fromUtf8("#modifierVis{\n"
"background-color : transparent;\n"
"border-image : url(:/img/edit.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        ajouterVis = new QPushButton(afficher_vis);
        ajouterVis->setObjectName(QString::fromUtf8("ajouterVis"));
        ajouterVis->setGeometry(QRect(10, 20, 30, 30));
        ajouterVis->setStyleSheet(QString::fromUtf8("#ajouterVis{\n"
"background-color : transparent;\n"
"border-image : url(:/img/add.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        stackedVis->addWidget(afficher_vis);
        ajouter_vis = new QWidget();
        ajouter_vis->setObjectName(QString::fromUtf8("ajouter_vis"));
        groupBox_13 = new QGroupBox(ajouter_vis);
        groupBox_13->setObjectName(QString::fromUtf8("groupBox_13"));
        groupBox_13->setGeometry(QRect(470, 70, 341, 361));
        groupBox_13->setFont(font3);
        validerAjoutVis = new QPushButton(groupBox_13);
        validerAjoutVis->setObjectName(QString::fromUtf8("validerAjoutVis"));
        validerAjoutVis->setGeometry(QRect(150, 280, 75, 31));
        validerAjoutVis->setFont(font6);
        label_43 = new QLabel(groupBox_13);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setGeometry(QRect(40, 80, 71, 17));
        label_43->setFont(font6);
        label_44 = new QLabel(groupBox_13);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setGeometry(QRect(40, 230, 47, 17));
        label_44->setFont(font6);
        label_79 = new QLabel(groupBox_13);
        label_79->setObjectName(QString::fromUtf8("label_79"));
        label_79->setGeometry(QRect(40, 50, 47, 17));
        label_79->setFont(font6);
        label_80 = new QLabel(groupBox_13);
        label_80->setObjectName(QString::fromUtf8("label_80"));
        label_80->setGeometry(QRect(40, 170, 91, 17));
        label_80->setFont(font6);
        idVis = new QLineEdit(groupBox_13);
        idVis->setObjectName(QString::fromUtf8("idVis"));
        idVis->setGeometry(QRect(160, 50, 150, 20));
        idVis->setFont(font6);
        prixVis = new QLineEdit(groupBox_13);
        prixVis->setObjectName(QString::fromUtf8("prixVis"));
        prixVis->setGeometry(QRect(160, 230, 150, 20));
        prixVis->setFont(font6);
        label_81 = new QLabel(groupBox_13);
        label_81->setObjectName(QString::fromUtf8("label_81"));
        label_81->setGeometry(QRect(40, 200, 111, 17));
        label_81->setFont(font6);
        codeVis = new QLineEdit(groupBox_13);
        codeVis->setObjectName(QString::fromUtf8("codeVis"));
        codeVis->setGeometry(QRect(160, 140, 150, 20));
        codeVis->setFont(font6);
        label_82 = new QLabel(groupBox_13);
        label_82->setObjectName(QString::fromUtf8("label_82"));
        label_82->setGeometry(QRect(40, 140, 47, 17));
        label_82->setFont(font6);
        label_103 = new QLabel(groupBox_13);
        label_103->setObjectName(QString::fromUtf8("label_103"));
        label_103->setGeometry(QRect(40, 110, 91, 18));
        label_103->setFont(font6);
        compagnieVis = new QLineEdit(groupBox_13);
        compagnieVis->setObjectName(QString::fromUtf8("compagnieVis"));
        compagnieVis->setGeometry(QRect(160, 110, 150, 20));
        compagnieVis->setFont(font6);
        matVis = new QComboBox(groupBox_13);
        matVis->setObjectName(QString::fromUtf8("matVis"));
        matVis->setGeometry(QRect(160, 80, 151, 22));
        matVis->setFont(font6);
        dateDebVis = new QDateEdit(groupBox_13);
        dateDebVis->setObjectName(QString::fromUtf8("dateDebVis"));
        dateDebVis->setGeometry(QRect(160, 170, 151, 22));
        dateDebVis->setFont(font6);
        dateExpVis = new QDateEdit(groupBox_13);
        dateExpVis->setObjectName(QString::fromUtf8("dateExpVis"));
        dateExpVis->setGeometry(QRect(160, 200, 151, 22));
        dateExpVis->setFont(font6);
        afficherVis = new QPushButton(ajouter_vis);
        afficherVis->setObjectName(QString::fromUtf8("afficherVis"));
        afficherVis->setGeometry(QRect(30, 30, 30, 30));
        afficherVis->setStyleSheet(QString::fromUtf8("#afficherVis{\n"
"background-color : transparent;\n"
"border-image : url(:/img/return.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        stackedVis->addWidget(ajouter_vis);
        modifier_vis = new QWidget();
        modifier_vis->setObjectName(QString::fromUtf8("modifier_vis"));
        groupBox_14 = new QGroupBox(modifier_vis);
        groupBox_14->setObjectName(QString::fromUtf8("groupBox_14"));
        groupBox_14->setGeometry(QRect(460, 70, 341, 341));
        groupBox_14->setFont(font3);
        validerModifVis = new QPushButton(groupBox_14);
        validerModifVis->setObjectName(QString::fromUtf8("validerModifVis"));
        validerModifVis->setGeometry(QRect(140, 290, 75, 23));
        validerModifVis->setFont(font5);
        label_115 = new QLabel(groupBox_14);
        label_115->setObjectName(QString::fromUtf8("label_115"));
        label_115->setGeometry(QRect(40, 80, 71, 16));
        label_115->setFont(font5);
        label_116 = new QLabel(groupBox_14);
        label_116->setObjectName(QString::fromUtf8("label_116"));
        label_116->setGeometry(QRect(40, 230, 47, 14));
        label_116->setFont(font5);
        label_117 = new QLabel(groupBox_14);
        label_117->setObjectName(QString::fromUtf8("label_117"));
        label_117->setGeometry(QRect(40, 50, 47, 14));
        label_117->setFont(font5);
        label_118 = new QLabel(groupBox_14);
        label_118->setObjectName(QString::fromUtf8("label_118"));
        label_118->setGeometry(QRect(40, 170, 91, 16));
        label_118->setFont(font5);
        idVis_2 = new QLineEdit(groupBox_14);
        idVis_2->setObjectName(QString::fromUtf8("idVis_2"));
        idVis_2->setGeometry(QRect(160, 50, 150, 20));
        idVis_2->setFont(font5);
        prixVis_2 = new QLineEdit(groupBox_14);
        prixVis_2->setObjectName(QString::fromUtf8("prixVis_2"));
        prixVis_2->setGeometry(QRect(160, 230, 150, 20));
        prixVis_2->setFont(font5);
        label_119 = new QLabel(groupBox_14);
        label_119->setObjectName(QString::fromUtf8("label_119"));
        label_119->setGeometry(QRect(40, 200, 111, 16));
        label_119->setFont(font5);
        codeVis_2 = new QLineEdit(groupBox_14);
        codeVis_2->setObjectName(QString::fromUtf8("codeVis_2"));
        codeVis_2->setGeometry(QRect(160, 140, 150, 20));
        codeVis_2->setFont(font5);
        label_120 = new QLabel(groupBox_14);
        label_120->setObjectName(QString::fromUtf8("label_120"));
        label_120->setGeometry(QRect(40, 140, 47, 14));
        label_120->setFont(font5);
        label_121 = new QLabel(groupBox_14);
        label_121->setObjectName(QString::fromUtf8("label_121"));
        label_121->setGeometry(QRect(40, 100, 91, 31));
        label_121->setFont(font5);
        compagnieVis_2 = new QLineEdit(groupBox_14);
        compagnieVis_2->setObjectName(QString::fromUtf8("compagnieVis_2"));
        compagnieVis_2->setGeometry(QRect(160, 110, 150, 20));
        compagnieVis_2->setFont(font5);
        matVis_2 = new QComboBox(groupBox_14);
        matVis_2->setObjectName(QString::fromUtf8("matVis_2"));
        matVis_2->setGeometry(QRect(160, 80, 151, 22));
        matVis_2->setFont(font5);
        dateDebVis_2 = new QDateEdit(groupBox_14);
        dateDebVis_2->setObjectName(QString::fromUtf8("dateDebVis_2"));
        dateDebVis_2->setGeometry(QRect(160, 170, 151, 22));
        dateDebVis_2->setFont(font5);
        dateExpVis_2 = new QDateEdit(groupBox_14);
        dateExpVis_2->setObjectName(QString::fromUtf8("dateExpVis_2"));
        dateExpVis_2->setGeometry(QRect(160, 200, 151, 22));
        dateExpVis_2->setFont(font5);
        afficherVis_2 = new QPushButton(modifier_vis);
        afficherVis_2->setObjectName(QString::fromUtf8("afficherVis_2"));
        afficherVis_2->setGeometry(QRect(20, 30, 30, 30));
        afficherVis_2->setStyleSheet(QString::fromUtf8("#afficherVis_2{\n"
"background-color : transparent;\n"
"border-image : url(:/img/return.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        stackedVis->addWidget(modifier_vis);
        stackedMain->addWidget(Visite);
        menu = new QLabel(Dialog);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu->setGeometry(QRect(18, 1, 1361, 71));
        QPalette palette34;
        palette34.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QBrush brush64(QColor(43, 59, 79, 255));
        brush64.setStyle(Qt::SolidPattern);
        palette34.setBrush(QPalette::Active, QPalette::Button, brush64);
        palette34.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette34.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette34.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette34.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette34.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette34.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette34.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette34.setBrush(QPalette::Active, QPalette::Base, brush64);
        palette34.setBrush(QPalette::Active, QPalette::Window, brush64);
        palette34.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette34.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette34.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette34.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette34.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette34.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette34.setBrush(QPalette::Inactive, QPalette::Button, brush64);
        palette34.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette34.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette34.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette34.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette34.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette34.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette34.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette34.setBrush(QPalette::Inactive, QPalette::Base, brush64);
        palette34.setBrush(QPalette::Inactive, QPalette::Window, brush64);
        palette34.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette34.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette34.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette34.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette34.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette34.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette34.setBrush(QPalette::Disabled, QPalette::Button, brush64);
        palette34.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette34.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette34.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette34.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette34.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette34.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette34.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette34.setBrush(QPalette::Disabled, QPalette::Base, brush64);
        palette34.setBrush(QPalette::Disabled, QPalette::Window, brush64);
        palette34.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette34.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette34.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette34.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette34.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        menu->setPalette(palette34);
        menu->setAutoFillBackground(false);
        menu->setStyleSheet(QString::fromUtf8("background-color: rgb(43, 59, 79);"));
        maintenance_button = new QPushButton(Dialog);
        maintenance_button->setObjectName(QString::fromUtf8("maintenance_button"));
        maintenance_button->setGeometry(QRect(790, 17, 40, 40));
        maintenance_button->setStyleSheet(QString::fromUtf8("#maintenance_button{\n"
"background-color : transparent;\n"
"border-image : url(:/img/maintenance.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        frame = new QFrame(Dialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(-2, 0, 141, 811));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(45, 45, 45);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        reservation_button = new QPushButton(frame);
        reservation_button->setObjectName(QString::fromUtf8("reservation_button"));
        reservation_button->setGeometry(QRect(8, 70, 17, 18));
        reservation_button->setStyleSheet(QString::fromUtf8("#reservation_button{\n"
"background-color : transparent;\n"
"border-image : url(:/img/reservation.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        location_button = new QPushButton(frame);
        location_button->setObjectName(QString::fromUtf8("location_button"));
        location_button->setGeometry(QRect(8, 110, 20, 20));
        location_button->setStyleSheet(QString::fromUtf8("#location_button{\n"
"background-color : transparent;\n"
"border-image : url(:/img/location.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        clients_button = new QPushButton(frame);
        clients_button->setObjectName(QString::fromUtf8("clients_button"));
        clients_button->setGeometry(QRect(8, 150, 20, 20));
        clients_button->setStyleSheet(QString::fromUtf8("#clients_button{\n"
"background-color : transparent;\n"
"border-image : url(:/img/clients.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        voitures_button = new QPushButton(frame);
        voitures_button->setObjectName(QString::fromUtf8("voitures_button"));
        voitures_button->setGeometry(QRect(8, 190, 20, 20));
        voitures_button->setStyleSheet(QString::fromUtf8("#voitures_button{\n"
"background-color : transparent;\n"
"border-image : url(:/img/voiture.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        employes_button = new QPushButton(frame);
        employes_button->setObjectName(QString::fromUtf8("employes_button"));
        employes_button->setGeometry(QRect(8, 230, 20, 20));
        employes_button->setStyleSheet(QString::fromUtf8("#employes_button{\n"
"background-color : transparent;\n"
"border-image : url(:/img/employe.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        pc_button = new QPushButton(frame);
        pc_button->setObjectName(QString::fromUtf8("pc_button"));
        pc_button->setGeometry(QRect(8, 270, 20, 20));
        pc_button->setStyleSheet(QString::fromUtf8("#pc_button{\n"
"background-color : transparent;\n"
"border-image : url(:/img/ordi.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        offres_button = new QPushButton(frame);
        offres_button->setObjectName(QString::fromUtf8("offres_button"));
        offres_button->setGeometry(QRect(8, 310, 23, 23));
        offres_button->setStyleSheet(QString::fromUtf8("#offres_button{\n"
"background-color : transparent;\n"
"border-image : url(:/img/offre.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        event_button = new QPushButton(frame);
        event_button->setObjectName(QString::fromUtf8("event_button"));
        event_button->setGeometry(QRect(8, 350, 23, 23));
        event_button->setStyleSheet(QString::fromUtf8("#event_button{\n"
"background-color : transparent;\n"
"border-image : url(:/img/evenement.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        carte_button = new QPushButton(frame);
        carte_button->setObjectName(QString::fromUtf8("carte_button"));
        carte_button->setGeometry(QRect(8, 390, 23, 23));
        carte_button->setStyleSheet(QString::fromUtf8("#carte_button{\n"
"background-color : transparent;\n"
"border-image : url(:/img/carte.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        loc_pushButton = new QPushButton(frame);
        loc_pushButton->setObjectName(QString::fromUtf8("loc_pushButton"));
        loc_pushButton->setGeometry(QRect(9, 110, 111, 23));
        QPalette palette35;
        QBrush brush65(QColor(172, 170, 171, 255));
        brush65.setStyle(Qt::SolidPattern);
        palette35.setBrush(QPalette::Active, QPalette::WindowText, brush65);
        palette35.setBrush(QPalette::Active, QPalette::ButtonText, brush65);
        palette35.setBrush(QPalette::Inactive, QPalette::WindowText, brush65);
        palette35.setBrush(QPalette::Inactive, QPalette::ButtonText, brush65);
        palette35.setBrush(QPalette::Disabled, QPalette::WindowText, brush36);
        palette35.setBrush(QPalette::Disabled, QPalette::ButtonText, brush36);
        loc_pushButton->setPalette(palette35);
        QFont font33;
        font33.setBold(true);
        font33.setWeight(75);
        font33.setStyleStrategy(QFont::PreferAntialias);
        loc_pushButton->setFont(font33);
        loc_pushButton->setStyleSheet(QString::fromUtf8("#loc_pushButton{\n"
"background-color : transparent;\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        client_pushButton = new QPushButton(frame);
        client_pushButton->setObjectName(QString::fromUtf8("client_pushButton"));
        client_pushButton->setGeometry(QRect(9, 150, 101, 23));
        QPalette palette36;
        palette36.setBrush(QPalette::Active, QPalette::WindowText, brush65);
        palette36.setBrush(QPalette::Active, QPalette::ButtonText, brush65);
        palette36.setBrush(QPalette::Inactive, QPalette::WindowText, brush65);
        palette36.setBrush(QPalette::Inactive, QPalette::ButtonText, brush65);
        palette36.setBrush(QPalette::Disabled, QPalette::WindowText, brush36);
        palette36.setBrush(QPalette::Disabled, QPalette::ButtonText, brush36);
        client_pushButton->setPalette(palette36);
        client_pushButton->setFont(font33);
        client_pushButton->setStyleSheet(QString::fromUtf8("#client_pushButton{\n"
"background-color : transparent;\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        voiture_pushButton = new QPushButton(frame);
        voiture_pushButton->setObjectName(QString::fromUtf8("voiture_pushButton"));
        voiture_pushButton->setGeometry(QRect(9, 190, 101, 23));
        QPalette palette37;
        palette37.setBrush(QPalette::Active, QPalette::WindowText, brush65);
        palette37.setBrush(QPalette::Active, QPalette::ButtonText, brush65);
        palette37.setBrush(QPalette::Inactive, QPalette::WindowText, brush65);
        palette37.setBrush(QPalette::Inactive, QPalette::ButtonText, brush65);
        palette37.setBrush(QPalette::Disabled, QPalette::WindowText, brush36);
        palette37.setBrush(QPalette::Disabled, QPalette::ButtonText, brush36);
        voiture_pushButton->setPalette(palette37);
        voiture_pushButton->setFont(font33);
        voiture_pushButton->setStyleSheet(QString::fromUtf8("#voiture_pushButton{\n"
"background-color : transparent;\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        gestionEmp = new QPushButton(frame);
        gestionEmp->setObjectName(QString::fromUtf8("gestionEmp"));
        gestionEmp->setGeometry(QRect(9, 230, 111, 23));
        QPalette palette38;
        palette38.setBrush(QPalette::Active, QPalette::WindowText, brush65);
        palette38.setBrush(QPalette::Active, QPalette::ButtonText, brush65);
        palette38.setBrush(QPalette::Inactive, QPalette::WindowText, brush65);
        palette38.setBrush(QPalette::Inactive, QPalette::ButtonText, brush65);
        palette38.setBrush(QPalette::Disabled, QPalette::WindowText, brush36);
        palette38.setBrush(QPalette::Disabled, QPalette::ButtonText, brush36);
        gestionEmp->setPalette(palette38);
        gestionEmp->setFont(font33);
        gestionEmp->setStyleSheet(QString::fromUtf8("#gestionEmp{\n"
"background-color : transparent;\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        pc_pushButton = new QPushButton(frame);
        pc_pushButton->setObjectName(QString::fromUtf8("pc_pushButton"));
        pc_pushButton->setGeometry(QRect(9, 270, 131, 23));
        QPalette palette39;
        palette39.setBrush(QPalette::Active, QPalette::WindowText, brush65);
        palette39.setBrush(QPalette::Active, QPalette::ButtonText, brush65);
        palette39.setBrush(QPalette::Inactive, QPalette::WindowText, brush65);
        palette39.setBrush(QPalette::Inactive, QPalette::ButtonText, brush65);
        palette39.setBrush(QPalette::Disabled, QPalette::WindowText, brush36);
        palette39.setBrush(QPalette::Disabled, QPalette::ButtonText, brush36);
        pc_pushButton->setPalette(palette39);
        pc_pushButton->setFont(font33);
        pc_pushButton->setStyleSheet(QString::fromUtf8("#pc_pushButton{\n"
"background-color : transparent;\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        offre_pushButton = new QPushButton(frame);
        offre_pushButton->setObjectName(QString::fromUtf8("offre_pushButton"));
        offre_pushButton->setGeometry(QRect(9, 310, 101, 23));
        QPalette palette40;
        palette40.setBrush(QPalette::Active, QPalette::WindowText, brush65);
        palette40.setBrush(QPalette::Active, QPalette::ButtonText, brush65);
        palette40.setBrush(QPalette::Inactive, QPalette::WindowText, brush65);
        palette40.setBrush(QPalette::Inactive, QPalette::ButtonText, brush65);
        palette40.setBrush(QPalette::Disabled, QPalette::WindowText, brush36);
        palette40.setBrush(QPalette::Disabled, QPalette::ButtonText, brush36);
        offre_pushButton->setPalette(palette40);
        offre_pushButton->setFont(font33);
        offre_pushButton->setStyleSheet(QString::fromUtf8("#offre_pushButton{\n"
"background-color : transparent;\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        event_pushButton = new QPushButton(frame);
        event_pushButton->setObjectName(QString::fromUtf8("event_pushButton"));
        event_pushButton->setGeometry(QRect(9, 350, 141, 23));
        QPalette palette41;
        palette41.setBrush(QPalette::Active, QPalette::WindowText, brush65);
        palette41.setBrush(QPalette::Active, QPalette::ButtonText, brush65);
        palette41.setBrush(QPalette::Inactive, QPalette::WindowText, brush65);
        palette41.setBrush(QPalette::Inactive, QPalette::ButtonText, brush65);
        palette41.setBrush(QPalette::Disabled, QPalette::WindowText, brush36);
        palette41.setBrush(QPalette::Disabled, QPalette::ButtonText, brush36);
        event_pushButton->setPalette(palette41);
        event_pushButton->setFont(font33);
        event_pushButton->setStyleSheet(QString::fromUtf8("#event_pushButton{\n"
"background-color : transparent;\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        carte_pushButton = new QPushButton(frame);
        carte_pushButton->setObjectName(QString::fromUtf8("carte_pushButton"));
        carte_pushButton->setGeometry(QRect(5, 390, 131, 23));
        QPalette palette42;
        palette42.setBrush(QPalette::Active, QPalette::WindowText, brush65);
        palette42.setBrush(QPalette::Active, QPalette::ButtonText, brush65);
        palette42.setBrush(QPalette::Inactive, QPalette::WindowText, brush65);
        palette42.setBrush(QPalette::Inactive, QPalette::ButtonText, brush65);
        palette42.setBrush(QPalette::Disabled, QPalette::WindowText, brush36);
        palette42.setBrush(QPalette::Disabled, QPalette::ButtonText, brush36);
        carte_pushButton->setPalette(palette42);
        carte_pushButton->setFont(font33);
        carte_pushButton->setStyleSheet(QString::fromUtf8("#carte_pushButton{\n"
"background-color : transparent;\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        logo = new QLabel(frame);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setGeometry(QRect(5, 628, 121, 31));
        logo->setStyleSheet(QString::fromUtf8("#logo{\n"
"background-color : transparent;\n"
"border-image : url(:/img/logo.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        res_pushButton = new QPushButton(frame);
        res_pushButton->setObjectName(QString::fromUtf8("res_pushButton"));
        res_pushButton->setGeometry(QRect(10, 70, 121, 23));
        QPalette palette43;
        palette43.setBrush(QPalette::Active, QPalette::WindowText, brush65);
        palette43.setBrush(QPalette::Active, QPalette::ButtonText, brush65);
        palette43.setBrush(QPalette::Inactive, QPalette::WindowText, brush65);
        palette43.setBrush(QPalette::Inactive, QPalette::ButtonText, brush65);
        palette43.setBrush(QPalette::Disabled, QPalette::WindowText, brush36);
        palette43.setBrush(QPalette::Disabled, QPalette::ButtonText, brush36);
        res_pushButton->setPalette(palette43);
        res_pushButton->setFont(font33);
        res_pushButton->setStyleSheet(QString::fromUtf8("#res_pushButton{\n"
"background-color : transparent;\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        compte_button = new QPushButton(frame);
        compte_button->setObjectName(QString::fromUtf8("compte_button"));
        compte_button->setGeometry(QRect(10, 430, 23, 23));
        compte_button->setStyleSheet(QString::fromUtf8("#compte_button{\n"
"background-color : transparent;\n"
"border-image : url(:/img/compte.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        conge_button = new QPushButton(frame);
        conge_button->setObjectName(QString::fromUtf8("conge_button"));
        conge_button->setGeometry(QRect(10, 470, 23, 23));
        conge_button->setStyleSheet(QString::fromUtf8("#conge_button{\n"
"background-color : transparent;\n"
"border-image : url(:/img/conge.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        assu_button = new QPushButton(frame);
        assu_button->setObjectName(QString::fromUtf8("assu_button"));
        assu_button->setGeometry(QRect(10, 510, 23, 23));
        assu_button->setStyleSheet(QString::fromUtf8("#assu_button{\n"
"background-color : transparent;\n"
"border-image : url(:/img/assurance.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        vignette_button = new QPushButton(frame);
        vignette_button->setObjectName(QString::fromUtf8("vignette_button"));
        vignette_button->setGeometry(QRect(10, 550, 23, 23));
        vignette_button->setStyleSheet(QString::fromUtf8("#vignette_button{\n"
"background-color : transparent;\n"
"border-image : url(:/img/vignette.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        visite_button = new QPushButton(frame);
        visite_button->setObjectName(QString::fromUtf8("visite_button"));
        visite_button->setGeometry(QRect(10, 590, 23, 23));
        visite_button->setStyleSheet(QString::fromUtf8("#visite_button{\n"
"background-color : transparent;\n"
"border-image : url(:/img/visite.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        gestionCompte = new QPushButton(frame);
        gestionCompte->setObjectName(QString::fromUtf8("gestionCompte"));
        gestionCompte->setGeometry(QRect(10, 430, 121, 23));
        QPalette palette44;
        palette44.setBrush(QPalette::Active, QPalette::WindowText, brush65);
        palette44.setBrush(QPalette::Active, QPalette::ButtonText, brush65);
        palette44.setBrush(QPalette::Inactive, QPalette::WindowText, brush65);
        palette44.setBrush(QPalette::Inactive, QPalette::ButtonText, brush65);
        palette44.setBrush(QPalette::Disabled, QPalette::WindowText, brush36);
        palette44.setBrush(QPalette::Disabled, QPalette::ButtonText, brush36);
        gestionCompte->setPalette(palette44);
        gestionCompte->setFont(font33);
        gestionCompte->setStyleSheet(QString::fromUtf8("#gestionCompte\n"
"{\n"
"background-color : transparent;\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        gestionConge = new QPushButton(frame);
        gestionConge->setObjectName(QString::fromUtf8("gestionConge"));
        gestionConge->setGeometry(QRect(10, 470, 121, 23));
        QPalette palette45;
        palette45.setBrush(QPalette::Active, QPalette::WindowText, brush65);
        QBrush brush66(QColor(45, 45, 45, 255));
        brush66.setStyle(Qt::SolidPattern);
        palette45.setBrush(QPalette::Active, QPalette::Button, brush66);
        palette45.setBrush(QPalette::Active, QPalette::ButtonText, brush65);
        palette45.setBrush(QPalette::Active, QPalette::Base, brush66);
        palette45.setBrush(QPalette::Active, QPalette::Window, brush66);
        palette45.setBrush(QPalette::Inactive, QPalette::WindowText, brush65);
        palette45.setBrush(QPalette::Inactive, QPalette::Button, brush66);
        palette45.setBrush(QPalette::Inactive, QPalette::ButtonText, brush65);
        palette45.setBrush(QPalette::Inactive, QPalette::Base, brush66);
        palette45.setBrush(QPalette::Inactive, QPalette::Window, brush66);
        palette45.setBrush(QPalette::Disabled, QPalette::WindowText, brush36);
        palette45.setBrush(QPalette::Disabled, QPalette::Button, brush66);
        palette45.setBrush(QPalette::Disabled, QPalette::ButtonText, brush36);
        palette45.setBrush(QPalette::Disabled, QPalette::Base, brush66);
        palette45.setBrush(QPalette::Disabled, QPalette::Window, brush66);
        gestionConge->setPalette(palette45);
        gestionConge->setFont(font33);
        gestionConge->setStyleSheet(QString::fromUtf8("#gestionConge{\n"
"background-color : transparent;\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        assu_pushButton = new QPushButton(frame);
        assu_pushButton->setObjectName(QString::fromUtf8("assu_pushButton"));
        assu_pushButton->setGeometry(QRect(10, 510, 141, 23));
        QPalette palette46;
        palette46.setBrush(QPalette::Active, QPalette::WindowText, brush65);
        palette46.setBrush(QPalette::Active, QPalette::Button, brush66);
        palette46.setBrush(QPalette::Active, QPalette::ButtonText, brush65);
        palette46.setBrush(QPalette::Active, QPalette::Base, brush66);
        palette46.setBrush(QPalette::Active, QPalette::Window, brush66);
        palette46.setBrush(QPalette::Inactive, QPalette::WindowText, brush65);
        palette46.setBrush(QPalette::Inactive, QPalette::Button, brush66);
        palette46.setBrush(QPalette::Inactive, QPalette::ButtonText, brush65);
        palette46.setBrush(QPalette::Inactive, QPalette::Base, brush66);
        palette46.setBrush(QPalette::Inactive, QPalette::Window, brush66);
        palette46.setBrush(QPalette::Disabled, QPalette::WindowText, brush36);
        palette46.setBrush(QPalette::Disabled, QPalette::Button, brush66);
        palette46.setBrush(QPalette::Disabled, QPalette::ButtonText, brush36);
        palette46.setBrush(QPalette::Disabled, QPalette::Base, brush66);
        palette46.setBrush(QPalette::Disabled, QPalette::Window, brush66);
        assu_pushButton->setPalette(palette46);
        assu_pushButton->setFont(font33);
        assu_pushButton->setStyleSheet(QString::fromUtf8("#assu_pushButton{\n"
"background-color : transparent;\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        vignette_pushButton = new QPushButton(frame);
        vignette_pushButton->setObjectName(QString::fromUtf8("vignette_pushButton"));
        vignette_pushButton->setGeometry(QRect(10, 550, 121, 23));
        QPalette palette47;
        palette47.setBrush(QPalette::Active, QPalette::WindowText, brush65);
        palette47.setBrush(QPalette::Active, QPalette::Button, brush66);
        palette47.setBrush(QPalette::Active, QPalette::ButtonText, brush65);
        palette47.setBrush(QPalette::Active, QPalette::Base, brush66);
        palette47.setBrush(QPalette::Active, QPalette::Window, brush66);
        palette47.setBrush(QPalette::Inactive, QPalette::WindowText, brush65);
        palette47.setBrush(QPalette::Inactive, QPalette::Button, brush66);
        palette47.setBrush(QPalette::Inactive, QPalette::ButtonText, brush65);
        palette47.setBrush(QPalette::Inactive, QPalette::Base, brush66);
        palette47.setBrush(QPalette::Inactive, QPalette::Window, brush66);
        palette47.setBrush(QPalette::Disabled, QPalette::WindowText, brush36);
        palette47.setBrush(QPalette::Disabled, QPalette::Button, brush66);
        palette47.setBrush(QPalette::Disabled, QPalette::ButtonText, brush36);
        palette47.setBrush(QPalette::Disabled, QPalette::Base, brush66);
        palette47.setBrush(QPalette::Disabled, QPalette::Window, brush66);
        vignette_pushButton->setPalette(palette47);
        vignette_pushButton->setFont(font33);
        vignette_pushButton->setStyleSheet(QString::fromUtf8("#vignette_pushButton{\n"
"background-color : transparent;\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        visite_pushButton = new QPushButton(frame);
        visite_pushButton->setObjectName(QString::fromUtf8("visite_pushButton"));
        visite_pushButton->setGeometry(QRect(10, 590, 141, 23));
        QPalette palette48;
        palette48.setBrush(QPalette::Active, QPalette::WindowText, brush65);
        palette48.setBrush(QPalette::Active, QPalette::Button, brush66);
        palette48.setBrush(QPalette::Active, QPalette::ButtonText, brush65);
        palette48.setBrush(QPalette::Active, QPalette::Base, brush66);
        palette48.setBrush(QPalette::Active, QPalette::Window, brush66);
        palette48.setBrush(QPalette::Inactive, QPalette::WindowText, brush65);
        palette48.setBrush(QPalette::Inactive, QPalette::Button, brush66);
        palette48.setBrush(QPalette::Inactive, QPalette::ButtonText, brush65);
        palette48.setBrush(QPalette::Inactive, QPalette::Base, brush66);
        palette48.setBrush(QPalette::Inactive, QPalette::Window, brush66);
        palette48.setBrush(QPalette::Disabled, QPalette::WindowText, brush36);
        palette48.setBrush(QPalette::Disabled, QPalette::Button, brush66);
        palette48.setBrush(QPalette::Disabled, QPalette::ButtonText, brush36);
        palette48.setBrush(QPalette::Disabled, QPalette::Base, brush66);
        palette48.setBrush(QPalette::Disabled, QPalette::Window, brush66);
        visite_pushButton->setPalette(palette48);
        visite_pushButton->setFont(font33);
        visite_pushButton->setStyleSheet(QString::fromUtf8("#visite_pushButton{\n"
"background-color : transparent;\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        accueil_button = new QPushButton(frame);
        accueil_button->setObjectName(QString::fromUtf8("accueil_button"));
        accueil_button->setGeometry(QRect(50, 30, 20, 20));
        accueil_button->setStyleSheet(QString::fromUtf8("#accueil_button{\n"
"background-color : transparent;\n"
"border-image : url(:/img/home.png);\n"
"background : none;\n"
"border : none;\n"
"background-repeat : none;\n"
"}"));
        titre = new QLabel(Dialog);
        titre->setObjectName(QString::fromUtf8("titre"));
        titre->setGeometry(QRect(510, 0, 421, 41));
        QPalette palette49;
        palette49.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette49.setBrush(QPalette::Active, QPalette::Button, brush);
        palette49.setBrush(QPalette::Active, QPalette::Light, brush);
        palette49.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette49.setBrush(QPalette::Active, QPalette::Dark, brush62);
        palette49.setBrush(QPalette::Active, QPalette::Mid, brush63);
        palette49.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette49.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette49.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette49.setBrush(QPalette::Active, QPalette::Base, brush);
        palette49.setBrush(QPalette::Active, QPalette::Window, brush);
        palette49.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette49.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette49.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette49.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette49.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette49.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette49.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette49.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette49.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette49.setBrush(QPalette::Inactive, QPalette::Dark, brush62);
        palette49.setBrush(QPalette::Inactive, QPalette::Mid, brush63);
        palette49.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette49.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette49.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette49.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette49.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette49.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette49.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette49.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette49.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette49.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette49.setBrush(QPalette::Disabled, QPalette::WindowText, brush62);
        palette49.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette49.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette49.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette49.setBrush(QPalette::Disabled, QPalette::Dark, brush62);
        palette49.setBrush(QPalette::Disabled, QPalette::Mid, brush63);
        palette49.setBrush(QPalette::Disabled, QPalette::Text, brush62);
        palette49.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette49.setBrush(QPalette::Disabled, QPalette::ButtonText, brush62);
        palette49.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette49.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette49.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette49.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette49.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette49.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette49.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        titre->setPalette(palette49);
        QFont font34;
        font34.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font34.setPointSize(20);
        font34.setBold(true);
        font34.setWeight(75);
        titre->setFont(font34);
        menu->raise();
        stackedMain->raise();
        maintenance_button->raise();
        frame->raise();
        titre->raise();

        retranslateUi(Dialog);

        stackedMain->setCurrentIndex(5);
        toolBox->setCurrentIndex(2);
        stacked_reservation->setCurrentIndex(2);
        stacked_location->setCurrentIndex(2);
        tabWidget_2->setCurrentIndex(0);
        stackedWidget->setCurrentIndex(0);
        stackedWidget_2->setCurrentIndex(0);
        stackedWidget_3->setCurrentIndex(2);
        stackedWidgetEmp->setCurrentIndex(0);
        stackedWidgetConge->setCurrentIndex(1);
        stackedAssu->setCurrentIndex(0);
        stackedVign->setCurrentIndex(0);
        stackedVis->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label_11->setText(QCoreApplication::translate("Dialog", "En r\303\250gle", nullptr));
        label_12->setText(QCoreApplication::translate("Dialog", "Date d'expiration proche", nullptr));
        label_7->setText(QCoreApplication::translate("Dialog", "Date d'expiration d\303\251pass\303\251e", nullptr));
        vAssu->setText(QString());
        oAssu->setText(QString());
        rAssu->setText(QString());
        toolBox->setItemText(toolBox->indexOf(page), QCoreApplication::translate("Dialog", "Assurances", nullptr));
        label_13->setText(QCoreApplication::translate("Dialog", "Date d'expiration proche", nullptr));
        label_14->setText(QCoreApplication::translate("Dialog", "En r\303\250gle", nullptr));
        label_15->setText(QCoreApplication::translate("Dialog", "Date d'expiration d\303\251pass\303\251e", nullptr));
        vVis->setText(QString());
        oVis->setText(QString());
        rVis->setText(QString());
        toolBox->setItemText(toolBox->indexOf(page_2), QCoreApplication::translate("Dialog", "Visites Techniques", nullptr));
        label_18->setText(QCoreApplication::translate("Dialog", "Date d'expiration proche", nullptr));
        label_30->setText(QCoreApplication::translate("Dialog", "En r\303\250gle", nullptr));
        label_31->setText(QCoreApplication::translate("Dialog", "Date d'expiration d\303\251pass\303\251e", nullptr));
        vVign->setText(QString());
        oVign->setText(QString());
        rVign->setText(QString());
        toolBox->setItemText(toolBox->indexOf(page_3), QCoreApplication::translate("Dialog", "Vignette", nullptr));
        recherche_res->setText(QString());
        recherche_res->setPlaceholderText(QCoreApplication::translate("Dialog", "Taper ici pour rechercher", nullptr));
        label_34->setText(QCoreApplication::translate("Dialog", "Recherche rapide :", nullptr));
#if QT_CONFIG(tooltip)
        rafraichir_res->setToolTip(QCoreApplication::translate("Dialog", "Rafraichir", nullptr));
#endif // QT_CONFIG(tooltip)
        rafraichir_res->setText(QString());
#if QT_CONFIG(tooltip)
        modifier_res->setToolTip(QCoreApplication::translate("Dialog", "Modifier", nullptr));
#endif // QT_CONFIG(tooltip)
        modifier_res->setText(QString());
#if QT_CONFIG(tooltip)
        ajouter_res->setToolTip(QCoreApplication::translate("Dialog", "Ajouter", nullptr));
#endif // QT_CONFIG(tooltip)
        ajouter_res->setText(QString());
#if QT_CONFIG(tooltip)
        supprimer_res->setToolTip(QCoreApplication::translate("Dialog", "Supprimer", nullptr));
#endif // QT_CONFIG(tooltip)
        supprimer_res->setText(QString());
        label_42->setText(QCoreApplication::translate("Dialog", "S\303\251lectionnez la r\303\251servation que vous voulez g\303\251rer :", nullptr));
#if QT_CONFIG(tooltip)
        history->setToolTip(QCoreApplication::translate("Dialog", "Historique", nullptr));
#endif // QT_CONFIG(tooltip)
        history->setText(QString());
        tri_res_comboBox->setItemText(0, QCoreApplication::translate("Dialog", "Trier par ID", nullptr));
        tri_res_comboBox->setItemText(1, QCoreApplication::translate("Dialog", "Trier par ID client", nullptr));
        tri_res_comboBox->setItemText(2, QCoreApplication::translate("Dialog", "Trier par matricule", nullptr));
        tri_res_comboBox->setItemText(3, QCoreApplication::translate("Dialog", "Trier par date d\303\251part", nullptr));

        groupBox_3->setTitle(QCoreApplication::translate("Dialog", "Ajouter une r\303\251servation", nullptr));
        valider_ajout_res->setText(QCoreApplication::translate("Dialog", "Sauvegarder", nullptr));
        label_39->setText(QCoreApplication::translate("Dialog", "Id Reservation :", nullptr));
        detailsLocataire->setTitle(QCoreApplication::translate("Dialog", "D\303\251tails locataire", nullptr));
        label_38->setText(QCoreApplication::translate("Dialog", "ID", nullptr));
        label_51->setText(QCoreApplication::translate("Dialog", "Soci\303\250te", nullptr));
        res_nomCl->setText(QString());
        label_52->setText(QCoreApplication::translate("Dialog", "Nom", nullptr));
        label_53->setText(QCoreApplication::translate("Dialog", "Prenom", nullptr));
        label_55->setText(QCoreApplication::translate("Dialog", "Nouveau client ? cliquez ici pour l'ajouter :", nullptr));
        res_nv_client->setText(QString());
        groupBox_5->setTitle(QCoreApplication::translate("Dialog", "D\303\251tails locations", nullptr));
        label_36->setText(QCoreApplication::translate("Dialog", "Date arriv\303\251e", nullptr));
        label_35->setText(QCoreApplication::translate("Dialog", "Date d\303\251part", nullptr));
        label_56->setText(QCoreApplication::translate("Dialog", "Nb jours", nullptr));
        res_nbJ->setText(QString());
        groupBox_6->setTitle(QCoreApplication::translate("Dialog", "D\303\251tails v\303\251hicule", nullptr));
        label_8->setText(QCoreApplication::translate("Dialog", "Matricule", nullptr));
        label_57->setText(QCoreApplication::translate("Dialog", "Marque", nullptr));
        label_58->setText(QCoreApplication::translate("Dialog", "Mod\303\250le", nullptr));
        label_59->setText(QCoreApplication::translate("Dialog", "Compteur", nullptr));
        label_60->setText(QCoreApplication::translate("Dialog", "Prix", nullptr));
        label_61->setText(QCoreApplication::translate("Dialog", "/j", nullptr));
        label_62->setText(QCoreApplication::translate("Dialog", "/s", nullptr));
        label_63->setText(QCoreApplication::translate("Dialog", "/m", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("Dialog", "D\303\251tails devis", nullptr));
        label_50->setText(QCoreApplication::translate("Dialog", "Remise %", nullptr));
        label_37->setText(QCoreApplication::translate("Dialog", "Total HT", nullptr));
        label_49->setText(QCoreApplication::translate("Dialog", "Total TTC", nullptr));
        label_64->setText(QCoreApplication::translate("Dialog", "Total remise", nullptr));
        label_65->setText(QCoreApplication::translate("Dialog", "Total g\303\251n\303\251ral", nullptr));
        label_66->setText(QCoreApplication::translate("Dialog", "TVA %", nullptr));
        res_calculer->setText(QString());
        afficher_res->setText(QString());
        valider_modif_res->setText(QCoreApplication::translate("Dialog", "Sauvegarder", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("Dialog", "Modifier une r\303\251servation", nullptr));
        label_47->setText(QCoreApplication::translate("Dialog", "Id r\303\251servation", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("Dialog", "D\303\251tails devis", nullptr));
        label_83->setText(QCoreApplication::translate("Dialog", "Remise %", nullptr));
        label_45->setText(QCoreApplication::translate("Dialog", "Total HT", nullptr));
        label_84->setText(QCoreApplication::translate("Dialog", "Total TTC", nullptr));
        label_85->setText(QCoreApplication::translate("Dialog", "Total remise", nullptr));
        label_86->setText(QCoreApplication::translate("Dialog", "Total g\303\251n\303\251ral", nullptr));
        label_87->setText(QCoreApplication::translate("Dialog", "TVA %", nullptr));
        res_calculer_3->setText(QString());
        detailsLocataire_2->setTitle(QCoreApplication::translate("Dialog", "D\303\251tails locataire", nullptr));
        label_90->setText(QCoreApplication::translate("Dialog", "ID", nullptr));
        label_91->setText(QCoreApplication::translate("Dialog", "Soci\303\250te", nullptr));
        res_nomCl_3->setText(QString());
        label_92->setText(QCoreApplication::translate("Dialog", "Nom", nullptr));
        label_93->setText(QCoreApplication::translate("Dialog", "Prenom", nullptr));
        label_94->setText(QCoreApplication::translate("Dialog", "Nouveau client ? cliquez ici pour l'ajouter :", nullptr));
        res_nv_client_3->setText(QString());
        groupBox_9->setTitle(QCoreApplication::translate("Dialog", "D\303\251tails locations", nullptr));
        label_46->setText(QCoreApplication::translate("Dialog", "Date arriv\303\251e", nullptr));
        label_88->setText(QCoreApplication::translate("Dialog", "Date d\303\251part", nullptr));
        label_89->setText(QCoreApplication::translate("Dialog", "Nb jours", nullptr));
        res_nbJ_3->setText(QString());
        groupBox_10->setTitle(QCoreApplication::translate("Dialog", "D\303\251tails v\303\251hicule", nullptr));
        label_95->setText(QCoreApplication::translate("Dialog", "Matricule", nullptr));
        label_96->setText(QCoreApplication::translate("Dialog", "Marque", nullptr));
        label_97->setText(QCoreApplication::translate("Dialog", "Mod\303\250le", nullptr));
        label_98->setText(QCoreApplication::translate("Dialog", "Compteur", nullptr));
        label_99->setText(QCoreApplication::translate("Dialog", "Prix", nullptr));
        label_100->setText(QCoreApplication::translate("Dialog", "/j", nullptr));
        label_101->setText(QCoreApplication::translate("Dialog", "/s", nullptr));
        label_102->setText(QCoreApplication::translate("Dialog", "/m", nullptr));
        afficher_res_2->setText(QString());
        recherche->setText(QString());
        recherche->setPlaceholderText(QCoreApplication::translate("Dialog", "Taper ici pour rechercher", nullptr));
        label_33->setText(QCoreApplication::translate("Dialog", "Recherche rapide :", nullptr));
#if QT_CONFIG(tooltip)
        rafraichir->setToolTip(QCoreApplication::translate("Dialog", "Rafraichir", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        rafraichir->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        rafraichir->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        rafraichir->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        rafraichir->setText(QString());
#if QT_CONFIG(tooltip)
        supprimer_loc->setToolTip(QCoreApplication::translate("Dialog", "Supprimer", nullptr));
#endif // QT_CONFIG(tooltip)
        supprimer_loc->setText(QString());
#if QT_CONFIG(tooltip)
        modifier_loc->setToolTip(QCoreApplication::translate("Dialog", "Modifier", nullptr));
#endif // QT_CONFIG(tooltip)
        modifier_loc->setText(QString());
#if QT_CONFIG(tooltip)
        ajouter_loc->setToolTip(QCoreApplication::translate("Dialog", "Ajouter", nullptr));
#endif // QT_CONFIG(tooltip)
        ajouter_loc->setText(QString());
        label_40->setText(QCoreApplication::translate("Dialog", "S\303\251lectionnez la location que vous voulez g\303\251rer :", nullptr));
        tri_loc_comboBox->setItemText(0, QCoreApplication::translate("Dialog", "Trier par ID", nullptr));
        tri_loc_comboBox->setItemText(1, QCoreApplication::translate("Dialog", "Trier par ID r\303\251servation", nullptr));
        tri_loc_comboBox->setItemText(2, QCoreApplication::translate("Dialog", "Trier par ID client", nullptr));
        tri_loc_comboBox->setItemText(3, QCoreApplication::translate("Dialog", "Trier par matricule", nullptr));
        tri_loc_comboBox->setItemText(4, QCoreApplication::translate("Dialog", "Trier par date d\303\251part", nullptr));

        stat->setText(QString());
#if QT_CONFIG(tooltip)
        pdfRes->setToolTip(QCoreApplication::translate("Dialog", "G\303\251nerer un fichier PDF", nullptr));
#endif // QT_CONFIG(tooltip)
        pdfRes->setText(QString());
        ajouter_2->setTitle(QCoreApplication::translate("Dialog", "Ajouter un contrat de location", nullptr));
        label_19->setText(QCoreApplication::translate("Dialog", "ID r\303\251servation", nullptr));
        detailsRes->setTitle(QCoreApplication::translate("Dialog", "D\303\251tails r\303\251servation", nullptr));
        label_105->setText(QCoreApplication::translate("Dialog", "Soci\303\251t\303\251", nullptr));
        label_106->setText(QCoreApplication::translate("Dialog", "Matricule", nullptr));
        label_107->setText(QCoreApplication::translate("Dialog", "Nom", nullptr));
        label_108->setText(QCoreApplication::translate("Dialog", "Prenom", nullptr));
        label_109->setText(QCoreApplication::translate("Dialog", "Date d\303\251part", nullptr));
        label_110->setText(QCoreApplication::translate("Dialog", "Date Arriv\303\251e", nullptr));
        label_111->setText(QCoreApplication::translate("Dialog", "Marque", nullptr));
        label_112->setText(QCoreApplication::translate("Dialog", "Mod\303\250le", nullptr));
        label_113->setText(QCoreApplication::translate("Dialog", "TOTAL", nullptr));
        label_114->setText(QCoreApplication::translate("Dialog", "Id Client", nullptr));
        detailsSortie->setTitle(QCoreApplication::translate("Dialog", "D\303\251tails  Sortie", nullptr));
        label_25->setText(QCoreApplication::translate("Dialog", "Carb. D\303\251part", nullptr));
        label_21->setText(QCoreApplication::translate("Dialog", "KM D\303\251part", nullptr));
        label_22->setText(QCoreApplication::translate("Dialog", "Caution", nullptr));
        label_104->setText(QCoreApplication::translate("Dialog", "Reste \303\240 payer", nullptr));
        loc_carbD_comboBox->setItemText(0, QCoreApplication::translate("Dialog", "1/4", nullptr));
        loc_carbD_comboBox->setItemText(1, QCoreApplication::translate("Dialog", "2/4", nullptr));
        loc_carbD_comboBox->setItemText(2, QCoreApplication::translate("Dialog", "3/4", nullptr));
        loc_carbD_comboBox->setItemText(3, QCoreApplication::translate("Dialog", "4/4", nullptr));

        label_20->setText(QCoreApplication::translate("Dialog", "ID location", nullptr));
        valider_ajout->setText(QCoreApplication::translate("Dialog", "Ajouter", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "Liste des r\303\251servations", nullptr));
        afficher_loc->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("Dialog", "Modifier un contrat de location", nullptr));
        label_27->setText(QCoreApplication::translate("Dialog", "Id r\303\251servation", nullptr));
        label_24->setText(QCoreApplication::translate("Dialog", "Id Location", nullptr));
        valider_modif->setText(QCoreApplication::translate("Dialog", "Modifier", nullptr));
        details_sortie->setTitle(QCoreApplication::translate("Dialog", "D\303\251tails sortie", nullptr));
        loc_carbD_comboBox_2->setItemText(0, QCoreApplication::translate("Dialog", "1/4", nullptr));
        loc_carbD_comboBox_2->setItemText(1, QCoreApplication::translate("Dialog", "2/4", nullptr));
        loc_carbD_comboBox_2->setItemText(2, QCoreApplication::translate("Dialog", "3/4", nullptr));
        loc_carbD_comboBox_2->setItemText(3, QCoreApplication::translate("Dialog", "4/4", nullptr));

        label_23->setText(QCoreApplication::translate("Dialog", "Carb. d\303\251part", nullptr));
        label_26->setText(QCoreApplication::translate("Dialog", "Km d\303\251part", nullptr));
        details_entree->setTitle(QCoreApplication::translate("Dialog", "D\303\251tails Entr\303\251e", nullptr));
        loc_carbA_comboBox->setItemText(0, QCoreApplication::translate("Dialog", "1/4", nullptr));
        loc_carbA_comboBox->setItemText(1, QCoreApplication::translate("Dialog", "2/4", nullptr));
        loc_carbA_comboBox->setItemText(2, QCoreApplication::translate("Dialog", "3/4", nullptr));
        loc_carbA_comboBox->setItemText(3, QCoreApplication::translate("Dialog", "4/4", nullptr));

        label_28->setText(QCoreApplication::translate("Dialog", "Carb. arriv\303\251e", nullptr));
        label_29->setText(QCoreApplication::translate("Dialog", "Km arriv\303\251e", nullptr));
        details_paiment->setTitle(QCoreApplication::translate("Dialog", "D\303\251tails paiement", nullptr));
        label_41->setText(QCoreApplication::translate("Dialog", "Reste \303\240 payer", nullptr));
        label_32->setText(QCoreApplication::translate("Dialog", "Caution", nullptr));
        afficher_loc_2->setText(QString());
        Stat->setTitle(QCoreApplication::translate("Dialog", "Statistiques", nullptr));
        afficher_loc_3->setText(QString());
        m_afficher->setText(QCoreApplication::translate("Dialog", "Afficher les clients morales ", nullptr));
        label_16->setText(QCoreApplication::translate("Dialog", "AJOUTER UN CLIENT MORALE", nullptr));
        groupBox_17->setTitle(QCoreApplication::translate("Dialog", "Infos d'ajout", nullptr));
        cin_16->setText(QCoreApplication::translate("Dialog", "ID", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Dialog", "AJOUTER", nullptr));
        cin->setText(QCoreApplication::translate("Dialog", "NOM DE LA SOCIETE", nullptr));
        cin_6->setText(QCoreApplication::translate("Dialog", "E_MAIL", nullptr));
        cin_7->setText(QCoreApplication::translate("Dialog", "NUMERO DU TEL:", nullptr));
        cin_3->setText(QCoreApplication::translate("Dialog", "CODE FISCALE", nullptr));
        cin_4->setText(QCoreApplication::translate("Dialog", "ADRESSE", nullptr));
        cin_5->setText(QCoreApplication::translate("Dialog", "NOM DU PROPRIETAIRE", nullptr));
        label_17->setText(QCoreApplication::translate("Dialog", "MODIFIER UN CLIENT MORALE", nullptr));
        cin_14->setText(QCoreApplication::translate("Dialog", "CHOISIR L'ID DU CLIENT A MODIFIER  :", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Dialog", "MODIFIER", nullptr));
        comboBox_20->setItemText(0, QCoreApplication::translate("Dialog", "Trier par proprietaire", nullptr));
        comboBox_20->setItemText(1, QCoreApplication::translate("Dialog", "Trier par id", nullptr));
        comboBox_20->setItemText(2, QCoreApplication::translate("Dialog", "Trier par nom", nullptr));

        label_122->setText(QCoreApplication::translate("Dialog", "MODIFIER UN CLIENT MORALE", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Dialog", "Infos de modfication", nullptr));
        cin_8->setText(QCoreApplication::translate("Dialog", "NOM DU PROPRIETAIRE", nullptr));
        cin_12->setText(QCoreApplication::translate("Dialog", "CODE FISCALE", nullptr));
        cin_10->setText(QCoreApplication::translate("Dialog", "NUMERO DU TEL", nullptr));
        cin_9->setText(QCoreApplication::translate("Dialog", "ADRESSE", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Dialog", "MODIFIER", nullptr));
        cin_13->setText(QCoreApplication::translate("Dialog", "E_MAIL", nullptr));
        lineEdit_12->setText(QString());
        cin_15->setText(QCoreApplication::translate("Dialog", "CHOISIR L'ID DU CLIENT A SUPPRIMER :", nullptr));
        pushButton_14->setText(QCoreApplication::translate("Dialog", "SUPPRIMER", nullptr));
        label_133->setText(QCoreApplication::translate("Dialog", "SUPPRIMER UN CLIENT MORALE", nullptr));
        comboBox_19->setItemText(0, QCoreApplication::translate("Dialog", "Trier par proprietaire", nullptr));
        comboBox_19->setItemText(1, QCoreApplication::translate("Dialog", "Trier par id", nullptr));
        comboBox_19->setItemText(2, QCoreApplication::translate("Dialog", "Trier par nom", nullptr));

        label_134->setText(QCoreApplication::translate("Dialog", "AFFICHER LES CLIENT MORALE", nullptr));
        comboBox_15->setItemText(0, QCoreApplication::translate("Dialog", "Trier par proprietaire", nullptr));
        comboBox_15->setItemText(1, QCoreApplication::translate("Dialog", "Trier par id", nullptr));
        comboBox_15->setItemText(2, QCoreApplication::translate("Dialog", "Trier par nom", nullptr));

        m_afficher_3->setText(QCoreApplication::translate("Dialog", "cree un fichier PDF des clients", nullptr));
        m_ajouter->setText(QCoreApplication::translate("Dialog", "Ajouter un client morale", nullptr));
        m_modifier->setText(QCoreApplication::translate("Dialog", "Modifier un client morale", nullptr));
        m_supprimer->setText(QCoreApplication::translate("Dialog", "Supprimer un client morale", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(mo), QCoreApplication::translate("Dialog", "Client Morale", nullptr));
        p_ajouter->setText(QCoreApplication::translate("Dialog", "Ajouter un client physique", nullptr));
        p_afficher->setText(QCoreApplication::translate("Dialog", "Afficher les clients physiques", nullptr));
        label_135->setText(QCoreApplication::translate("Dialog", "AJOUTER UN CLIENT PHYSIQUE", nullptr));
        groupBox_18->setTitle(QCoreApplication::translate("Dialog", "Infos d'ajout", nullptr));
        cin_20->setText(QCoreApplication::translate("Dialog", "E_MAIL", nullptr));
        cin_21->setText(QCoreApplication::translate("Dialog", "NUMERO DU TEL", nullptr));
        cin_18->setText(QCoreApplication::translate("Dialog", "ADRESSE", nullptr));
        cin_22->setText(QCoreApplication::translate("Dialog", "ID", nullptr));
        cin_17->setText(QCoreApplication::translate("Dialog", "NOM", nullptr));
        cin_31->setText(QCoreApplication::translate("Dialog", "DATE DE NAISSANCE", nullptr));
        cin_2->setText(QCoreApplication::translate("Dialog", "CIN", nullptr));
        cin_19->setText(QCoreApplication::translate("Dialog", "PRENOM", nullptr));
        pushButton_16->setText(QCoreApplication::translate("Dialog", "AJOUTER", nullptr));
        label_136->setText(QCoreApplication::translate("Dialog", "MODIFIER UN CLIENT PHYSIQUE", nullptr));
        cin_23->setText(QCoreApplication::translate("Dialog", "SAISIR L'ID DU CLIENT A MODIFIER  :", nullptr));
        pushButton_17->setText(QCoreApplication::translate("Dialog", "MODIFIER", nullptr));
        comboBox_27->setItemText(0, QCoreApplication::translate("Dialog", "Trier par id", nullptr));
        comboBox_27->setItemText(1, QCoreApplication::translate("Dialog", "Trier par date", nullptr));
        comboBox_27->setItemText(2, QCoreApplication::translate("Dialog", "Trier par nom", nullptr));

        label_137->setText(QCoreApplication::translate("Dialog", "MODIFIER UN CLIENT PHYSIQUE", nullptr));
        groupBox_19->setTitle(QCoreApplication::translate("Dialog", "infos de modification", nullptr));
        pushButton_19->setText(QCoreApplication::translate("Dialog", "MODIFIER", nullptr));
        cin_24->setText(QCoreApplication::translate("Dialog", "PRENOM", nullptr));
        cin_28->setText(QCoreApplication::translate("Dialog", "NOM", nullptr));
        cin_29->setText(QCoreApplication::translate("Dialog", "E_MAIL", nullptr));
        cin_25->setText(QCoreApplication::translate("Dialog", "ADRESSE", nullptr));
        cin_32->setText(QCoreApplication::translate("Dialog", "DATE DE NAISSANCE:", nullptr));
        cin_26->setText(QCoreApplication::translate("Dialog", "NUMERO DU TEL", nullptr));
        cin_30->setText(QCoreApplication::translate("Dialog", "SAISIR L'ID DU CLIENT A SUPPRIMER :", nullptr));
        pushButton_21->setText(QCoreApplication::translate("Dialog", "SUPPRIMER", nullptr));
        label_138->setText(QCoreApplication::translate("Dialog", "SUPPRIMER UN CLIENT PHYSIQUE", nullptr));
        comboBox_30->setItemText(0, QCoreApplication::translate("Dialog", "Trier par id", nullptr));
        comboBox_30->setItemText(1, QCoreApplication::translate("Dialog", "Trier par date", nullptr));
        comboBox_30->setItemText(2, QCoreApplication::translate("Dialog", "Trier par nom", nullptr));

        label_139->setText(QCoreApplication::translate("Dialog", "AFFICHER LES CLIENT PHYSIQUE", nullptr));
        comboBox_29->setItemText(0, QCoreApplication::translate("Dialog", "Trier par id", nullptr));
        comboBox_29->setItemText(1, QCoreApplication::translate("Dialog", "Trier par date", nullptr));
        comboBox_29->setItemText(2, QCoreApplication::translate("Dialog", "Trier par nom", nullptr));

        m_afficher_4->setText(QCoreApplication::translate("Dialog", "cree un fichier PDF des clients", nullptr));
        p_modifier->setText(QCoreApplication::translate("Dialog", "Modifier un client physique", nullptr));
        p_supprimer->setText(QCoreApplication::translate("Dialog", "Supprimer un client physique", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(ph), QCoreApplication::translate("Dialog", "Client Physique", nullptr));
        m_afficher_2->setText(QCoreApplication::translate("Dialog", "Afficher les cartes de fidelit\303\251", nullptr));
        m_ajouter_2->setText(QCoreApplication::translate("Dialog", "Ajouter une C.fidelit\303\251", nullptr));
        label_140->setText(QCoreApplication::translate("Dialog", "LES CARTES DE FIDELITE", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog", "CLIENTS PHYSIQUE", nullptr));
        label_9->setText(QCoreApplication::translate("Dialog", "CLIENTS MORAL", nullptr));
        label_141->setText(QCoreApplication::translate("Dialog", "AJOUTER UNE CARTES DE FIDELITE", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "AJOUTER", nullptr));
        cin_33->setText(QCoreApplication::translate("Dialog", "ID DU CLIENT   :", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "CLIENTS MORAL", nullptr));
        label_10->setText(QCoreApplication::translate("Dialog", "CLIENTS PHYSIQUE", nullptr));
        cin_34->setText(QCoreApplication::translate("Dialog", "ID DE LA CARTE A SUPPRIMER   :", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog", "SUPPRIMER", nullptr));
        label_142->setText(QCoreApplication::translate("Dialog", "CLIENTS PHYSIQUE", nullptr));
        label_143->setText(QCoreApplication::translate("Dialog", "CLIENTS MORAL", nullptr));
        label_144->setText(QCoreApplication::translate("Dialog", "SUPPRIMER UNE CARTES DE FIDELITE", nullptr));
        m_supprimer_2->setText(QCoreApplication::translate("Dialog", "Supprimer une C.fidelit\303\251", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab), QCoreApplication::translate("Dialog", "carte de fidelit\303\251", nullptr));
        label_145->setText(QCoreApplication::translate("Dialog", "Les clients qui ne poss\303\251des pas une carte de fidelit\303\251 :", nullptr));
        label_146->setText(QString());
        label_147->setText(QCoreApplication::translate("Dialog", "Les clients qui poss\303\251des une carte de fidelit\303\251       :", nullptr));
        label_148->setText(QString());
        label_149->setText(QString());
        label_150->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(Stats), QCoreApplication::translate("Dialog", "Stats", nullptr));
        label_151->setText(QCoreApplication::translate("Dialog", "Gestion des employ\303\251s", nullptr));
        comboBoxTriEmp->setItemText(0, QCoreApplication::translate("Dialog", "trier par id ASC", nullptr));
        comboBoxTriEmp->setItemText(1, QCoreApplication::translate("Dialog", "trier par id DESC", nullptr));
        comboBoxTriEmp->setItemText(2, QCoreApplication::translate("Dialog", "dateNaiss ASC", nullptr));
        comboBoxTriEmp->setItemText(3, QCoreApplication::translate("Dialog", "dateNaiss DESC", nullptr));
        comboBoxTriEmp->setItemText(4, QCoreApplication::translate("Dialog", "nom ASC", nullptr));
        comboBoxTriEmp->setItemText(5, QCoreApplication::translate("Dialog", "nom DESC", nullptr));

        label_152->setText(QCoreApplication::translate("Dialog", "Email", nullptr));
        label_153->setText(QCoreApplication::translate("Dialog", "Pr\303\251nom", nullptr));
        label_154->setText(QCoreApplication::translate("Dialog", "S\303\251lectionnez l'employ\303\251 que vous voulez g\303\251rer :", nullptr));
        label_155->setText(QCoreApplication::translate("Dialog", "Nom", nullptr));
        label_156->setText(QCoreApplication::translate("Dialog", "Date de naissance", nullptr));
        pushButton_AjouterEmp->setText(QString());
        groupBox_20->setTitle(QCoreApplication::translate("Dialog", "Employ\303\251", nullptr));
        label_160->setText(QCoreApplication::translate("Dialog", "Nom", nullptr));
        label_161->setText(QCoreApplication::translate("Dialog", "Pr\303\251nom", nullptr));
        label_162->setText(QCoreApplication::translate("Dialog", "Num\303\251ro de Telephone", nullptr));
        label_163->setText(QCoreApplication::translate("Dialog", "Date de naissance", nullptr));
        pushButton_ModifierEmp->setText(QString());
        pushButtonModifierEmp->setText(QString());
        pushButtonSupprimerEmp->setText(QString());
        label_157->setText(QCoreApplication::translate("Dialog", "Solde Cong\303\251", nullptr));
        lineEditRechercherEmp->setText(QString());
        lineEditRechercherEmp->setPlaceholderText(QCoreApplication::translate("Dialog", "Tapez ici pour rechercher...", nullptr));
        label_158->setText(QCoreApplication::translate("Dialog", "Id", nullptr));
        majSoldeConge->setText(QString());
        label_159->setText(QCoreApplication::translate("Dialog", "Num\303\251ro de Telephone", nullptr));
        stat1->setText(QString());
        statBox->setTitle(QCoreApplication::translate("Dialog", "statistique", nullptr));
        returnEmp->setText(QString());
        groupBox_22->setTitle(QCoreApplication::translate("Dialog", "compte", nullptr));
        pushButton_3->setText(QString());
        label_176->setText(QCoreApplication::translate("Dialog", "Id Employ\303\251", nullptr));
        label_177->setText(QCoreApplication::translate("Dialog", "mot de passe (v\303\251rification)", nullptr));
        pushButton_ModifierCompte->setText(QString());
        lineEditRechercherCompte->setText(QString());
        lineEditRechercherCompte->setPlaceholderText(QCoreApplication::translate("Dialog", "Tapez ici pour rechercher...", nullptr));
        deleteCompte->setText(QString());
        comboBoxTriCompte->setItemText(0, QCoreApplication::translate("Dialog", "Trier ASC", nullptr));
        comboBoxTriCompte->setItemText(1, QCoreApplication::translate("Dialog", "Trier DESC", nullptr));

        label_178->setText(QCoreApplication::translate("Dialog", "Login", nullptr));
        pushButton_AjouterCompte->setText(QString());
        label_179->setText(QCoreApplication::translate("Dialog", "Id", nullptr));
        label_180->setText(QCoreApplication::translate("Dialog", "S\303\251lectionnez le compte que vous voulez g\303\251rer :", nullptr));
        label_181->setText(QCoreApplication::translate("Dialog", "mot de passe", nullptr));
        pushButton_modifierEmploye->setText(QString());
        comboBoxRole->setItemText(0, QCoreApplication::translate("Dialog", "Admin", nullptr));
        comboBoxRole->setItemText(1, QCoreApplication::translate("Dialog", "Ressources humaines", nullptr));
        comboBoxRole->setItemText(2, QCoreApplication::translate("Dialog", "Chef maintenance", nullptr));
        comboBoxRole->setItemText(3, QCoreApplication::translate("Dialog", "Chef marketing", nullptr));
        comboBoxRole->setItemText(4, QCoreApplication::translate("Dialog", "Agent de reception", nullptr));

        label_182->setText(QCoreApplication::translate("Dialog", "Gestion des comptes", nullptr));
        label_183->setText(QCoreApplication::translate("Dialog", "Role", nullptr));
        GestionCongeRH->setText(QString());
        GestionCongeEmp->setText(QString());
        label_164->setText(QCoreApplication::translate("Dialog", "Gestion des cong\303\251s", nullptr));
        label_165->setText(QCoreApplication::translate("Dialog", "Calendrier", nullptr));
        label_166->setText(QCoreApplication::translate("Dialog", "Prenez Soin de Vous,", nullptr));
        heart->setText(QString());
        label_167->setText(QCoreApplication::translate("Dialog", "Chers employ\303\251s .", nullptr));
        groupBox_21->setTitle(QCoreApplication::translate("Dialog", "Demande d'un cong\303\251", nullptr));
        editConge->setText(QString());
        label_168->setText(QCoreApplication::translate("Dialog", "Date de reprise", nullptr));
        label_169->setText(QCoreApplication::translate("Dialog", "Date fin", nullptr));
        label_170->setText(QCoreApplication::translate("Dialog", "Motif", nullptr));
        comboBoxMotif->setItemText(0, QCoreApplication::translate("Dialog", "conge de naissance", nullptr));
        comboBoxMotif->setItemText(1, QCoreApplication::translate("Dialog", "conge de maternite", nullptr));
        comboBoxMotif->setItemText(2, QCoreApplication::translate("Dialog", "conge de deces", nullptr));
        comboBoxMotif->setItemText(3, QCoreApplication::translate("Dialog", "conge de mariage", nullptr));
        comboBoxMotif->setItemText(4, QCoreApplication::translate("Dialog", "conge de repos", nullptr));
        comboBoxMotif->setItemText(5, QCoreApplication::translate("Dialog", "conge de maladie", nullptr));
        comboBoxMotif->setItemText(6, QCoreApplication::translate("Dialog", "conge sans solde", nullptr));
        comboBoxMotif->setItemText(7, QCoreApplication::translate("Dialog", "conge exceptionnel", nullptr));
        comboBoxMotif->setItemText(8, QCoreApplication::translate("Dialog", "conge mission", nullptr));

        buttonEnvoyerDemande->setText(QString());
        label_171->setText(QCoreApplication::translate("Dialog", "ID Employ\303\251", nullptr));
        label_172->setText(QCoreApplication::translate("Dialog", "Date d\303\251but", nullptr));
        label_173->setText(QCoreApplication::translate("Dialog", "ID cong\303\251", nullptr));
        modifierConge->setText(QString());
        label_174->setText(QCoreApplication::translate("Dialog", "S\303\251lectionnez le cong\303\251 que vous voulez g\303\251rer :", nullptr));
        deleteConge->setText(QString());
        rechercherConge->setText(QString());
        rechercherConge->setPlaceholderText(QCoreApplication::translate("Dialog", "Tapez ici pour rechercher...", nullptr));
        pushButtonRecherche->setText(QString());
        refuserConge->setText(QString());
        label_175->setText(QCoreApplication::translate("Dialog", "S\303\251lectionnez le cong\303\251 que vous voulez g\303\251rer :", nullptr));
        afficher_3->setText(QString());
        comboBoxTriConge->setItemText(0, QCoreApplication::translate("Dialog", "Trier par Cin", nullptr));
        comboBoxTriConge->setItemText(1, QCoreApplication::translate("Dialog", "Trier par nom", nullptr));
        comboBoxTriConge->setItemText(2, QCoreApplication::translate("Dialog", "date naissance", nullptr));

        accepterConge_2->setText(QString());
        triAssu->setItemText(0, QCoreApplication::translate("Dialog", "Trier par ID", nullptr));
        triAssu->setItemText(1, QCoreApplication::translate("Dialog", "Trier par matricule", nullptr));
        triAssu->setItemText(2, QCoreApplication::translate("Dialog", "Trier par n\302\260Police", nullptr));
        triAssu->setItemText(3, QCoreApplication::translate("Dialog", "Trier par date fin", nullptr));

        label_4->setText(QCoreApplication::translate("Dialog", "Recherche :", nullptr));
        supprimerAssu->setText(QString());
        modifierAssu->setText(QString());
        ajouterAssu->setText(QString());
        groupBox_11->setTitle(QCoreApplication::translate("Dialog", "Ajout", nullptr));
        validerAjoutAssu->setText(QCoreApplication::translate("Dialog", "Ajouter", nullptr));
        label_48->setText(QCoreApplication::translate("Dialog", "Matricule", nullptr));
        label_54->setText(QCoreApplication::translate("Dialog", "Prix", nullptr));
        label_67->setText(QCoreApplication::translate("Dialog", "ID", nullptr));
        label_68->setText(QCoreApplication::translate("Dialog", "Date d\303\251but", nullptr));
        label_69->setText(QCoreApplication::translate("Dialog", "Date Fin", nullptr));
        label_70->setText(QCoreApplication::translate("Dialog", "Type", nullptr));
        label_71->setText(QCoreApplication::translate("Dialog", "N\302\260 police", nullptr));
        typeAssu->setItemText(0, QCoreApplication::translate("Dialog", "Tout risque", nullptr));
        typeAssu->setItemText(1, QCoreApplication::translate("Dialog", "Tiers", nullptr));

        afficherAssu->setText(QString());
        groupBox_12->setTitle(QCoreApplication::translate("Dialog", "Modification", nullptr));
        validerModifAssu->setText(QCoreApplication::translate("Dialog", "Modifier", nullptr));
        label_72->setText(QCoreApplication::translate("Dialog", "Matricule", nullptr));
        label_73->setText(QCoreApplication::translate("Dialog", "Prix", nullptr));
        label_74->setText(QCoreApplication::translate("Dialog", "ID", nullptr));
        label_75->setText(QCoreApplication::translate("Dialog", "Date d\303\251but", nullptr));
        label_76->setText(QCoreApplication::translate("Dialog", "Date Fin", nullptr));
        label_77->setText(QCoreApplication::translate("Dialog", "Type", nullptr));
        label_78->setText(QCoreApplication::translate("Dialog", "N\302\260 police", nullptr));
        typeAssu_2->setItemText(0, QCoreApplication::translate("Dialog", "Tout risque", nullptr));
        typeAssu_2->setItemText(1, QCoreApplication::translate("Dialog", "Tiers", nullptr));

        afficherAssu_2->setText(QString());
        triVign->setItemText(0, QCoreApplication::translate("Dialog", "Trier par code", nullptr));
        triVign->setItemText(1, QCoreApplication::translate("Dialog", "Trier par matricule", nullptr));
        triVign->setItemText(2, QCoreApplication::translate("Dialog", "Trier par date exp", nullptr));

        label->setText(QCoreApplication::translate("Dialog", "Recherche :", nullptr));
        ajouterVign->setText(QString());
        supprimerVign->setText(QString());
        modifierVign->setText(QString());
        groupBox_15->setTitle(QCoreApplication::translate("Dialog", "Ajout", nullptr));
        validerAjoutVign->setText(QCoreApplication::translate("Dialog", "Ajouter", nullptr));
        label_123->setText(QCoreApplication::translate("Dialog", "Matricule", nullptr));
        label_124->setText(QCoreApplication::translate("Dialog", "Prix", nullptr));
        label_125->setText(QCoreApplication::translate("Dialog", "Code", nullptr));
        label_126->setText(QCoreApplication::translate("Dialog", "Date d\303\251but", nullptr));
        label_127->setText(QCoreApplication::translate("Dialog", "Date expiration", nullptr));
        afficherVign->setText(QString());
        groupBox_16->setTitle(QCoreApplication::translate("Dialog", "Modification", nullptr));
        validerModifVign->setText(QCoreApplication::translate("Dialog", "Modifier", nullptr));
        label_128->setText(QCoreApplication::translate("Dialog", "Matricule", nullptr));
        label_129->setText(QCoreApplication::translate("Dialog", "Prix", nullptr));
        label_130->setText(QCoreApplication::translate("Dialog", "Code", nullptr));
        label_131->setText(QCoreApplication::translate("Dialog", "Date d\303\251but", nullptr));
        label_132->setText(QCoreApplication::translate("Dialog", "Date expiration", nullptr));
        afficherVign_2->setText(QString());
        triVis->setItemText(0, QCoreApplication::translate("Dialog", "Trier par ID", nullptr));
        triVis->setItemText(1, QCoreApplication::translate("Dialog", "Trier par matricule", nullptr));
        triVis->setItemText(2, QCoreApplication::translate("Dialog", "Trier par date exp", nullptr));

        label_2->setText(QCoreApplication::translate("Dialog", "Recherche :", nullptr));
        supprimerVis->setText(QString());
        modifierVis->setText(QString());
        ajouterVis->setText(QString());
        groupBox_13->setTitle(QCoreApplication::translate("Dialog", "Ajout", nullptr));
        validerAjoutVis->setText(QCoreApplication::translate("Dialog", "Ajouter", nullptr));
        label_43->setText(QCoreApplication::translate("Dialog", "Matricule", nullptr));
        label_44->setText(QCoreApplication::translate("Dialog", "Prix", nullptr));
        label_79->setText(QCoreApplication::translate("Dialog", "ID", nullptr));
        label_80->setText(QCoreApplication::translate("Dialog", "Date d\303\251but", nullptr));
        label_81->setText(QCoreApplication::translate("Dialog", "Date expiration", nullptr));
        label_82->setText(QCoreApplication::translate("Dialog", "Code", nullptr));
        label_103->setText(QCoreApplication::translate("Dialog", "Compagnie", nullptr));
        afficherVis->setText(QString());
        groupBox_14->setTitle(QCoreApplication::translate("Dialog", "Modification", nullptr));
        validerModifVis->setText(QCoreApplication::translate("Dialog", "Mofidier", nullptr));
        label_115->setText(QCoreApplication::translate("Dialog", "Matricule", nullptr));
        label_116->setText(QCoreApplication::translate("Dialog", "Prix", nullptr));
        label_117->setText(QCoreApplication::translate("Dialog", "ID", nullptr));
        label_118->setText(QCoreApplication::translate("Dialog", "Date d\303\251but", nullptr));
        label_119->setText(QCoreApplication::translate("Dialog", "Date expiration", nullptr));
        label_120->setText(QCoreApplication::translate("Dialog", "Code", nullptr));
        label_121->setText(QCoreApplication::translate("Dialog", "Compagnie", nullptr));
        afficherVis_2->setText(QString());
        menu->setText(QString());
        maintenance_button->setText(QString());
        reservation_button->setText(QString());
        location_button->setText(QString());
        clients_button->setText(QString());
        voitures_button->setText(QString());
        employes_button->setText(QString());
        pc_button->setText(QString());
        offres_button->setText(QString());
        event_button->setText(QString());
        carte_button->setText(QString());
        loc_pushButton->setText(QCoreApplication::translate("Dialog", "Locations", nullptr));
        client_pushButton->setText(QCoreApplication::translate("Dialog", "Clients", nullptr));
        voiture_pushButton->setText(QCoreApplication::translate("Dialog", "  Voitures", nullptr));
        gestionEmp->setText(QCoreApplication::translate("Dialog", " Employ\303\251s", nullptr));
        pc_pushButton->setText(QCoreApplication::translate("Dialog", "Ordinateurs", nullptr));
        offre_pushButton->setText(QCoreApplication::translate("Dialog", " Offres", nullptr));
        event_pushButton->setText(QCoreApplication::translate("Dialog", "Ev\303\250nements", nullptr));
        carte_pushButton->setText(QCoreApplication::translate("Dialog", "  Cartes Fid", nullptr));
        logo->setText(QString());
        res_pushButton->setText(QCoreApplication::translate("Dialog", "R\303\251servations", nullptr));
        compte_button->setText(QString());
        conge_button->setText(QString());
        assu_button->setText(QString());
        vignette_button->setText(QString());
        visite_button->setText(QString());
        gestionCompte->setText(QCoreApplication::translate("Dialog", "Comptes", nullptr));
        gestionConge->setText(QCoreApplication::translate("Dialog", "Cong\303\251s", nullptr));
        assu_pushButton->setText(QCoreApplication::translate("Dialog", "Assurances", nullptr));
        vignette_pushButton->setText(QCoreApplication::translate("Dialog", "Vignette", nullptr));
        visite_pushButton->setText(QCoreApplication::translate("Dialog", "Visites Tech", nullptr));
        accueil_button->setText(QString());
        titre->setText(QCoreApplication::translate("Dialog", "                        Accueil", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
