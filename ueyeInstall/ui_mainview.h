/********************************************************************************
** Form generated from reading UI file 'mainview.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINVIEW_H
#define UI_MAINVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainviewClass
{
public:
    QAction *actionOpenCamera;
    QAction *actionCloseCamera;
    QAction *actionSave_image;
    QAction *actionAbout;
    QAction *actionExit;
    QAction *actionSnapshot;
    QAction *actionLive;
    QAction *actionMonochrome;
    QAction *actionColor;
    QAction *actionDisplay;
    QAction *actionProperties;
    QAction *actionView_Fit;
    QAction *actionTrigger;
    QAction *actionOriginal_size;
    QAction *actionHalf_size;
    QAction *actionQuarter_size;
    QAction *actionDouble_size;
    QAction *actionForceCameralist;
    QAction *actionUseErrorReport;
    QAction *actionImageinfo;
    QAction *actionOpenCameraStop;
    QAction *actionLimitDisplayRate;
    QAction *actionResetCamera;
    QAction *actionLoadParamsFromFile;
    QAction *actionLoadParameterSet;
    QAction *actionLoadParameterSet2;
    QAction *actionSaveParameterToFile;
    QAction *actionSaveParameterSet;
    QAction *actionSaveParameterSet2;
    QAction *actionLoad_image;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *menuLoad_parameter;
    QMenu *menuSave_parameter;
    QMenu *menuUEye;
    QMenu *menu;
    QMenu *menuView;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QToolBar *toolBar_display;

    void setupUi(QMainWindow *MainviewClass)
    {
        if (MainviewClass->objectName().isEmpty())
            MainviewClass->setObjectName(QString::fromUtf8("MainviewClass"));
        MainviewClass->setEnabled(true);
        MainviewClass->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/images/ueye_logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainviewClass->setWindowIcon(icon);
        MainviewClass->setAutoFillBackground(false);
        MainviewClass->setToolButtonStyle(Qt::ToolButtonIconOnly);
        actionOpenCamera = new QAction(MainviewClass);
        actionOpenCamera->setObjectName(QString::fromUtf8("actionOpenCamera"));
        actionOpenCamera->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/images/openplay.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpenCamera->setIcon(icon1);
        actionCloseCamera = new QAction(MainviewClass);
        actionCloseCamera->setObjectName(QString::fromUtf8("actionCloseCamera"));
        actionCloseCamera->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/images/camclose.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCloseCamera->setIcon(icon2);
        actionSave_image = new QAction(MainviewClass);
        actionSave_image->setObjectName(QString::fromUtf8("actionSave_image"));
        actionSave_image->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_image->setIcon(icon3);
        actionAbout = new QAction(MainviewClass);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/images/info.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon4);
        actionExit = new QAction(MainviewClass);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/prefix1/images/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon5);
        actionSnapshot = new QAction(MainviewClass);
        actionSnapshot->setObjectName(QString::fromUtf8("actionSnapshot"));
        actionSnapshot->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/prefix1/images/media_pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSnapshot->setIcon(icon6);
        actionLive = new QAction(MainviewClass);
        actionLive->setObjectName(QString::fromUtf8("actionLive"));
        actionLive->setCheckable(true);
        actionLive->setEnabled(false);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/new/prefix1/images/media_play.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLive->setIcon(icon7);
        actionMonochrome = new QAction(MainviewClass);
        actionMonochrome->setObjectName(QString::fromUtf8("actionMonochrome"));
        actionMonochrome->setCheckable(true);
        actionColor = new QAction(MainviewClass);
        actionColor->setObjectName(QString::fromUtf8("actionColor"));
        actionColor->setCheckable(true);
        actionDisplay = new QAction(MainviewClass);
        actionDisplay->setObjectName(QString::fromUtf8("actionDisplay"));
        actionDisplay->setCheckable(true);
        actionDisplay->setEnabled(false);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/new/prefix2/images/display_no.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDisplay->setIcon(icon8);
        actionProperties = new QAction(MainviewClass);
        actionProperties->setObjectName(QString::fromUtf8("actionProperties"));
        actionProperties->setEnabled(false);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/new/prefix1/images/properties.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionProperties->setIcon(icon9);
        actionView_Fit = new QAction(MainviewClass);
        actionView_Fit->setObjectName(QString::fromUtf8("actionView_Fit"));
        actionView_Fit->setCheckable(true);
        actionView_Fit->setChecked(true);
        actionView_Fit->setEnabled(false);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/new/prefix2/images/display_fit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionView_Fit->setIcon(icon10);
        actionTrigger = new QAction(MainviewClass);
        actionTrigger->setObjectName(QString::fromUtf8("actionTrigger"));
        actionTrigger->setCheckable(true);
        actionOriginal_size = new QAction(MainviewClass);
        actionOriginal_size->setObjectName(QString::fromUtf8("actionOriginal_size"));
        actionOriginal_size->setCheckable(true);
        actionOriginal_size->setEnabled(false);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/new/prefix2/images/display_1-1.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOriginal_size->setIcon(icon11);
        actionHalf_size = new QAction(MainviewClass);
        actionHalf_size->setObjectName(QString::fromUtf8("actionHalf_size"));
        actionHalf_size->setCheckable(true);
        actionHalf_size->setEnabled(false);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/new/prefix2/images/display_1-2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHalf_size->setIcon(icon12);
        actionQuarter_size = new QAction(MainviewClass);
        actionQuarter_size->setObjectName(QString::fromUtf8("actionQuarter_size"));
        actionQuarter_size->setCheckable(true);
        actionQuarter_size->setEnabled(false);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/new/prefix2/images/display_1-4.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuarter_size->setIcon(icon13);
        actionDouble_size = new QAction(MainviewClass);
        actionDouble_size->setObjectName(QString::fromUtf8("actionDouble_size"));
        actionDouble_size->setCheckable(true);
        actionDouble_size->setEnabled(false);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/new/prefix2/images/display_2-1.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDouble_size->setIcon(icon14);
        actionForceCameralist = new QAction(MainviewClass);
        actionForceCameralist->setObjectName(QString::fromUtf8("actionForceCameralist"));
        actionForceCameralist->setCheckable(true);
        actionUseErrorReport = new QAction(MainviewClass);
        actionUseErrorReport->setObjectName(QString::fromUtf8("actionUseErrorReport"));
        actionUseErrorReport->setCheckable(true);
        actionImageinfo = new QAction(MainviewClass);
        actionImageinfo->setObjectName(QString::fromUtf8("actionImageinfo"));
        actionImageinfo->setCheckable(true);
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/new/prefix1/images/imageplus.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionImageinfo->setIcon(icon15);
        actionOpenCameraStop = new QAction(MainviewClass);
        actionOpenCameraStop->setObjectName(QString::fromUtf8("actionOpenCameraStop"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/new/prefix1/images/openstop.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpenCameraStop->setIcon(icon16);
        actionLimitDisplayRate = new QAction(MainviewClass);
        actionLimitDisplayRate->setObjectName(QString::fromUtf8("actionLimitDisplayRate"));
        actionLimitDisplayRate->setCheckable(true);
        actionLimitDisplayRate->setEnabled(false);
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/new/prefix1/images/display_rate_limit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLimitDisplayRate->setIcon(icon17);
        actionResetCamera = new QAction(MainviewClass);
        actionResetCamera->setObjectName(QString::fromUtf8("actionResetCamera"));
        actionLoadParamsFromFile = new QAction(MainviewClass);
        actionLoadParamsFromFile->setObjectName(QString::fromUtf8("actionLoadParamsFromFile"));
        actionLoadParameterSet = new QAction(MainviewClass);
        actionLoadParameterSet->setObjectName(QString::fromUtf8("actionLoadParameterSet"));
        actionLoadParameterSet2 = new QAction(MainviewClass);
        actionLoadParameterSet2->setObjectName(QString::fromUtf8("actionLoadParameterSet2"));
        actionSaveParameterToFile = new QAction(MainviewClass);
        actionSaveParameterToFile->setObjectName(QString::fromUtf8("actionSaveParameterToFile"));
        actionSaveParameterSet = new QAction(MainviewClass);
        actionSaveParameterSet->setObjectName(QString::fromUtf8("actionSaveParameterSet"));
        actionSaveParameterSet2 = new QAction(MainviewClass);
        actionSaveParameterSet2->setObjectName(QString::fromUtf8("actionSaveParameterSet2"));
        actionLoad_image = new QAction(MainviewClass);
        actionLoad_image->setObjectName(QString::fromUtf8("actionLoad_image"));
        actionLoad_image->setEnabled(false);
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/new/prefix1/images/load_image.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLoad_image->setIcon(icon18);
        centralwidget = new QWidget(MainviewClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainviewClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainviewClass);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 19));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menuLoad_parameter = new QMenu(menu_File);
        menuLoad_parameter->setObjectName(QString::fromUtf8("menuLoad_parameter"));
        menuSave_parameter = new QMenu(menu_File);
        menuSave_parameter->setObjectName(QString::fromUtf8("menuSave_parameter"));
        menuUEye = new QMenu(menubar);
        menuUEye->setObjectName(QString::fromUtf8("menuUEye"));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        MainviewClass->setMenuBar(menubar);
        statusbar = new QStatusBar(MainviewClass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainviewClass->setStatusBar(statusbar);
        toolBar = new QToolBar(MainviewClass);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainviewClass->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_display = new QToolBar(MainviewClass);
        toolBar_display->setObjectName(QString::fromUtf8("toolBar_display"));
        MainviewClass->addToolBar(Qt::TopToolBarArea, toolBar_display);

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menuUEye->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menu->menuAction());
        menu_File->addAction(menuLoad_parameter->menuAction());
        menu_File->addAction(menuSave_parameter->menuAction());
        menu_File->addSeparator();
        menu_File->addAction(actionSave_image);
        menu_File->addAction(actionLoad_image);
        menu_File->addSeparator();
        menu_File->addAction(actionExit);
        menuLoad_parameter->addAction(actionLoadParamsFromFile);
        menuLoad_parameter->addAction(actionLoadParameterSet);
        menuSave_parameter->addAction(actionSaveParameterToFile);
        menuSave_parameter->addAction(actionSaveParameterSet);
        menuUEye->addAction(actionOpenCamera);
        menuUEye->addAction(actionOpenCameraStop);
        menuUEye->addAction(actionCloseCamera);
        menuUEye->addAction(actionResetCamera);
        menuUEye->addAction(actionForceCameralist);
        menuUEye->addSeparator();
        menuUEye->addAction(actionSnapshot);
        menuUEye->addAction(actionLive);
        menuUEye->addAction(actionTrigger);
        menuUEye->addSeparator();
        menuUEye->addAction(actionUseErrorReport);
        menuUEye->addAction(actionProperties);
        menu->addAction(actionAbout);
        menu->addSeparator();
        menuView->addAction(actionDisplay);
        menuView->addSeparator();
        menuView->addAction(actionView_Fit);
        menuView->addAction(actionOriginal_size);
        menuView->addAction(actionHalf_size);
        menuView->addAction(actionQuarter_size);
        menuView->addAction(actionDouble_size);
        menuView->addSeparator();
        menuView->addAction(actionLimitDisplayRate);
        menuView->addSeparator();
        menuView->addAction(actionImageinfo);
        toolBar->addAction(actionOpenCamera);
        toolBar->addAction(actionOpenCameraStop);
        toolBar->addAction(actionCloseCamera);
        toolBar->addSeparator();
        toolBar->addAction(actionSnapshot);
        toolBar->addAction(actionLive);
        toolBar->addSeparator();
        toolBar->addAction(actionSave_image);
        toolBar->addAction(actionLoad_image);
        toolBar->addAction(actionProperties);
        toolBar->addAction(actionImageinfo);
        toolBar_display->addAction(actionDisplay);
        toolBar_display->addAction(actionView_Fit);
        toolBar_display->addAction(actionOriginal_size);
        toolBar_display->addAction(actionHalf_size);
        toolBar_display->addAction(actionQuarter_size);
        toolBar_display->addAction(actionDouble_size);
        toolBar_display->addSeparator();
        toolBar_display->addAction(actionLimitDisplayRate);

        retranslateUi(MainviewClass);

        QMetaObject::connectSlotsByName(MainviewClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainviewClass)
    {
        MainviewClass->setWindowTitle(QApplication::translate("MainviewClass", "uEye Demo", 0, QApplication::UnicodeUTF8));
        actionOpenCamera->setText(QApplication::translate("MainviewClass", "open camera live", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionOpenCamera->setToolTip(QApplication::translate("MainviewClass", "open a uEye and start live", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionOpenCamera->setStatusTip(QApplication::translate("MainviewClass", "open a uEye", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionCloseCamera->setText(QApplication::translate("MainviewClass", "close camera", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCloseCamera->setToolTip(QApplication::translate("MainviewClass", "close a uEye", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionCloseCamera->setStatusTip(QApplication::translate("MainviewClass", "close a uEye", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionSave_image->setText(QApplication::translate("MainviewClass", "save image", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainviewClass", "about uEye Demo", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainviewClass", "exit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionExit->setToolTip(QApplication::translate("MainviewClass", "close the demo", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionExit->setStatusTip(QApplication::translate("MainviewClass", "close the demo", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionExit->setShortcut(QApplication::translate("MainviewClass", "Alt+Q", 0, QApplication::UnicodeUTF8));
        actionSnapshot->setText(QApplication::translate("MainviewClass", "Snapshot", 0, QApplication::UnicodeUTF8));
        actionSnapshot->setShortcut(QApplication::translate("MainviewClass", "Alt+S", 0, QApplication::UnicodeUTF8));
        actionLive->setText(QApplication::translate("MainviewClass", "Start live", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionLive->setToolTip(QApplication::translate("MainviewClass", "Start/Stop live capture", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionLive->setShortcut(QApplication::translate("MainviewClass", "Alt+L", 0, QApplication::UnicodeUTF8));
        actionMonochrome->setText(QApplication::translate("MainviewClass", "monochrome", 0, QApplication::UnicodeUTF8));
        actionColor->setText(QApplication::translate("MainviewClass", "color", 0, QApplication::UnicodeUTF8));
        actionDisplay->setText(QApplication::translate("MainviewClass", "no display", 0, QApplication::UnicodeUTF8));
        actionProperties->setText(QApplication::translate("MainviewClass", "Properties", 0, QApplication::UnicodeUTF8));
        actionView_Fit->setText(QApplication::translate("MainviewClass", "fit to window", 0, QApplication::UnicodeUTF8));
        actionTrigger->setText(QApplication::translate("MainviewClass", "use HW trigger", 0, QApplication::UnicodeUTF8));
        actionOriginal_size->setText(QApplication::translate("MainviewClass", "original size", 0, QApplication::UnicodeUTF8));
        actionHalf_size->setText(QApplication::translate("MainviewClass", "half size", 0, QApplication::UnicodeUTF8));
        actionQuarter_size->setText(QApplication::translate("MainviewClass", "quarter size", 0, QApplication::UnicodeUTF8));
        actionDouble_size->setText(QApplication::translate("MainviewClass", "double size", 0, QApplication::UnicodeUTF8));
        actionForceCameralist->setText(QApplication::translate("MainviewClass", "force cameralist", 0, QApplication::UnicodeUTF8));
        actionUseErrorReport->setText(QApplication::translate("MainviewClass", "use API error report", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionUseErrorReport->setToolTip(QApplication::translate("MainviewClass", "api error report", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionImageinfo->setText(QApplication::translate("MainviewClass", "Imageinfo", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionImageinfo->setToolTip(QApplication::translate("MainviewClass", "show/hide additional image infos", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionOpenCameraStop->setText(QApplication::translate("MainviewClass", "open camera stop", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionOpenCameraStop->setToolTip(QApplication::translate("MainviewClass", "open a uEye stopped", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionLimitDisplayRate->setText(QApplication::translate("MainviewClass", "limit display rate", 0, QApplication::UnicodeUTF8));
        actionResetCamera->setText(QApplication::translate("MainviewClass", "Reset to defaults", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionResetCamera->setToolTip(QApplication::translate("MainviewClass", "resets the camera to its default parameters", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionLoadParamsFromFile->setText(QApplication::translate("MainviewClass", "from file...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionLoadParamsFromFile->setToolTip(QApplication::translate("MainviewClass", "load camera parameter from a configuration file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionLoadParameterSet->setText(QApplication::translate("MainviewClass", "Parameter set", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionLoadParameterSet->setToolTip(QApplication::translate("MainviewClass", "load camera parameter from camera set 1", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionLoadParameterSet2->setText(QApplication::translate("MainviewClass", "Parameter set 2", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionLoadParameterSet2->setToolTip(QApplication::translate("MainviewClass", "load camera parameter from camera set 2", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSaveParameterToFile->setText(QApplication::translate("MainviewClass", "to file...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSaveParameterToFile->setToolTip(QApplication::translate("MainviewClass", "save camera parameter to camera configuration file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSaveParameterSet->setText(QApplication::translate("MainviewClass", "Parameter set", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSaveParameterSet->setToolTip(QApplication::translate("MainviewClass", "save camera parameter to camera set 1", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSaveParameterSet2->setText(QApplication::translate("MainviewClass", "Parameter set 2", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSaveParameterSet2->setToolTip(QApplication::translate("MainviewClass", "save camera parameter to camera set 2", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionLoad_image->setText(QApplication::translate("MainviewClass", "load image", 0, QApplication::UnicodeUTF8));
        menu_File->setTitle(QApplication::translate("MainviewClass", "&File", 0, QApplication::UnicodeUTF8));
        menuLoad_parameter->setTitle(QApplication::translate("MainviewClass", "load parameter", 0, QApplication::UnicodeUTF8));
        menuSave_parameter->setTitle(QApplication::translate("MainviewClass", "save parameter", 0, QApplication::UnicodeUTF8));
        menuUEye->setTitle(QApplication::translate("MainviewClass", "uEye", 0, QApplication::UnicodeUTF8));
        menu->setTitle(QApplication::translate("MainviewClass", "?", 0, QApplication::UnicodeUTF8));
        menuView->setTitle(QApplication::translate("MainviewClass", "View", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("MainviewClass", "toolBar", 0, QApplication::UnicodeUTF8));
        toolBar_display->setWindowTitle(QApplication::translate("MainviewClass", "toolBar_2", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainviewClass: public Ui_MainviewClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINVIEW_H
