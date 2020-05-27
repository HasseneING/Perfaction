#ifndef DIALOG_H
#define DIALOG_H

#include "location.h"
#include "reservation.h"
#include <QString>
#include <QDialog>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QVariant>
#include <QMessageBox>

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
    void init();

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

private:
    Ui::Dialog *ui;
    Location tmp;
    reservation res;

};

#endif // DIALOG_H
