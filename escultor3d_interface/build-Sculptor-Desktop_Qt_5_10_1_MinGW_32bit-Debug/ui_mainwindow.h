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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "paleta.h"
#include "xy.h"
#include "yz.h"
#include "zx.h"

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
    QAction *actionHex_Color;
    QAction *actionGo_To_Meshlab;
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_4;
    Yz *widget_2;
    QWidget *tab_2;
    QGridLayout *gridLayout_5;
    Zx *widget_3;
    QWidget *tab_3;
    QGridLayout *gridLayout_6;
    Xy *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonPutVoxel;
    QPushButton *pushButtonCutVoxel;
    QPushButton *pushButtonPutBox;
    QPushButton *pushButtonCutBox;
    QPushButton *pushButtonPutSphere;
    QPushButton *pushButtonCutSphere;
    QPushButton *pushButtonPutEllipsoid;
    QPushButton *pushButtonCutEllipsoid;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_4;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_3;
    QSlider *horizontalSliderEixoZ;
    QLCDNumber *lcdNumber_7;
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
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_3;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_8;
    QSlider *horizontalSliderBoxSizeX;
    QSlider *horizontalSliderBoxSizeY;
    QSlider *horizontalSliderBoxSizeZ;
    QLCDNumber *lcdNumber_10;
    QLCDNumber *lcdNumber_9;
    QLCDNumber *lcdNumber_8;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_9;
    QLabel *label_5;
    QSlider *verticalSliderElipseZ;
    QSlider *verticalSliderElipseY;
    QLabel *label_6;
    QSlider *verticalSliderElipseX;
    QLabel *label_7;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_7;
    QLabel *label_4;
    QSlider *verticalSliderEsferaRaio;
    QLCDNumber *lcdNumber_3;
    QLabel *labelGreen;
    Paleta *widget;
    QSlider *horizontalSliderAlpha;
    QLabel *labelRed;
    QLabel *labelAlpha;
    QSlider *horizontalSliderRed;
    QSlider *horizontalSliderGreen;
    QLCDNumber *lcdNumber_4;
    QSlider *horizontalSliderBlue;
    QLCDNumber *lcdNumber;
    QLabel *labelBlue;
    QLCDNumber *lcdNumber_2;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuOption;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1342, 747);
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
        actionHex_Color = new QAction(MainWindow);
        actionHex_Color->setObjectName(QStringLiteral("actionHex_Color"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/icons/icons/sharp.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHex_Color->setIcon(icon8);
        actionGo_To_Meshlab = new QAction(MainWindow);
        actionGo_To_Meshlab->setObjectName(QStringLiteral("actionGo_To_Meshlab"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/icons/icons/object.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGo_To_Meshlab->setIcon(icon9);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setMinimumSize(QSize(600, 600));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        tabWidget->setFont(font);
        tabWidget->setAutoFillBackground(false);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setDocumentMode(true);
        tabWidget->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_4 = new QGridLayout(tab);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        widget_2 = new Yz(tab);
        widget_2->setObjectName(QStringLiteral("widget_2"));

        gridLayout_4->addWidget(widget_2, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_5 = new QGridLayout(tab_2);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        widget_3 = new Zx(tab_2);
        widget_3->setObjectName(QStringLiteral("widget_3"));

        gridLayout_5->addWidget(widget_3, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_6 = new QGridLayout(tab_3);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        widget_4 = new Xy(tab_3);
        widget_4->setObjectName(QStringLiteral("widget_4"));

        gridLayout_6->addWidget(widget_4, 0, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());

        gridLayout_3->addWidget(tabWidget, 0, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 15, -1, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        pushButtonPutVoxel = new QPushButton(centralWidget);
        pushButtonPutVoxel->setObjectName(QStringLiteral("pushButtonPutVoxel"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButtonPutVoxel->sizePolicy().hasHeightForWidth());
        pushButtonPutVoxel->setSizePolicy(sizePolicy1);
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/icons/icons/putVoxel.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonPutVoxel->setIcon(icon10);
        pushButtonPutVoxel->setIconSize(QSize(40, 40));
        pushButtonPutVoxel->setFlat(false);

        horizontalLayout_4->addWidget(pushButtonPutVoxel);

        pushButtonCutVoxel = new QPushButton(centralWidget);
        pushButtonCutVoxel->setObjectName(QStringLiteral("pushButtonCutVoxel"));
        sizePolicy1.setHeightForWidth(pushButtonCutVoxel->sizePolicy().hasHeightForWidth());
        pushButtonCutVoxel->setSizePolicy(sizePolicy1);
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/icons/icons/cutVoxel.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonCutVoxel->setIcon(icon11);
        pushButtonCutVoxel->setIconSize(QSize(40, 40));
        pushButtonCutVoxel->setFlat(false);

        horizontalLayout_4->addWidget(pushButtonCutVoxel);

        pushButtonPutBox = new QPushButton(centralWidget);
        pushButtonPutBox->setObjectName(QStringLiteral("pushButtonPutBox"));
        pushButtonPutBox->setEnabled(true);
        sizePolicy1.setHeightForWidth(pushButtonPutBox->sizePolicy().hasHeightForWidth());
        pushButtonPutBox->setSizePolicy(sizePolicy1);
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/icons/icons/putBox.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonPutBox->setIcon(icon12);
        pushButtonPutBox->setIconSize(QSize(40, 40));
        pushButtonPutBox->setFlat(false);

        horizontalLayout_4->addWidget(pushButtonPutBox);

        pushButtonCutBox = new QPushButton(centralWidget);
        pushButtonCutBox->setObjectName(QStringLiteral("pushButtonCutBox"));
        sizePolicy1.setHeightForWidth(pushButtonCutBox->sizePolicy().hasHeightForWidth());
        pushButtonCutBox->setSizePolicy(sizePolicy1);
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/icons/icons/cutBox.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonCutBox->setIcon(icon13);
        pushButtonCutBox->setIconSize(QSize(40, 40));
        pushButtonCutBox->setFlat(false);

        horizontalLayout_4->addWidget(pushButtonCutBox);

        pushButtonPutSphere = new QPushButton(centralWidget);
        pushButtonPutSphere->setObjectName(QStringLiteral("pushButtonPutSphere"));
        sizePolicy1.setHeightForWidth(pushButtonPutSphere->sizePolicy().hasHeightForWidth());
        pushButtonPutSphere->setSizePolicy(sizePolicy1);
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/icons/icons/putSphere.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonPutSphere->setIcon(icon14);
        pushButtonPutSphere->setIconSize(QSize(40, 40));
        pushButtonPutSphere->setFlat(false);

        horizontalLayout_4->addWidget(pushButtonPutSphere);

        pushButtonCutSphere = new QPushButton(centralWidget);
        pushButtonCutSphere->setObjectName(QStringLiteral("pushButtonCutSphere"));
        sizePolicy1.setHeightForWidth(pushButtonCutSphere->sizePolicy().hasHeightForWidth());
        pushButtonCutSphere->setSizePolicy(sizePolicy1);
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/icons/icons/cutSphere.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonCutSphere->setIcon(icon15);
        pushButtonCutSphere->setIconSize(QSize(40, 40));
        pushButtonCutSphere->setFlat(false);

        horizontalLayout_4->addWidget(pushButtonCutSphere);

        pushButtonPutEllipsoid = new QPushButton(centralWidget);
        pushButtonPutEllipsoid->setObjectName(QStringLiteral("pushButtonPutEllipsoid"));
        sizePolicy1.setHeightForWidth(pushButtonPutEllipsoid->sizePolicy().hasHeightForWidth());
        pushButtonPutEllipsoid->setSizePolicy(sizePolicy1);
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/icons/icons/putEllipsoid.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonPutEllipsoid->setIcon(icon16);
        pushButtonPutEllipsoid->setIconSize(QSize(40, 40));
        pushButtonPutEllipsoid->setFlat(false);

        horizontalLayout_4->addWidget(pushButtonPutEllipsoid);

        pushButtonCutEllipsoid = new QPushButton(centralWidget);
        pushButtonCutEllipsoid->setObjectName(QStringLiteral("pushButtonCutEllipsoid"));
        sizePolicy1.setHeightForWidth(pushButtonCutEllipsoid->sizePolicy().hasHeightForWidth());
        pushButtonCutEllipsoid->setSizePolicy(sizePolicy1);
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/icons/icons/cutEllipsoid.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonCutEllipsoid->setIcon(icon17);
        pushButtonCutEllipsoid->setIconSize(QSize(40, 40));
        pushButtonCutEllipsoid->setFlat(false);

        horizontalLayout_4->addWidget(pushButtonCutEllipsoid);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        gridLayout_3->addLayout(horizontalLayout_4, 1, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        gridLayout_2->setContentsMargins(-1, 50, 20, -1);
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setFont(font);
        pushButton_4->setAutoDefault(false);
        pushButton_4->setFlat(false);

        gridLayout_2->addWidget(pushButton_4, 4, 0, 1, 1);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        sizePolicy1.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy1);
        horizontalLayout_3 = new QHBoxLayout(groupBox_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_3 = new QPushButton(groupBox_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/icons/icons/eixo-z.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon18);
        pushButton_3->setIconSize(QSize(32, 32));
        pushButton_3->setFlat(true);

        horizontalLayout_3->addWidget(pushButton_3);

        horizontalSliderEixoZ = new QSlider(groupBox_3);
        horizontalSliderEixoZ->setObjectName(QStringLiteral("horizontalSliderEixoZ"));
        horizontalSliderEixoZ->setMaximum(255);
        horizontalSliderEixoZ->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalSliderEixoZ);

        lcdNumber_7 = new QLCDNumber(groupBox_3);
        lcdNumber_7->setObjectName(QStringLiteral("lcdNumber_7"));
        lcdNumber_7->setFrameShape(QFrame::Panel);
        lcdNumber_7->setFrameShadow(QFrame::Sunken);
        lcdNumber_7->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_3->addWidget(lcdNumber_7);


        gridLayout_2->addWidget(groupBox_3, 2, 0, 1, 1);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon19;
        icon19.addFile(QStringLiteral(":/icons/icons/eixo-x.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon19);
        pushButton->setIconSize(QSize(32, 32));
        pushButton->setFlat(true);

        horizontalLayout->addWidget(pushButton);

        horizontalSliderEixoX = new QSlider(groupBox);
        horizontalSliderEixoX->setObjectName(QStringLiteral("horizontalSliderEixoX"));
        horizontalSliderEixoX->setMaximum(255);
        horizontalSliderEixoX->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSliderEixoX);

        lcdNumber_5 = new QLCDNumber(groupBox);
        lcdNumber_5->setObjectName(QStringLiteral("lcdNumber_5"));
        lcdNumber_5->setFrameShape(QFrame::Panel);
        lcdNumber_5->setFrameShadow(QFrame::Sunken);
        lcdNumber_5->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout->addWidget(lcdNumber_5);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon20;
        icon20.addFile(QStringLiteral(":/icons/icons/eixo-y.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon20);
        pushButton_2->setIconSize(QSize(32, 32));
        pushButton_2->setFlat(true);

        horizontalLayout_2->addWidget(pushButton_2);

        horizontalSliderEixoY = new QSlider(groupBox_2);
        horizontalSliderEixoY->setObjectName(QStringLiteral("horizontalSliderEixoY"));
        horizontalSliderEixoY->setMaximum(255);
        horizontalSliderEixoY->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSliderEixoY);

        lcdNumber_6 = new QLCDNumber(groupBox_2);
        lcdNumber_6->setObjectName(QStringLiteral("lcdNumber_6"));
        lcdNumber_6->setFrameShape(QFrame::Panel);
        lcdNumber_6->setFrameShadow(QFrame::Sunken);
        lcdNumber_6->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_2->addWidget(lcdNumber_6);


        gridLayout_2->addWidget(groupBox_2, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 5, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 85, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_3, 3, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(20, 60, -1, -1);
        groupBox_5 = new QGroupBox(centralWidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        gridLayout_8 = new QGridLayout(groupBox_5);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        horizontalSliderBoxSizeX = new QSlider(groupBox_5);
        horizontalSliderBoxSizeX->setObjectName(QStringLiteral("horizontalSliderBoxSizeX"));
        horizontalSliderBoxSizeX->setMinimum(1);
        horizontalSliderBoxSizeX->setMaximum(32);
        horizontalSliderBoxSizeX->setOrientation(Qt::Horizontal);

        gridLayout_8->addWidget(horizontalSliderBoxSizeX, 0, 1, 1, 1);

        horizontalSliderBoxSizeY = new QSlider(groupBox_5);
        horizontalSliderBoxSizeY->setObjectName(QStringLiteral("horizontalSliderBoxSizeY"));
        horizontalSliderBoxSizeY->setMinimum(1);
        horizontalSliderBoxSizeY->setMaximum(32);
        horizontalSliderBoxSizeY->setOrientation(Qt::Horizontal);

        gridLayout_8->addWidget(horizontalSliderBoxSizeY, 1, 1, 1, 1);

        horizontalSliderBoxSizeZ = new QSlider(groupBox_5);
        horizontalSliderBoxSizeZ->setObjectName(QStringLiteral("horizontalSliderBoxSizeZ"));
        horizontalSliderBoxSizeZ->setMinimum(1);
        horizontalSliderBoxSizeZ->setMaximum(32);
        horizontalSliderBoxSizeZ->setOrientation(Qt::Horizontal);

        gridLayout_8->addWidget(horizontalSliderBoxSizeZ, 2, 1, 1, 1);

        lcdNumber_10 = new QLCDNumber(groupBox_5);
        lcdNumber_10->setObjectName(QStringLiteral("lcdNumber_10"));
        lcdNumber_10->setFrameShape(QFrame::NoFrame);
        lcdNumber_10->setFrameShadow(QFrame::Plain);
        lcdNumber_10->setDigitCount(2);
        lcdNumber_10->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_8->addWidget(lcdNumber_10, 2, 2, 1, 1);

        lcdNumber_9 = new QLCDNumber(groupBox_5);
        lcdNumber_9->setObjectName(QStringLiteral("lcdNumber_9"));
        lcdNumber_9->setFrameShape(QFrame::NoFrame);
        lcdNumber_9->setFrameShadow(QFrame::Plain);
        lcdNumber_9->setDigitCount(2);
        lcdNumber_9->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_8->addWidget(lcdNumber_9, 1, 2, 1, 1);

        lcdNumber_8 = new QLCDNumber(groupBox_5);
        lcdNumber_8->setObjectName(QStringLiteral("lcdNumber_8"));
        lcdNumber_8->setFrameShape(QFrame::NoFrame);
        lcdNumber_8->setFrameShadow(QFrame::Plain);
        lcdNumber_8->setDigitCount(2);
        lcdNumber_8->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_8->addWidget(lcdNumber_8, 0, 2, 1, 1);

        label_3 = new QLabel(groupBox_5);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_8->addWidget(label_3, 2, 0, 1, 1);

        label_2 = new QLabel(groupBox_5);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_8->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(groupBox_5);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_8->addWidget(label, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox_5, 6, 0, 1, 3);

        groupBox_6 = new QGroupBox(centralWidget);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        gridLayout_9 = new QGridLayout(groupBox_6);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        label_5 = new QLabel(groupBox_6);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_9->addWidget(label_5, 1, 0, 1, 1);

        verticalSliderElipseZ = new QSlider(groupBox_6);
        verticalSliderElipseZ->setObjectName(QStringLiteral("verticalSliderElipseZ"));
        verticalSliderElipseZ->setMinimum(1);
        verticalSliderElipseZ->setMaximum(32);
        verticalSliderElipseZ->setOrientation(Qt::Vertical);

        gridLayout_9->addWidget(verticalSliderElipseZ, 0, 2, 1, 1);

        verticalSliderElipseY = new QSlider(groupBox_6);
        verticalSliderElipseY->setObjectName(QStringLiteral("verticalSliderElipseY"));
        verticalSliderElipseY->setMinimum(1);
        verticalSliderElipseY->setMaximum(32);
        verticalSliderElipseY->setOrientation(Qt::Vertical);

        gridLayout_9->addWidget(verticalSliderElipseY, 0, 1, 1, 1);

        label_6 = new QLabel(groupBox_6);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_9->addWidget(label_6, 1, 1, 1, 1);

        verticalSliderElipseX = new QSlider(groupBox_6);
        verticalSliderElipseX->setObjectName(QStringLiteral("verticalSliderElipseX"));
        verticalSliderElipseX->setMinimum(1);
        verticalSliderElipseX->setMaximum(32);
        verticalSliderElipseX->setOrientation(Qt::Vertical);

        gridLayout_9->addWidget(verticalSliderElipseX, 0, 0, 1, 1);

        label_7 = new QLabel(groupBox_6);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_9->addWidget(label_7, 1, 2, 1, 1);


        gridLayout->addWidget(groupBox_6, 7, 0, 1, 2);

        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_7 = new QGridLayout(groupBox_4);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_7->addWidget(label_4, 1, 0, 1, 1);

        verticalSliderEsferaRaio = new QSlider(groupBox_4);
        verticalSliderEsferaRaio->setObjectName(QStringLiteral("verticalSliderEsferaRaio"));
        verticalSliderEsferaRaio->setMinimum(1);
        verticalSliderEsferaRaio->setMaximum(32);
        verticalSliderEsferaRaio->setOrientation(Qt::Vertical);

        gridLayout_7->addWidget(verticalSliderEsferaRaio, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox_4, 7, 2, 1, 1);

        lcdNumber_3 = new QLCDNumber(centralWidget);
        lcdNumber_3->setObjectName(QStringLiteral("lcdNumber_3"));
        sizePolicy1.setHeightForWidth(lcdNumber_3->sizePolicy().hasHeightForWidth());
        lcdNumber_3->setSizePolicy(sizePolicy1);
        lcdNumber_3->setFrameShape(QFrame::Panel);
        lcdNumber_3->setFrameShadow(QFrame::Sunken);
        lcdNumber_3->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_3->setProperty("intValue", QVariant(48));

        gridLayout->addWidget(lcdNumber_3, 3, 2, 1, 1);

        labelGreen = new QLabel(centralWidget);
        labelGreen->setObjectName(QStringLiteral("labelGreen"));
        sizePolicy1.setHeightForWidth(labelGreen->sizePolicy().hasHeightForWidth());
        labelGreen->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(labelGreen, 3, 0, 1, 1);

        widget = new Paleta(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy2);
        widget->setMinimumSize(QSize(0, 80));

        gridLayout->addWidget(widget, 0, 0, 1, 3);

        horizontalSliderAlpha = new QSlider(centralWidget);
        horizontalSliderAlpha->setObjectName(QStringLiteral("horizontalSliderAlpha"));
        sizePolicy1.setHeightForWidth(horizontalSliderAlpha->sizePolicy().hasHeightForWidth());
        horizontalSliderAlpha->setSizePolicy(sizePolicy1);
        horizontalSliderAlpha->setMaximum(255);
        horizontalSliderAlpha->setValue(255);
        horizontalSliderAlpha->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderAlpha, 4, 1, 1, 1);

        labelRed = new QLabel(centralWidget);
        labelRed->setObjectName(QStringLiteral("labelRed"));
        sizePolicy1.setHeightForWidth(labelRed->sizePolicy().hasHeightForWidth());
        labelRed->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(labelRed, 1, 0, 1, 1);

        labelAlpha = new QLabel(centralWidget);
        labelAlpha->setObjectName(QStringLiteral("labelAlpha"));
        sizePolicy1.setHeightForWidth(labelAlpha->sizePolicy().hasHeightForWidth());
        labelAlpha->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(labelAlpha, 4, 0, 1, 1);

        horizontalSliderRed = new QSlider(centralWidget);
        horizontalSliderRed->setObjectName(QStringLiteral("horizontalSliderRed"));
        sizePolicy1.setHeightForWidth(horizontalSliderRed->sizePolicy().hasHeightForWidth());
        horizontalSliderRed->setSizePolicy(sizePolicy1);
        horizontalSliderRed->setMaximum(255);
        horizontalSliderRed->setValue(48);
        horizontalSliderRed->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderRed, 1, 1, 1, 1);

        horizontalSliderGreen = new QSlider(centralWidget);
        horizontalSliderGreen->setObjectName(QStringLiteral("horizontalSliderGreen"));
        sizePolicy1.setHeightForWidth(horizontalSliderGreen->sizePolicy().hasHeightForWidth());
        horizontalSliderGreen->setSizePolicy(sizePolicy1);
        horizontalSliderGreen->setMaximum(255);
        horizontalSliderGreen->setValue(48);
        horizontalSliderGreen->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderGreen, 3, 1, 1, 1);

        lcdNumber_4 = new QLCDNumber(centralWidget);
        lcdNumber_4->setObjectName(QStringLiteral("lcdNumber_4"));
        sizePolicy1.setHeightForWidth(lcdNumber_4->sizePolicy().hasHeightForWidth());
        lcdNumber_4->setSizePolicy(sizePolicy1);
        lcdNumber_4->setFrameShape(QFrame::Panel);
        lcdNumber_4->setFrameShadow(QFrame::Sunken);
        lcdNumber_4->setSmallDecimalPoint(false);
        lcdNumber_4->setDigitCount(5);
        lcdNumber_4->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_4->setProperty("intValue", QVariant(255));

        gridLayout->addWidget(lcdNumber_4, 4, 2, 1, 1);

        horizontalSliderBlue = new QSlider(centralWidget);
        horizontalSliderBlue->setObjectName(QStringLiteral("horizontalSliderBlue"));
        sizePolicy1.setHeightForWidth(horizontalSliderBlue->sizePolicy().hasHeightForWidth());
        horizontalSliderBlue->setSizePolicy(sizePolicy1);
        horizontalSliderBlue->setMaximum(255);
        horizontalSliderBlue->setValue(48);
        horizontalSliderBlue->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderBlue, 2, 1, 1, 1);

        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        sizePolicy1.setHeightForWidth(lcdNumber->sizePolicy().hasHeightForWidth());
        lcdNumber->setSizePolicy(sizePolicy1);
        lcdNumber->setFrameShape(QFrame::Panel);
        lcdNumber->setFrameShadow(QFrame::Sunken);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber->setProperty("intValue", QVariant(48));

        gridLayout->addWidget(lcdNumber, 1, 2, 1, 1);

        labelBlue = new QLabel(centralWidget);
        labelBlue->setObjectName(QStringLiteral("labelBlue"));
        sizePolicy1.setHeightForWidth(labelBlue->sizePolicy().hasHeightForWidth());
        labelBlue->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(labelBlue, 2, 0, 1, 1);

        lcdNumber_2 = new QLCDNumber(centralWidget);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));
        sizePolicy1.setHeightForWidth(lcdNumber_2->sizePolicy().hasHeightForWidth());
        lcdNumber_2->setSizePolicy(sizePolicy1);
        lcdNumber_2->setFrameShape(QFrame::Panel);
        lcdNumber_2->setFrameShadow(QFrame::Sunken);
        lcdNumber_2->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_2->setProperty("intValue", QVariant(48));

        gridLayout->addWidget(lcdNumber_2, 2, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 5, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 2, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1342, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuOption = new QMenu(menuBar);
        menuOption->setObjectName(QStringLiteral("menuOption"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuOption->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew_Canvas);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionExport_off_File);
        menuFile->addAction(actionExit);
        menuHelp->addAction(actionContext_Help);
        menuHelp->addAction(actionGitHub);
        menuOption->addAction(actionHex_Color);
        menuOption->addAction(actionGo_To_Meshlab);

        retranslateUi(MainWindow);
        QObject::connect(actionExit, SIGNAL(triggered()), MainWindow, SLOT(close()));
        QObject::connect(horizontalSliderRed, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));
        QObject::connect(horizontalSliderBlue, SIGNAL(valueChanged(int)), lcdNumber_2, SLOT(display(int)));
        QObject::connect(horizontalSliderGreen, SIGNAL(valueChanged(int)), lcdNumber_3, SLOT(display(int)));
        QObject::connect(horizontalSliderAlpha, SIGNAL(valueChanged(int)), lcdNumber_4, SLOT(display(int)));
        QObject::connect(horizontalSliderEixoX, SIGNAL(valueChanged(int)), lcdNumber_5, SLOT(display(int)));
        QObject::connect(horizontalSliderEixoY, SIGNAL(valueChanged(int)), lcdNumber_6, SLOT(display(int)));
        QObject::connect(horizontalSliderEixoZ, SIGNAL(valueChanged(int)), lcdNumber_7, SLOT(display(int)));
        QObject::connect(horizontalSliderBoxSizeX, SIGNAL(valueChanged(int)), lcdNumber_8, SLOT(display(int)));
        QObject::connect(horizontalSliderBoxSizeY, SIGNAL(valueChanged(int)), lcdNumber_9, SLOT(display(int)));
        QObject::connect(horizontalSliderBoxSizeZ, SIGNAL(valueChanged(int)), lcdNumber_10, SLOT(display(int)));

        tabWidget->setCurrentIndex(0);
        pushButton_4->setDefault(true);


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
        actionHex_Color->setText(QApplication::translate("MainWindow", "Hex Color", nullptr));
        actionGo_To_Meshlab->setText(QApplication::translate("MainWindow", "Export Meshlab", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "<Y,Z>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "<Z,X>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "<X,Y>", nullptr));
        pushButtonPutVoxel->setText(QString());
        pushButtonCutVoxel->setText(QString());
        pushButtonPutBox->setText(QString());
        pushButtonCutBox->setText(QString());
        pushButtonPutSphere->setText(QString());
        pushButtonCutSphere->setText(QString());
        pushButtonPutEllipsoid->setText(QString());
        pushButtonCutEllipsoid->setText(QString());
        pushButton_4->setText(QApplication::translate("MainWindow", "Transfer MeshLab", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "<X,Y>", nullptr));
        pushButton_3->setText(QString());
        groupBox->setTitle(QApplication::translate("MainWindow", "<Y,Z>", nullptr));
        pushButton->setText(QString());
        groupBox_2->setTitle(QApplication::translate("MainWindow", "<Z,X>", nullptr));
        pushButton_2->setText(QString());
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Box Size", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "z", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "y", nullptr));
        label->setText(QApplication::translate("MainWindow", "x", nullptr));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Ellipsoid Radius", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "x", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "y", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Z", nullptr));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Sphere Radius", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Radius", nullptr));
        labelGreen->setText(QApplication::translate("MainWindow", "Green", nullptr));
        labelRed->setText(QApplication::translate("MainWindow", "Red", nullptr));
        labelAlpha->setText(QApplication::translate("MainWindow", "Opacity", nullptr));
        labelBlue->setText(QApplication::translate("MainWindow", "Blue", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
        menuOption->setTitle(QApplication::translate("MainWindow", "Options", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
