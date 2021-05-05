#ifndef CONNECTION_H
#define CONNECTION_H
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include<QSqlQueryModel>
#include "publicite.h"
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

#include<QVariant>

class connection
{
public:
    connection();
    bool createconnect();
};

#endif // CONNECTION_H
