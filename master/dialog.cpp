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
           "<center> <H1>Liste des Clients moral</H1><table border=1 cellspacing=0 cellpadding=2>\n";

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
    printer.setOutputFileName("C:/Users/souso/Desktop/reentcar/PDF/clients_morals.pdf");

    QTextDocument doc;
    doc.setHtml(strStream);
    doc.setPageSize(printer.pageRect().size()); // This is necessary if you want to hide the page number
    doc.print(&printer);
}

void Dialog::on_m_afficher_4_clicked()
{
    QString strStream;
    QTextStream out(&strStream);

    const int rowCount = ui->tableView_6->model()->rowCount();
    const int columnCount = ui->tableView_6->model()->columnCount();

    out << "<html>\n"
           "<head>\n"
           "<meta Content=\"Text/html; charset=Windows-1251\">\n"
        << QString("<title>%1</title>\n").arg("strTitle")
        << "</head>\n"
           "<body bgcolor=#ffffff link=#5000A0>\n"
           "<center> <H1>Liste des Clients physiques</H1><table border=1 cellspacing=0 cellpadding=2>\n";

    out << "<thead><tr bgcolor=#f0f0f0> <th>Numero</th>";
    for (int column = 0; column < columnCount; column++)
        if (!ui->tableView_5->isColumnHidden(column))
            out << QString("<th>%1</th>").arg(ui->tableView_6->model()->headerData(column, Qt::Horizontal).toString());
    out << "</tr></thead>\n";

    for (int row = 0; row < rowCount; row++)
    {
        out << "<tr> <td bkcolor=0>" << row + 1 << "</td>";
        for (int column = 0; column < columnCount; column++)
        {
            if (!ui->tableView_6->isColumnHidden(column))
            {
                QString data = ui->tableView_6->model()->data(ui->tableView_6->model()->index(row, column)).toString().simplified();
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
    printer.setOutputFileName("C:/Users/souso/Desktop/reentcar/PDF/clients_physiques.pdf");

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

