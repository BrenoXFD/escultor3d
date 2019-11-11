/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

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
    QWidget *widget;
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
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1073, 671);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/icons/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionContext_Help = new QAction(MainWindow);
        actionContext_Help->setObjectName(QStringLiteral("actionContext_Help"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/icons/information.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionContext_Help->setIcon(icon1);
        actionNew_Canvas = new QAction(MainWindow);
        actionNew_Canvas->setObjectName(QStringLiteral("actionNew_Canvas"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/icons/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_Canvas->setIcon(icon2);
        actionExport_off_File = new QAction(MainWindow);
        actionExport_off_File->setObjectName(QStringLiteral("actionExport_off_File"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/icons/share.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExport_off_File->setIcon(icon3);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/icons/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon4);
        actionGitHub = new QAction(MainWindow);
        actionGitHub->setObjectName(QStringLiteral("actionGitHub"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icons/icons/github-logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGitHub->setIcon(icon5);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icons/icons/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon6);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/icons/icons/open-archive.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon7);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(390, 160, 251, 128));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(layoutWidget);
        widget->setObjectName(QStringLiteral("widget"));

        gridLayout->addWidget(widget, 0, 0, 1, 3);

        lcdNumber = new QLCDNumber(layoutWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setFrameShape(QFrame::Panel);
        lcdNumber->setFrameShadow(QFrame::Sunken);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(lcdNumber, 1, 2, 1, 1);

        lcdNumber_3 = new QLCDNumber(layoutWidget);
        lcdNumber_3->setObjectName(QStringLiteral("lcdNumber_3"));
        lcdNumber_3->setFrameShape(QFrame::Panel);
        lcdNumber_3->setFrameShadow(QFrame::Sunken);
        lcdNumber_3->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(lcdNumber_3, 3, 2, 1, 1);

        horizontalSliderRed = new QSlider(layoutWidget);
        horizontalSliderRed->setObjectName(QStringLiteral("horizontalSliderRed"));
        horizontalSliderRed->setMaximum(255);
        horizontalSliderRed->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderRed, 1, 1, 1, 1);

        lcdNumber_2 = new QLCDNumber(layoutWidget);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));
        lcdNumber_2->setFrameShape(QFrame::Panel);
        lcdNumber_2->setFrameShadow(QFrame::Sunken);
        lcdNumber_2->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(lcdNumber_2, 2, 2, 1, 1);

        horizontalSliderGreen = new QSlider(layoutWidget);
        horizontalSliderGreen->setObjectName(QStringLiteral("horizontalSliderGreen"));
        horizontalSliderGreen->setMaximum(255);
        horizontalSliderGreen->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderGreen, 3, 1, 1, 1);

        labelBlue = new QLabel(layoutWidget);
        labelBlue->setObjectName(QStringLiteral("labelBlue"));

        gridLayout->addWidget(labelBlue, 2, 0, 1, 1);

        labelGreen = new QLabel(layoutWidget);
        labelGreen->setObjectName(QStringLiteral("labelGreen"));

        gridLayout->addWidget(labelGreen, 3, 0, 1, 1);

        labelAlpha = new QLabel(layoutWidget);
        labelAlpha->setObjectName(QStringLiteral("labelAlpha"));

        gridLayout->addWidget(labelAlpha, 4, 0, 1, 1);

        horizontalSliderAlpha = new QSlider(layoutWidget);
        horizontalSliderAlpha->setObjectName(QStringLiteral("horizontalSliderAlpha"));
        horizontalSliderAlpha->setMaximum(100);
        horizontalSliderAlpha->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderAlpha, 4, 1, 1, 1);

        lcdNumber_4 = new QLCDNumber(layoutWidget);
        lcdNumber_4->setObjectName(QStringLiteral("lcdNumber_4"));
        lcdNumber_4->setFrameShape(QFrame::Panel);
        lcdNumber_4->setFrameShadow(QFrame::Sunken);
        lcdNumber_4->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(lcdNumber_4, 4, 2, 1, 1);

        labelRed = new QLabel(layoutWidget);
        labelRed->setObjectName(QStringLiteral("labelRed"));

        gridLayout->addWidget(labelRed, 1, 0, 1, 1);

        horizontalSliderBlue = new QSlider(layoutWidget);
        horizontalSliderBlue->setObjectName(QStringLiteral("horizontalSliderBlue"));
        horizontalSliderBlue->setMaximum(255);
        horizontalSliderBlue->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderBlue, 2, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1073, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Sculptor", nullptr));
        actionContext_Help->setText(QApplication::translate("MainWindow", "Context Help", nullptr));
#ifndef QT_NO_SHORTCUT
        actionContext_Help->setShortcut(QApplication::translate("MainWindow", "F1", nullptr));
#endif // QT_NO_SHORTCUT
        actionNew_Canvas->setText(QApplication::translate("MainWindow", "New Canvas", nullptr));
#ifndef QT_NO_SHORTCUT
        actionNew_Canvas->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        actionExport_off_File->setText(QApplication::translate("MainWindow", "Export .off File", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
#ifndef QT_NO_SHORTCUT
        actionExit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        actionGitHub->setText(QApplication::translate("MainWindow", "GitHub", nullptr));
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionOpen->setText(QApplication::translate("MainWindow", "Open", nullptr));
#ifndef QT_NO_SHORTCUT
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        labelBlue->setText(QApplication::translate("MainWindow", "Blue", nullptr));
        labelGreen->setText(QApplication::translate("MainWindow", "Green", nullptr));
        labelAlpha->setText(QApplication::translate("MainWindow", "Alpha", nullptr));
        labelRed->setText(QApplication::translate("MainWindow", "Red", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
