/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QSlider>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>
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
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_3;
    QSlider *horizontalSliderRed;
    QLCDNumber *lcdNumber_2;
    QSlider *horizontalSliderGreen;
    QLabel *labelBlue;
    QLabel *labelGreen;
    QLabel *labelAlpha;
    QSlider *horizontalSliderAlpha;
    QLCDNumber *lcdNumber_4;
    QLabel *labelRed;
    QSlider *horizontalSliderBlue;
    Paleta *widget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1073, 671);
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
        layoutWidget->setGeometry(QRect(410, 160, 251, 218));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lcdNumber = new QLCDNumber(layoutWidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setFrameShape(QFrame::Panel);
        lcdNumber->setFrameShadow(QFrame::Sunken);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber->setProperty("intValue", QVariant(48));

        gridLayout->addWidget(lcdNumber, 1, 2, 1, 1);

        lcdNumber_3 = new QLCDNumber(layoutWidget);
        lcdNumber_3->setObjectName(QString::fromUtf8("lcdNumber_3"));
        lcdNumber_3->setFrameShape(QFrame::Panel);
        lcdNumber_3->setFrameShadow(QFrame::Sunken);
        lcdNumber_3->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_3->setProperty("intValue", QVariant(48));

        gridLayout->addWidget(lcdNumber_3, 3, 2, 1, 1);

        horizontalSliderRed = new QSlider(layoutWidget);
        horizontalSliderRed->setObjectName(QString::fromUtf8("horizontalSliderRed"));
        horizontalSliderRed->setMaximum(255);
        horizontalSliderRed->setValue(48);
        horizontalSliderRed->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderRed, 1, 1, 1, 1);

        lcdNumber_2 = new QLCDNumber(layoutWidget);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));
        lcdNumber_2->setFrameShape(QFrame::Panel);
        lcdNumber_2->setFrameShadow(QFrame::Sunken);
        lcdNumber_2->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_2->setProperty("intValue", QVariant(48));

        gridLayout->addWidget(lcdNumber_2, 2, 2, 1, 1);

        horizontalSliderGreen = new QSlider(layoutWidget);
        horizontalSliderGreen->setObjectName(QString::fromUtf8("horizontalSliderGreen"));
        horizontalSliderGreen->setMaximum(255);
        horizontalSliderGreen->setValue(48);
        horizontalSliderGreen->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderGreen, 3, 1, 1, 1);

        labelBlue = new QLabel(layoutWidget);
        labelBlue->setObjectName(QString::fromUtf8("labelBlue"));

        gridLayout->addWidget(labelBlue, 2, 0, 1, 1);

        labelGreen = new QLabel(layoutWidget);
        labelGreen->setObjectName(QString::fromUtf8("labelGreen"));

        gridLayout->addWidget(labelGreen, 3, 0, 1, 1);

        labelAlpha = new QLabel(layoutWidget);
        labelAlpha->setObjectName(QString::fromUtf8("labelAlpha"));

        gridLayout->addWidget(labelAlpha, 4, 0, 1, 1);

        horizontalSliderAlpha = new QSlider(layoutWidget);
        horizontalSliderAlpha->setObjectName(QString::fromUtf8("horizontalSliderAlpha"));
        horizontalSliderAlpha->setMaximum(100);
        horizontalSliderAlpha->setValue(100);
        horizontalSliderAlpha->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderAlpha, 4, 1, 1, 1);

        lcdNumber_4 = new QLCDNumber(layoutWidget);
        lcdNumber_4->setObjectName(QString::fromUtf8("lcdNumber_4"));
        lcdNumber_4->setFrameShape(QFrame::Panel);
        lcdNumber_4->setFrameShadow(QFrame::Sunken);
        lcdNumber_4->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_4->setProperty("intValue", QVariant(100));

        gridLayout->addWidget(lcdNumber_4, 4, 2, 1, 1);

        labelRed = new QLabel(layoutWidget);
        labelRed->setObjectName(QString::fromUtf8("labelRed"));

        gridLayout->addWidget(labelRed, 1, 0, 1, 1);

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

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1073, 22));
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

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Sculptor", 0, QApplication::UnicodeUTF8));
        actionContext_Help->setText(QApplication::translate("MainWindow", "Context Help", 0, QApplication::UnicodeUTF8));
        actionContext_Help->setShortcut(QApplication::translate("MainWindow", "F1", 0, QApplication::UnicodeUTF8));
        actionNew_Canvas->setText(QApplication::translate("MainWindow", "New Canvas", 0, QApplication::UnicodeUTF8));
        actionNew_Canvas->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        actionExport_off_File->setText(QApplication::translate("MainWindow", "Export .off File", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        actionExit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionGitHub->setText(QApplication::translate("MainWindow", "GitHub", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("MainWindow", "Save", 0, QApplication::UnicodeUTF8));
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", 0, QApplication::UnicodeUTF8));
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        labelBlue->setText(QApplication::translate("MainWindow", "Blue", 0, QApplication::UnicodeUTF8));
        labelGreen->setText(QApplication::translate("MainWindow", "Green", 0, QApplication::UnicodeUTF8));
        labelAlpha->setText(QApplication::translate("MainWindow", "Alpha", 0, QApplication::UnicodeUTF8));
        labelRed->setText(QApplication::translate("MainWindow", "Red", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
