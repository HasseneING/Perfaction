#include "dialog.h"
#include "ui_dialog.h"
#include "QTextEdit"
#include <QMessageBox>
#include <QValidator>
#include <QPixmap>
#include "chart.h"
#include <iostream>
#include "smtp.h"
#include "QPdfWriter"
#include "QPainter"
#include <QPrinter>
#include "QDebug"

Dialog::Dialog(QWidget *parent) : QDialog(parent),
                                  ui(new Ui::Dialog)
{
    init();

    //hassen

    ui->setupUi(this);
    ui->AfficherOrdTab->setModel(tmpOrd.AfficherOrd("MAC"));
    ui->AfficherTabVoit->setModel(tmpVoit.AfficherVoit("MATRICULE"));
    ui->AfficherTabFour->setModel(tmpFour.AfficherFour("ID"));
    ui->stackedWidget->setCurrentIndex(0);
    ui->CATEG->addItem("A");
    ui->CATEG->addItem("B");
    ui->CATEG->addItem("C");
    ui->CATEG_2->addItem("A");
    ui->CATEG_2->addItem("B");
    ui->CATEG_2->addItem("C");
    ui->CPU->addItem("I3");
    ui->CPU->addItem("I5");
    ui->CPU->addItem("I7");
    ui->CPU_2->addItem("I3");
    ui->CPU_2->addItem("I5");
    ui->CPU_2->addItem("I7");
    ui->GPU->addItem("Nvidia");
    ui->GPU->addItem("Intel integrated Graphics");
    ui->GPU->addItem("AMD");
    ui->GPU_2->addItem("Nvidia");
    ui->GPU_2->addItem("Intel integrated Graphics");
    ui->GPU_2->addItem("AMD");
    ui->RAM->addItem("2Go");
    ui->RAM->addItem("4Go");
    ui->RAM->addItem("8Go");
    ui->RAM_2->addItem("2Go");
    ui->RAM_2->addItem("4Go");
    ui->RAM_2->addItem("8Go");
    ui->MARQUE->addItem("Toyota");
    ui->MARQUE->addItem("Renault");
    ui->MARQUE->addItem("Volkswagen");
    ui->MARQUE->addItem("Fiat");
    ui->MARQUE->addItem("Seat");
    ui->MARQUE->addItem("Peugeot");
    ui->MARQUE->addItem("Citroen");
    ui->MODELE->clear();

    flip = 0;
    QObject::connect(ui->AfficherTabVoit->horizontalHeader(), SIGNAL(sectionClicked(int)), this, SLOT(SortByHeader(int)));
    QObject::connect(ui->AfficherOrdTab->horizontalHeader(), SIGNAL(sectionClicked(int)), this, SLOT(SortByHeader2(int)));
    QObject::connect(ui->AfficherTabFour->horizontalHeader(), SIGNAL(sectionClicked(int)), this, SLOT(SortByHeader3(int)));
}

void Dialog::test(QString role)
{
    if (role == "client")
    {
        ui->tabWidget->setTabEnabled(1, false);
    }
}

void Dialog::init()
{
    ui->setupUi(this);
    setFixedSize(1900, 1000);

    ui->stackedWidget->setCurrentIndex(4);

    ui->tableView_5->setModel(tmp1.afficher());
    ui->tableView_4->setModel(tmp1.afficher());
    ui->tableView_7->setModel(tmp1.afficher());
    ui->tableView_77->setModel(tmp2.afficher());
    ui->tableView_6->setModel(tmp2.afficher());
    ui->tableView_9->setModel(tmp2.afficher());
    ui->tableView2_2->setModel(tmp3.afficher());
    ui->tableView_2->setModel(tmp4.afficher1());
    ui->tableView2_3->setModel(tmp3.afficher());
    ui->tableView_3->setModel(tmp4.afficher1());
    ui->tableView2->setModel(tmp3.afficher());
    ui->tableView->setModel(tmp4.afficher1());
    for (int i = 1; i < 7; i++)
    {
        ui->tableView_5->setColumnWidth(i, this->width() / 4);
        ui->tableView_4->setColumnWidth(i, this->width() / 4);
        ui->tableView_7->setColumnWidth(i, this->width() / 4);
    }
    for (int i = 1; i < 9; i++)
    {
        ui->tableView_77->setColumnWidth(i, this->width() / 4);
        ui->tableView_6->setColumnWidth(i, this->width() / 4);
        ui->tableView_9->setColumnWidth(i, this->width() / 4);
    }
    for (int i = 0; i < 7; i++)
    {
        ui->tableView2_2->setColumnWidth(i, this->width() / 4);
        ui->tableView_2->setColumnWidth(i, this->width() / 4);
        ui->tableView2_3->setColumnWidth(i, this->width() / 4);
        ui->tableView_3->setColumnWidth(i, this->width() / 4);
        ui->tableView2->setColumnWidth(i, this->width() / 4);
        ui->tableView->setColumnWidth(i, this->width() / 4);
    }

    QHeaderView *verticalHeader = ui->tableView_5->verticalHeader();
    verticalHeader->setSectionResizeMode(QHeaderView::Fixed);
    verticalHeader->setDefaultSectionSize(40);

    QHeaderView *verticalHeader1 = ui->tableView_4->verticalHeader();
    verticalHeader1->setSectionResizeMode(QHeaderView::Fixed);
    verticalHeader1->setDefaultSectionSize(40);

    QHeaderView *verticalHeader2 = ui->tableView_7->verticalHeader();
    verticalHeader2->setSectionResizeMode(QHeaderView::Fixed);
    verticalHeader2->setDefaultSectionSize(40);

    QHeaderView *verticalHeader3 = ui->tableView_77->verticalHeader();
    verticalHeader3->setSectionResizeMode(QHeaderView::Fixed);
    verticalHeader3->setDefaultSectionSize(40);

    QHeaderView *verticalHeader4 = ui->tableView_6->verticalHeader();
    verticalHeader4->setSectionResizeMode(QHeaderView::Fixed);
    verticalHeader4->setDefaultSectionSize(40);

    QHeaderView *verticalHeader5 = ui->tableView_9->verticalHeader();
    verticalHeader5->setSectionResizeMode(QHeaderView::Fixed);
    verticalHeader5->setDefaultSectionSize(40);

    QHeaderView *verticalHeader6 = ui->tableView2_2->verticalHeader();
    verticalHeader6->setSectionResizeMode(QHeaderView::Fixed);
    verticalHeader6->setDefaultSectionSize(40);

    QHeaderView *verticalHeader7 = ui->tableView_2->verticalHeader();
    verticalHeader7->setSectionResizeMode(QHeaderView::Fixed);
    verticalHeader7->setDefaultSectionSize(40);

    QHeaderView *verticalHeader8 = ui->tableView2_3->verticalHeader();
    verticalHeader8->setSectionResizeMode(QHeaderView::Fixed);
    verticalHeader8->setDefaultSectionSize(40);

    QHeaderView *verticalHeader9 = ui->tableView_3->verticalHeader();
    verticalHeader9->setSectionResizeMode(QHeaderView::Fixed);
    verticalHeader9->setDefaultSectionSize(40);

    QHeaderView *verticalHeader10 = ui->tableView_2->verticalHeader();
    verticalHeader10->setSectionResizeMode(QHeaderView::Fixed);
    verticalHeader10->setDefaultSectionSize(40);

    QHeaderView *verticalHeader11 = ui->tableView->verticalHeader();
    verticalHeader11->setSectionResizeMode(QHeaderView::Fixed);
    verticalHeader11->setDefaultSectionSize(40);

    //INT
    ui->lineEdit_18->setValidator(new QIntValidator(0, 10, this));
    ui->lineEdit_37->setValidator(new QIntValidator(0, 10, this));

    ui->lineEdit_7->setValidator(new QIntValidator(0, 99999999, this));
    ui->lineEdit_43->setValidator(new QIntValidator(0, 99999999, this));
    ui->lineEdit_24->setValidator(new QIntValidator(0, 99999999, this));
    ui->lineEdit_2->setValidator(new QIntValidator(0, 99999999, this));
    ui->lineEdit_6->setValidator(new QIntValidator(0, 99999999, this));
    ui->lineEdit_16->setValidator(new QIntValidator(0, 99999999, this));
    ui->lineEdit_15->setValidator(new QIntValidator(0, 99999999, this));

    QRegExp re("[a-z-A-Z ]{20}");
    QRegExpValidator *validator = new QRegExpValidator(re, this);

    QRegExp re2("[A-Z-a-z-0-9 ]{30}");
    QRegExpValidator *validator2 = new QRegExpValidator(re2, this);

    QRegularExpression rx("\\b[A-Z0-9._%+-]+@[A-Z0-9.-]+\\.[A-Z]{2,4}\\b",
                          QRegularExpression::CaseInsensitiveOption);
    //email
    ui->lineEdit_4->setValidator(new QRegularExpressionValidator(rx, this));
    ui->lineEdit_23->setValidator(new QRegularExpressionValidator(rx, this));
    ui->lineEdit_41->setValidator(new QRegularExpressionValidator(rx, this));
    ui->lineEdit_13->setValidator(new QRegularExpressionValidator(rx, this));
    //normal
    ui->lineEdit->setValidator(validator);
    ui->lineEdit_3->setValidator(validator2);
    ui->lineEdit_17->setValidator(validator2);
    ui->lineEdit_44->setValidator(validator);
    ui->lineEdit_12->setValidator(validator);
    ui->lineEdit_5->setValidator(validator);
    ui->lineEdit_40->setValidator(validator);
    ui->lineEdit_20->setValidator(validator);
    ui->lineEdit_21->setValidator(validator);
    ui->lineEdit_22->setValidator(validator2);
    ui->lineEdit_45->setValidator(validator2);

    ui->lineEdit_69->setPlaceholderText("recherche par le cin/nom/prenom");
    ui->lineEdit_67->setPlaceholderText("recherche par le cin/nom/prenom");
    ui->lineEdit_70->setPlaceholderText("recherche par le cin/nom/prenom");
    ui->lineEdit_26->setPlaceholderText("recherche par le nom/code_f/prop");
    ui->lineEdit_25->setPlaceholderText("recherche par le nom/code_f/prop");
    ui->lineEdit_19->setPlaceholderText("recherche par le nom/code_f/prop");

    QSqlQuery query;
    query.prepare("SELECT count(idc) from CLIENTS where idf is null");
    query.exec();
    QString s;
    while (query.next())
    {
        s = query.value(0).toString();
    }
    ui->label_9->setText(s);
    QSqlQuery query1;
    query1.prepare("SELECT count(idc) from CLIENTS where idf is not null");
    query1.exec();
    QString s1;
    while (query1.next())
    {
        s1 = query1.value(0).toString();
    }
    ui->label_13->setText(s1);
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
    switch (ret)
    {
    case QMessageBox::Yes:
    {
        QSqlQuery query;
        QString id = ui->combo_2->currentText();

        query.prepare("SELECT MORAL.code_fisc, MORAL.prop, CLIENTS.adresse ,CLIENTS.email ,CLIENTS.tel "
                      "from CLIENTS join MORAL ON MORAL.idc = CLIENTS.idc "
                      "WHERE CLIENTS.idc = '" +
                      id + "' ");
        query.exec();

        ui->stackedWidget->setCurrentIndex(2);

        while (query.next())
        {
            ui->lineEdit_16->setText(query.value(0).toString());
            ui->lineEdit_12->setText(query.value(1).toString());
            ui->lineEdit_17->setText(query.value(2).toString());
            ui->lineEdit_13->setText(query.value(3).toString());
            ui->lineEdit_15->setText(query.value(4).toString());
        }

        break;
    }

    case QMessageBox::Cancel:
        break;
    }
}

void Dialog::on_pushButton_6_clicked()
{
    int id = ui->combo_2->currentText().toInt();

    QString prop = ui->lineEdit_12->text(), ad = ui->lineEdit_17->text(), em = ui->lineEdit_13->text();
    int codef = ui->lineEdit_16->text().toInt(), tel = ui->lineEdit_15->text().toInt();
    clientmo b;
    if (b.modifier(id, tel, em, ad, prop, codef))
    {
        QMessageBox msgBox;
        msgBox.information(nullptr, QObject::tr("Modification du client."), QObject::tr("Client modifié !\n"));
        ui->stackedWidget->setCurrentIndex(4);
    }
    else
    {
        QMessageBox msgBox;
        msgBox.critical(nullptr, QObject::tr("Modification du client."), QObject::tr("Modification impossible !\n"));
    }
}

void Dialog::on_pushButton_clicked()
{
    int id = ui->comboBox->currentText().toInt();
    carte c;
    QDate d = QDate::currentDate();
    if (c.ajouter(id, d))
    {
        QMessageBox msgBox;
        msgBox.information(nullptr, QObject::tr("Ajout d'une carte de fidelité."), QObject::tr("Carte ajouté !\n"));
        QSqlQuery query;
        query.prepare("SELECT email from CLIENTS where idc = :id");
        query.bindValue(":id", id);
        QString email;
        query.exec();
        while (query.next())
        {
            email = query.value(0).toString();
        }
        mail(email, "Carte de fidelite !", "Chers clients votre carte de fidelite a etait creer avec succes \n"
                                           "et pour le moment vous avez 0 points de fidelite");
        ui->tableView2_3->setModel(tmp3.afficher());
        ui->tableView_3->setModel(tmp4.afficher1());
        ref();
        ui->stackedWidget_3->setCurrentIndex(0);
    }
    else
    {
        QMessageBox msgBox;
        msgBox.critical(nullptr, QObject::tr("Ajout d'une carte de fidelité."), QObject::tr("Ce client a déja une carte de fidelité !\n"));
    }
}

void Dialog::mail(QString email, QString sub, QString obj)
{
    Smtp *smtp = new Smtp("rentcar.projet@gmail.com", "azer123@", "smtp.gmail.com");
    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));
    smtp->sendMail(email, sub, obj);
}

void Dialog::mailSent(QString status)
{
    if (status == "Message sent")
        QMessageBox::information(nullptr, QObject::tr("RentCar mailing !"), QObject::tr("Un email est envoye a votre client pour l informer de\nsa nouvelle carte de fidelite!\n"));
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

    switch (ret)
    {
    case QMessageBox::Yes:
    {
        clientmo b;
        if (b.supprimer(id))
        {
            QMessageBox msgBox;
            msgBox.information(nullptr, QObject::tr("Sppression du client."), QObject::tr("Client supprimer !\n"));
            ui->tableView_7->setModel(tmp1.afficher());
            ui->stackedWidget->setCurrentIndex(3);
            QSqlQueryModel *model = new QSqlQueryModel;
            model->setQuery("SELECT IDC FROM moral");
            ui->combo->setModel(model);
        }
        else
        {
            QMessageBox msgBox;
            msgBox.critical(nullptr, QObject::tr("Sppression du client."), QObject::tr("Suppression impossible !\n"));
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
    switch (ret)
    {
    case QMessageBox::Yes:
    {
        QSqlQuery query;
        QString id = ui->comboBox_3->currentText();

        query.prepare("SELECT PHYSIQUE.nom, PHYSIQUE.prenom, CLIENTS.adresse ,CLIENTS.email ,CLIENTS.tel, PHYSIQUE.naissance "
                      "from CLIENTS join PHYSIQUE ON PHYSIQUE.idc = CLIENTS.idc "
                      "WHERE CLIENTS.idc = '" +
                      id + "' ");
        query.exec();

        ui->stackedWidget_2->setCurrentIndex(2);

        while (query.next())
        {
            ui->lineEdit_44->setText(query.value(0).toString());
            ui->lineEdit_40->setText(query.value(1).toString());
            ui->lineEdit_45->setText(query.value(2).toString());
            ui->lineEdit_41->setText(query.value(3).toString());
            ui->lineEdit_43->setText(query.value(4).toString());
            ui->dateEdit_2->setDate(query.value(5).toDate());
        }
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

    switch (ret)
    {
    case QMessageBox::Yes:
    {
        clientph b;
        if (b.supprimer(id))
        {
            QMessageBox msgBox;
            msgBox.information(nullptr, QObject::tr("Sppression du client."), QObject::tr("Client supprimer !\n"));
            ui->tableView_7->setModel(tmp1.afficher());
            ui->stackedWidget->setCurrentIndex(3);
        }
        else
        {
            QMessageBox msgBox;
            msgBox.critical(nullptr, QObject::tr("Sppression du client."), QObject::tr("Suppression impossible !\n"));
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

    QString nom = ui->lineEdit_44->text(), prenom = ui->lineEdit_40->text(), ad = ui->lineEdit_45->text(), em = ui->lineEdit_41->text();
    int tel = ui->lineEdit_43->text().toInt();
    QDate d = ui->dateEdit_2->date();
    clientph b;
    if (b.modifier(id, tel, em, ad, nom, prenom, d))
    {
        QMessageBox msgBox;
        msgBox.information(nullptr, QObject::tr("Modification du client."), QObject::tr("Client modifié !\n"));
        ui->stackedWidget_2->setCurrentIndex(4);
        ui->tableView_6->setModel(tmp2.afficher());
    }
    else
    {
        QMessageBox msgBox;
        msgBox.critical(nullptr, QObject::tr("Modification du client."), QObject::tr("Modification impossible !\n"));
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
    model->setQuery("SELECT IDC FROM clients where idf is null");
    ui->comboBox->setModel(model);
}

void Dialog::on_m_supprimer_2_clicked()
{
    ui->stackedWidget_3->setCurrentIndex(2);
    ui->tableView2_2->setModel(tmp3.afficher());
    ui->tableView_2->setModel(tmp4.afficher1());
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT clients.IDC FROM clients join carte on clients.idc = carte.idf");
    ui->comboBox_2->setModel(model);
}

void Dialog::adjustTextColor()
{
    if (!ui->lineEdit_4->hasAcceptableInput())
        ui->lineEdit_4->setStyleSheet("QLineEdit { color: red;}");
    else
        ui->lineEdit_4->setStyleSheet("QLineEdit { color: black;}");
}

void Dialog::on_pushButton_5_clicked()
{
    if (!ui->lineEdit_4->hasAcceptableInput())
    {
        ui->lineEdit_4->setStyleSheet("QLineEdit { color: red;}");
        QMessageBox msg;
        msg.information(nullptr, QObject::tr("VERIFICATION EMAIL"), QObject::tr("E_MAIL INCORRECT ! VERIFIER VOTRE EMIL .\n"));
        msg.exec();
    }
    else
    {
        ui->lineEdit_4->setStyleSheet("QLineEdit { color: black;}");

        clientmo c(ui->lineEdit_18->text().toInt(),
                   ui->lineEdit_2->text().toInt(),
                   ui->lineEdit_4->text(),
                   ui->lineEdit_3->text(),
                   ui->lineEdit->text(),
                   ui->lineEdit_5->text(),
                   ui->lineEdit_6->text().toInt());
        client x(ui->lineEdit_18->text().toInt(),
                 ui->lineEdit_4->text(),
                 ui->lineEdit_3->text(),
                 ui->lineEdit_2->text().toInt());

        QMessageBox msg;
        if (x.ajouter() && c.ajouter())
        {
            msg.information(nullptr, QObject::tr("AJOUT CLIENT"), QObject::tr("CLIENT MORALE AJOUTE .\n"));
            msg.exec();
            ui->stackedWidget->setCurrentIndex(4);
            ui->tableView_5->setModel(tmp1.afficher());
        }
        else
        {
            msg.critical(nullptr, QObject::tr("AJOUT CLIENT"), QObject::tr("ERREUR D'AJOUT DU CLIENT .\n"));
            msg.exec();
        }
    }
}

void Dialog::on_pushButton_16_clicked()
{
    if (!ui->lineEdit_23->hasAcceptableInput())
    {
        ui->lineEdit_23->setStyleSheet("QLineEdit { color: red;}");
        QMessageBox msg;
        msg.information(nullptr, QObject::tr("VERIFICATION EMAIL"), QObject::tr("E_MAIL INCORRECT ! VERIFIER VOTRE EMIL .\n"));
        msg.exec();
    }
    else
    {
        ui->lineEdit_4->setStyleSheet("QLineEdit { color: black;}");
        clientph c(ui->lineEdit_37->text().toInt(),
                   ui->lineEdit_24->text().toInt(),
                   ui->lineEdit_23->text(),
                   ui->lineEdit_22->text(),
                   ui->lineEdit_20->text(),
                   ui->lineEdit_21->text(),
                   ui->lineEdit_7->text().toInt(),
                   ui->dateEdit->date());
        client x(ui->lineEdit_37->text().toInt(),
                 ui->lineEdit_23->text(),
                 ui->lineEdit_22->text(),
                 ui->lineEdit_24->text().toInt());

        QMessageBox msg;
        if (x.ajouter() && c.ajouter())
        {
            msg.information(nullptr, QObject::tr("AJOUT CLIENT"), QObject::tr("CLIENT PHYSIQUE AJOUTE .\n"));
            msg.exec();
            ui->stackedWidget_2->setCurrentIndex(4);
            ui->tableView_6->setModel(tmp2.afficher());
        }
        else
        {
            msg.critical(nullptr, QObject::tr("AJOUT CLIENT"), QObject::tr("ERREUR D'AJOUT DU CLIENT .\n"));
            msg.exec();
        }
    }
}

void Dialog::on_comboBox_19_textActivated(const QString &arg1)
{
    if (arg1 == "Trier par nom")
    {
        ui->tableView_7->setModel(tmp1.affichernom());
    }
    else if (arg1 == "Trier par id")
    {
        ui->tableView_7->setModel(tmp1.afficherid());
    }
    else if (arg1 == "Trier par proprietaire")
    {
        ui->tableView_7->setModel(tmp1.afficherprop());
    }
}

void Dialog::on_comboBox_15_textActivated(const QString &arg1)
{
    if (arg1 == "Trier par nom")
    {
        ui->tableView_5->setModel(tmp1.affichernom());
    }
    else if (arg1 == "Trier par id")
    {
        ui->tableView_5->setModel(tmp1.afficherid());
    }
    else if (arg1 == "Trier par proprietaire")
    {
        ui->tableView_5->setModel(tmp1.afficherprop());
    }
}

void Dialog::on_comboBox_20_textActivated(const QString &arg1)
{
    if (arg1 == "Trier par nom")
    {
        ui->tableView_4->setModel(tmp1.affichernom());
    }
    else if (arg1 == "Trier par id")
    {
        ui->tableView_4->setModel(tmp1.afficherid());
    }
    else if (arg1 == "Trier par proprietaire")
    {
        ui->tableView_4->setModel(tmp1.afficherprop());
    }
}

void Dialog::on_comboBox_27_currentTextChanged(const QString &arg1)
{
    if (arg1 == "Trier par nom")
    {
        ui->tableView_9->setModel(tmp2.affichernom());
    }
    else if (arg1 == "Trier par id")
    {
        ui->tableView_9->setModel(tmp2.afficherid());
    }
    else if (arg1 == "Trier par date")
    {
        ui->tableView_9->setModel(tmp2.afficherdate());
    }
}

void Dialog::on_comboBox_30_currentTextChanged(const QString &arg1)
{
    if (arg1 == "Trier par nom")
    {
        ui->tableView_77->setModel(tmp2.affichernom());
    }
    else if (arg1 == "Trier par id")
    {
        ui->tableView_77->setModel(tmp2.afficherid());
    }
    else if (arg1 == "Trier par date")
    {
        ui->tableView_77->setModel(tmp2.afficherdate());
    }
}

void Dialog::on_comboBox_29_currentTextChanged(const QString &arg1)
{
    if (arg1 == "Trier par nom")
    {
        ui->tableView_6->setModel(tmp2.affichernom());
    }
    else if (arg1 == "Trier par id")
    {
        ui->tableView_6->setModel(tmp2.afficherid());
    }
    else if (arg1 == "Trier par date")
    {
        ui->tableView_6->setModel(tmp2.afficherdate());
    }
}

void Dialog::on_pushButton_2_clicked()
{
    int id = ui->comboBox_2->currentText().toInt();
    QMessageBox msgBox;
    client a;
    msgBox.setText("Confirmation de suppression.");
    msgBox.setInformativeText("Vous etes sure de supprimer cette carte ?\n");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Cancel);
    msgBox.setIcon(QMessageBox::Question);
    int ret = msgBox.exec();

    switch (ret)
    {
    case QMessageBox::Yes:
    {
        carte b;
        if (b.supprimer(id))
        {
            QMessageBox msgBox;
            msgBox.information(nullptr, QObject::tr("Sppression de la carte."), QObject::tr("Carte de fidelite supprimer !\n"));
            ui->tableView2_2->setModel(tmp3.afficher());
            ui->tableView_2->setModel(tmp4.afficher1());
            QSqlQuery query;
            query.prepare("SELECT email from CLIENTS where idc = :id");
            query.bindValue(":id", id);
            QString email;
            query.exec();
            while (query.next())
            {
                email = query.value(0).toString();
            }
            mail(email, "Carte de fidelite !", "Chers clients votre carte de fidelite a etait supprimer !\n"
                                               "Nous esperons nous vous revoir bientot !");
            ref();
            ui->stackedWidget_3->setCurrentIndex(2);
            QSqlQueryModel *model = new QSqlQueryModel;
            model->setQuery("SELECT clients.IDC FROM clients join carte on clients.idc = carte.idf");
            ui->comboBox_2->setModel(model);
        }
        else
        {
            QMessageBox msgBox;
            msgBox.critical(nullptr, QObject::tr("Sppression de la carte."), QObject::tr("Suppression impossible !\n"));
        }
        break;
    }

    case QMessageBox::Cancel:
        break;
    }
}

void Dialog::ref()
{
    QSqlQuery query;
    query.prepare("SELECT count(idc) from CLIENTS where idf is null");
    query.exec();
    QString s;
    while (query.next())
    {
        s = query.value(0).toString();
    }
    ui->label_9->setText(s);
    QSqlQuery query1;
    query1.prepare("SELECT count(idc) from CLIENTS where idf is not null");
    query1.exec();
    QString s1;
    while (query1.next())
    {
        s1 = query1.value(0).toString();
    }
    ui->label_13->setText(s1);
}

void Dialog::on_m_afficher_3_clicked()
{
    QString strStream;
    QTextStream out(&strStream);

    const int rowCount = ui->tableView_5->model()->rowCount();
    const int columnCount = ui->tableView_5->model()->columnCount();

    out << "<html>\n"
           "<head>\n"
           "<meta Content=\"Text/html; charset=Windows-1251\">\n"
        << QString("<title>%1</title>\n").arg("strTitle")
        << "</head>\n"
           "<body bgcolor=#ffffff link=#5000A0>\n"
           "<center> <H1>Liste desClients moral</H1><table border=1 cellspacing=0 cellpadding=2>\n";

    out << "<thead><tr bgcolor=#f0f0f0> <th>Numero</th>";
    for (int column = 0; column < columnCount; column++)
        if (!ui->tableView_5->isColumnHidden(column))
            out << QString("<th>%1</th>").arg(ui->tableView_5->model()->headerData(column, Qt::Horizontal).toString());
    out << "</tr></thead>\n";

    for (int row = 0; row < rowCount; row++)
    {
        out << "<tr> <td bkcolor=0>" << row + 1 << "</td>";
        for (int column = 0; column < columnCount; column++)
        {
            if (!ui->tableView_5->isColumnHidden(column))
            {
                QString data = ui->tableView_5->model()->data(ui->tableView_5->model()->index(row, column)).toString().simplified();
                out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
            }
        }
        out << "</tr>\n";
    }
    out << "</table> </center>\n"
           "</body>\n"
           "</html>\n";

    QPrinter printer(QPrinter::PrinterResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setPaperSize(QPrinter::A4);
    printer.setOutputFileName("C:/Users/souso/Desktop/reentcar/PDF/moral.pdf");

    QTextDocument doc;
    doc.setHtml(strStream);
    doc.setPageSize(printer.pageRect().size()); // This is necessary if you want to hide the page number
    doc.print(&printer);
}

void Dialog::on_lineEdit_19_textChanged(const QString &arg1)
{
    ui->tableView_5->setModel(tmp1.afficherr(arg1));
}

void Dialog::on_lineEdit_26_textChanged(const QString &arg1)
{
    ui->tableView_4->setModel(tmp1.afficherr(arg1));
}

void Dialog::on_lineEdit_25_textChanged(const QString &arg1)
{
    ui->tableView_7->setModel(tmp1.afficherr(arg1));
}

void Dialog::on_lineEdit_69_textChanged(const QString &arg1)
{
    ui->tableView_6->setModel(tmp2.afficherr(arg1));
}

void Dialog::on_lineEdit_67_textChanged(const QString &arg1)
{
    ui->tableView_9->setModel(tmp2.afficherr(arg1));
}

void Dialog::on_lineEdit_70_textChanged(const QString &arg1)
{
    ui->tableView_77->setModel(tmp2.afficherr(arg1));
}

//hassen

void Dialog::on_OrdinateurWin_clicked()
{
    ui->stackedWidget_4->setCurrentIndex(0);
}

void Dialog::on_VehiculeWin_clicked()
{
    ui->stackedWidget_4->setCurrentIndex(1);
}

void Dialog::on_FournisseurWin_clicked()
{
    ui->stackedWidget_4->setCurrentIndex(2);
}

void Dialog::on_AjouterOrdinateur_clicked()
{
    ui->stackedWidget_4->setCurrentIndex(3);
}

void Dialog::on_AnnulerOrd_clicked()
{
    ui->stackedWidget_4->setCurrentIndex(0);
}

void Dialog::on_AddVoiture_clicked()
{
    ui->stackedWidget_4->setCurrentIndex(4);
}

void Dialog::on_AnnulerVoit_clicked()
{
    ui->stackedWidget_4->setCurrentIndex(1);
}

void Dialog::on_AjouterFour_clicked()
{
    ui->stackedWidget_4->setCurrentIndex(5);
}

void Dialog::on_AnnulerFour_clicked()
{
    ui->stackedWidget_4->setCurrentIndex(2);
}

/*-----------------DATABASEWORK---------------------*/

void Dialog::on_Add_Ord_clicked()
{
    ordinateur O;
    if (ui->MAC->text().length() != 17)
    {
        QMessageBox msgBox;
        msgBox.setText("Adresse MAC Invalide!");
        msgBox.exec();
    }
    else
    {
        O.setMAC(ui->MAC->text());
        O.setCPU(ui->CPU->currentText());
        O.setGPU(ui->GPU->currentText());
        O.setRAM(ui->RAM->currentText());
        O.setDesc(ui->DESC->text());
        if (O.ajouterOrd())
        {
            ui->AfficherOrdTab->setModel(tmpOrd.AfficherOrd("MAC"));
            QMessageBox msgBox;
            msgBox.setText("Ajout Avec Success!");
            msgBox.exec();
            ui->stackedWidget_4->setCurrentIndex(0);
        }
        else
        {
            QMessageBox msgBox;
            msgBox.setText("Echec! Champ(s) Manquant(s)!");
            msgBox.exec();
            ui->stackedWidget_4->setCurrentIndex(0);
        }
    }
}

void Dialog::on_AddVoit_clicked()
{
    voiture V;
    if (ui->MATRICULE->text().length() != 10)
    {
        QMessageBox msgBox;
        msgBox.setText("Matricule Invalide!");
        msgBox.exec();
    }
    else
    {
        V.setMatricule(ui->MATRICULE->text());
        V.setMarque(ui->MARQUE->currentText());
        V.setModele(ui->MODELE->currentText());
        V.setNbPlace(ui->NBPLACE->text().toUInt());
        V.setPuissance(ui->PUISSANCE->text());
        V.setCouleur(ui->COULEUR->text());
        V.setCatG(ui->CATEG->currentText());
        V.setConsommation(ui->CONSOMMATIO->text());
        V.setForfaitJour(ui->FORFAITJ->text().toInt());
        V.setForfaitSem(ui->FORFAITSEM->text().toInt());
        V.setForfaitMois(ui->FORFAITMOIS->text().toInt());
        V.setDescription(ui->descVoiture->text());
        if (V.AjouterVoit())
        {
            ui->AfficherTabVoit->setModel(tmpVoit.AfficherVoit("MATRICULE"));
            QMessageBox msgBox;
            msgBox.setText("Ajout Avec Success!");
            msgBox.exec();
            ui->stackedWidget_4->setCurrentIndex(1);
        }
        else
        {
            QMessageBox msgBox;
            msgBox.setText("Echec! Champ(s) Manquant(s)!");
            msgBox.exec();
            ui->stackedWidget_4->setCurrentIndex(1);
        }
    }
}

void Dialog::on_AddFournisseur_clicked()
{
    fournisseur F;

    if (ui->ID->text().length() == 0)
    {
        QMessageBox msgBox;
        msgBox.setText("ID Invalide!");
        msgBox.exec();
    }
    else
    {
        F.setID(ui->ID->text().toInt());
        F.setSOCIETE(ui->Societe->text());
        F.setADRESSE(ui->Adresse->text());
        F.setTELEPHONE(ui->Telephone->text().toInt());
        F.setEMAIL(ui->Email->text());
        if (F.ajouterFour())
        {
            ui->AfficherTabFour->setModel(tmpFour.AfficherFour("ID"));
            QMessageBox msgBox;
            msgBox.setText("Ajout Avec Success!");
            msgBox.exec();
            ui->stackedWidget_4->setCurrentIndex(2);
        }
        else
        {
            QMessageBox msgBox;
            msgBox.setText("Echec! Champ(s) Manquant(s)!");
            msgBox.exec();
            ui->stackedWidget_4->setCurrentIndex(2);
        }
    }
}

/*----------------PCDELMODIF------------------*/

void Dialog::on_PcSearch_clicked()
{

    QModelIndexList selection = ui->AfficherOrdTab->selectionModel()->selectedRows(0);

    if (!selection.empty())
    {

        QModelIndex idIndex = selection.at(0);
        QString id = idIndex.data().toString();
        ui->MAC_2->setText(id);
        ui->stackedWidget_4->setCurrentIndex(6);
    }
}

void Dialog::on_PcSearch_3_clicked()
{
    ui->AfficherOrdTab->setModel(tmpOrd.AfficherOrd("MAC"));
    ui->stackedWidget_4->setCurrentIndex(0);
}

void Dialog::on_SupprimerOrdinateur_clicked()
{

    QModelIndexList selection = ui->AfficherOrdTab->selectionModel()->selectedRows(0);

    if (!selection.empty())
    {

        QModelIndex idIndex = selection.at(0);
        QString id = idIndex.data().toString();
        if (tmpOrd.SupprimerOrd(id))
        {
            ui->AfficherOrdTab->setModel(tmpOrd.AfficherOrd("MAC"));
            QMessageBox msgBox;
            msgBox.setText("Suppression avec Success!");
            msgBox.exec();
            ui->stackedWidget_4->setCurrentIndex(0);
        }
        else
        {
            QMessageBox msgBox;
            msgBox.setText("Echec de Suppression! ");
            msgBox.exec();
            ui->stackedWidget_4->setCurrentIndex(0);
        }
    }
}

void Dialog::on_AnnulerOrd_2_clicked()
{
    ui->stackedWidget_4->setCurrentIndex(0);
}

void Dialog::on_Add_Ord_2_clicked()
{
    ordinateur O;
    O.setMAC(ui->MAC_2->text());
    O.setCPU(ui->CPU_2->currentText());
    O.setGPU(ui->GPU_2->currentText());
    O.setRAM(ui->RAM_2->currentText());
    O.setDesc(ui->DESC_2->text());
    if (O.ModifierOrd())
    {
        ui->AfficherOrdTab->setModel(tmpOrd.AfficherOrd("MAC"));
        QMessageBox msgBox;
        msgBox.setText("Modification Avec Success!");
        msgBox.exec();
        ui->stackedWidget_4->setCurrentIndex(0);
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("Echec! Champ(s) Manquant(s)!");
        msgBox.exec();
        ui->stackedWidget_4->setCurrentIndex(0);
    }
}

void Dialog::on_MacpcRecherche_textChanged(const QString &arg1)
{
    if (arg1 == "")
        ui->AfficherOrdTab->setModel(tmpOrd.AfficherOrd("MAC"));
    else
        this->ui->AfficherOrdTab->setModel(tmpOrd.SearchOrd(arg1));
}

/*----------------FOURDELMODIF------------------*/

void Dialog::on_IDFOURSEARCH_clicked()
{
    ui->AfficherTabFour->setModel(tmpFour.AfficherFour("ID"));
}

void Dialog::on_IDFOURSEARCH_3_clicked() // Modifier Fournisseur
{
    QModelIndexList selection = ui->AfficherTabFour->selectionModel()->selectedRows(0);

    if (!selection.empty())
    {

        QModelIndex idIndex = selection.at(0);
        QString id = idIndex.data().toString();

        ui->ID_2->setText(id);
        ui->stackedWidget_4->setCurrentIndex(7);
    }
}

void Dialog::on_SuppFour_clicked()
{
    QModelIndexList selection = ui->AfficherTabFour->selectionModel()->selectedRows(0);

    if (!selection.empty())
    {

        QModelIndex idIndex = selection.at(0);
        int id = idIndex.data().toInt();
        if (tmpFour.SupprimerFour(id))
        {
            ui->AfficherTabFour->setModel(tmpFour.AfficherFour("ID"));
            QMessageBox msgBox;
            msgBox.setText("Suppression avec Success!");
            msgBox.exec();
            ui->stackedWidget_4->setCurrentIndex(2);
        }
        else
        {
            QMessageBox msgBox;
            msgBox.setText("Echec de Suppression! ");
            msgBox.exec();
            ui->stackedWidget_4->setCurrentIndex(2);
        }
    }
}

void Dialog::on_AnnulerFour_2_clicked()
{
    ui->stackedWidget_4->setCurrentIndex(2);
}

void Dialog::on_AddFournisseur_2_clicked()
{
    fournisseur F;

    F.setID(ui->ID_2->text().toInt());
    F.setSOCIETE(ui->Societe_2->text());
    F.setADRESSE(ui->Adresse_2->text());
    F.setTELEPHONE(ui->Telephone_2->text().toInt());
    F.setEMAIL(ui->Email_2->text());
    if (F.ModifierFour())
    {
        ui->AfficherTabFour->setModel(tmpFour.AfficherFour("ID"));
        QMessageBox msgBox;
        msgBox.setText("Ajout Avec Success!");
        msgBox.exec();
        ui->stackedWidget_4->setCurrentIndex(2);
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("Echec! Champ(s) Manquant(s)!");
        msgBox.exec();
        ui->stackedWidget_4->setCurrentIndex(2);
    }
}

void Dialog::on_IDFOUR_textChanged(const QString &arg1)
{
    if (arg1 == "")
        ui->AfficherTabFour->setModel(tmpFour.AfficherFour("ID"));
    else
        this->ui->AfficherTabFour->setModel(tmpFour.SearchFour(arg1));
}

void Dialog::on_MailFour_clicked()
{

    /*   QString email;

    QModelIndexList selection = ui->AfficherTabFour->selectionModel()->selectedRows(0);

    if (!selection.empty()) {

        QModelIndex idIndex = selection.at(3);
        int id = idIndex.data().toInt();
        qDebug()<< id << idIndex;

    QSqlQuery query;
    query.prepare("SELECT EMAIL from FOURNISSEUR WHERE ID=:id");
    query.bindValue(":id",id);
    while (query.next()) {
        email = query.value(0).toString();
    }
    }*/

    mail("hamedhassenekun@gmail.com", "test123", "this is the bodi");
}

/*----------------CARDELMODIF------------------*/

void Dialog::on_SearchCar_clicked()

{
    QModelIndexList selection = ui->AfficherTabVoit->selectionModel()->selectedRows(0);

    if (!selection.empty())
    {

        QModelIndex idIndex = selection.at(0);
        QString id = idIndex.data().toString();
        ui->MATRICULE_2->setText(id);
        ui->stackedWidget_4->setCurrentIndex(8);
    }
}

void Dialog::on_SearchCar_3_clicked()
{
    ui->AfficherTabVoit->setModel(tmpVoit.AfficherVoit("MATRICULE"));
}

void Dialog::on_DELCAR_clicked()
{

    QModelIndexList selection = ui->AfficherTabVoit->selectionModel()->selectedRows(0);

    if (!selection.empty())
    {

        QModelIndex idIndex = selection.at(0);
        QString mat = idIndex.data().toString();

        if (tmpVoit.SupprimerVoit(mat))
        {
            ui->AfficherTabVoit->setModel(tmpVoit.AfficherVoit("MATRICULE"));
            QMessageBox msgBox;
            msgBox.setText("Suppression avec Success!");
            msgBox.exec();
            ui->stackedWidget_4->setCurrentIndex(1);
        }
        else
        {
            QMessageBox msgBox;
            msgBox.setText("Echec de Suppression! ");
            msgBox.exec();
            ui->stackedWidget_4->setCurrentIndex(1);
        }
    }
}

void Dialog::on_AnnulerVoit_2_clicked()
{
    ui->stackedWidget_4->setCurrentIndex(1);
}

void Dialog::on_AddVoit_2_clicked()
{
    voiture V;

    V.setMatricule(ui->SearchCarMat->text());
    V.setMarque(ui->MARQUE_2->text());
    V.setModele(ui->MODELE_2->text());
    V.setNbPlace(ui->NBPLACE_2->text().toUInt());
    V.setPuissance(ui->PUISSANCE_2->text());
    V.setCouleur(ui->COULEUR_2->text());
    V.setCatG(ui->CATEG_2->currentText());
    V.setConsommation(ui->CONSOMMATIO_2->text());
    V.setForfaitJour(ui->FORFAITJ_2->text().toInt());
    V.setForfaitSem(ui->FORFAITSEM_2->text().toInt());
    V.setForfaitMois(ui->FORFAITMOIS_2->text().toInt());
    V.setDescription(ui->descVoiture_2->text());

    if (V.modifierVoit(ui->SearchCarMat->text()))
    {
        ui->AfficherTabVoit->setModel(tmpVoit.AfficherVoit("MATRICULE"));
        QMessageBox msgBox;
        msgBox.setText("Modification Avec Success!");
        msgBox.exec();
        ui->stackedWidget_4->setCurrentIndex(1);
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("Echec! Champ(s) Manquant(s)!");
        msgBox.exec();
        ui->stackedWidget_4->setCurrentIndex(1);
    }
}

void Dialog::on_SearchCarMat_textChanged(const QString &arg1)
{
    if (arg1 == "")
        ui->AfficherTabVoit->setModel(tmpVoit.AfficherVoit("MATRICULE"));
    else
        this->ui->AfficherTabVoit->setModel(tmpVoit.SearchVoit(arg1));
}

void Dialog::SortByHeader(int logicalIndex)
{

    switch (logicalIndex)
    {
    case 0:
        if (flip == 0)
        {
            flip++;
            ui->AfficherTabVoit->setModel(tmpVoit.AfficherVoit("MATRICULE ASC"));
        }
        else
        {
            flip--;
            ui->AfficherTabVoit->setModel(tmpVoit.AfficherVoit("MATRICULE DESC"));
        }

        break;
    case 1:
        if (flip == 0)
        {
            flip++;
            ui->AfficherTabVoit->setModel(tmpVoit.AfficherVoit("MARQUE ASC"));
        }
        else
        {
            flip--;
            ui->AfficherTabVoit->setModel(tmpVoit.AfficherVoit("MARQUE DESC"));
        }
        break;
    case 2:
        if (flip == 0)
        {
            flip++;
            ui->AfficherTabVoit->setModel(tmpVoit.AfficherVoit("MODELE ASC"));
        }
        else
        {
            flip--;
            ui->AfficherTabVoit->setModel(tmpVoit.AfficherVoit("MODELE DESC"));
        }
        break;
    case 3:
        if (flip == 0)
        {
            flip++;
            ui->AfficherTabVoit->setModel(tmpVoit.AfficherVoit("NBPLACE ASC"));
        }
        else
        {
            flip--;
            ui->AfficherTabVoit->setModel(tmpVoit.AfficherVoit("NBPLACE DESC"));
        }
        break;
    case 4:
        if (flip == 0)
        {
            flip++;
            ui->AfficherTabVoit->setModel(tmpVoit.AfficherVoit("PUISSANCE ASC"));
        }
        else
        {
            flip--;
            ui->AfficherTabVoit->setModel(tmpVoit.AfficherVoit("PUISSANCE DESC"));
        }
        break;
    case 5:
        if (flip == 0)
        {
            flip++;
            ui->AfficherTabVoit->setModel(tmpVoit.AfficherVoit("CONSOMMATION ASC"));
        }
        else
        {
            flip--;
            ui->AfficherTabVoit->setModel(tmpVoit.AfficherVoit("CONSOMMATION DESC"));
        }
        break;
    case 6:
        if (flip == 0)
        {
            flip++;
            ui->AfficherTabVoit->setModel(tmpVoit.AfficherVoit("DESCRIPTION ASC"));
        }
        else
        {
            flip--;
            ui->AfficherTabVoit->setModel(tmpVoit.AfficherVoit("DESCRIPTION DESC"));
        }
        break;
    case 7:
        if (flip == 0)
        {
            flip++;
            ui->AfficherTabVoit->setModel(tmpVoit.AfficherVoit("CATG ASC"));
        }
        else
        {
            flip--;
            ui->AfficherTabVoit->setModel(tmpVoit.AfficherVoit("CATG DESC"));
        }
        break;
    case 8:
        if (flip == 0)
        {
            flip++;
            ui->AfficherTabVoit->setModel(tmpVoit.AfficherVoit("DATEACQUIS ASC"));
        }
        else
        {
            flip--;
            ui->AfficherTabVoit->setModel(tmpVoit.AfficherVoit("DATEACQUIS DESC"));
        }
        break;
    case 9:
        if (flip == 0)
        {
            flip++;
            ui->AfficherTabVoit->setModel(tmpVoit.AfficherVoit("COULEUR ASC"));
        }
        else
        {
            flip--;
            ui->AfficherTabVoit->setModel(tmpVoit.AfficherVoit("COULEUR DESC"));
        }
        break;
    case 10:
        if (flip == 0)
        {
            flip++;
            ui->AfficherTabVoit->setModel(tmpVoit.AfficherVoit("DISPO ASC"));
        }
        else
        {
            flip--;
            ui->AfficherTabVoit->setModel(tmpVoit.AfficherVoit("DISPO DESC"));
        }
        break;
    case 11:
        if (flip == 0)
        {
            flip++;
            ui->AfficherTabVoit->setModel(tmpVoit.AfficherVoit("FORFAITJOUR ASC"));
        }
        else
        {
            flip--;
            ui->AfficherTabVoit->setModel(tmpVoit.AfficherVoit("FORFAITJOUR DESC"));
        }
        break;
    case 12:
        if (flip == 0)
        {
            flip++;
            ui->AfficherTabVoit->setModel(tmpVoit.AfficherVoit("FORFAITSEM ASC"));
        }
        else
        {
            flip--;
            ui->AfficherTabVoit->setModel(tmpVoit.AfficherVoit("FORFAITSEM DESC"));
        }
        break;
    case 13:
        if (flip == 0)
        {
            flip++;
            ui->AfficherTabVoit->setModel(tmpVoit.AfficherVoit("FORFAITMOIS ASC"));
        }
        else
        {
            flip--;
            ui->AfficherTabVoit->setModel(tmpVoit.AfficherVoit("FORFAITMOIS DESC"));
        }
        break;

    default:
        ui->AfficherTabVoit->setModel(tmpVoit.AfficherVoit("MATRICULE DESC"));
        break;
    }
}

void Dialog::SortByHeader2(int logicalIndex)
{

    switch (logicalIndex)
    {
    case 0:
        if (flip == 0)
        {
            flip++;
            ui->AfficherOrdTab->setModel(tmpOrd.AfficherOrd("MAC ASC"));
        }
        else
        {
            flip--;
            ui->AfficherOrdTab->setModel(tmpOrd.AfficherOrd("MAC DESC"));
        }

        break;
    case 1:
        if (flip == 0)
        {
            flip++;
            ui->AfficherOrdTab->setModel(tmpOrd.AfficherOrd("CPU ASC"));
        }
        else
        {
            flip--;
            ui->AfficherOrdTab->setModel(tmpOrd.AfficherOrd("CPU DESC"));
        }
        break;
    case 2:
        if (flip == 0)
        {
            flip++;
            ui->AfficherOrdTab->setModel(tmpOrd.AfficherOrd("GPU ASC"));
        }
        else
        {
            flip--;
            ui->AfficherOrdTab->setModel(tmpOrd.AfficherOrd("GPU DESC"));
        }
        break;

    case 3:
        if (flip == 0)
        {
            flip++;
            ui->AfficherOrdTab->setModel(tmpOrd.AfficherOrd("RAM ASC"));
        }
        else
        {
            flip--;
            ui->AfficherOrdTab->setModel(tmpOrd.AfficherOrd("RAM DESC"));
        }
        break;

    case 4:
        if (flip == 0)
        {
            flip++;
            ui->AfficherOrdTab->setModel(tmpOrd.AfficherOrd("DESCRIP ASC"));
        }
        else
        {
            flip--;
            ui->AfficherOrdTab->setModel(tmpOrd.AfficherOrd("DESCRIP DESC"));
        }
        break;

    default:
        ui->AfficherOrdTab->setModel(tmpOrd.AfficherOrd("MAC DESC"));
        break;
    }
}

void Dialog::SortByHeader3(int logicalIndex)
{
    switch (logicalIndex)
    {
    case 0:
        if (flip == 0)
        {
            flip++;
            ui->AfficherTabFour->setModel(tmpFour.AfficherFour("ID ASC"));
        }
        else
        {
            flip--;
            ui->AfficherTabFour->setModel(tmpFour.AfficherFour("ID DESC"));
        }

        break;
    case 1:
        if (flip == 0)
        {
            flip++;
            ui->AfficherTabFour->setModel(tmpFour.AfficherFour("SOCIETE ASC"));
        }
        else
        {
            flip--;
            ui->AfficherTabFour->setModel(tmpFour.AfficherFour("SOCIETE DESC"));
        }
        break;
    case 2:
        if (flip == 0)
        {
            flip++;
            ui->AfficherTabFour->setModel(tmpFour.AfficherFour("ADRESSE ASC"));
        }
        else
        {
            flip--;
            ui->AfficherTabFour->setModel(tmpFour.AfficherFour("ADRESSE DESC"));
        }
        break;

    case 3:
        if (flip == 0)
        {
            flip++;
            ui->AfficherTabFour->setModel(tmpFour.AfficherFour("TELEPHONE ASC"));
        }
        else
        {
            flip--;
            ui->AfficherTabFour->setModel(tmpFour.AfficherFour("TELEPHONE DESC"));
        }
        break;

    case 4:
        if (flip == 0)
        {
            flip++;
            ui->AfficherTabFour->setModel(tmpFour.AfficherFour("EMAIL ASC"));
        }
        else
        {
            flip--;
            ui->AfficherTabFour->setModel(tmpFour.AfficherFour("EMAIL DESC"));
        }
        break;

    default:
        ui->AfficherTabFour->setModel(tmpFour.AfficherFour("ID DESC"));
        break;
    }
}

void Dialog::on_MARQUE_currentTextChanged(const QString &arg1)
{
    ui->MODELE->clear();

    if (arg1 == "Toyota")
    {
        ui->MODELE->addItem("Yaris");
        ui->MODELE->addItem("Yaris Sedan");
        ui->MODELE->addItem("Corolla");
        ui->MODELE->addItem("Corolla Sedan");
        ui->MODELE->addItem("C-HR");
        ui->MODELE->addItem("Hilux");
        ui->MODELE->addItem("Rav4");
        ui->MODELE->addItem("Prado");
        ui->MODELE->addItem("Land Cruiser");
    }
    if (arg1 == "Renault")
    {
        ui->MODELE->addItem("Clio");
        ui->MODELE->addItem("Symbol");
        ui->MODELE->addItem("Megane");
        ui->MODELE->addItem("Megane Sedan");
        ui->MODELE->addItem("Captur");
        ui->MODELE->addItem("Trafic");
    }
    if (arg1 == "Volkswagen")
    {
        ui->MODELE->addItem("UP");
        ui->MODELE->addItem("Polo Sedan");
        ui->MODELE->addItem("Polo");
        ui->MODELE->addItem("Golf 7");
        ui->MODELE->addItem("Golf 6");
        ui->MODELE->addItem("Jetta");
        ui->MODELE->addItem("Passat");
        ui->MODELE->addItem("Tiguan");
        ui->MODELE->addItem("Multivan");
    }
    if (arg1 == "Fiat")
    {

        ui->MODELE->addItem("Panda");
        ui->MODELE->addItem("City Cross");
        ui->MODELE->addItem("Tipo Berlin");
        ui->MODELE->addItem("Tipo");
        ui->MODELE->addItem("500");
        ui->MODELE->addItem("500X");
        ui->MODELE->addItem("Qudo");
        ui->MODELE->addItem("Punto");
    }

    if (arg1 == "Seat")
    {

        ui->MODELE->addItem("Ibiza");
        ui->MODELE->addItem("Leon");
        ui->MODELE->addItem("Arona");
        ui->MODELE->addItem("Tarraco");
    }

    if (arg1 == "Peugeot")
    {
        ui->MODELE->addItem("206");
        ui->MODELE->addItem("206+");
        ui->MODELE->addItem("207");
        ui->MODELE->addItem("208");
        ui->MODELE->addItem("307");
        ui->MODELE->addItem("308");
        ui->MODELE->addItem("406");
        ui->MODELE->addItem("407");
        ui->MODELE->addItem("2008");
    }

    if (arg1 == "Citroen")
    {
        ui->MODELE->addItem("C2");
        ui->MODELE->addItem("C3");
        ui->MODELE->addItem("C4");
        ui->MODELE->addItem("C5");
        ui->MODELE->addItem("C6");
    }
}
