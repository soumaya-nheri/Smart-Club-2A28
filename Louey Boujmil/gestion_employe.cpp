#include "gestion_employe.h"
#include "ui_gestion_employe.h"
#include "crud_employe.h"
#include <QMessageBox>

#include "statistics.h"
gestion_employe::gestion_employe(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestion_employe)
{
    ui->setupUi(this);
}

gestion_employe::~gestion_employe()
{
    delete ui;
}

void gestion_employe::on_ajouter_employer_clicked()
{
    int i = ui->lineEditidemp->text().toInt();
       QString n = ui->lineEditnomemp->text();
       QString l= ui->lineEditprenomemp->text();

        QString t = ui->lineEditmailemp->text();


        crud_employe c(i,n,l,t);
        bool test = c.ajouter();
        if (test)
        {

            ui->tableView->setModel(ce->afficher());
            QMessageBox::information(nullptr,"AJOUT EMPLOYER","EMPLOYER AJOUTEE");
        }
        else
        {
            QMessageBox::warning(nullptr,"AJOUT EMPLOYER","EMPLOYER NON AJOUTEE");
        }

}

void gestion_employe::on_pushButton_supprimer_clicked()
{
    int i = ui->lineEdit_supp->text().toInt();
        bool test = ce->supprimer(i);
        if (test)
        {

            ui->tableView->setModel(ce->afficher());
            QMessageBox::information(nullptr,"SUPPRIMER EMPLOYER","EMPLOYER SUPPRIMER !");
        }
        else
        {

            QMessageBox::warning(nullptr,"SUPPRIMER EMPLOYER","EMPLOYER NON SUPPRIMER !");
        }
    }



void gestion_employe::on_pushButton_modifier_clicked()
{

    int i = ui->lineEditidempM->text().toInt();
   QString n = ui->lineEditnomempM->text();
   QString l= ui->lineEditprenomempM->text();

    QString t = ui->lineEditmailempM->text();



    crud_employe c(i,n,l,t);
    bool test = c.modifier();
         if (test)
         {

             ui->tableView->setModel(ce->afficher());
             QMessageBox::information(nullptr,"MODIFER CLIENT","MODFIER AJOUTEE");
         }
         else
         {
             QMessageBox::warning(nullptr,"MODIFER CLIENT","CLIENT NON MODIFER");
         }
}


void gestion_employe::on_checkBoxid_clicked()
{

    ui->tableView->setModel(ce->afficher());
          ui->tableView->setModel(ce->trier_id());
    if(ui->checkBoxid->isChecked() == false )
        ui->tableView->setModel(ce->afficher());


}



void gestion_employe::on_tabWidget_currentChanged(int index)
{    ui->tableView->setModel(ce->afficher());


}

void gestion_employe::on_checkBoxnom_clicked()
{

              ui->tableView->setModel(ce->afficher());

                  ui->tableView->setModel(ce->trier_nom());

                  if(ui->checkBoxnom->isChecked() == false )
                      ui->tableView->setModel(ce->afficher());


}

void gestion_employe::on_checkBoxprenom_clicked()
{
    ui->tableView->setModel(ce->afficher());

        ui->tableView->setModel(ce->trier_prenom());

        if(ui->checkBoxprenom->isChecked() == false )
            ui->tableView->setModel(ce->afficher());

}

void gestion_employe::on_nom_clicked()
{
    QString nom = ui->lineEditnom123->text();
     ui->tableView->setModel(ce->afficher_nom(nom));
}

void gestion_employe::on_prenom_clicked()
{
    QString prenom = ui->lineEditprenom123->text();
     ui->tableView->setModel(ce->afficher_prenom(prenom));
}

void gestion_employe::on_id_clicked()
{
    QString id = ui->lineEditid123->text();
     ui->tableView->setModel(ce->afficher_id(id));
}

void gestion_employe::on_pushButton_clicked()
{
    statistics  *s = new statistics(this);
    s->show();
}
