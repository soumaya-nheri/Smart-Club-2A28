/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *titre;
    QToolBox *toolBox;
    QWidget *page_3;
    QTabWidget *tabWidget;
    QWidget *tab_8;
    QLineEdit *le_id;
    QPushButton *ajouter;
    QLabel *reference;
    QLabel *nom;
    QLabel *quantite;
    QLineEdit *le_cout;
    QLineEdit *le_type;
    QWidget *tab_10;
    QTableView *tab_pub;
    QPushButton *pushButton_mod;
    QPushButton *pushButton_supp;
    QLineEdit *lineEdit_sup;
    QComboBox *comboBox_trier;
    QPushButton *pushButton_PDF;
    QPushButton *pushButton_imprimer;
    QLineEdit *lineEdit_id_2;
    QLabel *nom_7;
    QLabel *quantite_2;
    QLabel *reference_2;
    QLineEdit *lineEdi_cout;
    QLineEdit *lineEdit_type;
    QWidget *page_4;
    QTabWidget *tabWidget_2;
    QWidget *tab;
    QLabel *nom_2;
    QLabel *nom_3;
    QLabel *nom_4;
    QLabel *nom_5;
    QLabel *nom_8;
    QPushButton *pushButton_AJOUTER_spons;
    QLineEdit *lineEdit_id_spons;
    QLineEdit *lineEdit_nom_sponsor;
    QLineEdit *lineEdit_montant;
    QLineEdit *lineEdit_date_debut;
    QLineEdit *lineEdit_date_fin;
    QWidget *tab_2;
    QLineEdit *nom_9;
    QLabel *id;
    QLabel *ref;
    QLabel *prenom;
    QLabel *payment;
    QComboBox *comboBox_trier_2;
    QLineEdit *montant_3;
    QPushButton *pushButton_mod_spons;
    QLineEdit *date_fin_3;
    QPushButton *pushButton_supp_spons;
    QTableView *tab_spons;
    QLabel *nom_6;
    QPushButton *pushButton_PDF_2;
    QPushButton *pushButton_imprimer_2;
    QLineEdit *id_3;
    QLineEdit *date_debut_3;
    QLineEdit *lineEdit_supp_spons;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1117, 629);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        titre = new QGroupBox(centralwidget);
        titre->setObjectName(QStringLiteral("titre"));
        titre->setGeometry(QRect(140, 10, 931, 601));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        titre->setFont(font);
        titre->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        toolBox = new QToolBox(titre);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setGeometry(QRect(0, 30, 921, 541));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        toolBox->setFont(font1);
        toolBox->setStyleSheet(QLatin1String("background-color: rgb(170, 0, 0);\n"
""));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setGeometry(QRect(0, 0, 921, 469));
        tabWidget = new QTabWidget(page_3);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 921, 541));
        QFont font2;
        font2.setPointSize(8);
        font2.setBold(true);
        font2.setUnderline(false);
        font2.setWeight(75);
        tabWidget->setFont(font2);
        tabWidget->setStyleSheet(QStringLiteral("background-color: rgb(170, 0, 0);"));
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        le_id = new QLineEdit(tab_8);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setGeometry(QRect(320, 60, 211, 22));
        le_id->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        ajouter = new QPushButton(tab_8);
        ajouter->setObjectName(QStringLiteral("ajouter"));
        ajouter->setGeometry(QRect(550, 380, 131, 28));
        reference = new QLabel(tab_8);
        reference->setObjectName(QStringLiteral("reference"));
        reference->setGeometry(QRect(170, 160, 111, 20));
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(true);
        font3.setUnderline(false);
        font3.setWeight(75);
        reference->setFont(font3);
        nom = new QLabel(tab_8);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setGeometry(QRect(190, 60, 55, 16));
        nom->setFont(font3);
        quantite = new QLabel(tab_8);
        quantite->setObjectName(QStringLiteral("quantite"));
        quantite->setGeometry(QRect(190, 250, 81, 20));
        quantite->setFont(font3);
        quantite->setStyleSheet(QStringLiteral(""));
        le_cout = new QLineEdit(tab_8);
        le_cout->setObjectName(QStringLiteral("le_cout"));
        le_cout->setGeometry(QRect(320, 250, 211, 22));
        le_cout->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        le_type = new QLineEdit(tab_8);
        le_type->setObjectName(QStringLiteral("le_type"));
        le_type->setGeometry(QRect(310, 160, 211, 22));
        le_type->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        tabWidget->addTab(tab_8, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        tab_pub = new QTableView(tab_10);
        tab_pub->setObjectName(QStringLiteral("tab_pub"));
        tab_pub->setGeometry(QRect(20, 80, 501, 351));
        tab_pub->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pushButton_mod = new QPushButton(tab_10);
        pushButton_mod->setObjectName(QStringLiteral("pushButton_mod"));
        pushButton_mod->setGeometry(QRect(820, 360, 93, 28));
        pushButton_supp = new QPushButton(tab_10);
        pushButton_supp->setObjectName(QStringLiteral("pushButton_supp"));
        pushButton_supp->setGeometry(QRect(670, 420, 93, 28));
        lineEdit_sup = new QLineEdit(tab_10);
        lineEdit_sup->setObjectName(QStringLiteral("lineEdit_sup"));
        lineEdit_sup->setGeometry(QRect(540, 420, 113, 22));
        lineEdit_sup->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        comboBox_trier = new QComboBox(tab_10);
        comboBox_trier->setObjectName(QStringLiteral("comboBox_trier"));
        comboBox_trier->setGeometry(QRect(420, 20, 73, 31));
        pushButton_PDF = new QPushButton(tab_10);
        pushButton_PDF->setObjectName(QStringLiteral("pushButton_PDF"));
        pushButton_PDF->setGeometry(QRect(700, 20, 81, 31));
        pushButton_imprimer = new QPushButton(tab_10);
        pushButton_imprimer->setObjectName(QStringLiteral("pushButton_imprimer"));
        pushButton_imprimer->setGeometry(QRect(810, 20, 91, 31));
        lineEdit_id_2 = new QLineEdit(tab_10);
        lineEdit_id_2->setObjectName(QStringLiteral("lineEdit_id_2"));
        lineEdit_id_2->setGeometry(QRect(680, 150, 211, 22));
        lineEdit_id_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        nom_7 = new QLabel(tab_10);
        nom_7->setObjectName(QStringLiteral("nom_7"));
        nom_7->setGeometry(QRect(550, 150, 55, 16));
        nom_7->setFont(font3);
        quantite_2 = new QLabel(tab_10);
        quantite_2->setObjectName(QStringLiteral("quantite_2"));
        quantite_2->setGeometry(QRect(560, 300, 81, 20));
        quantite_2->setFont(font3);
        quantite_2->setStyleSheet(QStringLiteral(""));
        reference_2 = new QLabel(tab_10);
        reference_2->setObjectName(QStringLiteral("reference_2"));
        reference_2->setGeometry(QRect(550, 230, 111, 20));
        reference_2->setFont(font3);
        lineEdi_cout = new QLineEdit(tab_10);
        lineEdi_cout->setObjectName(QStringLiteral("lineEdi_cout"));
        lineEdi_cout->setGeometry(QRect(680, 300, 211, 22));
        lineEdi_cout->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_type = new QLineEdit(tab_10);
        lineEdit_type->setObjectName(QStringLiteral("lineEdit_type"));
        lineEdit_type->setGeometry(QRect(680, 230, 211, 22));
        lineEdit_type->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        tabWidget->addTab(tab_10, QString());
        toolBox->addItem(page_3, QStringLiteral("gestion de pub"));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        page_4->setGeometry(QRect(0, 0, 921, 469));
        tabWidget_2 = new QTabWidget(page_4);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(10, 0, 871, 461));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        nom_2 = new QLabel(tab);
        nom_2->setObjectName(QStringLiteral("nom_2"));
        nom_2->setGeometry(QRect(200, 130, 61, 20));
        nom_2->setFont(font3);
        nom_3 = new QLabel(tab);
        nom_3->setObjectName(QStringLiteral("nom_3"));
        nom_3->setGeometry(QRect(180, 70, 55, 16));
        nom_3->setFont(font3);
        nom_4 = new QLabel(tab);
        nom_4->setObjectName(QStringLiteral("nom_4"));
        nom_4->setGeometry(QRect(190, 170, 81, 16));
        nom_4->setFont(font3);
        nom_5 = new QLabel(tab);
        nom_5->setObjectName(QStringLiteral("nom_5"));
        nom_5->setGeometry(QRect(190, 240, 101, 20));
        nom_5->setFont(font3);
        nom_8 = new QLabel(tab);
        nom_8->setObjectName(QStringLiteral("nom_8"));
        nom_8->setGeometry(QRect(180, 306, 71, 20));
        nom_8->setFont(font3);
        pushButton_AJOUTER_spons = new QPushButton(tab);
        pushButton_AJOUTER_spons->setObjectName(QStringLiteral("pushButton_AJOUTER_spons"));
        pushButton_AJOUTER_spons->setGeometry(QRect(640, 352, 141, 51));
        lineEdit_id_spons = new QLineEdit(tab);
        lineEdit_id_spons->setObjectName(QStringLiteral("lineEdit_id_spons"));
        lineEdit_id_spons->setGeometry(QRect(300, 130, 113, 22));
        lineEdit_id_spons->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_nom_sponsor = new QLineEdit(tab);
        lineEdit_nom_sponsor->setObjectName(QStringLiteral("lineEdit_nom_sponsor"));
        lineEdit_nom_sponsor->setGeometry(QRect(300, 70, 113, 22));
        lineEdit_nom_sponsor->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_montant = new QLineEdit(tab);
        lineEdit_montant->setObjectName(QStringLiteral("lineEdit_montant"));
        lineEdit_montant->setGeometry(QRect(320, 180, 113, 22));
        lineEdit_montant->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_date_debut = new QLineEdit(tab);
        lineEdit_date_debut->setObjectName(QStringLiteral("lineEdit_date_debut"));
        lineEdit_date_debut->setGeometry(QRect(320, 240, 113, 22));
        lineEdit_date_debut->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_date_fin = new QLineEdit(tab);
        lineEdit_date_fin->setObjectName(QStringLiteral("lineEdit_date_fin"));
        lineEdit_date_fin->setGeometry(QRect(320, 310, 113, 22));
        lineEdit_date_fin->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        tabWidget_2->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        nom_9 = new QLineEdit(tab_2);
        nom_9->setObjectName(QStringLiteral("nom_9"));
        nom_9->setGeometry(QRect(720, 110, 113, 22));
        nom_9->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        id = new QLabel(tab_2);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(590, 120, 55, 16));
        id->setFont(font3);
        ref = new QLabel(tab_2);
        ref->setObjectName(QStringLiteral("ref"));
        ref->setGeometry(QRect(590, 240, 81, 20));
        ref->setFont(font3);
        ref->setStyleSheet(QStringLiteral(""));
        prenom = new QLabel(tab_2);
        prenom->setObjectName(QStringLiteral("prenom"));
        prenom->setGeometry(QRect(590, 190, 81, 20));
        prenom->setFont(font3);
        prenom->setStyleSheet(QStringLiteral(""));
        payment = new QLabel(tab_2);
        payment->setObjectName(QStringLiteral("payment"));
        payment->setGeometry(QRect(590, 300, 111, 20));
        payment->setFont(font3);
        payment->setStyleSheet(QStringLiteral(""));
        comboBox_trier_2 = new QComboBox(tab_2);
        comboBox_trier_2->setObjectName(QStringLiteral("comboBox_trier_2"));
        comboBox_trier_2->setGeometry(QRect(410, 20, 73, 31));
        montant_3 = new QLineEdit(tab_2);
        montant_3->setObjectName(QStringLiteral("montant_3"));
        montant_3->setGeometry(QRect(720, 200, 113, 22));
        montant_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pushButton_mod_spons = new QPushButton(tab_2);
        pushButton_mod_spons->setObjectName(QStringLiteral("pushButton_mod_spons"));
        pushButton_mod_spons->setGeometry(QRect(770, 350, 93, 28));
        date_fin_3 = new QLineEdit(tab_2);
        date_fin_3->setObjectName(QStringLiteral("date_fin_3"));
        date_fin_3->setGeometry(QRect(720, 300, 113, 22));
        date_fin_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pushButton_supp_spons = new QPushButton(tab_2);
        pushButton_supp_spons->setObjectName(QStringLiteral("pushButton_supp_spons"));
        pushButton_supp_spons->setGeometry(QRect(670, 400, 93, 28));
        tab_spons = new QTableView(tab_2);
        tab_spons->setObjectName(QStringLiteral("tab_spons"));
        tab_spons->setGeometry(QRect(20, 100, 501, 301));
        tab_spons->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        nom_6 = new QLabel(tab_2);
        nom_6->setObjectName(QStringLiteral("nom_6"));
        nom_6->setGeometry(QRect(590, 150, 111, 20));
        nom_6->setFont(font3);
        pushButton_PDF_2 = new QPushButton(tab_2);
        pushButton_PDF_2->setObjectName(QStringLiteral("pushButton_PDF_2"));
        pushButton_PDF_2->setGeometry(QRect(520, 22, 75, 31));
        pushButton_imprimer_2 = new QPushButton(tab_2);
        pushButton_imprimer_2->setObjectName(QStringLiteral("pushButton_imprimer_2"));
        pushButton_imprimer_2->setGeometry(QRect(624, 22, 81, 31));
        id_3 = new QLineEdit(tab_2);
        id_3->setObjectName(QStringLiteral("id_3"));
        id_3->setGeometry(QRect(720, 160, 113, 22));
        id_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        date_debut_3 = new QLineEdit(tab_2);
        date_debut_3->setObjectName(QStringLiteral("date_debut_3"));
        date_debut_3->setGeometry(QRect(720, 250, 113, 22));
        date_debut_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_supp_spons = new QLineEdit(tab_2);
        lineEdit_supp_spons->setObjectName(QStringLiteral("lineEdit_supp_spons"));
        lineEdit_supp_spons->setGeometry(QRect(550, 400, 113, 22));
        lineEdit_supp_spons->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        tabWidget_2->addTab(tab_2, QString());
        toolBox->addItem(page_4, QStringLiteral("gestion sponsor"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1117, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        toolBox->setCurrentIndex(0);
        tabWidget->setCurrentIndex(1);
        tabWidget_2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        titre->setTitle(QApplication::translate("MainWindow", "GESTION DE MARKETING : ", Q_NULLPTR));
        ajouter->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        reference->setText(QApplication::translate("MainWindow", "type publicit\303\251", Q_NULLPTR));
        nom->setText(QApplication::translate("MainWindow", "ID:", Q_NULLPTR));
        quantite->setText(QApplication::translate("MainWindow", "cout:", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QApplication::translate("MainWindow", "ajouter publicit\303\251", Q_NULLPTR));
        pushButton_mod->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        pushButton_supp->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        comboBox_trier->clear();
        comboBox_trier->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Trier ", Q_NULLPTR)
         << QApplication::translate("MainWindow", "id", Q_NULLPTR)
         << QApplication::translate("MainWindow", "type publicit\303\251", Q_NULLPTR)
         << QApplication::translate("MainWindow", "cout", Q_NULLPTR)
        );
        pushButton_PDF->setText(QApplication::translate("MainWindow", "PDF", Q_NULLPTR));
        pushButton_imprimer->setText(QApplication::translate("MainWindow", "IMPRIMER", Q_NULLPTR));
        nom_7->setText(QApplication::translate("MainWindow", "ID:", Q_NULLPTR));
        quantite_2->setText(QApplication::translate("MainWindow", "cout:", Q_NULLPTR));
        reference_2->setText(QApplication::translate("MainWindow", "type publicit\303\251", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_10), QApplication::translate("MainWindow", "Afficher publicit\303\251", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("MainWindow", "gestion de pub", Q_NULLPTR));
        nom_2->setText(QApplication::translate("MainWindow", "ID:", Q_NULLPTR));
        nom_3->setText(QApplication::translate("MainWindow", "NOM:", Q_NULLPTR));
        nom_4->setText(QApplication::translate("MainWindow", "MONTANT :", Q_NULLPTR));
        nom_5->setText(QApplication::translate("MainWindow", "Date Debut :", Q_NULLPTR));
        nom_8->setText(QApplication::translate("MainWindow", "Date Fin:", Q_NULLPTR));
        pushButton_AJOUTER_spons->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab), QApplication::translate("MainWindow", "ajouter sponsor", Q_NULLPTR));
        id->setText(QApplication::translate("MainWindow", "NOM", Q_NULLPTR));
        ref->setText(QApplication::translate("MainWindow", "Date Debut", Q_NULLPTR));
        prenom->setText(QApplication::translate("MainWindow", "montant", Q_NULLPTR));
        payment->setText(QApplication::translate("MainWindow", "Date Fin", Q_NULLPTR));
        comboBox_trier_2->clear();
        comboBox_trier_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Trier ", Q_NULLPTR)
         << QApplication::translate("MainWindow", "id", Q_NULLPTR)
         << QApplication::translate("MainWindow", "nom et prenom", Q_NULLPTR)
         << QApplication::translate("MainWindow", "ref_moy et nom et prenom", Q_NULLPTR)
        );
        pushButton_mod_spons->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        pushButton_supp_spons->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        nom_6->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        pushButton_PDF_2->setText(QApplication::translate("MainWindow", "PDF", Q_NULLPTR));
        pushButton_imprimer_2->setText(QApplication::translate("MainWindow", "IMPRIMER", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_2), QApplication::translate("MainWindow", "afficher sponsor", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_4), QApplication::translate("MainWindow", "gestion sponsor", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
