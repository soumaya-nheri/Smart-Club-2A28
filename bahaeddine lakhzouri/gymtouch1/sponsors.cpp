#include "sponsors.h"
#include "connection.h"
#include<QSqlQuery>
#include<QtDebug>
#include<QSqlQueryModel>
#include <QObject>
sponsors::sponsors()
{
    id=0;montant=0;date_fin=0;date_debut=0;
     nom_sponsor="";
}
sponsors::sponsors(QString nom_sponsor,int id,int montant,int date_debut,int date_fin )
{this->nom_sponsor=nom_sponsor;this->id=id; this->montant=montant; this->date_fin=date_fin; this->date_debut=date_debut; }
QString sponsors::getnom_sponsor(){return nom_sponsor;}
int sponsors::getid(){return id;}
int sponsors::getmontant(){return montant;}
int sponsors::getdate_debut(){return date_debut;}
int sponsors::getdate_fin(){return date_fin;}
void sponsors::setnom_sponsor(QString nom_sponsor){this->nom_sponsor=nom_sponsor;}
void sponsors::setid(int id){this->id=id;}
void sponsors::setmontant(int montant){this->montant=montant;}
void sponsors::setdate_debut(int date_debut){this->date_debut=date_debut;}
void sponsors::setdate_fin(int date_fin){this->date_fin=date_fin;}



bool sponsors::ajouter()
{bool test=false;




    QString id_string= QString::number(id);
    QString montant_string= QString::number(montant);
    QString date_debut_string= QString::number(date_debut);
    QString date_fin_string= QString::number(date_fin);
    QSqlQuery query;
         query.prepare("INSERT INTO SPONSORS(NOM_SPONSOR,ID,MONTANT,DATE_DEBUT,DATE_FIN) "
                       "VALUES (:nom_sponsor, :id, :montant, :date_debut, :date_fin)");
         query.bindValue(":nom_sponsor", nom_sponsor);
         query.bindValue(":id", id_string);
         query.bindValue(":montant", montant_string);
         query.bindValue(":date_debut", date_debut_string);
         query.bindValue(":date_fin", date_fin_string);


         return query.exec();

         return test;
         }


QSqlQueryModel* sponsors::afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel();


          model->setQuery("SELECT* FROM sponsors");
          model->setHeaderData(0, Qt::Horizontal, QObject::tr("nom_sponsor"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("id"));
           model->setHeaderData(2, Qt::Horizontal, QObject::tr("montant"));
           model->setHeaderData(3, Qt::Horizontal, QObject::tr("date_debut"));
           model->setHeaderData(4, Qt::Horizontal, QObject::tr("date_fin"));

    return model;

}




bool sponsors::supprimer(int id)
{

        QSqlQuery query;
             query.prepare(" Delete from SPONSORS where id=:id");
             query.bindValue(":id", id);

            return query.exec();


}







bool sponsors::modifier(){


    QSqlQuery query ;

    query.prepare("update SPONSORS set nom_sponsor=:nom_sponsor, ID=:id, montant=:montant, date_debut=:date_debut, date_fin=:date_fin where ID=:id");



    query.bindValue(":nom_sponsor", nom_sponsor);
    query.bindValue(":id", id);
    query.bindValue(":montant", montant);
    query.bindValue(":date_debut", date_debut);
    query.bindValue(":date_fin", date_fin);
    return query.exec();

}
