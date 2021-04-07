#include "publicite.h"
#include "connection.h"
#include<QSqlQuery>
#include<QtDebug>
#include<QSqlQueryModel>
#include <QObject>
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
