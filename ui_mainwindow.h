/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Thu Aug 3 22:39:47 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QPushButton *btn_AddDevice;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_ECUID;
    QLabel *label_TYPE;
    QLabel *label_SIGNAL_LEVEL;
    QLabel *label_Equipment_Status;
    QLabel *label_Version;
    QLabel *label_6;
    QLabel *label_SIGNAL_CHANNEL;
    QGroupBox *groupBox_2;
    QComboBox *comboBox_SetChannel;
    QLabel *label_7;
    QPushButton *btn_SetChannel;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_CurrentChannel;
    QLabel *label_Stren;
    QGroupBox *groupBox_3;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *lineEdit_oldPasswd;
    QLineEdit *lineEdit_newPasswd;
    QPushButton *btn_setPasswd;
    QGroupBox *groupBox_4;
    QLineEdit *lineEdit_ID;
    QPushButton *btn_addID;
    QPushButton *btn_SetID;
    QPlainTextEdit *plainTextEdit_ID;
    QLabel *label_12;
    QLabel *label_13;
    QWidget *tab_2;
    QGroupBox *groupBox_5;
    QTableView *tableView;
    QPushButton *btn_getSystem;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(546, 516);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 0, 531, 451));
        tabWidget->setStyleSheet(QString::fromUtf8("QWidget#centralwidget{\n"
"	background-image:url(img/mainwindow.jpg);\n"
"}\n"
"QGroupBox::title {\n"
"	color:#ff0000\n"
"}\n"
"\n"
"QTableWidget\n"
"{\n"
"background: rgb(237,216,255);\n"
"alternate-background-color:rgb(48,51,55);\n"
"selection-background-color:qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 rgb(237,216,255),stop:1 rgb(237,211,255));\n"
"}\n"
"\n"
"QHeaderView::section\n"
"{\n"
"background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, 		stop:0 rgb(237,216,255),\n"
"	stop:1 rgb(237,211,255));\n"
"color: rgb(0,0,0);\n"
"padding-left: 4px;\n"
"border: 1px solid #383838;\n"
"}\n"
"QScrollBar:vertical \n"
"{\n"
"border: 0px solid grey;\n"
"background: transparent;\n"
"width: 15px;\n"
"margin: 22px 0 22px 0;\n"
"}\n"
"QScrollBar::handle:vertical \n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop:0 rgb(46,46,46),stop:1 rgb(66,66,66));\n"
"min-height: 20px;\n"
"}\n"
"QScrollBar::add-line:vertical \n"
"{\n"
"border: 0px solid grey;\n"
"background: rgb(66,66,66);\n"
"height: 20px;\n"
""
                        "subcontrol-position: bottom;\n"
"subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::sub-line:vertical \n"
"{\n"
"border: 0px solid grey;\n"
"background: rgb(56,56,56);\n"
"height: 20px;\n"
"subcontrol-position: top;\n"
"subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::up-arrow:vertical, QScrollBar::down-arrow:vertical \n"
"{\n"
"border: 0px solid grey;\n"
"width: 3px;\n"
"height: 3px;\n"
"background: rgb(46,46,46);\n"
"}\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical\n"
"{\n"
"background: none;\n"
"}\n"
"\n"
"QPushButton{\n"
"color:#0000ff;\n"
"border:26px;\n"
"solid #FFFFFF;\n"
"}\n"
"QPushButton:hover{\n"
"color:#FF0000;\n"
"}"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 241, 181));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox::title{\n"
"font: 75 14pt \"Agency FB\";\n"
"}"));
        btn_AddDevice = new QPushButton(groupBox);
        btn_AddDevice->setObjectName(QString::fromUtf8("btn_AddDevice"));
        btn_AddDevice->setGeometry(QRect(8, 16, 81, 23));
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 40, 221, 122));
        gridLayout_3 = new QGridLayout(gridLayoutWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 3, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 4, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 5, 0, 1, 1);

        lineEdit_ECUID = new QLineEdit(gridLayoutWidget);
        lineEdit_ECUID->setObjectName(QString::fromUtf8("lineEdit_ECUID"));

        gridLayout_3->addWidget(lineEdit_ECUID, 0, 1, 1, 1);

        label_TYPE = new QLabel(gridLayoutWidget);
        label_TYPE->setObjectName(QString::fromUtf8("label_TYPE"));

        gridLayout_3->addWidget(label_TYPE, 1, 1, 1, 1);

        label_SIGNAL_LEVEL = new QLabel(gridLayoutWidget);
        label_SIGNAL_LEVEL->setObjectName(QString::fromUtf8("label_SIGNAL_LEVEL"));

        gridLayout_3->addWidget(label_SIGNAL_LEVEL, 3, 1, 1, 1);

        label_Equipment_Status = new QLabel(gridLayoutWidget);
        label_Equipment_Status->setObjectName(QString::fromUtf8("label_Equipment_Status"));

        gridLayout_3->addWidget(label_Equipment_Status, 4, 1, 1, 1);

        label_Version = new QLabel(gridLayoutWidget);
        label_Version->setObjectName(QString::fromUtf8("label_Version"));

        gridLayout_3->addWidget(label_Version, 5, 1, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 2, 0, 1, 1);

        label_SIGNAL_CHANNEL = new QLabel(gridLayoutWidget);
        label_SIGNAL_CHANNEL->setObjectName(QString::fromUtf8("label_SIGNAL_CHANNEL"));

        gridLayout_3->addWidget(label_SIGNAL_CHANNEL, 2, 1, 1, 1);

        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 193, 241, 121));
        comboBox_SetChannel = new QComboBox(groupBox_2);
        comboBox_SetChannel->setObjectName(QString::fromUtf8("comboBox_SetChannel"));
        comboBox_SetChannel->setGeometry(QRect(70, 21, 69, 22));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 22, 54, 21));
        btn_SetChannel = new QPushButton(groupBox_2);
        btn_SetChannel->setObjectName(QString::fromUtf8("btn_SetChannel"));
        btn_SetChannel->setGeometry(QRect(150, 21, 75, 23));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 60, 54, 21));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 90, 54, 16));
        label_CurrentChannel = new QLabel(groupBox_2);
        label_CurrentChannel->setObjectName(QString::fromUtf8("label_CurrentChannel"));
        label_CurrentChannel->setGeometry(QRect(80, 60, 71, 21));
        label_Stren = new QLabel(groupBox_2);
        label_Stren->setObjectName(QString::fromUtf8("label_Stren"));
        label_Stren->setGeometry(QRect(80, 90, 71, 16));
        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 319, 241, 101));
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 20, 54, 21));
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 60, 54, 12));
        lineEdit_oldPasswd = new QLineEdit(groupBox_3);
        lineEdit_oldPasswd->setObjectName(QString::fromUtf8("lineEdit_oldPasswd"));
        lineEdit_oldPasswd->setGeometry(QRect(60, 20, 101, 20));
        lineEdit_newPasswd = new QLineEdit(groupBox_3);
        lineEdit_newPasswd->setObjectName(QString::fromUtf8("lineEdit_newPasswd"));
        lineEdit_newPasswd->setGeometry(QRect(60, 50, 101, 20));
        btn_setPasswd = new QPushButton(groupBox_3);
        btn_setPasswd->setObjectName(QString::fromUtf8("btn_setPasswd"));
        btn_setPasswd->setGeometry(QRect(170, 70, 61, 23));
        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(260, 10, 261, 411));
        lineEdit_ID = new QLineEdit(groupBox_4);
        lineEdit_ID->setObjectName(QString::fromUtf8("lineEdit_ID"));
        lineEdit_ID->setGeometry(QRect(10, 50, 113, 20));
        btn_addID = new QPushButton(groupBox_4);
        btn_addID->setObjectName(QString::fromUtf8("btn_addID"));
        btn_addID->setGeometry(QRect(14, 80, 61, 23));
        btn_SetID = new QPushButton(groupBox_4);
        btn_SetID->setObjectName(QString::fromUtf8("btn_SetID"));
        btn_SetID->setGeometry(QRect(10, 110, 71, 23));
        plainTextEdit_ID = new QPlainTextEdit(groupBox_4);
        plainTextEdit_ID->setObjectName(QString::fromUtf8("plainTextEdit_ID"));
        plainTextEdit_ID->setGeometry(QRect(130, 50, 121, 351));
        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 20, 81, 21));
        label_13 = new QLabel(groupBox_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(130, 20, 111, 20));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        groupBox_5 = new QGroupBox(tab_2);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(0, 0, 541, 421));
        tableView = new QTableView(groupBox_5);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(0, 50, 531, 361));
        btn_getSystem = new QPushButton(groupBox_5);
        btn_getSystem->setObjectName(QString::fromUtf8("btn_getSystem"));
        btn_getSystem->setGeometry(QRect(10, 20, 75, 21));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 546, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "\350\216\267\345\217\226\345\237\272\346\234\254\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        btn_AddDevice->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\346\226\260\350\256\276\345\244\207", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "ECUID\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "\347\211\210\346\234\254\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "\344\277\241\345\217\267\345\274\272\345\272\246\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "RSD\347\261\273\345\236\213\357\274\232", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "\350\275\257\344\273\266\347\211\210\346\234\254\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_TYPE->setText(QString());
        label_SIGNAL_LEVEL->setText(QString());
        label_Equipment_Status->setText(QString());
        label_Version->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "\344\277\241\351\201\223\357\274\232", 0, QApplication::UnicodeUTF8));
        label_SIGNAL_CHANNEL->setText(QString());
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\344\277\241\351\201\223\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        comboBox_SetChannel->clear();
        comboBox_SetChannel->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "01", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "02", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "03", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "04", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "05", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "06", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "07", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "08", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "09", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "12", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "13", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "14", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "15", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "16", 0, QApplication::UnicodeUTF8)
        );
        label_7->setText(QApplication::translate("MainWindow", "\346\226\260\344\277\241\351\201\223\357\274\232", 0, QApplication::UnicodeUTF8));
        btn_SetChannel->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\344\277\241\351\201\223", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "\345\275\223\345\211\215\344\277\241\351\201\223\357\274\232", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "\344\277\241\345\217\267\345\274\272\345\272\246\357\274\232", 0, QApplication::UnicodeUTF8));
        label_CurrentChannel->setText(QString());
        label_Stren->setText(QString());
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\350\256\276\347\275\256WIFI\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "\345\216\237\345\257\206\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "\346\226\260\345\257\206\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        btn_setPasswd->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\350\256\276\347\275\256\347\273\204\347\275\221", 0, QApplication::UnicodeUTF8));
        btn_addID->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240ID", 0, QApplication::UnicodeUTF8));
        btn_SetID->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\347\273\204\347\275\221", 0, QApplication::UnicodeUTF8));
        plainTextEdit_ID->setPlainText(QString());
        label_12->setText(QApplication::translate("MainWindow", "\351\234\200\350\246\201\346\267\273\345\212\240\347\232\204ID", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "\351\234\200\350\246\201\346\263\250\345\206\214\347\232\204ID\345\210\227\350\241\250", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\345\237\272\346\234\254\350\257\267\346\261\202", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "\347\263\273\347\273\237\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        btn_getSystem->setText(QApplication::translate("MainWindow", "\350\216\267\345\217\226\347\263\273\347\273\237\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\347\263\273\347\273\237\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
