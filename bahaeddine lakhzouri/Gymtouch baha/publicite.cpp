#include "publicite.h"
#include "connection.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QSqlQueryModel>
#include <QObject>
#include <QString>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "sponsors.h"
#include "QDate"
#include <QString>
#include <QThread>
#include <QDebug>
#include <QRadioButton>
#include <QtPrintSupport/QPrinter>
#include <QPdfWriter>
#include <QPainter>
#include <QFileDialog>
#include <QTextDocument>
#include <QTextEdit>

#include<QtPrintSupport/QPrinter>
#include <QValidator>
#include <QtPrintSupport/QPrintDialog>
#include<QtPrintSupport/QPrinter>

#include<QVariant>
publicite::publicite()
{
id=0; cout=0;type_pub="";
}
publicite::publicite(int id,QString type_pub, int cout)
{this->id=id; this->cout=cout; this->type_pub=type_pub;}
int publicite::getid(){return id;}
int publicite::getcout(){return cout;}
QString publicite::gettype_pub(){return type_pub;}
void publicite::setid(int id){this->id=id;}
void publicite::setcout(int cout){this->cout=cout;}
void publicite::settype_pub(QString type_pub){this->type_pub=type_pub;}



bool publicite::ajouter()
{bool test=false;




    QString id_string= QString::number(id);
    QString cout_string= QString::number(cout);
    QSqlQuery query;
         query.prepare("INSERT INTO pub(ID,TYPE_PUB,COUT) "
                       "VALUES (:id, :type_pub, :cout)");
         query.bindValue(":id", id_string);
         query.bindValue(":type_pub", type_pub);
         query.bindValue(":cout", cout_string);

         return query.exec();

         return test;
         }


         QSqlQueryModel* publicite::afficher()
         {
             QSqlQueryModel* model=new QSqlQueryModel();


                   model->setQuery("SELECT* FROM pub");
                   model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
                   model->setHeaderData(1, Qt::Horizontal, QObject::tr("type_pub"));
                    model->setHeaderData(2, Qt::Horizontal, QObject::tr("cout"));

             return model;

         }


         bool publicite::supprimer(int id)
         {

                 QSqlQuery query;
                      query.prepare(" Delete from pub where id=:id");
                      query.bindValue(":id", id);

                     return query.exec();


         }
         bool publicite::modifier(){


             QSqlQuery query ;

             query.prepare("update pub set ID=:id, TYPE_PUB=:type_pub,COUT=:cout where ID=:id");

             query.bindValue(":id", id);
             query.bindValue(":type_pub", type_pub);
             query.bindValue(":cout", cout);
             return query.exec();

         }
         QSqlQueryModel * publicite::chercher(QString r)
         {
             QSqlQueryModel * model= new QSqlQueryModel();
                model->setQuery("select * from pub where id like ('%"+r+"%') or type_pub like ('%"+r+"%') or cout like ('%"+r+"%')  ");


                model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
                model->setHeaderData(1, Qt::Horizontal, QObject::tr("type_pub"));
                 model->setHeaderData(2, Qt::Horizontal, QObject::tr("cout"));

                  return model;

         }
         void publicite::telecharger_pdf()
         {
             QPdfWriter pdf("D:\\liste\\shama9ma9.pdf");
                                  QPainter painter(&pdf);
                                 int i = 4000;
                                      painter.setPen(Qt::blue);
                                      painter.setFont(QFont("Arial", 30));
                                      painter.drawText(1100,1200,"Liste des publicités");
                                      painter.setPen(Qt::black);
                                      painter.setFont(QFont("Arial", 15));
                                      painter.drawRect(100,100,7300,2600);
                                      painter.drawRect(0,3000,9600,500);
                                      painter.setFont(QFont("Arial", 9));
                                      painter.drawText(200,3300,"ID");
                                      painter.drawText(1300,3300,"type");
                                      painter.drawText(2100,3300,"cout");


                                      QSqlQuery query;
                                      query.prepare("select * from PUB");
                                      query.exec();
                                      while (query.next())
                                      {
                                          painter.drawText(200,i,query.value(0).toString());
                                          painter.drawText(1300,i,query.value(1).toString());
                                          painter.drawText(2200,i,query.value(2).toString());


                                         i = i + 500;
                                      }
         }

