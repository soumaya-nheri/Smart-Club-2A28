#ifndef PUBLICITE_H
#define PUBLICITE_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include<QSqlQueryModel>
#include "connection.h"
#include"sponsors.h"
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
class publicite
{
public:
    publicite();
     publicite(int, QString,int);
    int getid();
    int getcout();
    QString gettype_pub();
    void setid(int);
    void setcout(int);
     void settype_pub(QString);
     bool ajouter();
     QSqlQueryModel* afficher();
     bool supprimer(int id);
     bool modifier();
     void on_comboBox_trier_activated(const QString &arg1);
     void on_pushButton_imprimer_pub_clicked();
   QSqlQueryModel * chercher(QString );
     void telecharger_pdf();

private:
    int id, cout ;
    QString type_pub ;

};


#endif // PUBLICITE_H
