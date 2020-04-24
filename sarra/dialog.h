#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "evenements.h"
#include "offres.h"

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

    void on_bouttonPajouter_4_clicked();

    void on_bouttonPmodifier_4_clicked();

    void on_bouttonPmail_3_clicked();

    void on_bouttonPstatistique_4_clicked();

    void on_bouttonPajouter_5_clicked();

    void on_pushButton_15_clicked();

    void on_bouttonPrechercher_3_clicked();

    void on_trier_5_activated(int index);

    void on_bouttonPsupprimer_3_clicked();

    void on_afficherBevenement_8_clicked();

    void on_pushButton_ajouter_3_clicked();

    void on_modifierBoffre_3_clicked();

    void on_mail_3_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_ajouter_4_clicked();

    void on_pushButton_ajouteroffres_3_clicked();

    void on_ajoutBmodifier_event_3_clicked();

    void on_pushButton_recherche_5_clicked();

    void on_trier_6_activated(int index);

    void on_supprimer_5_clicked();

private:
    Ui::Dialog *ui;
    evenements tmp ;
    offres tmp1;

};

#endif // DIALOG_H
