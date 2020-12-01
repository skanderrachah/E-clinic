#include "mail.h"

#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include <QDebug>
#include <QWidget>
#include <QMediaPlaylist>
#include <QMediaPlayer>
#include "connexion.h"
//main
int main(int argc, char *argv[])
{ //loop play
    QMediaPlaylist *playlist = new QMediaPlaylist();
    playlist->addMedia(QUrl("C:/Users/hp/Desktop/E-Health_care_2A12-main/Desktop/2A12/project c++/qt/E-Clinic/Mortified.mp3"));
    playlist->setPlaybackMode(QMediaPlaylist::Loop);

    QMediaPlayer *music = new QMediaPlayer();
    music->setPlaylist(playlist);
    music->play();

    QApplication a(argc, argv);
    Connexion c;
    MainWindow w;
    w.setStyleSheet("background-image:url(./f/back.png)");
    bool test=c.ouvrirConnexion();
    w.show();

               if(test)
 {

         QMessageBox::information(nullptr, QObject::tr("database is open"),
                     QObject::tr("connection succesful.\n""Click Cancel to exit."), QMessageBox::Cancel);

         return a.exec();

  }
           else
                QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                            QObject::tr("Echec de la connexion.\n""Click Cancel to exit."), QMessageBox::Cancel);



               return a.exec();
 }




