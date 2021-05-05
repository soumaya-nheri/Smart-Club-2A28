#ifndef SPONSORS_H
#define SPONSORS_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include<QDate>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include<QSqlQueryModel>
#include "publicite.h"
#include "connection.h"
#include"QDate"
#include <QString>
#include <QThread>
#include <QDebug>
#include <QRadioButton>
#include<QtPrintSupport/QPrinter>
#include<QPdfWriter>
#include <QPainter>
#include<QFileDialog>
#include<QTextDocument>
#include <QTextEdit>

#include<QtPrintSupport/QPrinter>
#include <QValidator>
#include <QtPrintSupport/QPrintDialog>
#include<QtPrintSupport/QPrinter>

#include<QVariant>

class sponsors
{
public:
    sponsors();
    sponsors(QString,int,int,QDate,QDate);
    QString getnom_sponsor();
    int getid();
    int getmontant();
    QDate getdate_debut();
    QDate getdate_fin();
    void setnom_sponsor(QString);
    void setid(int);
    void setmontant(int);
    void setdate_debut(QDate);
    void setdate_fin(QDate);
    bool ajouter();
   QSqlQueryModel* afficher();
   bool supprimer(int id);
   bool modifier();
void on_comboBox_trier_2_activated(const QString &arg1);
void on_pushButton_imprimer_2_clicked();
  QSqlQueryModel * chercher_2(QString );

private:
 int id,montant;
 QString nom_sponsor;
 QDate date_fin,date_debut;

};

#endif // SPONSORS_H
