#include "dialog.h"
#include "ui_dialog.h"
#include "QTextEdit"
#include <QMessageBox>
#include <QValidator>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    setFixedSize(1900,1000);
    ui->stackedWidget->setCurrentIndex(4);
    ui->tableView_5->setModel(tmp1.afficher());
    ui->tableView_6->setModel(tmp2.afficher());
    ui->tableView->setModel(tmp3.afficher());
    ui->tableView2->setModel(tmp4.afficher1());
    ui->lineEdit_18->setValidator( new QIntValidator(0,10, this) );
    ui->lineEdit_2->setValidator( new QIntValidator(0,99999999, this) );
    ui->lineEdit_6->setValidator( new QIntValidator(0,99999999, this) );
    QRegExp re("[a-z-A-Z]{20}");
    QRegExpValidator *validator = new QRegExpValidator(re, this);
    QRegExp re1("[a-z-A-Z]{20}");
    QRegExpValidator *validator1 = new QRegExpValidator(re, this);
    QRegularExpression rx("\\b[A-Z0-9._%+-]+@[A-Z0-9.-]+\\.[A-Z]{2,4}\\b",
                          QRegularExpression::CaseInsensitiveOption);
    ui->lineEdit_4->setValidator(new QRegularExpressionValidator(rx, this));
    ui->lineEdit->setValidator(validator);
    ui->lineEdit_3->setValidator(validator1);
    ui->lineEdit_69->setText("recherche par le cin");
    ui->lineEdit_67->setText("recherche par le cin");
    ui->lineEdit_70->setText("recherche par le cin");
    ui->lineEdit_26->setText("recherche par le nom de la socite");
    ui->lineEdit_25->setText("recherche par le nom de la socite");
    ui->lineEdit_19->setText("recherche par le nom de la socite");
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_m_ajouter_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void Dialog::on_m_modifier_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->tableView_4->setModel(tmp1.afficher());
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT IDC FROM moral");
    ui->combo_2->setModel(model);
}

void Dialog::on_pushButton_7_clicked()
{
    QMessageBox msgBox;
    msgBox.setText("Confirmation de modification.");
    msgBox.setInformativeText("Vous etes sure de modofier ce client?\n");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Cancel);
    msgBox.setIcon(QMessageBox::Question);

    int ret = msgBox.exec();
    switch (ret) {
    case QMessageBox::Yes:
    {
        ui->stackedWidget->setCurrentIndex(2);
        break;
    }

    case QMessageBox::Cancel:
        break;
    }
}

void Dialog::on_pushButton_6_clicked()
{
    int id = ui->combo_2->currentText().toInt();

    QString prop = ui->lineEdit_12->text(),ad = ui->lineEdit_17->text()
            , em = ui->lineEdit_13->text();
    int codef = ui->lineEdit_16->text().toInt(), tel = ui->lineEdit_15->text().toInt();
    clientmo b;
    if(b.modifier(id,tel,em,ad,prop,codef))
    {
        QMessageBox msgBox;
        msgBox.information(nullptr,QObject::tr("Modification du client."),QObject::tr("Client modifié !\n"));
        ui->stackedWidget->setCurrentIndex(4);
    }
    else
    {
        QMessageBox msgBox;
        msgBox.critical(nullptr,QObject::tr("Modification du client."),QObject::tr("Modification impossible !\n"));
    }
}

void Dialog::on_pushButton_clicked()
{
    int id = ui->comboBox->currentText().toInt();
    carte c;
    QDate d = QDate::currentDate();
    if(c.ajouter(id,d))
    {
        QMessageBox msgBox;
        msgBox.information(nullptr,QObject::tr("Ajout d'une carte de fidelité."),QObject::tr("Carte ajouté !\n"));
        ui->stackedWidget_3->setCurrentIndex(0);
    }
    else
    {
        QMessageBox msgBox;
        msgBox.critical(nullptr,QObject::tr("Ajout d'une carte de fidelité."),QObject::tr("Ce client a déja une carte de fidelité !\n"));
    }
}

void Dialog::on_m_supprimer_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT IDC FROM moral");
    ui->combo->setModel(model);
    ui->tableView_7->setModel(tmp1.afficher());
}

void Dialog::on_pushButton_14_clicked()
{
    int id = ui->combo->currentText().toInt();
    QMessageBox msgBox;
    client a;
    msgBox.setText("Confirmation de suppression.");
    msgBox.setInformativeText("Vous etes sure de supprimer ce client?\n");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Cancel);
    msgBox.setIcon(QMessageBox::Question);
    int ret = msgBox.exec();

    switch (ret) {
    case QMessageBox::Yes:
    {
        clientmo b;
        if(b.supprimer(id))
        {
            QMessageBox msgBox;
            msgBox.information(nullptr,QObject::tr("Sppression du client."),QObject::tr("Client supprimer !\n"));
            ui->tableView_7->setModel(tmp1.afficher());
            ui->stackedWidget->setCurrentIndex(3);
            QSqlQueryModel *model = new QSqlQueryModel;
            model->setQuery("SELECT IDC FROM moral");
            ui->combo->setModel(model);
        }
        else
        {
            QMessageBox msgBox;
            msgBox.critical(nullptr,QObject::tr("Sppression du client."),QObject::tr("Suppression impossible !\n"));
        }
        break;
    }

    case QMessageBox::Cancel:
        break;
    }
}


void Dialog::on_m_afficher_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    ui->tableView_5->setModel(tmp1.afficher());
}

void Dialog::on_p_afficher_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(4);
    ui->tableView_6->setModel(tmp2.afficher());
}

void Dialog::on_p_ajouter_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(0);
}

void Dialog::on_p_modifier_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(1);
    ui->tableView_9->setModel(tmp2.afficher());
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT IDC FROM physique");
    ui->comboBox_3->setModel(model);
}

void Dialog::on_pushButton_17_clicked()
{
    QMessageBox msgBox;
    msgBox.setText("Confirmation de modification.");
    msgBox.setInformativeText("Vous etes sure de modofier ce client?\n");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Cancel);
    msgBox.setIcon(QMessageBox::Question);

    int ret = msgBox.exec();
    switch (ret) {
    case QMessageBox::Yes:
    {

        ui->stackedWidget_2->setCurrentIndex(2);
        break;
    }

    case QMessageBox::Cancel:
        break;
    }
}

void Dialog::on_p_supprimer_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(3);
    ui->tableView_77->setModel(tmp2.afficher());
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT IDC FROM physique");
    ui->comboBox_7->setModel(model);
}

void Dialog::on_pushButton_21_clicked()
{
    int id = ui->comboBox_7->currentText().toInt();
    QMessageBox msgBox;
    client a;
    msgBox.setText("Confirmation de suppression.");
    msgBox.setInformativeText("Vous etes sure de supprimer ce client?\n");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Cancel);
    msgBox.setIcon(QMessageBox::Question);
    int ret = msgBox.exec();

    switch (ret) {
    case QMessageBox::Yes:
    {
        clientph b;
        if(b.supprimer(id))
        {
            QMessageBox msgBox;
            msgBox.information(nullptr,QObject::tr("Sppression du client."),QObject::tr("Client supprimer !\n"));
            ui->tableView_7->setModel(tmp1.afficher());
            ui->stackedWidget->setCurrentIndex(3);
        }
        else
        {
            QMessageBox msgBox;
            msgBox.critical(nullptr,QObject::tr("Sppression du client."),QObject::tr("Suppression impossible !\n"));
        }
        break;
    }

    case QMessageBox::Cancel:
        break;
    }
    ui->tableView_77->setModel(tmp2.afficher());
}

void Dialog::on_pushButton_19_clicked()
{
    int id = ui->comboBox_3->currentText().toInt();

    QString nom = ui->lineEdit_44->text(),prenom = ui->lineEdit_40->text(),ad = ui->lineEdit_45->text()
            , em = ui->lineEdit_41->text();
    int tel = ui->lineEdit_43->text().toInt();
    QDate d = ui->dateEdit_2->date();
    clientph b;
    if(b.modifier(id,tel,em,ad,nom,prenom,d))
    {
        QMessageBox msgBox;
        msgBox.information(nullptr,QObject::tr("Modification du client."),QObject::tr("Client modifié !\n"));
        ui->stackedWidget_2->setCurrentIndex(4);
        ui->tableView_6->setModel(tmp2.afficher());
    }
    else
    {
        QMessageBox msgBox;
        msgBox.critical(nullptr,QObject::tr("Modification du client."),QObject::tr("Modification impossible !\n"));
    }
}

void Dialog::on_m_afficher_2_clicked()
{
    ui->stackedWidget_3->setCurrentIndex(0);
    ui->tableView2_3->setModel(tmp3.afficher());
    ui->tableView_3->setModel(tmp4.afficher1());
}

void Dialog::on_m_ajouter_2_clicked()
{
    ui->stackedWidget_3->setCurrentIndex(1);
    ui->tableView2->setModel(tmp3.afficher());
    ui->tableView->setModel(tmp4.afficher1());
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT IDC FROM clients");
    ui->comboBox->setModel(model);
}

void Dialog::on_m_supprimer_2_clicked()
{
    ui->stackedWidget_3->setCurrentIndex(2);
    ui->tableView2_2->setModel(tmp3.afficher());
    ui->tableView_2->setModel(tmp4.afficher1());
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT IDC FROM clients");
    ui->comboBox_2->setModel(model);
}

void Dialog::on_pushButton_5_clicked()
{
    clientmo c(ui->lineEdit_18->text().toInt(),
               ui->lineEdit_6->text().toInt(),
               ui->lineEdit_5->text(),
               ui->lineEdit_4->text(),
               ui->lineEdit->text(),
               ui->lineEdit_3->text(),
               ui->lineEdit_2->text().toInt()
               );
    client x(ui->lineEdit_18->text().toInt(),
             ui->lineEdit_5->text(),
             ui->lineEdit_4->text(),
             ui->lineEdit_6->text().toInt());

    QMessageBox msg;
    if(x.ajouter() && c.ajouter())
    {
        msg.information(nullptr,QObject::tr("AJOUT CLIENT"),QObject::tr("CLIENT MORALE AJOUTE .\n"));
        msg.exec();
        ui->stackedWidget->setCurrentIndex(4);
        ui->tableView_5->setModel(tmp1.afficher());
    }
    else
    {
        msg.critical(nullptr,QObject::tr("AJOUT CLIENT"),QObject::tr("ERREUR D'AJOUT DU CLIENT .\n"));
        msg.exec();
    }
}

void Dialog::on_pushButton_16_clicked()
{
    clientph c(ui->lineEdit_37->text().toInt(),
               ui->lineEdit_24->text().toInt(),
               ui->lineEdit_23->text(),
               ui->lineEdit_22->text(),
               ui->lineEdit_20->text(),
               ui->lineEdit_21->text(),
               ui->lineEdit_7->text().toInt(),
               ui->dateEdit->date()
               );
    client x(ui->lineEdit_37->text().toInt(),
             ui->lineEdit_23->text(),
             ui->lineEdit_22->text(),
             ui->lineEdit_24->text().toInt());

    QMessageBox msg;
    if(x.ajouter() && c.ajouter())
    {
        msg.information(nullptr,QObject::tr("AJOUT CLIENT"),QObject::tr("CLIENT MORALE AJOUTE .\n"));
        msg.exec();
        ui->stackedWidget_2->setCurrentIndex(4);
        ui->tableView_6->setModel(tmp2.afficher());
    }
    else
    {
        msg.critical(nullptr,QObject::tr("AJOUT CLIENT"),QObject::tr("ERREUR D'AJOUT DU CLIENT .\n"));
        msg.exec();
    }
}

void Dialog::on_comboBox_19_textActivated(const QString &arg1)
{
    if(arg1 == "Trier par nom")
    {
        ui->tableView_7->setModel(tmp1.affichernom());
    }
    else if(arg1 == "Trier par id")
    {
        ui->tableView_7->setModel(tmp1.afficherid());
    }
}


void Dialog::on_comboBox_15_textActivated(const QString &arg1)
{
    if(arg1 == "Trier par nom")
    {
        ui->tableView_5->setModel(tmp1.affichernom());
    }
    else if(arg1 == "Trier par id")
    {
        ui->tableView_5->setModel(tmp1.afficherid());
    }
}

void Dialog::on_comboBox_20_textActivated(const QString &arg1)
{
    if(arg1 == "Trier par nom")
    {
        ui->tableView_4->setModel(tmp1.affichernom());
    }
    else if(arg1 == "Trier par id")
    {
        ui->tableView_4->setModel(tmp1.afficherid());
    }
}

void Dialog::on_comboBox_27_currentTextChanged(const QString &arg1)
{
    if(arg1 == "Trier par nom")
    {
        ui->tableView_9->setModel(tmp2.affichernom());
    }
    else if(arg1 == "Trier par id")
    {
        ui->tableView_9->setModel(tmp2.afficherid());
    }
}

void Dialog::on_comboBox_30_currentTextChanged(const QString &arg1)
{
    if(arg1 == "Trier par nom")
    {
        ui->tableView_77->setModel(tmp2.affichernom());
    }
    else if(arg1 == "Trier par id")
    {
        ui->tableView_77->setModel(tmp2.afficherid());
    }
}

void Dialog::on_comboBox_29_currentTextChanged(const QString &arg1)
{
    if(arg1 == "Trier par nom")
    {
        ui->tableView_6->setModel(tmp2.affichernom());
    }
    else if(arg1 == "Trier par id")
    {
        ui->tableView_6->setModel(tmp2.afficherid());
    }
}

void Dialog::on_pushButton_38_clicked()
{
    QString r = ui->lineEdit_69->text();
    ui->tableView_6->setModel(tmp2.afficherr(r));
}

void Dialog::on_pushButton_36_clicked()
{
    QString r = ui->lineEdit_67->text();
    ui->tableView_9->setModel(tmp2.afficherr(r));
}

void Dialog::on_pushButton_39_clicked()
{
    QString r = ui->lineEdit_70->text();
    ui->tableView_77->setModel(tmp2.afficherr(r));
}

void Dialog::on_pushButton_15_clicked()
{
    QString r = ui->lineEdit_19->text();
    ui->tableView_5->setModel(tmp1.afficherr(r));
}

void Dialog::on_pushButton_24_clicked()
{
    QString r = ui->lineEdit_26->text();
    ui->tableView_4->setModel(tmp1.afficherr(r));
}

void Dialog::on_pushButton_23_clicked()
{
    QString r = ui->lineEdit_25->text();
    ui->tableView_7->setModel(tmp1.afficherr(r));
}
