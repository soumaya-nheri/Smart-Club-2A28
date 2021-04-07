#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include<QSqlQueryModel>
#include "publicite.h"
#include "connection.h"
#include"sponsors.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_ajouter_clicked()
{
    int id=ui->le_id->text().toInt();
     int cout=ui->le_cout->text().toInt();
    QString type_pub=ui->le_type->text();
    publicite P(id, type_pub ,cout);
    bool test=P.ajouter();

    QMessageBox msgBox;


    if(test)
       { msgBox.setText("ajout avec succes.");
         ui->tab_pub->setModel(P.afficher());
    }
    else
        msgBox.setText("Echec  de d'ajout");
    msgBox.exec();
}

void MainWindow::on_pushButton_supp_clicked()
{
    publicite p;
        int x=ui->lineEdit_sup->text().toInt();
        bool test=p.supprimer(x);
        QMessageBox msgBox;

        if(test)
           {
            msgBox.setText("Suppression avec succes.");
            ui->tab_pub->setModel(p.afficher());
            }
        else
           { msgBox.setText("Echec de suppression");
            msgBox.exec();}
}

void MainWindow::on_pushButton_mod_clicked()
{
    QString type_pub=ui->lineEdit_type->text();
    int id= ui->lineEdit_id_2->text().toInt();
    int cout=ui->lineEdi_cout->text().toInt();

     publicite p(id,type_pub,cout);
     bool test=p.modifier();
     QMessageBox msgBox;
    if(test)
      {  msgBox.setText("Modifier avec succes.");
         ui->tab_pub->setModel(p.afficher());
      }
    else
       { msgBox.setText("Echec de modification");
        msgBox.exec();}

}

void MainWindow::on_tab_pub_activated(const QModelIndex &index)
{
    publicite P;
            QMessageBox msgBox;

                QString val = ui->tab_pub->model()->data(index).toString();
                QSqlQuery query;
                query.prepare("select * from pub where ID =:val or COUT =:val   ");
                query.bindValue(":val", val);

                if (query.exec())
                {
                    while (query.next())
                    {
                        ui->lineEdit_id_2->setText(query.value(0).toString());
                        ui->lineEdit_type->setText(query.value(1).toString());
                        ui->lineEdi_cout->setText(query.value(2).toString());
                    }
                }
                else
                {
                    msgBox.setText("erreur.");
                }
}

void MainWindow::on_pushButton_AJOUTER_spons_clicked()
{
    int id=ui->lineEdit_id_spons->text().toInt();
     int montant=ui->lineEdit_montant->text().toInt();
     int date_debut=ui->lineEdit_date_debut->text().toInt();
     int date_fin=ui->lineEdit_date_fin->text().toInt();
    QString nom_sponsor=ui->lineEdit_nom_sponsor->text();
    sponsors S(nom_sponsor,id, montant , date_debut , date_fin);
    bool test=S.ajouter();

    QMessageBox msgBox;


    if(test)
       { msgBox.setText("ajout avec succes.");
         ui->tab_spons->setModel(S.afficher());
    }
    else
        msgBox.setText("Echec  de d'ajout");
    msgBox.exec();
}

void MainWindow::on_pushButton_supp_spons_clicked()
{
    sponsors S;
        int x=ui->lineEdit_supp_spons->text().toInt();
        bool test=S.supprimer(x);
        QMessageBox msgBox;

        if(test)
           {
            msgBox.setText("Suppression avec succes.");
            ui->tab_spons->setModel(S.afficher());
            }
        else
           { msgBox.setText("Echec de suppression");
            msgBox.exec();}

}

void MainWindow::on_pushButton_mod_spons_clicked()
{
    QString nom_sponsor=ui->nom_9->text();
    int id= ui->id_3->text().toInt();
    int montant=ui->montant_3->text().toInt();
    int date_debut=ui->date_debut_3->text().toInt();
    int date_fin=ui->date_fin_3->text().toInt();

     sponsors S(nom_sponsor,id,montant,date_debut,date_fin);
     bool test=S.modifier();
     QMessageBox msgBox;
    if(test)
      {  msgBox.setText("Modifier avec succes.");
         ui->tab_spons->setModel(S.afficher());
      }
    else
       { msgBox.setText("Echec de modification");
        msgBox.exec();}
}

void MainWindow::on_tab_spons_activated(const QModelIndex &index)
{
    sponsors S;
    QMessageBox msgBox;

        QString val = ui->tab_spons->model()->data(index).toString();
        QSqlQuery query;
        query.prepare("select * from sponsors where ID =:val or montant =:val or date_debut =:val or date_fin =:val");
        query.bindValue(":val", val);

        if (query.exec())
        {
            while (query.next())
            {

                ui->nom_9->setText(query.value(0).toString());
                ui->id_3->setText(query.value(1).toString());
                ui->montant_3->setText(query.value(2).toString());
                ui->date_debut_3->setText(query.value(3).toString());
                ui->date_fin_3->setText(query.value(4).toString());
            }
        }
        else
        {
            msgBox.setText("erreur.");
        }
}
