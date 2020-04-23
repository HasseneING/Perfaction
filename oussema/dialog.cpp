#include "dialog.h"
#include "ui_dialog.h"
#include "QTextEdit"
#include <QMessageBox>
#include <QValidator>
#include <QPixmap>
#include "chart.h"
#include "CSmtp_v2_4_ssl/CSmtp.h"
#include <iostream>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    init();
}

void Dialog:: init()
{
    ui->setupUi(this);
    setFixedSize(1900,1000);

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
    for (int i=1;i<7;i++)
    {
        ui->tableView_5->setColumnWidth(i, this->width()/4);
        ui->tableView_4->setColumnWidth(i, this->width()/4);
        ui->tableView_7->setColumnWidth(i, this->width()/4);
    }
    for (int i=1;i<9;i++) {
        ui->tableView_77->setColumnWidth(i, this->width()/4);
        ui->tableView_6->setColumnWidth(i, this->width()/4);
        ui->tableView_9->setColumnWidth(i, this->width()/4);
    }
    for (int i=0;i<7;i++) {
        ui->tableView2_2->setColumnWidth(i, this->width()/4);
        ui->tableView_2->setColumnWidth(i, this->width()/4);
        ui->tableView2_3->setColumnWidth(i, this->width()/4);
        ui->tableView_3->setColumnWidth(i, this->width()/4);
        ui->tableView2->setColumnWidth(i, this->width()/4);
        ui->tableView->setColumnWidth(i, this->width()/4);
    }

    QHeaderView *verticalHeader = ui->tableView_5->verticalHeader();
    verticalHeader->setSectionResizeMode(QHeaderView::Fixed);
    verticalHeader->setDefaultSectionSize(20);

    QHeaderView *verticalHeader1 = ui->tableView_4->verticalHeader();
    verticalHeader1->setSectionResizeMode(QHeaderView::Fixed);
    verticalHeader1->setDefaultSectionSize(20);

    QHeaderView *verticalHeader2 = ui->tableView_7->verticalHeader();
    verticalHeader2->setSectionResizeMode(QHeaderView::Fixed);
    verticalHeader2->setDefaultSectionSize(20);

    QHeaderView *verticalHeader3 = ui->tableView_77->verticalHeader();
    verticalHeader3->setSectionResizeMode(QHeaderView::Fixed);
    verticalHeader3->setDefaultSectionSize(20);

    QHeaderView *verticalHeader4 = ui->tableView_6->verticalHeader();
    verticalHeader4->setSectionResizeMode(QHeaderView::Fixed);
    verticalHeader4->setDefaultSectionSize(20);

    QHeaderView *verticalHeader5 = ui->tableView_9->verticalHeader();
    verticalHeader5->setSectionResizeMode(QHeaderView::Fixed);
    verticalHeader5->setDefaultSectionSize(20);

    QHeaderView *verticalHeader6 = ui->tableView2_2->verticalHeader();
    verticalHeader6->setSectionResizeMode(QHeaderView::Fixed);
    verticalHeader6->setDefaultSectionSize(20);

    QHeaderView *verticalHeader7 = ui->tableView_2->verticalHeader();
    verticalHeader7->setSectionResizeMode(QHeaderView::Fixed);
    verticalHeader7->setDefaultSectionSize(20);

    QHeaderView *verticalHeader8 = ui->tableView2_3->verticalHeader();
    verticalHeader8->setSectionResizeMode(QHeaderView::Fixed);
    verticalHeader8->setDefaultSectionSize(20);

    QHeaderView *verticalHeader9 = ui->tableView_3->verticalHeader();
    verticalHeader9->setSectionResizeMode(QHeaderView::Fixed);
    verticalHeader9->setDefaultSectionSize(20);

    QHeaderView *verticalHeader10 = ui->tableView_2->verticalHeader();
    verticalHeader10->setSectionResizeMode(QHeaderView::Fixed);
    verticalHeader10->setDefaultSectionSize(20);

    QHeaderView *verticalHeader11 = ui->tableView->verticalHeader();
    verticalHeader11->setSectionResizeMode(QHeaderView::Fixed);
    verticalHeader11->setDefaultSectionSize(20);

    //INT
    ui->lineEdit_18->setValidator( new QIntValidator(0,10, this) );
    ui->lineEdit_37->setValidator( new QIntValidator(0,10, this) );

    ui->lineEdit_7->setValidator( new QIntValidator(0,99999999, this) );
    ui->lineEdit_43->setValidator( new QIntValidator(0,99999999, this) );
    ui->lineEdit_24->setValidator( new QIntValidator(0,99999999, this) );
    ui->lineEdit_2->setValidator( new QIntValidator(0,99999999, this) );
    ui->lineEdit_6->setValidator( new QIntValidator(0,99999999, this) );
    ui->lineEdit_16->setValidator( new QIntValidator(0,99999999, this) );
    ui->lineEdit_15->setValidator( new QIntValidator(0,99999999, this) );

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

    ui->lineEdit_69->setText("recherche par le cin/nom/prenom");
    ui->lineEdit_67->setText("recherche par le cin/nom/prenom");
    ui->lineEdit_70->setText("recherche par le cin/nom/prenom");
    ui->lineEdit_26->setText("recherche par le nom/code_f/prop");
    ui->lineEdit_25->setText("recherche par le nom/code_f/prop");
    ui->lineEdit_19->setText("recherche par le nom/code_f/prop");

    QSqlQuery query;
    query.prepare("SELECT count(idc) from CLIENTS where idf is null");
    query.exec();
    QString s;
    while (query.next()) {
        s = query.value(0).toString();
    }
    ui->label_9->setText(s);
    QSqlQuery query1;
    query1.prepare("SELECT count(idc) from CLIENTS where idf is not null");
    query1.exec();
    QString s1;
    while (query1.next()) {
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
    switch (ret) {
    case QMessageBox::Yes:
    {
        QSqlQuery query;
        QString id = ui->combo_2->currentText();

        query.prepare("SELECT MORAL.code_fisc, MORAL.prop, CLIENTS.adresse ,CLIENTS.email ,CLIENTS.tel "
                      "from CLIENTS join MORAL ON MORAL.idc = CLIENTS.idc "
                      "WHERE CLIENTS.idc = '"+id+"' ");
        query.exec();

        ui->stackedWidget->setCurrentIndex(2);

        while (query.next()) {
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
        ui->tableView2_3->setModel(tmp3.afficher());
        ui->tableView_3->setModel(tmp4.afficher1());
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
        QSqlQuery query;
        QString id = ui->comboBox_3->currentText();

        query.prepare("SELECT PHYSIQUE.nom, PHYSIQUE.prenom, CLIENTS.adresse ,CLIENTS.email ,CLIENTS.tel, PHYSIQUE.naissance "
                      "from CLIENTS join PHYSIQUE ON PHYSIQUE.idc = CLIENTS.idc "
                      "WHERE CLIENTS.idc = '"+id+"' ");
        query.exec();

        ui->stackedWidget_2->setCurrentIndex(2);

        while (query.next()) {
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

void Dialog::adjustTextColor(){
    if(!ui->lineEdit_4->hasAcceptableInput())
        ui->lineEdit_4->setStyleSheet("QLineEdit { color: red;}");
    else
        ui->lineEdit_4->setStyleSheet("QLineEdit { color: black;}");
}

void Dialog::on_pushButton_5_clicked()
{
    if(!ui->lineEdit_4->hasAcceptableInput())
    {
        ui->lineEdit_4->setStyleSheet("QLineEdit { color: red;}");
        QMessageBox msg;
        msg.information(nullptr,QObject::tr("VERIFICATION EMAIL"),QObject::tr("E_MAIL INCORRECT ! VERIFIER VOTRE EMIL .\n"));
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
                   ui->lineEdit_6->text().toInt()
                   );
        client x(ui->lineEdit_18->text().toInt(),
                 ui->lineEdit_4->text(),
                 ui->lineEdit_3->text(),
                 ui->lineEdit_2->text().toInt());

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
}

void Dialog::on_pushButton_16_clicked()
{
    if(!ui->lineEdit_23->hasAcceptableInput())
    {
        ui->lineEdit_23->setStyleSheet("QLineEdit { color: red;}");
        QMessageBox msg;
        msg.information(nullptr,QObject::tr("VERIFICATION EMAIL"),QObject::tr("E_MAIL INCORRECT ! VERIFIER VOTRE EMIL .\n"));
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
                   ui->dateEdit->date()
                   );
        client x(ui->lineEdit_37->text().toInt(),
                 ui->lineEdit_23->text(),
                 ui->lineEdit_22->text(),
                 ui->lineEdit_24->text().toInt());

        QMessageBox msg;
        if(x.ajouter() && c.ajouter())
        {
            msg.information(nullptr,QObject::tr("AJOUT CLIENT"),QObject::tr("CLIENT PHYSIQUE AJOUTE .\n"));
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
    else if(arg1 == "Trier par proprietaire")
    {
        ui->tableView_7->setModel(tmp1.afficherprop());
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
    else if(arg1 == "Trier par proprietaire")
    {
        ui->tableView_7->setModel(tmp1.afficherprop());
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
    else if(arg1 == "Trier par proprietaire")
    {
        ui->tableView_7->setModel(tmp1.afficherprop());
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
    else if(arg1 == "Trier par date")
    {
        ui->tableView_9->setModel(tmp2.afficherdate());
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
    else if(arg1 == "Trier par date")
    {
        ui->tableView_9->setModel(tmp2.afficherdate());
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
    else if(arg1 == "Trier par date")
    {
        ui->tableView_9->setModel(tmp2.afficherdate());
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

    switch (ret) {
    case QMessageBox::Yes:
    {
        carte b;
        if(b.supprimer(id))
        {
            QMessageBox msgBox;
            msgBox.information(nullptr,QObject::tr("Sppression de la carte."),QObject::tr("Carte de fidelite supprimer !\n"));
            ui->tableView2_2->setModel(tmp3.afficher());
            ui->tableView_2->setModel(tmp4.afficher1());
            ui->stackedWidget_3->setCurrentIndex(2);
            QSqlQueryModel *model = new QSqlQueryModel;
            model->setQuery("SELECT clients.IDC FROM clients join carte on clients.idc = carte.idf");
            ui->comboBox_2->setModel(model);
        }
        else
        {
            QMessageBox msgBox;
            msgBox.critical(nullptr,QObject::tr("Sppression de la carte."),QObject::tr("Suppression impossible !\n"));
        }
        break;
    }

    case QMessageBox::Cancel:
        break;
    }
}


void Dialog::on_pushButton_3_clicked()
{
    QSqlQuery query;
    query.prepare("SELECT count(idc) from CLIENTS where idf is null");
    query.exec();
    QString s;
    while (query.next()) {
        s = query.value(0).toString();
    }
    ui->label_9->setText(s);
    QSqlQuery query1;
    query1.prepare("SELECT count(idc) from CLIENTS where idf is not null");
    query1.exec();
    QString s1;
    while (query1.next()) {
        s1 = query1.value(0).toString();
    }
    ui->label_13->setText(s1);
    QPaintEvent *p;
    ui->widget->paintEvent(p);
}

void Dialog::on_pushButton_4_clicked()
{
    /*bool bError = false;

    try
    {
        CSmtp mail;

#define test_gmail_tls

#if defined(test_gmail_tls)
        mail.SetSMTPServer("smtp.gmail.com",587);
        mail.SetSecurityType(USE_TLS);
#elif defined(test_gmail_ssl)
        mail.SetSMTPServer("smtp.gmail.com",465);
        mail.SetSecurityType(USE_SSL);
#elif defined(test_hotmail_TLS)
        mail.SetSMTPServer("smtp.live.com",25);
        mail.SetSecurityType(USE_TLS);
#elif defined(test_aol_tls)
        mail.SetSMTPServer("smtp.aol.com",587);
        mail.SetSecurityType(USE_TLS);
#elif defined(test_yahoo_ssl)
        mail.SetSMTPServer("plus.smtp.mail.yahoo.com",465);
        mail.SetSecurityType(USE_SSL);
#endif

        mail.SetLogin("rentcar.projet@gmail.com");
        mail.SetPassword("azer123@");
        mail.SetSenderName("RENTINI");
        mail.SetSenderMail("rentcar.projet@gmail.com");
        mail.SetReplyTo("elbeuff@gmail.com");
        mail.SetSubject("The message");
        mail.AddRecipient("elbeuff@gmail.com");
        mail.SetXPriority(XPRIORITY_NORMAL);
        mail.SetXMailer("The Bat! (v3.02) Professional");
        mail.AddMsgLine("Hello,");
        mail.AddMsgLine("");
        mail.AddMsgLine("...");
        mail.AddMsgLine("How are you today?");
        mail.AddMsgLine("");
        mail.AddMsgLine("Regards");
        mail.ModMsgLine(5,"regards");
        mail.DelMsgLine(2);
        mail.AddMsgLine("User");

        //mail.AddAttachment("../test1.jpg");
        //mail.AddAttachment("c:\\test2.exe");
        //mail.AddAttachment("c:\\test3.txt");
        mail.Send();
    }
    catch(ECSmtp e)
    {
        std::cout << "Error: " << e.GetErrorText().c_str() << ".\n";
        bError = true;
    }
    if(!bError)
        std::cout << "Mail was send successfully.\n";*/
}
