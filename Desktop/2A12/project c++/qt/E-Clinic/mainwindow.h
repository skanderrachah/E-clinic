#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "ui_mainwindow.h"
#include <QMainWindow>
#include "categories.h"
#include "facturesetcommandes.h"
#include <QDebug>
#include <QString>
#include <QWidget>
#include <QPrinter>
#include <QPrintDialog>
#include <QPrinterInfo>
#include <QDialog>
#include <QFile>
#include <QMessageBox>
#include <QTimer>
/*#include "C:/Users/HP/Desktop/2A12/project c++/qt/E-Clinic/SMTPClient/email.h"
#include "C:/Users/HP/Desktop/2A12/project c++/qt/E-Clinic/SMTPClient/smtpclient.h"
#include "C:/Users/HP/Desktop/2A12/project c++/qt/E-Clinic/SMTPClient/emailaddress.h"*/

namespace Ui {
class MainWindow;
}

class MainWindow :public QMainWindow

{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

    ~MainWindow();
void print(QString path, QByteArray ba);
private slots:
void myfunction();
void on_pb_ajouter_clicked();
void on_pb_ajouter_2_clicked();
void on_pb_supprimerr_clicked();
void on_pb_supprimerp_clicked();
void on_pb_modifier_2_clicked();
void on_pb_modifier_clicked();
void on_pb_quitter2_clicked();
void on_pushButton_1_clicked();
void on_pushButton_2_clicked();
void on_pb_aff_categorie_clicked();

void sendEmail();
void clearFields();
//void onStatus(Status::e status, QString errorMessage);
    //Email createEmail();


private:

    Ui::MainWindow *ui;
    categories tmpcategories;
    fctcmn tmpfct;
    QTimer *timer;

    //SMTPClient *client_;

   // int etat=0;
  // QString valeur,sexe;

  // QString champ="";

};

#endif // MAINWINDOW_H
