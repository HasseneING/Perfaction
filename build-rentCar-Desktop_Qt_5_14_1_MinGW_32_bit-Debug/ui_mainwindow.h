/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *auth;
    QLabel *label_21;
    QGroupBox *groupBox;
    QPushButton *pushButton_41;
    QLabel *passwordl;
    QLabel *emaill;
    QLabel *label_22;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1491, 920);
        auth = new QWidget(MainWindow);
        auth->setObjectName(QString::fromUtf8("auth"));
        label_21 = new QLabel(auth);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(150, 140, 471, 141));
        QFont font;
        font.setFamily(QString::fromUtf8("Monotype Corsiva"));
        font.setPointSize(72);
        font.setBold(false);
        font.setItalic(true);
        font.setWeight(50);
        label_21->setFont(font);
        label_21->setTextFormat(Qt::AutoText);
        groupBox = new QGroupBox(auth);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(50, 310, 681, 361));
        groupBox->setStyleSheet(QString::fromUtf8("QLabel {\n"
"        qproperty-alignment: AlignCenter;\n"
"	border: 1px solid #FF17365D;\n"
"	border-top-left-radius: 15px;\n"
"	border-top-right-radius: 15px;\n"
"	background-color: #FF17365D;\n"
"	padding: 5px 0px;\n"
"	color: rgb(255, 255, 255);\n"
"	max-height: 25px;\n"
"        font-size: 18px;\n"
"}\n"
"QGroupBox {\n"
"    border: 3px solid gray;\n"
"    border-color: #FF17365D;\n"
"	background-color: #EEEEEE;\n"
"    margin-top: 27px;\n"
"    font-size: 14px;\n"
"    border-bottom-left-radius: 15px;\n"
"    border-bottom-right-radius: 15px;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center;\n"
"    border-top-left-radius: 15px;\n"
"    border-top-right-radius: 15px;\n"
"    padding: 5px 150px;\n"
"    background-color: #FF17365D;\n"
"    color: rgb(255, 255, 255);\n"
"}\n"
"QLineEdit {\n"
"background-color: rgb(255, 255, 255);\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    selection-background-color:"
                        " darkgray;\n"
"	font: bold 14px;\n"
"}\n"
""));
        pushButton_41 = new QPushButton(groupBox);
        pushButton_41->setObjectName(QString::fromUtf8("pushButton_41"));
        pushButton_41->setGeometry(QRect(510, 280, 131, 51));
        QFont font1;
        font1.setPointSize(10);
        pushButton_41->setFont(font1);
        pushButton_41->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(42, 95, 113, 255),stop:1 rgba(12, 53, 97, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(167, 214, 50, 255),stop:1 rgba(98, 169, 67, 255));\n"
"	color: #fff;\n"
"\n"
"}\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(147, 194, 30, 255),stop:1 rgba(78, 149, 47, 255));\n"
"	color: #fff;\n"
"	border: 0px;\n"
"	border-radius: 5px;\n"
"	padding: 5px;\n"
"\n"
"}"));
        passwordl = new QLabel(groupBox);
        passwordl->setObjectName(QString::fromUtf8("passwordl"));
        passwordl->setGeometry(QRect(30, 165, 261, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Helvetica"));
        font2.setBold(true);
        font2.setWeight(75);
        passwordl->setFont(font2);
        emaill = new QLabel(groupBox);
        emaill->setObjectName(QString::fromUtf8("emaill"));
        emaill->setGeometry(QRect(30, 85, 261, 31));
        emaill->setFont(font2);
        emaill->setWordWrap(false);
        label_22 = new QLabel(groupBox);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(220, 240, 201, 31));
        QFont font3;
        label_22->setFont(font3);
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(330, 159, 321, 41));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(330, 80, 321, 41));
        MainWindow->setCentralWidget(auth);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1491, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:72pt; font-weight:600; vertical-align:sub;\">CONNEXION</span></p></body></html>", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "infos de connexion", nullptr));
        pushButton_41->setText(QCoreApplication::translate("MainWindow", "Se connecter", nullptr));
        passwordl->setText(QCoreApplication::translate("MainWindow", "Mot de pass :", nullptr));
        emaill->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Mot de pass oubli\303\251 ?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
