#include "crud_employe.h"
#include "ui_gestion_employe.h"
#include "crud_employe.h"

crud_employe::crud_employe()
{

}
crud_employe::crud_employe(int i,QString n,QString l,QString t)
{
    idemp=i;
    nomemp=n;
    prenomemp=l;
    mailemp=t;
}
bool crud_employe::ajouter()
{
    QSqlQuery query;
    query.prepare("INSERT INTO GEREEMPLOYER (idemp,nomemp,prenomemp,mailemp) VALUES (:idemp,:nomemp,:prenomemp,:mailemp)");
    QString res= QString::number(idemp);
    query.bindValue(":idemp",res);
    query.bindValue(":nomemp",nomemp);
    query.bindValue(":prenomemp",prenomemp);
    query.bindValue(":mailemp",mailemp);

    return query.exec();
}

 bool crud_employe::supprimer(int i)
{
    QSqlQuery query;
    query.prepare("DELETE FROM GEREEMPLOYER where idemp=:idemp");
    QString res= QString::number(i);
    query.bindValue(":idemp",res);
    return query.exec();
}
QSqlQueryModel * crud_employe::afficher()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("select * from GEREEMPLOYER ");
    model->setHeaderData(0,Qt::Horizontal,"IDEMP");
    model->setHeaderData(2,Qt::Horizontal,"NOMEMP");
    model->setHeaderData(3,Qt::Horizontal,"PRENOMEMP");
    model->setHeaderData(1,Qt::Horizontal,"MAILEMP");

    return model ;
}
bool crud_employe::modifier()
{
    QSqlQuery query;
    query.prepare("UPDATE GEREEMPLOYER SET idemp=:idemp,nomemp=:nomemp,prenomemp=:prenomemp,mailemp=:mailemp WHERE idemp=:idemp");
    QString res= QString::number(idemp);
    query.bindValue(":idemp",idemp);
    query.bindValue(":nomemp",nomemp);
    query.bindValue(":prenomemp",prenomemp);
    query.bindValue(":mailemp",mailemp);

    return query.exec();
}
QSqlQueryModel * crud_employe::afficher_nom(QString nomemp)
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("select * from GEREEMPLOYER WHERE nomemp = '"+nomemp+"'");
    model->setHeaderData(0,Qt::Horizontal,"IDEMP");
     model->setHeaderData(1,Qt::Horizontal,"MAILEMP");
    model->setHeaderData(2,Qt::Horizontal,"NOMEMP");
    model->setHeaderData(3,Qt::Horizontal,"PRENOMEMP");


    return model ;
}
QSqlQueryModel * crud_employe::afficher_prenom(QString prenomemp)
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("select * from GEREEMPLOYER WHERE prenomemp = '"+prenomemp+"'");
    model->setHeaderData(0,Qt::Horizontal,"IDEMP");
    model->setHeaderData(2,Qt::Horizontal,"NOMEMP");
    model->setHeaderData(3,Qt::Horizontal,"PRENOMEMP");
    model->setHeaderData(1,Qt::Horizontal,"MAILEMP");
    return model ;
}
QSqlQueryModel * crud_employe::afficher_id(QString nom)
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("select * from GEREEMPLOYER WHERE idemp = '"+nom+"'");
    model->setHeaderData(0,Qt::Horizontal,"IDEMP");
    model->setHeaderData(2,Qt::Horizontal,"NOMEMP");
    model->setHeaderData(3,Qt::Horizontal,"PRENOMEMP");
    model->setHeaderData(1,Qt::Horizontal,"MAILEMP");

    return model ;
}
QSqlQueryModel * crud_employe::trier_id()
{
    QSqlQueryModel *model = new QSqlQueryModel();
        model->setQuery("SELECT * from GEREEMPLOYER ORDER BY idemp");
        model->setHeaderData(0,Qt::Horizontal,"IDEMP");
        model->setHeaderData(2,Qt::Horizontal,"NOMEMP");
        model->setHeaderData(3,Qt::Horizontal,"PRENOMEMP");
        model->setHeaderData(1,Qt::Horizontal,"MAILEMP");

        return model ;
}
QSqlQueryModel * crud_employe::trier_nom()
{
    QSqlQueryModel *model = new QSqlQueryModel();
        model->setQuery("SELECT * from GEREEMPLOYER ORDER BY nomemp");
        model->setHeaderData(0,Qt::Horizontal,"IDEMP");
        model->setHeaderData(2,Qt::Horizontal,"NOMEMP");
        model->setHeaderData(3,Qt::Horizontal,"PRENOMEMP");
        model->setHeaderData(1,Qt::Horizontal,"MAILEMP");
        return model ;
}
QSqlQueryModel * crud_employe::trier_prenom()
{
    QSqlQueryModel *model = new QSqlQueryModel();
        model->setQuery("SELECT * from GEREEMPLOYER ORDER BY prenomemp");
        model->setHeaderData(0,Qt::Horizontal,"IDEMP");
        model->setHeaderData(2,Qt::Horizontal,"NOMEMP");
        model->setHeaderData(3,Qt::Horizontal,"PRENOMEMP");
        model->setHeaderData(1,Qt::Horizontal,"MAILEMP");

        return model ;
}

int crud_employe::totale_employe()
{
 QSqlQuery query;
 query.prepare("SELECT COUNT(*) from GEREEMPLOYER ");
    int rows = 0 ;
    query.exec();

    while(query.next()) {
        rows = query.value(0).toInt();
    }

    return  rows ;

}
