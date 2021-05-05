#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "ui_mainwindow.h"
#include <QMessageBox>
#include<QSqlQueryModel>
#include "publicite.h"
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
#include "QSystemTrayIcon"
#include<QVariant>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_ajouter_clicked();

    void on_pushButton_supp_clicked();

    void on_pushButton_mod_clicked();

    void on_tab_pub_activated(const QModelIndex &index);

    void on_pushButton_AJOUTER_spons_clicked();

    void on_pushButton_supp_spons_clicked();

    void on_pushButton_mod_spons_clicked();

    void on_tab_spons_activated(const QModelIndex &index);

    void on_comboBox_trier_activated(const QString &arg1);

    void on_comboBox_trier_2_activated(const QString &arg1);




    void on_pushButton_imprimer_pub_clicked();

    void on_pushButton_imprimer_2_clicked();

    void on_chercher_textChanged(const QString &arg1);

    void on_chercher_2_textChanged(const QString &arg1);

    void on_pushButton_clicked();

private:
    QSystemTrayIcon *mysystem;
  Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
