#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{

    ui->setupUi(this);
    this->showMaximized();

    QPixmap pic(":/img/heart.png");

    int w=ui->heart->width();
    int h=ui->heart->height();
    ui->heart->setPixmap(pic.scaled(w,h,Qt::KeepAspectRatio ));
    ui->tableViewEmp->setModel(tmpEmploye.afficher());



}
void Dialog::init()
{

}

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
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("select id from employe");
    ui->comboBoxIdEmpConge->setModel(model);
    ui->tableViewCongeAll->setModel(tmpConge.afficherconge());

}
void Dialog::on_pushButton_clicked()
{
    ui->tableViewCompte->setModel(tmpCompte.afficherCompte());
}

void Dialog::on_gestionCompte_clicked()
{
       ui->stackedWidget->setCurrentIndex(2);
       QSqlQueryModel *model = new QSqlQueryModel;
       model->setQuery("select id from employe");
       ui->comboBoxIdEmpCompte->setModel(model);
        ui->tableViewCompte->setModel(tmpCompte.afficherCompte());

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
    int idEmp=ui->comboBoxIdEmpConge->currentText().toInt();
  //  int idEmp=ui->lineEditIdEmpCompte->text().toInt();
   QString idEmploye=ui->comboBoxIdEmpConge->currentText();

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
    int idEmploye =ui->comboBoxIdEmpCompte->currentText().toInt();
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
                    ui->comboBoxIdEmpCompte->setCurrentText(query.value(4).toString());

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
                    ui->comboBoxIdEmpCompte->setCurrentText(query.value(4).toString());

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

void Dialog::on_stat_clicked()
{
    DrilldownChart *chart = new DrilldownChart();
    chart->setTheme(QChart::ChartThemeQt);
    chart->setAnimationOptions(QChart::AllAnimations);
    QSizeF s(500,500);
    chart->resize(s);
    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignRight);

    QPieSeries *etatAllEmpSeries = new QPieSeries(ui->statBox); //lkbira


    etatAllEmpSeries->setName("Etat des employés");
    QSqlQuery query;
     query.prepare("SELECT DISTINCT etat from employe ");
     query.exec();

      while(query.next()) // ki tenzel aala les etats yhezek lel les roles fel etat hedheka
      {
          int etat = query.value(0).toInt();
          QString etatS = query.value(0).toString();
          QString etatString;

          if (etat==1)
          {
              etatString="congé";
          }
          else if (etat==0)
          {
              etatString="travail";
          }

          QPieSeries *roleSeries = new QPieSeries(ui->statBox); // detaillé
          roleSeries->setName("Role des employés en " + etatString);
          QSqlQuery q;
          q.prepare("SELECT DISTINCT compte.Role from Compte INNER JOIN employe on employe.id=compte.idemploye where etat='"+etatS+"'");
          q.exec();
          while(q.next())
          {
              QString role = q.value(0).toString();
              QSqlQuery qr;
              qr.prepare("select COUNT(*) from employe  inner join compte "
                         "on employe.id=compte.idemploye where compte.role='"+role+"'");

              qr.exec();
              qr.next();
              *roleSeries << new DrilldownSlice(qr.value(0).toInt(), role, etatAllEmpSeries);
          }
          QObject::connect(roleSeries, &QPieSeries::clicked, chart, &DrilldownChart::handleSliceClicked);
          *etatAllEmpSeries << new DrilldownSlice(roleSeries->sum(), etatString, roleSeries);
      }

      QObject::connect(etatAllEmpSeries, &QPieSeries::clicked, chart, &DrilldownChart::handleSliceClicked);

      chart->changeSeries(etatAllEmpSeries);
      QChartView *chartView = new QChartView(chart,ui->statBox);
      chartView->setRenderHint(QPainter::Antialiasing);
    ui->stackedWidget_2->setCurrentIndex(1);
}
