#ifndef GESTION_EMPLOYE_H
#define GESTION_EMPLOYE_H
#include "crud_employe.h"

#include "statistics.h"

#include <QWidget>
#include <QDialog>
#include <QDialog>

namespace Ui {
class gestion_employe;
}

class gestion_employe : public QDialog
{
    Q_OBJECT

public:
    explicit gestion_employe(QWidget *parent = nullptr);
    ~gestion_employe();

private slots:
    void on_ajouter_employer_clicked();

    void on_pushButton_supprimer_clicked();

    void on_pushButton_modifier_clicked();

    void on_checkBoxid_clicked();

    void on_tabWidget_currentChanged(int index);

    void on_checkBoxnom_clicked();

    void on_checkBoxprenom_clicked();

    void on_nom_clicked();

    void on_prenom_clicked();

    void on_id_clicked();

    void on_pushButton_clicked();

private:
    Ui::gestion_employe *ui;
    crud_employe *ce;
};

#endif // GESTION_EMPLOYE_H
