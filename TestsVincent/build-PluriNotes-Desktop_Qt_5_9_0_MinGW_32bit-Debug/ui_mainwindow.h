/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
<<<<<<< HEAD
    QAction *actionOpen;
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *ArticleEditeur;
    QHBoxLayout *Date;
    QVBoxLayout *DateCreation;
    QVBoxLayout *DateLastUpdate;
    QHBoxLayout *Titre;
    QHBoxLayout *Text;
    QMenuBar *menuBar;
    QMenu *menufile;
=======
    QAction *actionSave;
    QAction *actionExit;
    QAction *actionArticle;
    QAction *actionTache;
    QAction *actionMedia;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *gauche;
    QVBoxLayout *verticalLayout;
    QLabel *label_note;
    QHBoxLayout *horizontalLayout_3;
    QWidget *central;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *centralLayout;
    QWidget *droite;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QMenuBar *menuBar;
    QMenu *menufile;
    QMenu *menuNouveau;
>>>>>>> 167c8c55c89ddc92716ee315578f8f81f33cb262
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
<<<<<<< HEAD
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(110, 0, 171, 241));
        ArticleEditeur = new QVBoxLayout(verticalLayoutWidget);
        ArticleEditeur->setSpacing(6);
        ArticleEditeur->setContentsMargins(11, 11, 11, 11);
        ArticleEditeur->setObjectName(QStringLiteral("ArticleEditeur"));
        ArticleEditeur->setContentsMargins(0, 0, 0, 0);
        Date = new QHBoxLayout();
        Date->setSpacing(6);
        Date->setObjectName(QStringLiteral("Date"));
        DateCreation = new QVBoxLayout();
        DateCreation->setSpacing(6);
        DateCreation->setObjectName(QStringLiteral("DateCreation"));

        Date->addLayout(DateCreation);

        DateLastUpdate = new QVBoxLayout();
        DateLastUpdate->setSpacing(6);
        DateLastUpdate->setObjectName(QStringLiteral("DateLastUpdate"));

        Date->addLayout(DateLastUpdate);


        ArticleEditeur->addLayout(Date);

        Titre = new QHBoxLayout();
        Titre->setSpacing(6);
        Titre->setObjectName(QStringLiteral("Titre"));

        ArticleEditeur->addLayout(Titre);

        Text = new QHBoxLayout();
        Text->setSpacing(6);
        Text->setObjectName(QStringLiteral("Text"));

        ArticleEditeur->addLayout(Text);
=======
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionArticle = new QAction(MainWindow);
        actionArticle->setObjectName(QStringLiteral("actionArticle"));
        actionTache = new QAction(MainWindow);
        actionTache->setObjectName(QStringLiteral("actionTache"));
        actionMedia = new QAction(MainWindow);
        actionMedia->setObjectName(QStringLiteral("actionMedia"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gauche = new QWidget(centralWidget);
        gauche->setObjectName(QStringLiteral("gauche"));
        verticalLayout = new QVBoxLayout(gauche);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_note = new QLabel(gauche);
        label_note->setObjectName(QStringLiteral("label_note"));
        label_note->setMaximumSize(QSize(16777215, 15));

        verticalLayout->addWidget(label_note);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);

        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout->addWidget(gauche);

        central = new QWidget(centralWidget);
        central->setObjectName(QStringLiteral("central"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(central->sizePolicy().hasHeightForWidth());
        central->setSizePolicy(sizePolicy);
        verticalLayout_4 = new QVBoxLayout(central);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        centralLayout = new QVBoxLayout();
        centralLayout->setSpacing(6);
        centralLayout->setObjectName(QStringLiteral("centralLayout"));

        verticalLayout_4->addLayout(centralLayout);


        horizontalLayout->addWidget(central);

        droite = new QWidget(centralWidget);
        droite->setObjectName(QStringLiteral("droite"));
        verticalLayout_2 = new QVBoxLayout(droite);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(droite);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);


        horizontalLayout->addWidget(droite);
>>>>>>> 167c8c55c89ddc92716ee315578f8f81f33cb262

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        menufile = new QMenu(menuBar);
        menufile->setObjectName(QStringLiteral("menufile"));
<<<<<<< HEAD
=======
        menuNouveau = new QMenu(menuBar);
        menuNouveau->setObjectName(QStringLiteral("menuNouveau"));
>>>>>>> 167c8c55c89ddc92716ee315578f8f81f33cb262
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menufile->menuAction());
<<<<<<< HEAD
        menufile->addAction(actionOpen);
=======
        menuBar->addAction(menuNouveau->menuAction());
        menufile->addAction(actionSave);
        menufile->addAction(actionExit);
        menuNouveau->addAction(actionArticle);
        menuNouveau->addAction(actionTache);
        menuNouveau->addAction(actionMedia);
        mainToolBar->addAction(actionExit);
>>>>>>> 167c8c55c89ddc92716ee315578f8f81f33cb262

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
<<<<<<< HEAD
        actionOpen->setText(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
        menufile->setTitle(QApplication::translate("MainWindow", "file", Q_NULLPTR));
=======
        actionSave->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        actionArticle->setText(QApplication::translate("MainWindow", "Article", Q_NULLPTR));
        actionTache->setText(QApplication::translate("MainWindow", "Tache", Q_NULLPTR));
        actionMedia->setText(QApplication::translate("MainWindow", "Media", Q_NULLPTR));
        label_note->setText(QApplication::translate("MainWindow", "Notes :", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Relations :", Q_NULLPTR));
        menufile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        menuNouveau->setTitle(QApplication::translate("MainWindow", "Nouveau", Q_NULLPTR));
>>>>>>> 167c8c55c89ddc92716ee315578f8f81f33cb262
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H