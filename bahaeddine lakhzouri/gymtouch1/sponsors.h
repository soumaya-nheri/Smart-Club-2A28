#ifndef SPONSORS_H
#define SPONSORS_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class sponsors
{
public:
    sponsors();
    sponsors(QString,int,int,int,int);
    QString getnom_sponsor();
    int getid();
    int getmontant();
    int getdate_debut();
    int getdate_fin();
    void setnom_sponsor(QString);
    void setid(int);
    void setmontant(int);
    void setdate_debut(int);
    void setdate_fin(int);
    bool ajouter();
   QSqlQueryModel* afficher();
   bool supprimer(int id);
   bool modifier();



private:
 int id,montant,date_fin,date_debut;
 QString nom_sponsor;
};

#endif // SPONSORS_H
