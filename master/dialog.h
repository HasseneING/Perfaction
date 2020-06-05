#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <client.h>
#include <carte.h>
#include <fournisseur.h>
#include <voiture.h>
#include <ordinateur.h>

namespace Ui
{
    class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

    int flip;

private slots:

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

    void on_pushButton_38_clicked();

    void on_pushButton_36_clicked();

    void on_pushButton_39_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_24_clicked();

    void on_pushButton_23_clicked();

    void init();

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

public:
    void set_lab(QString a, QString b);

    void test(QString role);

private:
    Ui::Dialog *ui;
    clientmo tmp1;
    clientph tmp2;
    carte tmp3;
    carte tmp4;
};

#endif // DIALOG_H
