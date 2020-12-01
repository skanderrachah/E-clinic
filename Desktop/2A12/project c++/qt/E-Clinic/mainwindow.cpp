#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "categories.h"
#include <QSqlDatabase>
#include <QPrinter>
#include <QPrinterInfo>
#include "facturesetcommandes.h"
#include <QMessageBox>
#include <QPixmap>
#include <QDateTime>
#include "mail.h"
#include "SMTPClient/smtpclient.h"
#include "SMTPClient/email.h"
#include "SMTPClient/emailaddress.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)

{
    ui->setupUi(this);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()),this,SLOT(myfunction()));
    timer->start(1000);



    QPixmap pix("C:/Users/hp/Desktop/E-Health_care_2A12-main/Desktop/2A12/project c++/qt/E-Clinic/téléchargement.jpg");
    int w=ui->label_pic->width();
    int h=ui->label_pic->height();
    ui->label_pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));

    ui->tab_categories->setModel(tmpcategories.afficher());
    ui->tab_fctcmn->setModel(tmpfct.afficher());


    // Connect all signals and slots
    connect(ui->pb_ajouter, SIGNAL(clicked(bool)), this, SLOT(on_pb_ajouter_clicked())); //ajout c
    connect(ui->pb_ajouter_2, SIGNAL(clicked(bool)), this, SLOT(on_pb_ajouter_clicked2())); //ajout fc

    connect(ui->pb_supprimerp, SIGNAL(clicked(bool)), this, SLOT(on_pb_supprimerp_clicked())); //supp c
    connect(ui->pb_supprimerr, SIGNAL(clicked(bool)), this, SLOT(on_pb_supprimerr_clicked())); //sup fc

    connect(ui->pb_modifier, SIGNAL(clicked(bool)), this, SLOT(on_pb_modifier_clicked())); //modifier fc
    connect(ui->pb_modifier_2, SIGNAL(clicked(bool)), this, SLOT(on_pb_modifier2_clicked_())); //modifier c
    connect(ui->pushButton_1, SIGNAL(clicked(bool)), this, SLOT(on_pushButton_1_clicked())); // print
    connect(ui->pushButton_2, SIGNAL(clicked(bool)), this, SLOT(on_pushButton_2_clicked())); // print


    connect(ui->pb_aff_categorie, SIGNAL(clicked(bool)), this, SLOT(on_pb_aff_categorie_clicked()));//recherche par id categorie

   // categories_ = NULL;

  /*  connect all signals and slots;*/
    connect(ui->sendEmail, SIGNAL(clicked(bool)), this, SLOT(sendEmail()));
    connect(ui->clearFields, SIGNAL(clicked(bool)), this, SLOT(clearFields()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::myfunction()
{
    QTime time = QTime::currentTime();
    QString time_text = time.toString("hh : mm : ss");
    ui->label_date_time->setText(time_text);
}
void MainWindow::on_pb_ajouter_clicked()
{
    //QValidator *validator_String=new QRegExpValidator(QRegExp("[A-Za-z]+"),this);
    //QValidator *validator_int=new QRegExpValidator(QRegExp("[0-9]+"),this);
    int ID=ui->ID->text().toInt();
    QString encaissements=ui->encaissements->text();
    QString chiffres=ui->chiffres->text();
    QString gains=ui->gains->text();
    QString depenses=ui->depenses->text();
    QString salaires=ui->salaires->text();



 categories c(ID,encaissements,chiffres,gains,depenses,salaires);

 bool test1=c.ajouter();

 QMessageBox msgBox;

 if(test1)
   {  msgBox.setText("Ajout avec succes.");

      ui->tab_categories->setModel(tmpcategories.afficher());//refresh
     QMessageBox::information(nullptr, QObject::tr("Ajouter une categorie"),
                       QObject::tr("categorie ajouté.\n"
                                   "Click Cancel to exit."), QMessageBox::Cancel);


 }
 else
     QMessageBox::critical(nullptr, QObject::tr("Ajouter une categorie"),
                 QObject::tr("Erreur !.\n"
                             "Click Cancel to exit."), QMessageBox::Cancel);


}

void MainWindow::on_pb_ajouter_2_clicked()
{
    //fact/comm
    int idfc=ui->idfc->text().toInt();
    int qte=ui->qte->text().toInt();
    int pu=ui->pu->text().toInt();
    int pt=ui->pt->text().toInt();
    QString art=ui->art->text();
    QString tp=ui->tp->text();
    fctcmn r(idfc,art,qte,pu,pt,tp);

    bool test3=r.ajouter();
    QMessageBox msgBox;

    if(test3)
      {  msgBox.setText("Ajout avec succes.");

        ui->tab_fctcmn->setModel(tmpfct.afficher());//refresh
        QMessageBox::information(nullptr, QObject::tr("Ajouter une facture ou commande"),
                          QObject::tr("fact/comm ajouté.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Ajouter une factures ou commande"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}

void MainWindow::on_pb_supprimerr_clicked()
{


        int ID_66 = ui->ID_66->text().toInt();
        bool test3=tmpfct.supprimer(ID_66);
        if(test3)
        {ui->tab_fctcmn->setModel(tmpfct.afficher());//refresh
            QMessageBox::information(nullptr, QObject::tr("Supprimer unefacture ou une commande"),
                        QObject::tr("fact/comm supprimé.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

        }
        else
            QMessageBox::critical(nullptr, QObject::tr("Supprimer une facture ou une commande"),
                        QObject::tr("Erreur !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);


}
void MainWindow::on_pb_supprimerp_clicked()
{

    int ID_5 = ui->ID_5->text().toInt();
    bool test1=tmpcategories.supprimer(ID_5);
    QMessageBox msgBox;
    if(test1)
       {ui->tab_categories->setModel(tmpcategories.afficher());//refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer une categorie"),
                    QObject::tr("categorie supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer une categorie"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}


void MainWindow::on_pb_modifier_clicked(){


    QValidator *validator_String=new QRegExpValidator(QRegExp("[A-Za-z]+"),this);
    QValidator *validator_int=new QRegExpValidator(QRegExp("[0-9]+"),this);

    int ID_2 = ui->ID_2->text().toInt();
    ui->ID_2->setValidator(validator_int);

    QString encaissements_2 = ui->encaissements_2->text();
    ui->encaissements_2->setValidator(validator_String);

    QString chiffres_2 = ui->chiffres_2->text();
    ui->chiffres_2->setValidator(validator_String);

    QString gains_2 = ui->gains_2->text();
    ui->gains_2->setValidator(validator_String);

    QString depenses_2 = ui->depenses_2->text();
    ui->depenses_2->setValidator(validator_String);

    QString salaires_2 = ui->salaires_2->text();
    ui->salaires_2->setValidator(validator_String);


    categories c(ID_2, encaissements_2, chiffres_2, gains_2, depenses_2, salaires_2);
    bool test=c.modifier_categories();

    ui->tab_categories->setModel(tmpcategories.afficher());   //refresh


        if(test){
                ui->tab_categories->setModel(tmpcategories.afficher());   //refresh

                QMessageBox::information(this, QObject::tr("Modifier une categorie"),
                QObject::tr("categorie modifiée.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);


            }
              else
                  QMessageBox::critical(this, QObject::tr("Modifier une categorie"),
                              QObject::tr("Erreur !.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
}


void MainWindow::on_pb_modifier_2_clicked(){

    QValidator *validator_String=new QRegExpValidator(QRegExp("[A-Za-z]+"),this);
    QValidator *validator_int=new QRegExpValidator(QRegExp("[0-9]+"),this);


    int idfc_22 = ui->idfc_22->text().toInt();
    ui->idfc_22->setValidator(validator_int);

    QString art_22 = ui->art_22->text();
    ui->art_22->setValidator(validator_String);

    int qte_22 = ui->qte_22->text().toInt();
    ui->qte_22->setValidator(validator_int);

    int pu_22 = ui->pu_22->text().toInt();
    ui->pu_22->setValidator(validator_int);

    int pt_22 = ui->pt_22->text().toInt();
    ui->pt_22->setValidator(validator_int);

    QString tp_22 = ui->tp_22->text();
    ui->tp_22->setValidator(validator_String);



        fctcmn r(idfc_22, art_22, qte_22, pu_22, pt_22, tp_22);
        bool test=r.modifier_fctcmn();

        ui->tab_fctcmn->setModel(tmpfct.afficher());   //refresh
        if(test){
                ui->tab_fctcmn->setModel(tmpfct.afficher());   //refresh

                QMessageBox::information(this, QObject::tr("Modifier une facture ou une commande"),
                QObject::tr("fact/comm modifiée.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);


            }
              else
                  QMessageBox::critical(this, QObject::tr("Modifier une facture ou une commande"),
                              QObject::tr("Erreur !.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);



}

/*void MainWindow::on_pb_modifier_2_clicked(){


    QValidator *validator_String=new QRegExpValidator(QRegExp("[A-Za-z]+"),this);
    QValidator *validator_int=new QRegExpValidator(QRegExp("[0-9]+"),this);

    int idfc_22 = ui->idfc_22->text().toInt();
    ui->idfc_22->setValidator(validator_int);

    QString art_22 = ui->art_22->text();
    ui->art_22->setValidator(validator_String);

    int qte_22 = ui->qte_22->text().toInt();
    ui->qte_22->setValidator(validator_int);

    int pu_22 = ui->pu_22->text().toInt();
    ui->pu_22->setValidator(validator_int);

    int pt_22 = ui->pt_22->text().toInt();
    ui->pt_22->setValidator(validator_int);

    QString tp_22 = ui->tp_22->text();
    ui->tp_22->setValidator(validator_String);


    fctcmn r(idfc_22, art_22, qte_22, pu_22, pt_22, tp_22);
    bool test=r.modifier_fctcmn();

    ui->tab_fctcmn->setModel(tmpfct.afficher());   //refresh


        if(test){
                ui->tab_fctcmn->setModel(tmpfct.afficher());   //refresh

                QMessageBox::information(this, QObject::tr("Modifier une facture ou une commande"),
                QObject::tr("fact/comm modifiée.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);


            }
              else
                  QMessageBox::critical(this, QObject::tr("Modifier une facture ou une commande"),
                              QObject::tr("Erreur !.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
}*/


void MainWindow::on_pushButton_1_clicked(){

    QPrinter printer;
    printer.setPrinterName("desired printer name");
    QPrintDialog dialog(&printer,this);
    if (dialog.exec() == QDialog::Rejected) return ;
    ui->tab_categories->render(&printer);
}
void MainWindow::on_pushButton_2_clicked(){

    QPrinter printer;
    printer.setPrinterName("desired printer name");
    QPrintDialog dialog(&printer,this);
    if (dialog.exec() == QDialog::Rejected) return ;
    ui->tab_fctcmn->render(&printer);
}
void MainWindow::on_pb_aff_categorie_clicked(){
    int id = ui->lineEdit_aff_idcategories->text().toInt();
    ui->tab_aff_categories->setModel(tmpcategories.afficher_idcategories(id));
}
/* void print::sendEmail()
{
    // Create the email object
    Email email = createEmail();
    // Create the SMTPClient
    client_ = new SMTPClient(ui->lineEditHost->text(),
                             ui->spinBoxPort->value());
    // Connection used to receive the results
    connect(client_, SIGNAL(status(Status::e, QString)),
            this, SLOT(onStatus(Status::e, QString)), Qt::UniqueConnection);
    // Try to send the email
    client_->sendEmail(email);
}
Email print::createEmail()
{
    // Create the credentials EmailAddress
    EmailAddress credentials(ui->lineEditEmailCredentials->text(),
                             ui->lineEditPasswordCredentials->text());
    // Create the from EmailAddress
    EmailAddress from(ui->lineEditEmailFrom->text());
    // Create the to EmailAddress
    EmailAddress to(ui->lineEditEmailTo->text());
    // Create the email
    Email email(credentials,
                from,
                to,
                ui->lineEditSubject->text(),
                ui->textEditContent->toPlainText());
    return email;
}
void print::clearFields()
{
    ui->lineEditEmailCredentials->clear();
    ui->lineEditPasswordCredentials->clear();
    ui->lineEditEmailFrom->clear();
    ui->lineEditEmailTo->clear();
    ui->lineEditSubject->clear();
    ui->textEditContent->clear();
}*/
/*void print::onStatus(Status::e status, QString errorMessage)
{
    // Show a message based on the Status
    switch (status)
    {
    case Status::Success:
        QMessageBox::information(NULL, tr("SMTPClient"), tr("Message successfully sent!"));
        break;
    case Status::Failed:
    {
        QMessageBox::warning(NULL, tr("SMTPClient"), tr("Could not send the message!"));
        qCritical() << errorMessage;
    }
        break;
    default:
        break;
    }
    // Delete the client pointer
    client_->deleteLater();
}*/
