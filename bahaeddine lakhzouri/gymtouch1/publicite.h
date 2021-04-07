#ifndef PUBLICITE_H
#define PUBLICITE_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

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


private:
   int id, cout ;
   QString type_pub ;
};

#endif // PUBLICITE_H
