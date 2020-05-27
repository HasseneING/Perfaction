#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{

    ui->setupUi(this);
    this->showMaximized();
    /*QLineEdit *lineEditIdEmp = new QLineEdit;
    lineEditIdEmp->setPlaceholderText("Enter number");*/
    QPixmap pic(":/img/heart.png");

    int w=ui->heart->width();
    int h=ui->heart->height();
    ui->heart->setPixmap(pic.scaled(w,h,Qt::KeepAspectRatio ));
    ui->tableViewCompte->setModel(tmpCompte.afficherCompte());
}
/*
void Dialog:: init()
{
    ui->setupUi(this);

    ui->tabWidget->setCurrentIndex(0);
    ui->stacked_location->setCurrentIndex(0);
    ui->stacked_reservation->setCurrentIndex(0);

    ui->table_loca->setModel(tmp.afficher());
    ui->table_res->setModel(res.afficher());

    ui->loc_kmD->setValidator( new QIntValidator(0,999999,this) );
    ui->loc_km_d->setValidator( new QIntValidator(0,999999,this) );
    ui->loc_km_a->setValidator( new QIntValidator(0,999999,this) );
    ui->loc_RaP->setValidator( new QDoubleValidator(0,9999,3,this));
    ui->loc_caution->setValidator( new QDoubleValidator(0,9999,3,this));
    ui->loc_rap->setValidator( new QDoubleValidator(0,9999,3,this));
    ui->loc_Caution->setValidator( new QDoubleValidator(0,9999.999,3,this));

    ui->res_IdClient->setValidator(new QIntValidator(1,9999,this));
    ui->res_IdRes->setValidator(new QIntValidator(1,9999,this));
    ui->loc_idLoc->setValidator(new QIntValidator(1,9999,this));
    ui->loc_idloc->setValidator(new QIntValidator(1,9999,this));
    ui->loc_idres->setValidator(new QIntValidator(1,9999,this));

    ui->table_res->setSortingEnabled(true);
    ui->table_res->sortByColumn(0, Qt::AscendingOrder);


    QRegExp re("[a-z-A-Z ]{3}");
    QRegExpValidator *v = new QRegExpValidator(re, this);

    QRegExp re2("[A-Z-a-z-0-9 ]{30}");
    QRegExpValidator *v2 = new QRegExpValidator(re2, this);

     //email
    QRegularExpression rx("\\b[A-Z0-9._%+-]+@[A-Z0-9.-]+\\.[A-Z]{2,4}\\b",
                          QRegularExpression::CaseInsensitiveOption);
    ui->lineEdit_4->setValidator(new QRegularExpressionValidator(rx, this));
    }
    */





Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_gestionEmp_clicked()
{
        ui->stackedWidget->setCurrentIndex(0);
}

void Dialog::on_gestionConge_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}
void Dialog::on_pushButton_clicked()
{
    ui->tableViewCompte->setModel(tmpCompte.afficherCompte());
}

void Dialog::on_gestionCompte_clicked()
{
       ui->stackedWidget->setCurrentIndex(2);
}
void Dialog::on_pushButton_11_clicked()
{
    ui->stackedWidgetConge->setCurrentIndex(0);
}
void Dialog::on_pushButton_12_clicked()
{
    ui->stackedWidgetConge->setCurrentIndex(1);

}
void Dialog::on_pushButton_6_clicked()
{
    ui->tableViewEmp->setModel(tmpEmploye.afficher());

}
void Dialog::on_afficher_clicked()
{
    ui->tableViewCongeAll->setModel(tmpConge.afficherconge());
}
void Dialog::on_comboBoxTriCompte_activated(int index)
{
    ui->tableViewCompte->setModel(tmpCompte.Tri(index));
}

void Dialog::on_comboBoxTriConge_activated(int index)
{
    ui->tableViewCongeAll->setModel(tmpConge.Tri(index));
}
void Dialog::on_comboBoxTriEmp_activated(int index)
{
    ui->tableViewEmp->setModel(tmpEmploye.Tri(index));
}
void Dialog::on_lineEditRechercherEmp_textChanged(const QString &arg)
{
   QString str=arg;
    str.replace("&", "");str.replace("/", ""); str.replace("(", ""); str.replace(")", "");str.replace("=", "");str.replace("*", "");str.replace("-", "");str.replace(".", ""); str.replace("+", "");str.replace(":", ""); str.replace(";", ""); str.replace("!", "");str.replace("§", "");str.replace("?", "");

    ui->tableViewEmp->setModel(tmpEmploye.rechercher(str));
}



void Dialog::on_pushButton_AjouterEmp_clicked()
{
    QDate date;


    QString nom= ui->lineEditNom->text();
    QString prenom= ui->lineEditPrenom->text();
    QString email= ui->lineEditEmail->text();
    QDate dateNaiss =ui->dateNaissEdit->date();
    QString numTel = ui->lineEditNumTel->text();
    int soldeConge=ui->lineEditSoldeConge->text().toInt();
    QDate dateMajConge= date.currentDate();
    bool etat=false;


        employe e( nom, prenom, email, dateNaiss, numTel, dateMajConge, soldeConge, etat);
        bool test=e.ajouter();
            if(test)
            {
                ui->tableViewEmp->setModel(tmpEmploye.afficher());
            }

            else
            {
                QMessageBox::critical(nullptr, QObject::tr("ajout"),
                            QObject::tr("Erreur d'ajout!!!!.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);
            }
}

void Dialog::on_pushButtonModifierEmp_clicked()
{
    QModelIndexList selection = ui->tableViewEmp->selectionModel()->selectedRows(0);

        if (!selection.empty()) {

            QModelIndex idIndex = selection.at(0);
            QString id = idIndex.data().toString();

            ui->lineEditID->setText(id);

            QSqlQuery query;
            query.prepare ("select id,nom,prenom,dateNaiss,numTel,email,soldeConge from employe where id = '"+id+"'");
            if (query.exec())
            {
                while (query.next())
                {
                    ui->lineEditID->setText(query.value(0).toString());
                    ui->lineEditNom->setText(query.value(1).toString());
                    ui->lineEditPrenom->setText(query.value(2).toString());
                    ui->dateNaissEdit->setDate(query.value(3).toDate());
                    ui->lineEditNumTel->setText(query.value(4).toString());
                    ui->lineEditEmail->setText(query.value(5).toString());
                   ui->lineEditSoldeConge->setText(query.value(6).toString());
                }
            }


                } else {
                    QMessageBox::information(this, tr("Modification Employe"),
                                             tr("Selectionnez l'employé que vous voulez Modifier."));
                }
}

void Dialog::on_pushButtonSupprimerEmp_clicked()
{
    QModelIndexList selection = ui->tableViewEmp->selectionModel()->selectedRows(0);
    if (!selection.empty()) {
        QModelIndex idIndex = selection.at(0);
        double id = idIndex.data().toDouble();
        QString nomE = idIndex.sibling(idIndex.row(), 2).data().toString();
        QString prenomE = idIndex.sibling(idIndex.row(), 3).data().toString();

        QMessageBox::StandardButton button;
        button = QMessageBox::question(this, tr("Suppression Employe"),
                                       QString(tr("Etes-vous sûr de vouloir supprimer " \
                                                  "l'employe '%1' : '%2' '%3'?"))
                                              .arg(id).arg(nomE).arg(prenomE),
                                       QMessageBox::Yes | QMessageBox::No);

        if (button == QMessageBox::Yes) {
           QString ids=QString::number(id);
            QSqlQuery q;
            q.prepare("delete from employe where ID='"+ids+"'");
            q.exec();
        }
    }
    else {
        QMessageBox::information(this, tr("Suppression Employe"),
                                 tr("Selectionnez l'employe que vous voulez supprimer."));
    }
    ui->tableViewEmp->setModel(tmpEmploye.afficher());
}



void Dialog::on_pushButton_ModifierEmp_clicked()
{
    int id= ui->lineEditNom->text().toInt();
    QString nom= ui->lineEditNom->text();
    QString prenom= ui->lineEditPrenom->text();
    QString email= ui->lineEditEmail->text();
    QDate dateNaiss =ui->dateNaissEdit->date();
    QString numTel = ui->lineEditNumTel->text();
    int soldeConge = ui->lineEditSoldeConge->text().toInt();
    QDate date;
    QDate dateMajConge= date.currentDate();

    employe e(id,nom,prenom,email,dateNaiss,numTel,dateMajConge,soldeConge,0);

    bool test=e.modifier();

    if(test)
    {
        ui->tableViewEmp->setModel(tmpEmploye.afficher());


    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("Modification"),
                    QObject::tr("Erreur.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
}





void Dialog::on_buttonEnvoyerDemande_clicked()
{

    QString motif= ui->comboBoxMotif->currentText();
    QDate dateDebut =ui->datDebuteEdit->date();
    QDate dateFin =ui->dateFinEdit->date();
    QDate dateRetour =ui->dateRetourEdit->date();
    int idEmp=ui->lineEditIdEmpCompte->text().toInt();
    QString idEmploye=ui->lineEditIdEmpCompte->text();

    conge c( dateDebut, dateFin, dateRetour, motif, NULL, idEmp);

        bool test=c.ajouterconge();
            if(test)
            {
                //ui->tableViewCongeAll->setModel(tmpConge.afficherconge());
                ui->tableViewCongeEmp->setModel(tmpConge.affichercongeEmp(idEmploye));
            }

            else
            {
                QMessageBox::critical(nullptr, QObject::tr("ajout"),
                            QObject::tr("Erreur d'ajout!!!!.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);
            }
}





void Dialog::on_pushButton_5_clicked() //accepter conge
{
    QModelIndexList selection = ui->tableViewCongeAll->selectionModel()->selectedRows(0);

        if (!selection.empty()) {

            QModelIndex idIndex = selection.at(0);

            int id = idIndex.data().toInt();


            employe e ;
            bool test=e.affecterCongeEmp(id);
             if (test)
             {
                 ui->tableViewCongeAll->setModel(tmpConge.afficherconge());
             }
             else
             {
                 QMessageBox::information(this, tr("Impossible de faire ceci"),
                                          tr("erreur "));
             }


        }
                 else {
                    QMessageBox::information(this, tr("Impossible!"),
                                             tr("Selectionnez l'employé que vous voulez Modifier."));
                }
}



void Dialog::on_pushButton_AjouterCompte_clicked()
{

    QString login= ui->lineEdittLogin->text();
    QString mdp= ui->lineEditMDP->text();
    QString role= ui->comboBoxRole->currentText();
    int idEmploye =ui->lineEditIdEmp->text().toInt();
     compte c (login,mdp,role,idEmploye);
        bool test=c.ajouterCompte();
            if(test)
            {
                ui->tableViewCompte->setModel(tmpCompte.afficherCompte());
            }

            else
            {
                QMessageBox::critical(nullptr, QObject::tr("ajout"),
                            QObject::tr("Erreur d'ajout!!!!.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);
            }
}

void Dialog::on_pushButton_modifierEmploye_clicked()
{
    QModelIndexList selection = ui->tableViewCompte->selectionModel()->selectedRows(0);

        if (!selection.empty()) {

            QModelIndex idIndex = selection.at(0);
            QString id = idIndex.data().toString();

            ui->lineEditIDC->setText(id);

            QSqlQuery query;
            query.prepare ("select id,login,mdp,role,idEmploye from compte where id = '"+id+"'");
            if (query.exec())
            {
                while (query.next())
                {
                    //idcompte, login , mot de passe,role,nom,prenom,idEmp

                    ui->lineEditIDC->setText(query.value(0).toString());
                    ui->lineEdittLogin->setText(query.value(1).toString());
                    ui->lineEditMDP->setText(query.value(2).toString());
                    ui->comboBoxRole->setCurrentText(query.value(3).toString());
                    ui->lineEditIdEmp->setText(query.value(4).toString());

                }
            }


                } else {
                    QMessageBox::information(this, tr("Modification Employe"),
                                             tr("Selectionnez l'employé que vous voulez Modifier."));
                }

}



void Dialog::on_pushButton_9_clicked() //supprimer compte
{
    QModelIndexList selection = ui->tableViewCompte->selectionModel()->selectedRows(0);

        if (!selection.empty()) {
        //idcompte, login , mot de passe,role,nom,prenom,idEmp
        QModelIndex idIndex = selection.at(0);
        double id = idIndex.data().toDouble();
        QString nomE = idIndex.sibling(idIndex.row(), 4).data().toString();
        QString prenomE = idIndex.sibling(idIndex.row(), 5).data().toString();

        QMessageBox::StandardButton button;
        button = QMessageBox::question(this, tr("Suppression Compte"),
                                       QString(tr("Etes-vous sûr de vouloir supprimer " \
                                                  "ce compte '%1' associé à '%2' '%3'?"))
                                              .arg(id).arg(nomE).arg(prenomE),
                                       QMessageBox::Yes | QMessageBox::No);

        if (button == QMessageBox::Yes) {
           QString ids=QString::number(id);
            QSqlQuery q;
            q.prepare("delete from compte where ID='"+ids+"'");
            q.exec();
        }
    }
    else {
        QMessageBox::information(this, tr("Suppression Employe"),
                                 tr("Selectionnez l'employe que vous voulez supprimer."));
    }
    ui->tableViewCompte->setModel(tmpCompte.afficherCompte());
}




void Dialog::on_editConge_clicked()
{
    QModelIndexList selection = ui->tableViewCongeEmp->selectionModel()->selectedRows(0);

        if (!selection.empty()) {

            QModelIndex idIndex = selection.at(0);
            QString id = idIndex.data().toString();

            ui->lineEditIDC->setText(id);

            QSqlQuery query;
            query.prepare ("select id,login,mdp,role,idEmploye from compte where id = '"+id+"'");
            if (query.exec())
            {
                while (query.next())
                {
                    //idcompte, login , mot de passe,role,nom,prenom,idEmp

                    ui->lineEditIDC->setText(query.value(0).toString());
                    ui->lineEdittLogin->setText(query.value(1).toString());
                    ui->lineEditMDP->setText(query.value(2).toString());
                    ui->comboBoxRole->setCurrentText(query.value(3).toString());
                    ui->lineEditIdEmp->setText(query.value(4).toString());

                }
            }


                } else {
                    QMessageBox::information(this, tr("Modification Conge"),
                                             tr("Selectionnez l'employé que vous voulez Modifier."));
                }
}




void Dialog::on_idEmployeCompte_currentIndexChanged(const QString &arg1)
{

}

/*
void Dialog::on_stat_clicked()
{

    DrilldownChart *chart = new DrilldownChart();
    chart->setTheme(QChart::ChartThemeQt);
    chart->setAnimationOptions(QChart::AllAnimations);
    QSizeF s(500,500);
    chart->resize(s);
    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignRight);

    QPieSeries *marqueSeries = new QPieSeries(ui->tabWidget);
    marqueSeries->setName("Location par Marque");

    QSqlQuery query;
    query.prepare("SELECT DISTINCT MARQUE from VOITURES");
    query.exec();
    while(query.next())
    {
        QString marque = query.value(0).toString();
        QPieSeries *modeleSeries = new QPieSeries(ui->tabWidget);
        modeleSeries->setName("Location par Modèle - " + marque);

        QSqlQuery q;
        q.prepare("SELECT DISTINCT MODELE from VOITURES where MARQUE='"+marque+"'");
        q.exec();
        while(q.next())
        {
            QString modele = q.value(0).toString();
            QSqlQuery qr;
            qr.prepare("select COUNT(*) from locations2 l inner join reservation r "
                       "on l.idres=r.id_res inner join voitures v "
                       "on r.matricule=v.matricule where v.modele='"+modele+"'");
            qr.exec();
            qr.next();
            *modeleSeries << new DrilldownSlice(qr.value(0).toInt(), modele, marqueSeries);
        }

        QObject::connect(modeleSeries, &QPieSeries::clicked, chart, &DrilldownChart::handleSliceClicked);

        *marqueSeries << new DrilldownSlice(modeleSeries->sum(), marque, modeleSeries);
    }

    QObject::connect(marqueSeries, &QPieSeries::clicked, chart, &DrilldownChart::handleSliceClicked);

    chart->changeSeries(marqueSeries);

    QChartView *chartView = new QChartView(chart,ui->Stat);
    chartView->setRenderHint(QPainter::Antialiasing);

    ui->stacked_location->setCurrentIndex(3);

}
*/


















