/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "paleta.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionContext_Help;
    QAction *actionNew_Canvas;
    QAction *actionExport_off_File;
    QAction *actionExit;
    QAction *actionGitHub;
    QAction *actionSave;
    QAction *actionOpen;
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *labelGreen;
    QLabel *labelAlpha;
    QSlider *horizontalSliderRed;
    QLCDNumber *lcdNumber_4;
    QLabel *labelBlue;
    QLCDNumber *lcdNumber_2;
    QLCDNumber *lcdNumber_3;
    QSlider *horizontalSliderBlue;
    Paleta *widget;
    QSlider *horizontalSliderAlpha;
    QLabel *labelRed;
    QLCDNumber *lcdNumber;
    QSlider *horizontalSliderGreen;
    QWidget *widget1;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSlider *horizontalSliderEixoX;
    QLCDNumber *lcdNumber_5;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QSlider *horizontalSliderEixoY;
    QLCDNumber *lcdNumber_6;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_3;
    QSlider *horizontalSliderEixoZ;
    QLCDNumber *lcdNumber_7;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(998, 647);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionContext_Help = new QAction(MainWindow);
        actionContext_Help->setObjectName(QString::fromUtf8("actionContext_Help"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/information.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionContext_Help->setIcon(icon1);
        actionNew_Canvas = new QAction(MainWindow);
        actionNew_Canvas->setObjectName(QString::fromUtf8("actionNew_Canvas"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icons/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_Canvas->setIcon(icon2);
        actionExport_off_File = new QAction(MainWindow);
        actionExport_off_File->setObjectName(QString::fromUtf8("actionExport_off_File"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/icons/share.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExport_off_File->setIcon(icon3);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/icons/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon4);
        actionGitHub = new QAction(MainWindow);
        actionGitHub->setObjectName(QString::fromUtf8("actionGitHub"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/icons/github-logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGitHub->setIcon(icon5);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/icons/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon6);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/icons/open-archive.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon7);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(730, 10, 251, 218));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        labelGreen = new QLabel(layoutWidget);
        labelGreen->setObjectName(QString::fromUtf8("labelGreen"));

        gridLayout->addWidget(labelGreen, 3, 0, 1, 1);

        labelAlpha = new QLabel(layoutWidget);
        labelAlpha->setObjectName(QString::fromUtf8("labelAlpha"));

        gridLayout->addWidget(labelAlpha, 4, 0, 1, 1);

        horizontalSliderRed = new QSlider(layoutWidget);
        horizontalSliderRed->setObjectName(QString::fromUtf8("horizontalSliderRed"));
        horizontalSliderRed->setMaximum(255);
        horizontalSliderRed->setValue(48);
        horizontalSliderRed->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderRed, 1, 1, 1, 1);

        lcdNumber_4 = new QLCDNumber(layoutWidget);
        lcdNumber_4->setObjectName(QString::fromUtf8("lcdNumber_4"));
        lcdNumber_4->setFrameShape(QFrame::Panel);
        lcdNumber_4->setFrameShadow(QFrame::Sunken);
        lcdNumber_4->setSmallDecimalPoint(false);
        lcdNumber_4->setDigitCount(5);
        lcdNumber_4->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_4->setProperty("intValue", QVariant(255));

        gridLayout->addWidget(lcdNumber_4, 4, 2, 1, 1);

        labelBlue = new QLabel(layoutWidget);
        labelBlue->setObjectName(QString::fromUtf8("labelBlue"));

        gridLayout->addWidget(labelBlue, 2, 0, 1, 1);

        lcdNumber_2 = new QLCDNumber(layoutWidget);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));
        lcdNumber_2->setFrameShape(QFrame::Panel);
        lcdNumber_2->setFrameShadow(QFrame::Sunken);
        lcdNumber_2->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_2->setProperty("intValue", QVariant(48));

        gridLayout->addWidget(lcdNumber_2, 2, 2, 1, 1);

        lcdNumber_3 = new QLCDNumber(layoutWidget);
        lcdNumber_3->setObjectName(QString::fromUtf8("lcdNumber_3"));
        lcdNumber_3->setFrameShape(QFrame::Panel);
        lcdNumber_3->setFrameShadow(QFrame::Sunken);
        lcdNumber_3->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_3->setProperty("intValue", QVariant(48));

        gridLayout->addWidget(lcdNumber_3, 3, 2, 1, 1);

        horizontalSliderBlue = new QSlider(layoutWidget);
        horizontalSliderBlue->setObjectName(QString::fromUtf8("horizontalSliderBlue"));
        horizontalSliderBlue->setMaximum(255);
        horizontalSliderBlue->setValue(48);
        horizontalSliderBlue->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderBlue, 2, 1, 1, 1);

        widget = new Paleta(layoutWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 50));

        gridLayout->addWidget(widget, 0, 0, 1, 3);

        horizontalSliderAlpha = new QSlider(layoutWidget);
        horizontalSliderAlpha->setObjectName(QString::fromUtf8("horizontalSliderAlpha"));
        horizontalSliderAlpha->setMaximum(255);
        horizontalSliderAlpha->setValue(255);
        horizontalSliderAlpha->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderAlpha, 4, 1, 1, 1);

        labelRed = new QLabel(layoutWidget);
        labelRed->setObjectName(QString::fromUtf8("labelRed"));

        gridLayout->addWidget(labelRed, 1, 0, 1, 1);

        lcdNumber = new QLCDNumber(layoutWidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setFrameShape(QFrame::Panel);
        lcdNumber->setFrameShadow(QFrame::Sunken);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber->setProperty("intValue", QVariant(48));

        gridLayout->addWidget(lcdNumber, 1, 2, 1, 1);

        horizontalSliderGreen = new QSlider(layoutWidget);
        horizontalSliderGreen->setObjectName(QString::fromUtf8("horizontalSliderGreen"));
        horizontalSliderGreen->setMaximum(255);
        horizontalSliderGreen->setValue(48);
        horizontalSliderGreen->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderGreen, 3, 1, 1, 1);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(40, 10, 326, 260));
        gridLayout_2 = new QGridLayout(widget1);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(widget1);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/icons/eixo-x.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon8);
        pushButton->setIconSize(QSize(32, 32));
        pushButton->setFlat(true);

        horizontalLayout->addWidget(pushButton);

        horizontalSliderEixoX = new QSlider(groupBox);
        horizontalSliderEixoX->setObjectName(QString::fromUtf8("horizontalSliderEixoX"));
        horizontalSliderEixoX->setMaximum(255);
        horizontalSliderEixoX->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSliderEixoX);

        lcdNumber_5 = new QLCDNumber(groupBox);
        lcdNumber_5->setObjectName(QString::fromUtf8("lcdNumber_5"));

        horizontalLayout->addWidget(lcdNumber_5);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(widget1);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/icons/eixo-y.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon9);
        pushButton_2->setIconSize(QSize(32, 32));
        pushButton_2->setFlat(true);

        horizontalLayout_2->addWidget(pushButton_2);

        horizontalSliderEixoY = new QSlider(groupBox_2);
        horizontalSliderEixoY->setObjectName(QString::fromUtf8("horizontalSliderEixoY"));
        horizontalSliderEixoY->setMaximum(255);
        horizontalSliderEixoY->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSliderEixoY);

        lcdNumber_6 = new QLCDNumber(groupBox_2);
        lcdNumber_6->setObjectName(QString::fromUtf8("lcdNumber_6"));

        horizontalLayout_2->addWidget(lcdNumber_6);


        gridLayout_2->addWidget(groupBox_2, 1, 0, 1, 1);

        groupBox_3 = new QGroupBox(widget1);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_3 = new QPushButton(groupBox_3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/icons/eixo-z.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon10);
        pushButton_3->setIconSize(QSize(32, 32));
        pushButton_3->setFlat(true);

        horizontalLayout_3->addWidget(pushButton_3);

        horizontalSliderEixoZ = new QSlider(groupBox_3);
        horizontalSliderEixoZ->setObjectName(QString::fromUtf8("horizontalSliderEixoZ"));
        horizontalSliderEixoZ->setMaximum(255);
        horizontalSliderEixoZ->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalSliderEixoZ);

        lcdNumber_7 = new QLCDNumber(groupBox_3);
        lcdNumber_7->setObjectName(QString::fromUtf8("lcdNumber_7"));

        horizontalLayout_3->addWidget(lcdNumber_7);


        gridLayout_2->addWidget(groupBox_3, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 998, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew_Canvas);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionExport_off_File);
        menuFile->addAction(actionExit);
        menuHelp->addAction(actionContext_Help);
        menuHelp->addAction(actionGitHub);

        retranslateUi(MainWindow);
        QObject::connect(actionExit, SIGNAL(triggered()), MainWindow, SLOT(close()));
        QObject::connect(horizontalSliderRed, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));
        QObject::connect(horizontalSliderBlue, SIGNAL(valueChanged(int)), lcdNumber_2, SLOT(display(int)));
        QObject::connect(horizontalSliderGreen, SIGNAL(valueChanged(int)), lcdNumber_3, SLOT(display(int)));
        QObject::connect(horizontalSliderAlpha, SIGNAL(valueChanged(int)), lcdNumber_4, SLOT(display(int)));
        QObject::connect(horizontalSliderEixoX, SIGNAL(valueChanged(int)), lcdNumber_5, SLOT(display(int)));
        QObject::connect(horizontalSliderEixoY, SIGNAL(valueChanged(int)), lcdNumber_6, SLOT(display(int)));
        QObject::connect(horizontalSliderEixoZ, SIGNAL(valueChanged(int)), lcdNumber_7, SLOT(display(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Sculptor", nullptr));
        actionContext_Help->setText(QCoreApplication::translate("MainWindow", "Context Help", nullptr));
#if QT_CONFIG(shortcut)
        actionContext_Help->setShortcut(QCoreApplication::translate("MainWindow", "F1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNew_Canvas->setText(QCoreApplication::translate("MainWindow", "New Canvas", nullptr));
#if QT_CONFIG(shortcut)
        actionNew_Canvas->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExport_off_File->setText(QCoreApplication::translate("MainWindow", "Export .off File", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGitHub->setText(QCoreApplication::translate("MainWindow", "GitHub", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        labelGreen->setText(QCoreApplication::translate("MainWindow", "Green", nullptr));
        labelAlpha->setText(QCoreApplication::translate("MainWindow", "Alpha", nullptr));
        labelBlue->setText(QCoreApplication::translate("MainWindow", "Blue", nullptr));
        labelRed->setText(QCoreApplication::translate("MainWindow", "Red", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "<Y,Z>", nullptr));
        pushButton->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "<Z,X>", nullptr));
        pushButton_2->setText(QString());
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "<X,Y>", nullptr));
        pushButton_3->setText(QString());
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
