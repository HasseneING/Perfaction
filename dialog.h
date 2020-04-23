#ifndef DIALOG_H
#define DIALOG_H

#include "assurance.h"
#include "visite.h"
#include "vignette.h"
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

    void on_validerSupprVign_clicked();

    void on_validerSupprVis_clicked();

    void on_validerSupprAssu_clicked();

    void on_rechercheVign_textChanged(const QString &arg1);

    void on_rechercheVis_textChanged(const QString &arg1);

    void on_rechercheAssu_textChanged(const QString &arg1);

private:
    Ui::Dialog *ui;
    assurance assu;
    vignette vign;
    visite vis;

};

#endif // DIALOG_H
