/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTabWidget *tabWidget_2;
    QWidget *tab_5;
    QTabWidget *background;
    QWidget *tab_20;
    QTabWidget *tabWidget_8;
    QWidget *tab_2;
    QLineEdit *ID;
    QLineEdit *chiffres;
    QLineEdit *encaissements;
    QLineEdit *salaires;
    QLineEdit *gains;
    QLineEdit *depenses;
    QPushButton *pb_ajouter;
    QLabel *label_pic;
    QLabel *label_date_time;
    QWidget *tab_21;
    QTableView *tab_categories;
    QPushButton *pushButton_1;
    QWidget *tab_8;
    QLineEdit *ID_5;
    QPushButton *pb_supprimerp;
    QWidget *tab_9;
    QTabWidget *tabWidget_9;
    QWidget *tab_6;
    QLineEdit *ID_2;
    QLineEdit *encaissements_2;
    QLineEdit *gains_2;
    QLineEdit *salaires_2;
    QLineEdit *depenses_2;
    QLineEdit *chiffres_2;
    QPushButton *pb_modifier;
    QWidget *tab_3;
    QPushButton *pb_aff_categorie;
    QLineEdit *lineEdit_aff_idcategories;
    QTableView *tab_aff_categories;
    QWidget *tab_4;
    QTabWidget *tab_widget5;
    QWidget *tab_13;
    QTabWidget *tabWidget_10;
    QWidget *tab_12;
    QLineEdit *idfc;
    QLineEdit *qte;
    QLineEdit *tp;
    QLineEdit *pu;
    QLineEdit *art;
    QLineEdit *pt;
    QPushButton *pb_ajouter_2;
    QWidget *tab_14;
    QTableView *tab_fctcmn;
    QPushButton *pushButton_2;
    QWidget *tab_10;
    QPushButton *pb_supprimerr;
    QLineEdit *ID_66;
    QWidget *print;
    QGroupBox *groupBoxCredentials;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLineEdit *lineEditHost;
    QLabel *labelEmailCredentials;
    QSpinBox *spinBoxPort;
    QLineEdit *lineEditPasswordCredentials;
    QLineEdit *lineEditEmailCredentials;
    QLabel *labelHost;
    QLabel *labelPasswordCredentials;
    QLabel *labelPort;
    QGroupBox *groupBoxMessage;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_6;
    QLabel *labelSubject;
    QLineEdit *lineEditSubject;
    QVBoxLayout *verticalLayout_5;
    QLabel *labelContent;
    QTextEdit *textEditContent;
    QGroupBox *groupBoxFrom;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_9;
    QLabel *labelEmailFrom;
    QLineEdit *lineEditEmailFrom;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *clearFields;
    QSpacerItem *horizontalSpacer;
    QPushButton *sendEmail;
    QGroupBox *groupBoxTo;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_7;
    QLabel *labelEmail;
    QLineEdit *lineEditEmailTo;
    QWidget *tab_11;
    QTabWidget *tabWidget_11;
    QWidget *tab_15;
    QLineEdit *idfc_22;
    QLineEdit *qte_22;
    QLineEdit *pt_22;
    QLineEdit *art_22;
    QLineEdit *tp_22;
    QLineEdit *pu_22;
    QPushButton *pb_modifier_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(725, 850);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 10, 851, 731));
        tabWidget->setAutoFillBackground(false);
        tabWidget->setStyleSheet(QStringLiteral("background-image: url(:/f/back.png);"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget_2 = new QTabWidget(tab);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 0, 861, 691));
        tabWidget_2->setAutoFillBackground(false);
        tabWidget_2->setStyleSheet(QStringLiteral("background-image: url(:/f/back.png);"));
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        background = new QTabWidget(tab_5);
        background->setObjectName(QStringLiteral("background"));
        background->setGeometry(QRect(0, 0, 861, 431));
        background->setMouseTracking(false);
        background->setTabletTracking(false);
        background->setAcceptDrops(false);
        background->setToolTipDuration(-1);
        background->setAutoFillBackground(false);
        background->setStyleSheet(QStringLiteral("background-image: url(:/f/back.png);"));
        tab_20 = new QWidget();
        tab_20->setObjectName(QStringLiteral("tab_20"));
        tabWidget_8 = new QTabWidget(tab_20);
        tabWidget_8->setObjectName(QStringLiteral("tabWidget_8"));
        tabWidget_8->setGeometry(QRect(0, 0, 721, 371));
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        ID = new QLineEdit(tab_2);
        ID->setObjectName(QStringLiteral("ID"));
        ID->setGeometry(QRect(50, 40, 113, 20));
        chiffres = new QLineEdit(tab_2);
        chiffres->setObjectName(QStringLiteral("chiffres"));
        chiffres->setGeometry(QRect(150, 170, 113, 20));
        encaissements = new QLineEdit(tab_2);
        encaissements->setObjectName(QStringLiteral("encaissements"));
        encaissements->setGeometry(QRect(240, 40, 113, 20));
        salaires = new QLineEdit(tab_2);
        salaires->setObjectName(QStringLiteral("salaires"));
        salaires->setGeometry(QRect(140, 80, 113, 20));
        gains = new QLineEdit(tab_2);
        gains->setObjectName(QStringLiteral("gains"));
        gains->setGeometry(QRect(50, 130, 113, 20));
        depenses = new QLineEdit(tab_2);
        depenses->setObjectName(QStringLiteral("depenses"));
        depenses->setGeometry(QRect(240, 130, 113, 20));
        pb_ajouter = new QPushButton(tab_2);
        pb_ajouter->setObjectName(QStringLiteral("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(150, 210, 121, 41));
        pb_ajouter->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:#0094ff;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/f/Tick.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_ajouter->setIcon(icon);
        pb_ajouter->setIconSize(QSize(40, 40));
        label_pic = new QLabel(tab_2);
        label_pic->setObjectName(QStringLiteral("label_pic"));
        label_pic->setGeometry(QRect(440, 90, 211, 181));
        label_date_time = new QLabel(tab_2);
        label_date_time->setObjectName(QStringLiteral("label_date_time"));
        label_date_time->setGeometry(QRect(440, 20, 211, 41));
        QFont font;
        font.setPointSize(22);
        font.setBold(true);
        font.setWeight(75);
        label_date_time->setFont(font);
        tabWidget_8->addTab(tab_2, QString());
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/f/Add.png"), QSize(), QIcon::Normal, QIcon::Off);
        background->addTab(tab_20, icon1, QString());
        tab_21 = new QWidget();
        tab_21->setObjectName(QStringLiteral("tab_21"));
        tab_categories = new QTableView(tab_21);
        tab_categories->setObjectName(QStringLiteral("tab_categories"));
        tab_categories->setGeometry(QRect(10, 30, 781, 301));
        pushButton_1 = new QPushButton(tab_21);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(274, 340, 151, 51));
        pushButton_1->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:#0094ff;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/f/Printer.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_1->setIcon(icon2);
        pushButton_1->setIconSize(QSize(34, 34));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/f/Search-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        background->addTab(tab_21, icon3, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        ID_5 = new QLineEdit(tab_8);
        ID_5->setObjectName(QStringLiteral("ID_5"));
        ID_5->setGeometry(QRect(200, 40, 281, 20));
        pb_supprimerp = new QPushButton(tab_8);
        pb_supprimerp->setObjectName(QStringLiteral("pb_supprimerp"));
        pb_supprimerp->setGeometry(QRect(270, 110, 111, 41));
        pb_supprimerp->setFocusPolicy(Qt::TabFocus);
        pb_supprimerp->setAutoFillBackground(false);
        pb_supprimerp->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:#0094ff;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        pb_supprimerp->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        pb_supprimerp->setInputMethodHints(Qt::ImhNone);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/f/Trash.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_supprimerp->setIcon(icon4);
        pb_supprimerp->setIconSize(QSize(25, 25));
        background->addTab(tab_8, icon4, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        tabWidget_9 = new QTabWidget(tab_9);
        tabWidget_9->setObjectName(QStringLiteral("tabWidget_9"));
        tabWidget_9->setGeometry(QRect(0, 0, 721, 341));
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        ID_2 = new QLineEdit(tab_6);
        ID_2->setObjectName(QStringLiteral("ID_2"));
        ID_2->setGeometry(QRect(150, 40, 113, 20));
        ID_2->setReadOnly(false);
        encaissements_2 = new QLineEdit(tab_6);
        encaissements_2->setObjectName(QStringLiteral("encaissements_2"));
        encaissements_2->setGeometry(QRect(230, 70, 113, 20));
        encaissements_2->setReadOnly(false);
        gains_2 = new QLineEdit(tab_6);
        gains_2->setObjectName(QStringLiteral("gains_2"));
        gains_2->setGeometry(QRect(370, 70, 113, 20));
        gains_2->setReadOnly(false);
        salaires_2 = new QLineEdit(tab_6);
        salaires_2->setObjectName(QStringLiteral("salaires_2"));
        salaires_2->setGeometry(QRect(90, 70, 113, 20));
        salaires_2->setReadOnly(false);
        depenses_2 = new QLineEdit(tab_6);
        depenses_2->setObjectName(QStringLiteral("depenses_2"));
        depenses_2->setGeometry(QRect(330, 40, 113, 20));
        depenses_2->setReadOnly(false);
        chiffres_2 = new QLineEdit(tab_6);
        chiffres_2->setObjectName(QStringLiteral("chiffres_2"));
        chiffres_2->setGeometry(QRect(230, 120, 113, 20));
        chiffres_2->setReadOnly(false);
        pb_modifier = new QPushButton(tab_6);
        pb_modifier->setObjectName(QStringLiteral("pb_modifier"));
        pb_modifier->setGeometry(QRect(480, 150, 71, 71));
        pb_modifier->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:#0094ff;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/f/Pencil.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon5.addFile(QStringLiteral(":/f/Tick.png"), QSize(), QIcon::Disabled, QIcon::Off);
        icon5.addFile(QStringLiteral(":/f/Tick.png"), QSize(), QIcon::Selected, QIcon::Off);
        pb_modifier->setIcon(icon5);
        pb_modifier->setIconSize(QSize(35, 35));
        tabWidget_9->addTab(tab_6, QString());
        background->addTab(tab_9, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        pb_aff_categorie = new QPushButton(tab_3);
        pb_aff_categorie->setObjectName(QStringLiteral("pb_aff_categorie"));
        pb_aff_categorie->setGeometry(QRect(280, 40, 51, 31));
        pb_aff_categorie->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:#0094ff;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/f/Search.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_aff_categorie->setIcon(icon6);
        pb_aff_categorie->setIconSize(QSize(30, 30));
        lineEdit_aff_idcategories = new QLineEdit(tab_3);
        lineEdit_aff_idcategories->setObjectName(QStringLiteral("lineEdit_aff_idcategories"));
        lineEdit_aff_idcategories->setGeometry(QRect(160, 50, 113, 21));
        tab_aff_categories = new QTableView(tab_3);
        tab_aff_categories->setObjectName(QStringLiteral("tab_aff_categories"));
        tab_aff_categories->setGeometry(QRect(60, 110, 611, 241));
        background->addTab(tab_3, icon6, QString());
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/f/ID.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget_2->addTab(tab_5, icon7, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tab_widget5 = new QTabWidget(tab_4);
        tab_widget5->setObjectName(QStringLiteral("tab_widget5"));
        tab_widget5->setGeometry(QRect(-30, 0, 821, 661));
        tab_widget5->setTabShape(QTabWidget::Rounded);
        tab_13 = new QWidget();
        tab_13->setObjectName(QStringLiteral("tab_13"));
        tabWidget_10 = new QTabWidget(tab_13);
        tabWidget_10->setObjectName(QStringLiteral("tabWidget_10"));
        tabWidget_10->setGeometry(QRect(0, 0, 721, 341));
        tab_12 = new QWidget();
        tab_12->setObjectName(QStringLiteral("tab_12"));
        idfc = new QLineEdit(tab_12);
        idfc->setObjectName(QStringLiteral("idfc"));
        idfc->setGeometry(QRect(230, 10, 113, 20));
        idfc->setReadOnly(false);
        qte = new QLineEdit(tab_12);
        qte->setObjectName(QStringLiteral("qte"));
        qte->setGeometry(QRect(230, 70, 113, 20));
        qte->setReadOnly(false);
        tp = new QLineEdit(tab_12);
        tp->setObjectName(QStringLiteral("tp"));
        tp->setGeometry(QRect(230, 160, 113, 20));
        tp->setReadOnly(false);
        pu = new QLineEdit(tab_12);
        pu->setObjectName(QStringLiteral("pu"));
        pu->setGeometry(QRect(230, 100, 113, 20));
        pu->setReadOnly(false);
        art = new QLineEdit(tab_12);
        art->setObjectName(QStringLiteral("art"));
        art->setGeometry(QRect(230, 40, 113, 20));
        art->setReadOnly(false);
        pt = new QLineEdit(tab_12);
        pt->setObjectName(QStringLiteral("pt"));
        pt->setGeometry(QRect(230, 130, 113, 20));
        pt->setReadOnly(false);
        pb_ajouter_2 = new QPushButton(tab_12);
        pb_ajouter_2->setObjectName(QStringLiteral("pb_ajouter_2"));
        pb_ajouter_2->setGeometry(QRect(430, 170, 121, 41));
        pb_ajouter_2->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:#0094ff;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}\n"
""));
        pb_ajouter_2->setIcon(icon);
        pb_ajouter_2->setIconSize(QSize(35, 35));
        tabWidget_10->addTab(tab_12, QString());
        tab_widget5->addTab(tab_13, icon1, QString());
        tab_14 = new QWidget();
        tab_14->setObjectName(QStringLiteral("tab_14"));
        tab_fctcmn = new QTableView(tab_14);
        tab_fctcmn->setObjectName(QStringLiteral("tab_fctcmn"));
        tab_fctcmn->setGeometry(QRect(10, 20, 771, 281));
        pushButton_2 = new QPushButton(tab_14);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 312, 131, 41));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:#0094ff;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/f/Printer.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon8);
        pushButton_2->setIconSize(QSize(35, 35));
        tab_widget5->addTab(tab_14, icon3, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        pb_supprimerr = new QPushButton(tab_10);
        pb_supprimerr->setObjectName(QStringLiteral("pb_supprimerr"));
        pb_supprimerr->setGeometry(QRect(320, 190, 81, 23));
        pb_supprimerr->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:#0094ff;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        ID_66 = new QLineEdit(tab_10);
        ID_66->setObjectName(QStringLiteral("ID_66"));
        ID_66->setGeometry(QRect(262, 150, 201, 20));
        tab_widget5->addTab(tab_10, icon4, QString());
        print = new QWidget();
        print->setObjectName(QStringLiteral("print"));
        groupBoxCredentials = new QGroupBox(print);
        groupBoxCredentials->setObjectName(QStringLiteral("groupBoxCredentials"));
        groupBoxCredentials->setGeometry(QRect(90, 20, 478, 119));
        verticalLayout_2 = new QVBoxLayout(groupBoxCredentials);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(9);
        gridLayout->setVerticalSpacing(6);
        lineEditHost = new QLineEdit(groupBoxCredentials);
        lineEditHost->setObjectName(QStringLiteral("lineEditHost"));

        gridLayout->addWidget(lineEditHost, 3, 1, 1, 1);

        labelEmailCredentials = new QLabel(groupBoxCredentials);
        labelEmailCredentials->setObjectName(QStringLiteral("labelEmailCredentials"));

        gridLayout->addWidget(labelEmailCredentials, 0, 1, 1, 1);

        spinBoxPort = new QSpinBox(groupBoxCredentials);
        spinBoxPort->setObjectName(QStringLiteral("spinBoxPort"));
        spinBoxPort->setMinimumSize(QSize(50, 0));
        spinBoxPort->setAlignment(Qt::AlignCenter);
        spinBoxPort->setMaximum(999999);
        spinBoxPort->setValue(465);

        gridLayout->addWidget(spinBoxPort, 3, 3, 1, 1);

        lineEditPasswordCredentials = new QLineEdit(groupBoxCredentials);
        lineEditPasswordCredentials->setObjectName(QStringLiteral("lineEditPasswordCredentials"));
        lineEditPasswordCredentials->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEditPasswordCredentials, 1, 3, 1, 1);

        lineEditEmailCredentials = new QLineEdit(groupBoxCredentials);
        lineEditEmailCredentials->setObjectName(QStringLiteral("lineEditEmailCredentials"));

        gridLayout->addWidget(lineEditEmailCredentials, 1, 1, 1, 1);

        labelHost = new QLabel(groupBoxCredentials);
        labelHost->setObjectName(QStringLiteral("labelHost"));

        gridLayout->addWidget(labelHost, 2, 1, 1, 1);

        labelPasswordCredentials = new QLabel(groupBoxCredentials);
        labelPasswordCredentials->setObjectName(QStringLiteral("labelPasswordCredentials"));

        gridLayout->addWidget(labelPasswordCredentials, 0, 3, 1, 1);

        labelPort = new QLabel(groupBoxCredentials);
        labelPort->setObjectName(QStringLiteral("labelPort"));

        gridLayout->addWidget(labelPort, 2, 3, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        groupBoxMessage = new QGroupBox(print);
        groupBoxMessage->setObjectName(QStringLiteral("groupBoxMessage"));
        groupBoxMessage->setGeometry(QRect(90, 280, 478, 250));
        verticalLayout_4 = new QVBoxLayout(groupBoxMessage);
        verticalLayout_4->setSpacing(9);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        labelSubject = new QLabel(groupBoxMessage);
        labelSubject->setObjectName(QStringLiteral("labelSubject"));

        verticalLayout_6->addWidget(labelSubject);

        lineEditSubject = new QLineEdit(groupBoxMessage);
        lineEditSubject->setObjectName(QStringLiteral("lineEditSubject"));

        verticalLayout_6->addWidget(lineEditSubject);


        verticalLayout_4->addLayout(verticalLayout_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        labelContent = new QLabel(groupBoxMessage);
        labelContent->setObjectName(QStringLiteral("labelContent"));

        verticalLayout_5->addWidget(labelContent);

        textEditContent = new QTextEdit(groupBoxMessage);
        textEditContent->setObjectName(QStringLiteral("textEditContent"));

        verticalLayout_5->addWidget(textEditContent);


        verticalLayout_4->addLayout(verticalLayout_5);

        groupBoxFrom = new QGroupBox(print);
        groupBoxFrom->setObjectName(QStringLiteral("groupBoxFrom"));
        groupBoxFrom->setGeometry(QRect(90, 140, 478, 74));
        verticalLayout_8 = new QVBoxLayout(groupBoxFrom);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(-1, 0, -1, -1);
        labelEmailFrom = new QLabel(groupBoxFrom);
        labelEmailFrom->setObjectName(QStringLiteral("labelEmailFrom"));

        verticalLayout_9->addWidget(labelEmailFrom);

        lineEditEmailFrom = new QLineEdit(groupBoxFrom);
        lineEditEmailFrom->setObjectName(QStringLiteral("lineEditEmailFrom"));

        verticalLayout_9->addWidget(lineEditEmailFrom);


        verticalLayout_8->addLayout(verticalLayout_9);

        layoutWidget = new QWidget(print);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(200, 570, 260, 50));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setSpacing(9);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 10, 0, 10);
        clearFields = new QPushButton(layoutWidget);
        clearFields->setObjectName(QStringLiteral("clearFields"));
        clearFields->setMinimumSize(QSize(100, 30));
        clearFields->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_5->addWidget(clearFields);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        sendEmail = new QPushButton(layoutWidget);
        sendEmail->setObjectName(QStringLiteral("sendEmail"));
        sendEmail->setMinimumSize(QSize(100, 30));
        sendEmail->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_5->addWidget(sendEmail);

        groupBoxTo = new QGroupBox(print);
        groupBoxTo->setObjectName(QStringLiteral("groupBoxTo"));
        groupBoxTo->setGeometry(QRect(90, 210, 478, 74));
        verticalLayout_3 = new QVBoxLayout(groupBoxTo);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        labelEmail = new QLabel(groupBoxTo);
        labelEmail->setObjectName(QStringLiteral("labelEmail"));

        verticalLayout_7->addWidget(labelEmail);

        lineEditEmailTo = new QLineEdit(groupBoxTo);
        lineEditEmailTo->setObjectName(QStringLiteral("lineEditEmailTo"));

        verticalLayout_7->addWidget(lineEditEmailTo);


        verticalLayout_3->addLayout(verticalLayout_7);

        QIcon icon9;
        icon9.addFile(QStringLiteral(":/f/Mail.png"), QSize(), QIcon::Normal, QIcon::Off);
        tab_widget5->addTab(print, icon9, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName(QStringLiteral("tab_11"));
        tabWidget_11 = new QTabWidget(tab_11);
        tabWidget_11->setObjectName(QStringLiteral("tabWidget_11"));
        tabWidget_11->setGeometry(QRect(0, 0, 721, 341));
        tab_15 = new QWidget();
        tab_15->setObjectName(QStringLiteral("tab_15"));
        idfc_22 = new QLineEdit(tab_15);
        idfc_22->setObjectName(QStringLiteral("idfc_22"));
        idfc_22->setGeometry(QRect(200, 30, 113, 20));
        idfc_22->setReadOnly(false);
        qte_22 = new QLineEdit(tab_15);
        qte_22->setObjectName(QStringLiteral("qte_22"));
        qte_22->setGeometry(QRect(200, 90, 113, 20));
        qte_22->setReadOnly(false);
        pt_22 = new QLineEdit(tab_15);
        pt_22->setObjectName(QStringLiteral("pt_22"));
        pt_22->setGeometry(QRect(200, 150, 113, 20));
        pt_22->setReadOnly(false);
        art_22 = new QLineEdit(tab_15);
        art_22->setObjectName(QStringLiteral("art_22"));
        art_22->setGeometry(QRect(200, 60, 113, 20));
        art_22->setReadOnly(false);
        tp_22 = new QLineEdit(tab_15);
        tp_22->setObjectName(QStringLiteral("tp_22"));
        tp_22->setGeometry(QRect(200, 180, 113, 20));
        tp_22->setReadOnly(false);
        pu_22 = new QLineEdit(tab_15);
        pu_22->setObjectName(QStringLiteral("pu_22"));
        pu_22->setGeometry(QRect(200, 120, 113, 20));
        pu_22->setReadOnly(false);
        pb_modifier_2 = new QPushButton(tab_15);
        pb_modifier_2->setObjectName(QStringLiteral("pb_modifier_2"));
        pb_modifier_2->setGeometry(QRect(420, 140, 111, 31));
        pb_modifier_2->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:#0094ff;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/f/Pencil.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_modifier_2->setIcon(icon10);
        pb_modifier_2->setIconSize(QSize(30, 30));
        tabWidget_11->addTab(tab_15, QString());
        tab_widget5->addTab(tab_11, icon10, QString());
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/f/Books.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget_2->addTab(tab_4, icon11, QString());
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/f/suitcase.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab, icon12, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 725, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(1);
        background->setCurrentIndex(0);
        tabWidget_8->setCurrentIndex(0);
        tabWidget_9->setCurrentIndex(0);
        tab_widget5->setCurrentIndex(3);
        tabWidget_10->setCurrentIndex(0);
        tabWidget_11->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        ID->setPlaceholderText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        chiffres->setPlaceholderText(QApplication::translate("MainWindow", "chiffres", Q_NULLPTR));
        encaissements->setPlaceholderText(QApplication::translate("MainWindow", "encaissements", Q_NULLPTR));
        salaires->setPlaceholderText(QApplication::translate("MainWindow", "salaires", Q_NULLPTR));
        gains->setPlaceholderText(QApplication::translate("MainWindow", "gains", Q_NULLPTR));
        depenses->setPlaceholderText(QApplication::translate("MainWindow", "depenses", Q_NULLPTR));
        pb_ajouter->setText(QString());
        label_pic->setText(QString());
        label_date_time->setText(QString());
        tabWidget_8->setTabText(tabWidget_8->indexOf(tab_2), QApplication::translate("MainWindow", "budget", Q_NULLPTR));
        background->setTabText(background->indexOf(tab_20), QApplication::translate("MainWindow", "Ajouter categorie", Q_NULLPTR));
        pushButton_1->setText(QString());
        background->setTabText(background->indexOf(tab_21), QApplication::translate("MainWindow", "Afficher categorie", Q_NULLPTR));
        ID_5->setPlaceholderText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        pb_supprimerp->setText(QString());
        background->setTabText(background->indexOf(tab_8), QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        ID_2->setPlaceholderText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        encaissements_2->setPlaceholderText(QApplication::translate("MainWindow", "encaissements", Q_NULLPTR));
        gains_2->setPlaceholderText(QApplication::translate("MainWindow", "gains", Q_NULLPTR));
        salaires_2->setPlaceholderText(QApplication::translate("MainWindow", "salaires", Q_NULLPTR));
        depenses_2->setPlaceholderText(QApplication::translate("MainWindow", "depenses", Q_NULLPTR));
        chiffres_2->setPlaceholderText(QApplication::translate("MainWindow", "chiffres", Q_NULLPTR));
        pb_modifier->setText(QString());
        tabWidget_9->setTabText(tabWidget_9->indexOf(tab_6), QApplication::translate("MainWindow", "categorie", Q_NULLPTR));
        background->setTabText(background->indexOf(tab_9), QApplication::translate("MainWindow", "modifier", Q_NULLPTR));
        pb_aff_categorie->setText(QString());
        lineEdit_aff_idcategories->setPlaceholderText(QApplication::translate("MainWindow", "ID categorie", Q_NULLPTR));
        background->setTabText(background->indexOf(tab_3), QApplication::translate("MainWindow", "recherche par id", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QApplication::translate("MainWindow", "Categories", Q_NULLPTR));
        idfc->setPlaceholderText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        qte->setPlaceholderText(QApplication::translate("MainWindow", "qte", Q_NULLPTR));
        tp->setPlaceholderText(QApplication::translate("MainWindow", "tp", Q_NULLPTR));
        pu->setPlaceholderText(QApplication::translate("MainWindow", "pu", Q_NULLPTR));
        art->setPlaceholderText(QApplication::translate("MainWindow", "art", Q_NULLPTR));
        pt->setPlaceholderText(QApplication::translate("MainWindow", "pt", Q_NULLPTR));
        pb_ajouter_2->setText(QApplication::translate("MainWindow", "ajouter", Q_NULLPTR));
        tabWidget_10->setTabText(tabWidget_10->indexOf(tab_12), QApplication::translate("MainWindow", "fctcmn", Q_NULLPTR));
        tab_widget5->setTabText(tab_widget5->indexOf(tab_13), QApplication::translate("MainWindow", "Ajouter factures/commandes", Q_NULLPTR));
        pushButton_2->setText(QString());
        tab_widget5->setTabText(tab_widget5->indexOf(tab_14), QApplication::translate("MainWindow", "Afficher factures/commandes", Q_NULLPTR));
        pb_supprimerr->setText(QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        ID_66->setPlaceholderText(QApplication::translate("MainWindow", "ID ", Q_NULLPTR));
        tab_widget5->setTabText(tab_widget5->indexOf(tab_10), QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        groupBoxCredentials->setTitle(QApplication::translate("MainWindow", "From", Q_NULLPTR));
        lineEditHost->setText(QApplication::translate("MainWindow", "smtp.gmail.com", Q_NULLPTR));
        labelEmailCredentials->setText(QApplication::translate("MainWindow", "E-mail", Q_NULLPTR));
        labelHost->setText(QApplication::translate("MainWindow", "Host", Q_NULLPTR));
        labelPasswordCredentials->setText(QApplication::translate("MainWindow", "Password", Q_NULLPTR));
        labelPort->setText(QApplication::translate("MainWindow", "Port", Q_NULLPTR));
        groupBoxMessage->setTitle(QApplication::translate("MainWindow", "Message", Q_NULLPTR));
        labelSubject->setText(QApplication::translate("MainWindow", "Subject", Q_NULLPTR));
        labelContent->setText(QApplication::translate("MainWindow", "Content", Q_NULLPTR));
        groupBoxFrom->setTitle(QApplication::translate("MainWindow", "From", Q_NULLPTR));
        labelEmailFrom->setText(QApplication::translate("MainWindow", "E-mail", Q_NULLPTR));
        clearFields->setText(QApplication::translate("MainWindow", "Clear", Q_NULLPTR));
        sendEmail->setText(QApplication::translate("MainWindow", "Send", Q_NULLPTR));
        groupBoxTo->setTitle(QApplication::translate("MainWindow", "To", Q_NULLPTR));
        labelEmail->setText(QApplication::translate("MainWindow", "E-mail", Q_NULLPTR));
        tab_widget5->setTabText(tab_widget5->indexOf(print), QApplication::translate("MainWindow", "mailing", Q_NULLPTR));
        idfc_22->setPlaceholderText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        qte_22->setPlaceholderText(QApplication::translate("MainWindow", "qte", Q_NULLPTR));
        pt_22->setPlaceholderText(QApplication::translate("MainWindow", "pt", Q_NULLPTR));
        art_22->setPlaceholderText(QApplication::translate("MainWindow", "art", Q_NULLPTR));
        tp_22->setPlaceholderText(QApplication::translate("MainWindow", "tp", Q_NULLPTR));
        pu_22->setPlaceholderText(QApplication::translate("MainWindow", "pu", Q_NULLPTR));
        pb_modifier_2->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        tabWidget_11->setTabText(tabWidget_11->indexOf(tab_15), QApplication::translate("MainWindow", "fctcmn", Q_NULLPTR));
        tab_widget5->setTabText(tab_widget5->indexOf(tab_11), QApplication::translate("MainWindow", "modifier", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("MainWindow", "factures-commandes", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "gestion financi\303\251re", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
