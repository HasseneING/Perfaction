#ifndef DIALOG_H
#define DIALOG_H
#include <QString>
#include <QDate>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMainWindow>
#include"employe.h"
#include"compte.h"
#include"conge.h"
#include <QMessageBox>
#include <QDialog>
#include "QColor"

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
    void on_gestionEmp_clicked();

    void on_gestionConge_clicked();

    void on_gestionCompte_clicked();

    void on_lineEditRechercherEmp_textChanged(const QString &arg1);

    void on_pushButton_AjouterEmp_clicked();

    void on_pushButtonModifierEmp_clicked();

    void on_pushButtonSupprimerEmp_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_ModifierEmp_clicked();

    void on_comboBoxTriEmp_activated(int index);

    void on_buttonEnvoyerDemande_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_5_clicked();

    void on_afficher_clicked();

    void on_pushButton_AjouterCompte_clicked();

    void on_pushButton_modifierEmploye_clicked();

    void on_pushButton_clicked();

    void on_pushButton_9_clicked();

    void on_editConge_clicked();

    void on_comboBoxTriEmp_activated(const QString &arg1);

    void on_comboBoxTriCompte_activated(int index);

    void on_comboBoxTriConge_activated(int index);

    void on_idEmployeCompte_currentIndexChanged(const QString &arg1);

private:
    Ui::Dialog *ui;
    compte tmpCompte;
    conge tmpConge;
    employe tmpEmploye;
};

#endif // DIALOG_H
