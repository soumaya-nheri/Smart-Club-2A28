#ifndef CRUD_EMPLOYE_H
#define CRUD_EMPLOYE_H

#include <QVariant>
#include <QSqlQuery>
#include <QString>
#include <QSqlQueryModel>
class crud_employe
{
    int idemp;
    QString nomemp;
    QString prenomemp;
    QString mailemp;
public:
    crud_employe();
    crud_employe(int,QString,QString,QString);
    int get_idemp(){return idemp;}
     QString get_nomemp(){return nomemp;}
       QString get_prenomemp(){return prenomemp;}
       QString get_mailemp(){return mailemp;}

       bool ajouter();
       bool supprimer(int);
       QSqlQueryModel *afficher();
       bool modifier();
       int totale_employe();

       QSqlQueryModel  *afficher_nom(QString);
               QSqlQueryModel  *afficher_prenom(QString);
               QSqlQueryModel  *afficher_id(QString);
               QSqlQueryModel *trier_nom();
                      QSqlQueryModel *trier_prenom();
                      QSqlQueryModel *trier_id();

  crud_employe *c ;
};

#endif // CRUD_EMPLOYE_H
