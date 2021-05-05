#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include<QSqlQueryModel>
#include "publicite.h"
#include "connection.h"
#include"sponsors.h"
#include"QDate"
#include <QString>
#include <QThread>
#include <QDebug>
#include <QRadioButton>
#include<QtPrintSupport/QPrinter>
#include <QtPrintSupport/QtPrintSupport>
#include<QPdfWriter>
#include <QPainter>
#include<QFileDialog>
#include<QDialog>
#include<QTextDocument>
#include <QTextEdit>
#include "QTextEdit"
#include <QValidator>
#include <QtPrintSupport/QPrintDialog>
#include <QTableView>
#include<QTextDocument>


#include<QVariant>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mysystem = new QSystemTrayIcon(this);
    mysystem->setVisible(true);
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
         mysystem->show();
         mysystem->showMessage(tr("notification"),tr("Ajout de la publicité effectué avec succés"));
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
            mysystem->show();
                mysystem->showMessage(tr("notification"),tr("La supression de la publicité effectuée avec succés"));
            }
        else
           { msgBox.setText("Echec de suppression");
            msgBox.exec();}

    }


void MainWindow::on_pushButton_mod_clicked()
{

        QString type_pub=ui->lineEdit_type->text();
        int id= ui->lineEdit_id_2->text().toInt();
        int cout=ui->lineEdi_cout_4->toPlainText().toInt();

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
                    ui->lineEdi_cout_4->setText(query.value(2).toString());
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
     QDate date_debut=ui->dateEdit_debut->date();
     QDate date_fin=ui->dateEdit_fin->date();
    QString nom_sponsor=ui->lineEdit_nom_sponsor->text();
    sponsors S(nom_sponsor,id, montant , date_debut , date_fin);
    bool test=S.ajouter();

    QMessageBox msgBox;


    if(test)
       { msgBox.setText("ajout avec succes.");
         ui->tab_spons->setModel(S.afficher());
         mysystem->show();
             mysystem->showMessage(tr("notification"),tr("Ajout du sponsor effectué avec succés"));
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
            mysystem->show();
            mysystem->showMessage(tr("notification"),tr("Supression du sponsor effectuée avec succés"));
            }
        else
           { msgBox.setText("Echec de suppression");
            msgBox.exec();}

}

void MainWindow::on_pushButton_mod_spons_clicked()
{
    QString nom_sponsor=ui->nom_9->text();
    int id= ui->id_3->text().toInt();
    int montant=ui->montant_3->toPlainText().toInt();
    QDate date_debut=ui->dateEdit_debut->date();
    QDate date_fin=ui->dateEdit_fin->date();

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
        query.prepare("select * from sponsors1 where ID =:val or montant =:val");
        query.bindValue(":val", val);

        if (query.exec())
        {
            while (query.next())
            {

                ui->nom_9->setText(query.value(0).toString());
                ui->id_3->setText(query.value(1).toString());
                ui->montant_3->setText(query.value(2).toString());
                ui->date_debut_3->setDate(query.value(3).toDate());
                ui->date_fin_3->setDate(query.value(4).toDate());
            }
        }
        else
        {
            msgBox.setText("erreur.");
        }
}

void MainWindow::on_comboBox_trier_activated(const QString &arg1)
{
    publicite P;
       QSqlQueryModel * modal = new QSqlQueryModel();
       QSqlQuery * qry = new QSqlQuery();
       if (arg1=="id")
       {
        qry->prepare("Select * from pub order by id");
        qry->exec();
        modal->setQuery(*qry);
        ui->tab_pub->setModel(modal);
        ui->tab_pub->show();
       }
      else if (arg1=="cout")
       {
        qry->prepare("Select * from pub order by cout");
        qry->exec();
        modal->setQuery(*qry);
        ui->tab_pub->setModel(modal);
        ui->tab_pub->show();
       }

       else if (arg1=="type publicité")
       {
        qry->prepare("Select * from pub order by type_pub ASC");
        qry->exec();
        modal->setQuery(*qry);
        ui->tab_pub->setModel(modal);
        ui->tab_pub->show();
       }
}

void MainWindow::on_comboBox_trier_2_activated(const QString &arg1)
{
    sponsors S;
       QSqlQueryModel * modal = new QSqlQueryModel();
       QSqlQuery * qry = new QSqlQuery();
       if (arg1=="id")
       {
        qry->prepare("Select * from sponsors1 order by id ");
        qry->exec();
        modal->setQuery(*qry);
        ui->tab_spons->setModel(modal);
        ui->tab_spons->show();
       }
      else if (arg1=="montant")
       {
        qry->prepare("Select * from sponsors1 order by montant");
        qry->exec();
        modal->setQuery(*qry);
        ui->tab_spons->setModel(modal);
        ui->tab_spons->show();
       }

       else if (arg1=="date fin")
       {
        qry->prepare("Select * from sponsors1 order by date_fin  ");
        qry->exec();
        modal->setQuery(*qry);
        ui->tab_spons->setModel(modal);
        ui->tab_spons->show();
       }
       else if (arg1=="date debut")
       {
        qry->prepare("Select * from sponsors1 order by date_debut  ");
        qry->exec();
        modal->setQuery(*qry);
        ui->tab_spons->setModel(modal);
        ui->tab_spons->show();
       }
       else if (arg1=="nom")
       {
        qry->prepare("Select * from sponsors1 order by nom_sponsor  ");
        qry->exec();
        modal->setQuery(*qry);
        ui->tab_spons->setModel(modal);
        ui->tab_spons->show();
       }

}
void MainWindow::on_pushButton_imprimer_pub_clicked()
{
    QPrinter printer;
    QPrintDialog printDialog(&printer, this);
    if (printDialog.exec() == QDialog::Accepted)
    ui->lineEdi_cout_4->print(&printer);
}

void MainWindow::on_pushButton_imprimer_2_clicked()
{
    QPrinter printer;
    QPrintDialog printDialog(&printer, this);
    if (printDialog.exec() == QDialog::Accepted)
    ui->montant_3->print(&printer);
}

void MainWindow::on_chercher_textChanged(const QString &arg1)
{
    publicite P;
        ui->tab_pub->setModel(P.chercher(ui->chercher->text()));
}

void MainWindow::on_chercher_2_textChanged(const QString &arg1)
{
    sponsors S;
    ui->tab_spons->setModel(S.chercher_2(ui->chercher_2->text()));
}

void MainWindow::on_pushButton_clicked()
{
     publicite P;
     P.telecharger_pdf();

        QMessageBox::information(nullptr,QObject::tr("OK"),
                   QObject::tr("Téléchargement terminé"), QMessageBox::Cancel);
}
