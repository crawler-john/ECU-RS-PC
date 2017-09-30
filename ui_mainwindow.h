/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri Sep 29 14:47:11 2017
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
#include <QtGui/QDateEdit>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
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
    QPushButton *btn_ECUImport;
    QGroupBox *groupBox_26;
    QLabel *label_72;
    QComboBox *comboBox_4;
    QPushButton *btn_setNetwork;
    QWidget *gridLayoutWidget_5;
    QGridLayout *gridLayout_5;
    QLabel *l_1;
    QLineEdit *lineEdit_IPAddress;
    QLabel *l_3;
    QLabel *l_4;
    QLabel *l_5;
    QLabel *l_6;
    QLabel *l_11;
    QLabel *l_7;
    QLabel *l_8;
    QLabel *l_9;
    QLabel *l_10;
    QLabel *l_12;
    QLabel *l_13;
    QLabel *l_14;
    QLabel *l_15;
    QLabel *l_17;
    QLabel *l_16;
    QLabel *l_18;
    QLabel *l_19;
    QLabel *l_20;
    QLineEdit *lineEdit_IPAddress2;
    QLineEdit *lineEdit_IPAddress3;
    QLineEdit *lineEdit_IPAddress4;
    QLineEdit *lineEdit_Mask2;
    QLineEdit *lineEdit_Mask3;
    QLineEdit *lineEdit_Mask4;
    QLineEdit *lineEdit_gate;
    QLineEdit *lineEdit_gate2;
    QLineEdit *lineEdit_gate3;
    QLineEdit *lineEdit_gate4;
    QLineEdit *lineEdit_DNS1;
    QLineEdit *lineEdit_DNS12;
    QLineEdit *lineEdit_DNS13;
    QLineEdit *lineEdit_DNS14;
    QLineEdit *lineEdit_DNS2;
    QLineEdit *lineEdit_DNS22;
    QLineEdit *lineEdit_DNS23;
    QLineEdit *lineEdit_DNS24;
    QLineEdit *lineEdit_Mask;
    QLabel *l_2;
    QPushButton *btn_getNetwork;
    QLabel *label_15;
    QLabel *label_mac;
    QGroupBox *groupBox_21;
    QPushButton *btn_getFlash;
    QLineEdit *lineEdit_flashsize;
    QGroupBox *groupBox_27;
    QPushButton *btn_setFunction;
    QComboBox *comboBox_SetFunction;
    QGroupBox *groupBox_25;
    QPushButton *btn_getWIFI;
    QTableWidget *tableWidget_SSID;
    QLabel *label_70;
    QLabel *label_71;
    QPushButton *btn_connect;
    QLineEdit *lineEdit_SSID_2;
    QLineEdit *lineEdit_PassWD;
    QGroupBox *groupBox_24;
    QPushButton *btn_getWIFIStatus;
    QLabel *label_LinkStatus;
    QLabel *label_69;
    QGroupBox *groupBox_7;
    QLabel *label_16;
    QLabel *label_18;
    QLineEdit *lineEdit_IP;
    QLineEdit *lineEdit_Port;
    QPushButton *btn_config;
    QWidget *tab_2;
    QGroupBox *groupBox_5;
    QPushButton *btn_getSystem;
    QTableWidget *tableWidget;
    QLabel *label_14;
    QLabel *label_all;
    QLabel *label_open;
    QLabel *label_17;
    QLabel *label_close;
    QLabel *label_19;
    QWidget *tab_3;
    QGroupBox *groupBox_22;
    QPushButton *btn_getPower;
    QTableWidget *tableWidget_Power;
    QLabel *label_67;
    QDateEdit *dateEdit;
    QPushButton *btn_getDate;
    QGroupBox *groupBox_23;
    QTableWidget *tableWidget_Energy;
    QPushButton *btn_getEnergy;
    QLabel *label_68;
    QComboBox *comboBox;
    QWidget *tab_4;
    QGroupBox *groupBox_6;
    QComboBox *comboBox_UID;
    QLabel *label_73;
    QLabel *label_74;
    QDateEdit *dateEdit_2;
    QTableWidget *tableWidget_Info;
    QPushButton *btn_getInfo;
    QPushButton *btn_getDate_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(803, 516);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 0, 791, 481));
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
"border: 1px solid green;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:hover{\n"
"color:#FF0000;\n"
"}"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 80, 241, 181));
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
        groupBox_2->setGeometry(QRect(0, 270, 241, 91));
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
        label_9->setGeometry(QRect(110, 60, 54, 21));
        label_CurrentChannel = new QLabel(groupBox_2);
        label_CurrentChannel->setObjectName(QString::fromUtf8("label_CurrentChannel"));
        label_CurrentChannel->setGeometry(QRect(70, 60, 31, 21));
        label_Stren = new QLabel(groupBox_2);
        label_Stren->setObjectName(QString::fromUtf8("label_Stren"));
        label_Stren->setGeometry(QRect(180, 60, 41, 21));
        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(0, 370, 241, 81));
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
        btn_setPasswd->setGeometry(QRect(170, 30, 61, 23));
        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(250, 189, 251, 211));
        lineEdit_ID = new QLineEdit(groupBox_4);
        lineEdit_ID->setObjectName(QString::fromUtf8("lineEdit_ID"));
        lineEdit_ID->setGeometry(QRect(100, 20, 121, 20));
        btn_addID = new QPushButton(groupBox_4);
        btn_addID->setObjectName(QString::fromUtf8("btn_addID"));
        btn_addID->setGeometry(QRect(10, 50, 51, 23));
        btn_SetID = new QPushButton(groupBox_4);
        btn_SetID->setObjectName(QString::fromUtf8("btn_SetID"));
        btn_SetID->setGeometry(QRect(70, 50, 71, 23));
        plainTextEdit_ID = new QPlainTextEdit(groupBox_4);
        plainTextEdit_ID->setObjectName(QString::fromUtf8("plainTextEdit_ID"));
        plainTextEdit_ID->setGeometry(QRect(10, 100, 221, 91));
        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 20, 81, 21));
        label_13 = new QLabel(groupBox_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 80, 111, 20));
        btn_ECUImport = new QPushButton(groupBox_4);
        btn_ECUImport->setObjectName(QString::fromUtf8("btn_ECUImport"));
        btn_ECUImport->setGeometry(QRect(150, 50, 75, 23));
        groupBox_26 = new QGroupBox(tab);
        groupBox_26->setObjectName(QString::fromUtf8("groupBox_26"));
        groupBox_26->setGeometry(QRect(250, 0, 251, 181));
        label_72 = new QLabel(groupBox_26);
        label_72->setObjectName(QString::fromUtf8("label_72"));
        label_72->setGeometry(QRect(10, 20, 54, 16));
        comboBox_4 = new QComboBox(groupBox_26);
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
        comboBox_4->setGeometry(QRect(51, 16, 69, 21));
        btn_setNetwork = new QPushButton(groupBox_26);
        btn_setNetwork->setObjectName(QString::fromUtf8("btn_setNetwork"));
        btn_setNetwork->setGeometry(QRect(126, 15, 51, 23));
        gridLayoutWidget_5 = new QWidget(groupBox_26);
        gridLayoutWidget_5->setObjectName(QString::fromUtf8("gridLayoutWidget_5"));
        gridLayoutWidget_5->setGeometry(QRect(10, 60, 231, 111));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_5);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        l_1 = new QLabel(gridLayoutWidget_5);
        l_1->setObjectName(QString::fromUtf8("l_1"));

        gridLayout_5->addWidget(l_1, 0, 0, 1, 1);

        lineEdit_IPAddress = new QLineEdit(gridLayoutWidget_5);
        lineEdit_IPAddress->setObjectName(QString::fromUtf8("lineEdit_IPAddress"));

        gridLayout_5->addWidget(lineEdit_IPAddress, 0, 1, 1, 1);

        l_3 = new QLabel(gridLayoutWidget_5);
        l_3->setObjectName(QString::fromUtf8("l_3"));

        gridLayout_5->addWidget(l_3, 2, 0, 1, 1);

        l_4 = new QLabel(gridLayoutWidget_5);
        l_4->setObjectName(QString::fromUtf8("l_4"));

        gridLayout_5->addWidget(l_4, 3, 0, 1, 1);

        l_5 = new QLabel(gridLayoutWidget_5);
        l_5->setObjectName(QString::fromUtf8("l_5"));

        gridLayout_5->addWidget(l_5, 4, 0, 1, 1);

        l_6 = new QLabel(gridLayoutWidget_5);
        l_6->setObjectName(QString::fromUtf8("l_6"));

        gridLayout_5->addWidget(l_6, 0, 2, 1, 1);

        l_11 = new QLabel(gridLayoutWidget_5);
        l_11->setObjectName(QString::fromUtf8("l_11"));

        gridLayout_5->addWidget(l_11, 0, 4, 1, 1);

        l_7 = new QLabel(gridLayoutWidget_5);
        l_7->setObjectName(QString::fromUtf8("l_7"));

        gridLayout_5->addWidget(l_7, 1, 2, 1, 1);

        l_8 = new QLabel(gridLayoutWidget_5);
        l_8->setObjectName(QString::fromUtf8("l_8"));

        gridLayout_5->addWidget(l_8, 2, 2, 1, 1);

        l_9 = new QLabel(gridLayoutWidget_5);
        l_9->setObjectName(QString::fromUtf8("l_9"));

        gridLayout_5->addWidget(l_9, 3, 2, 1, 1);

        l_10 = new QLabel(gridLayoutWidget_5);
        l_10->setObjectName(QString::fromUtf8("l_10"));

        gridLayout_5->addWidget(l_10, 4, 2, 1, 1);

        l_12 = new QLabel(gridLayoutWidget_5);
        l_12->setObjectName(QString::fromUtf8("l_12"));

        gridLayout_5->addWidget(l_12, 1, 4, 1, 1);

        l_13 = new QLabel(gridLayoutWidget_5);
        l_13->setObjectName(QString::fromUtf8("l_13"));

        gridLayout_5->addWidget(l_13, 2, 4, 1, 1);

        l_14 = new QLabel(gridLayoutWidget_5);
        l_14->setObjectName(QString::fromUtf8("l_14"));

        gridLayout_5->addWidget(l_14, 3, 4, 1, 1);

        l_15 = new QLabel(gridLayoutWidget_5);
        l_15->setObjectName(QString::fromUtf8("l_15"));

        gridLayout_5->addWidget(l_15, 4, 4, 1, 1);

        l_17 = new QLabel(gridLayoutWidget_5);
        l_17->setObjectName(QString::fromUtf8("l_17"));

        gridLayout_5->addWidget(l_17, 1, 6, 1, 1);

        l_16 = new QLabel(gridLayoutWidget_5);
        l_16->setObjectName(QString::fromUtf8("l_16"));

        gridLayout_5->addWidget(l_16, 0, 6, 1, 1);

        l_18 = new QLabel(gridLayoutWidget_5);
        l_18->setObjectName(QString::fromUtf8("l_18"));

        gridLayout_5->addWidget(l_18, 2, 6, 1, 1);

        l_19 = new QLabel(gridLayoutWidget_5);
        l_19->setObjectName(QString::fromUtf8("l_19"));

        gridLayout_5->addWidget(l_19, 3, 6, 1, 1);

        l_20 = new QLabel(gridLayoutWidget_5);
        l_20->setObjectName(QString::fromUtf8("l_20"));

        gridLayout_5->addWidget(l_20, 4, 6, 1, 1);

        lineEdit_IPAddress2 = new QLineEdit(gridLayoutWidget_5);
        lineEdit_IPAddress2->setObjectName(QString::fromUtf8("lineEdit_IPAddress2"));

        gridLayout_5->addWidget(lineEdit_IPAddress2, 0, 3, 1, 1);

        lineEdit_IPAddress3 = new QLineEdit(gridLayoutWidget_5);
        lineEdit_IPAddress3->setObjectName(QString::fromUtf8("lineEdit_IPAddress3"));

        gridLayout_5->addWidget(lineEdit_IPAddress3, 0, 5, 1, 1);

        lineEdit_IPAddress4 = new QLineEdit(gridLayoutWidget_5);
        lineEdit_IPAddress4->setObjectName(QString::fromUtf8("lineEdit_IPAddress4"));

        gridLayout_5->addWidget(lineEdit_IPAddress4, 0, 7, 1, 1);

        lineEdit_Mask2 = new QLineEdit(gridLayoutWidget_5);
        lineEdit_Mask2->setObjectName(QString::fromUtf8("lineEdit_Mask2"));

        gridLayout_5->addWidget(lineEdit_Mask2, 1, 3, 1, 1);

        lineEdit_Mask3 = new QLineEdit(gridLayoutWidget_5);
        lineEdit_Mask3->setObjectName(QString::fromUtf8("lineEdit_Mask3"));

        gridLayout_5->addWidget(lineEdit_Mask3, 1, 5, 1, 1);

        lineEdit_Mask4 = new QLineEdit(gridLayoutWidget_5);
        lineEdit_Mask4->setObjectName(QString::fromUtf8("lineEdit_Mask4"));

        gridLayout_5->addWidget(lineEdit_Mask4, 1, 7, 1, 1);

        lineEdit_gate = new QLineEdit(gridLayoutWidget_5);
        lineEdit_gate->setObjectName(QString::fromUtf8("lineEdit_gate"));

        gridLayout_5->addWidget(lineEdit_gate, 2, 1, 1, 1);

        lineEdit_gate2 = new QLineEdit(gridLayoutWidget_5);
        lineEdit_gate2->setObjectName(QString::fromUtf8("lineEdit_gate2"));

        gridLayout_5->addWidget(lineEdit_gate2, 2, 3, 1, 1);

        lineEdit_gate3 = new QLineEdit(gridLayoutWidget_5);
        lineEdit_gate3->setObjectName(QString::fromUtf8("lineEdit_gate3"));

        gridLayout_5->addWidget(lineEdit_gate3, 2, 5, 1, 1);

        lineEdit_gate4 = new QLineEdit(gridLayoutWidget_5);
        lineEdit_gate4->setObjectName(QString::fromUtf8("lineEdit_gate4"));

        gridLayout_5->addWidget(lineEdit_gate4, 2, 7, 1, 1);

        lineEdit_DNS1 = new QLineEdit(gridLayoutWidget_5);
        lineEdit_DNS1->setObjectName(QString::fromUtf8("lineEdit_DNS1"));

        gridLayout_5->addWidget(lineEdit_DNS1, 3, 1, 1, 1);

        lineEdit_DNS12 = new QLineEdit(gridLayoutWidget_5);
        lineEdit_DNS12->setObjectName(QString::fromUtf8("lineEdit_DNS12"));

        gridLayout_5->addWidget(lineEdit_DNS12, 3, 3, 1, 1);

        lineEdit_DNS13 = new QLineEdit(gridLayoutWidget_5);
        lineEdit_DNS13->setObjectName(QString::fromUtf8("lineEdit_DNS13"));

        gridLayout_5->addWidget(lineEdit_DNS13, 3, 5, 1, 1);

        lineEdit_DNS14 = new QLineEdit(gridLayoutWidget_5);
        lineEdit_DNS14->setObjectName(QString::fromUtf8("lineEdit_DNS14"));

        gridLayout_5->addWidget(lineEdit_DNS14, 3, 7, 1, 1);

        lineEdit_DNS2 = new QLineEdit(gridLayoutWidget_5);
        lineEdit_DNS2->setObjectName(QString::fromUtf8("lineEdit_DNS2"));

        gridLayout_5->addWidget(lineEdit_DNS2, 4, 1, 1, 1);

        lineEdit_DNS22 = new QLineEdit(gridLayoutWidget_5);
        lineEdit_DNS22->setObjectName(QString::fromUtf8("lineEdit_DNS22"));

        gridLayout_5->addWidget(lineEdit_DNS22, 4, 3, 1, 1);

        lineEdit_DNS23 = new QLineEdit(gridLayoutWidget_5);
        lineEdit_DNS23->setObjectName(QString::fromUtf8("lineEdit_DNS23"));

        gridLayout_5->addWidget(lineEdit_DNS23, 4, 5, 1, 1);

        lineEdit_DNS24 = new QLineEdit(gridLayoutWidget_5);
        lineEdit_DNS24->setObjectName(QString::fromUtf8("lineEdit_DNS24"));

        gridLayout_5->addWidget(lineEdit_DNS24, 4, 7, 1, 1);

        lineEdit_Mask = new QLineEdit(gridLayoutWidget_5);
        lineEdit_Mask->setObjectName(QString::fromUtf8("lineEdit_Mask"));

        gridLayout_5->addWidget(lineEdit_Mask, 1, 1, 1, 1);

        l_2 = new QLabel(gridLayoutWidget_5);
        l_2->setObjectName(QString::fromUtf8("l_2"));

        gridLayout_5->addWidget(l_2, 1, 0, 1, 1);

        btn_getNetwork = new QPushButton(groupBox_26);
        btn_getNetwork->setObjectName(QString::fromUtf8("btn_getNetwork"));
        btn_getNetwork->setGeometry(QRect(182, 15, 51, 23));
        label_15 = new QLabel(groupBox_26);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(10, 43, 41, 16));
        label_mac = new QLabel(groupBox_26);
        label_mac->setObjectName(QString::fromUtf8("label_mac"));
        label_mac->setGeometry(QRect(52, 43, 181, 16));
        groupBox_21 = new QGroupBox(tab);
        groupBox_21->setObjectName(QString::fromUtf8("groupBox_21"));
        groupBox_21->setGeometry(QRect(250, 410, 251, 41));
        btn_getFlash = new QPushButton(groupBox_21);
        btn_getFlash->setObjectName(QString::fromUtf8("btn_getFlash"));
        btn_getFlash->setGeometry(QRect(20, 16, 81, 23));
        lineEdit_flashsize = new QLineEdit(groupBox_21);
        lineEdit_flashsize->setObjectName(QString::fromUtf8("lineEdit_flashsize"));
        lineEdit_flashsize->setGeometry(QRect(120, 17, 101, 20));
        groupBox_27 = new QGroupBox(tab);
        groupBox_27->setObjectName(QString::fromUtf8("groupBox_27"));
        groupBox_27->setGeometry(QRect(510, 0, 251, 51));
        btn_setFunction = new QPushButton(groupBox_27);
        btn_setFunction->setObjectName(QString::fromUtf8("btn_setFunction"));
        btn_setFunction->setGeometry(QRect(110, 20, 81, 23));
        comboBox_SetFunction = new QComboBox(groupBox_27);
        comboBox_SetFunction->setObjectName(QString::fromUtf8("comboBox_SetFunction"));
        comboBox_SetFunction->setGeometry(QRect(20, 20, 69, 22));
        groupBox_25 = new QGroupBox(tab);
        groupBox_25->setObjectName(QString::fromUtf8("groupBox_25"));
        groupBox_25->setGeometry(QRect(510, 50, 251, 231));
        btn_getWIFI = new QPushButton(groupBox_25);
        btn_getWIFI->setObjectName(QString::fromUtf8("btn_getWIFI"));
        btn_getWIFI->setGeometry(QRect(10, 150, 75, 23));
        tableWidget_SSID = new QTableWidget(groupBox_25);
        if (tableWidget_SSID->columnCount() < 2)
            tableWidget_SSID->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_SSID->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_SSID->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget_SSID->setObjectName(QString::fromUtf8("tableWidget_SSID"));
        tableWidget_SSID->setGeometry(QRect(10, 15, 231, 131));
        label_70 = new QLabel(groupBox_25);
        label_70->setObjectName(QString::fromUtf8("label_70"));
        label_70->setGeometry(QRect(10, 180, 31, 16));
        label_71 = new QLabel(groupBox_25);
        label_71->setObjectName(QString::fromUtf8("label_71"));
        label_71->setGeometry(QRect(10, 210, 31, 16));
        btn_connect = new QPushButton(groupBox_25);
        btn_connect->setObjectName(QString::fromUtf8("btn_connect"));
        btn_connect->setGeometry(QRect(170, 190, 51, 23));
        lineEdit_SSID_2 = new QLineEdit(groupBox_25);
        lineEdit_SSID_2->setObjectName(QString::fromUtf8("lineEdit_SSID_2"));
        lineEdit_SSID_2->setGeometry(QRect(40, 177, 113, 20));
        lineEdit_PassWD = new QLineEdit(groupBox_25);
        lineEdit_PassWD->setObjectName(QString::fromUtf8("lineEdit_PassWD"));
        lineEdit_PassWD->setGeometry(QRect(40, 206, 113, 20));
        groupBox_24 = new QGroupBox(tab);
        groupBox_24->setObjectName(QString::fromUtf8("groupBox_24"));
        groupBox_24->setGeometry(QRect(510, 290, 251, 101));
        btn_getWIFIStatus = new QPushButton(groupBox_24);
        btn_getWIFIStatus->setObjectName(QString::fromUtf8("btn_getWIFIStatus"));
        btn_getWIFIStatus->setGeometry(QRect(10, 20, 131, 23));
        label_LinkStatus = new QLabel(groupBox_24);
        label_LinkStatus->setObjectName(QString::fromUtf8("label_LinkStatus"));
        label_LinkStatus->setGeometry(QRect(40, 45, 241, 51));
        label_69 = new QLabel(groupBox_24);
        label_69->setObjectName(QString::fromUtf8("label_69"));
        label_69->setGeometry(QRect(10, 40, 31, 41));
        groupBox_7 = new QGroupBox(tab);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(0, 0, 241, 71));
        label_16 = new QLabel(groupBox_7);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(10, 16, 41, 21));
        label_18 = new QLabel(groupBox_7);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(10, 40, 41, 21));
        lineEdit_IP = new QLineEdit(groupBox_7);
        lineEdit_IP->setObjectName(QString::fromUtf8("lineEdit_IP"));
        lineEdit_IP->setGeometry(QRect(50, 16, 91, 20));
        lineEdit_Port = new QLineEdit(groupBox_7);
        lineEdit_Port->setObjectName(QString::fromUtf8("lineEdit_Port"));
        lineEdit_Port->setGeometry(QRect(50, 41, 91, 20));
        btn_config = new QPushButton(groupBox_7);
        btn_config->setObjectName(QString::fromUtf8("btn_config"));
        btn_config->setGeometry(QRect(150, 15, 61, 31));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        groupBox_5 = new QGroupBox(tab_2);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(0, 0, 771, 421));
        btn_getSystem = new QPushButton(groupBox_5);
        btn_getSystem->setObjectName(QString::fromUtf8("btn_getSystem"));
        btn_getSystem->setGeometry(QRect(10, 20, 75, 21));
        tableWidget = new QTableWidget(groupBox_5);
        if (tableWidget->columnCount() < 19)
            tableWidget->setColumnCount(19);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(9, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(10, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(11, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(12, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(13, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(14, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(15, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(16, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(17, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(18, __qtablewidgetitem20);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(5, 41, 761, 371));
        label_14 = new QLabel(groupBox_5);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(220, 13, 54, 20));
        label_all = new QLabel(groupBox_5);
        label_all->setObjectName(QString::fromUtf8("label_all"));
        label_all->setGeometry(QRect(270, 13, 54, 20));
        label_all->setStyleSheet(QString::fromUtf8("color:#ff0000"));
        label_open = new QLabel(groupBox_5);
        label_open->setObjectName(QString::fromUtf8("label_open"));
        label_open->setGeometry(QRect(400, 13, 54, 20));
        label_open->setStyleSheet(QString::fromUtf8("color:#ff0000"));
        label_17 = new QLabel(groupBox_5);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(340, 13, 54, 20));
        label_close = new QLabel(groupBox_5);
        label_close->setObjectName(QString::fromUtf8("label_close"));
        label_close->setGeometry(QRect(530, 13, 54, 20));
        label_close->setStyleSheet(QString::fromUtf8("color:#ff0000"));
        label_19 = new QLabel(groupBox_5);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(470, 13, 54, 20));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        groupBox_22 = new QGroupBox(tab_3);
        groupBox_22->setObjectName(QString::fromUtf8("groupBox_22"));
        groupBox_22->setGeometry(QRect(0, 0, 231, 381));
        btn_getPower = new QPushButton(groupBox_22);
        btn_getPower->setObjectName(QString::fromUtf8("btn_getPower"));
        btn_getPower->setGeometry(QRect(120, 50, 75, 21));
        tableWidget_Power = new QTableWidget(groupBox_22);
        if (tableWidget_Power->columnCount() < 2)
            tableWidget_Power->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget_Power->setHorizontalHeaderItem(0, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget_Power->setHorizontalHeaderItem(1, __qtablewidgetitem22);
        tableWidget_Power->setObjectName(QString::fromUtf8("tableWidget_Power"));
        tableWidget_Power->setGeometry(QRect(10, 80, 211, 291));
        label_67 = new QLabel(groupBox_22);
        label_67->setObjectName(QString::fromUtf8("label_67"));
        label_67->setGeometry(QRect(14, 16, 31, 21));
        dateEdit = new QDateEdit(groupBox_22);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(50, 17, 151, 21));
        btn_getDate = new QPushButton(groupBox_22);
        btn_getDate->setObjectName(QString::fromUtf8("btn_getDate"));
        btn_getDate->setGeometry(QRect(20, 49, 91, 23));
        groupBox_23 = new QGroupBox(tab_3);
        groupBox_23->setObjectName(QString::fromUtf8("groupBox_23"));
        groupBox_23->setGeometry(QRect(230, 0, 291, 381));
        tableWidget_Energy = new QTableWidget(groupBox_23);
        if (tableWidget_Energy->columnCount() < 2)
            tableWidget_Energy->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget_Energy->setHorizontalHeaderItem(0, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget_Energy->setHorizontalHeaderItem(1, __qtablewidgetitem24);
        tableWidget_Energy->setObjectName(QString::fromUtf8("tableWidget_Energy"));
        tableWidget_Energy->setGeometry(QRect(10, 90, 261, 281));
        btn_getEnergy = new QPushButton(groupBox_23);
        btn_getEnergy->setObjectName(QString::fromUtf8("btn_getEnergy"));
        btn_getEnergy->setGeometry(QRect(20, 50, 61, 31));
        label_68 = new QLabel(groupBox_23);
        label_68->setObjectName(QString::fromUtf8("label_68"));
        label_68->setGeometry(QRect(20, 20, 71, 16));
        comboBox = new QComboBox(groupBox_23);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(90, 21, 151, 21));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        groupBox_6 = new QGroupBox(tab_4);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(0, 0, 751, 411));
        comboBox_UID = new QComboBox(groupBox_6);
        comboBox_UID->setObjectName(QString::fromUtf8("comboBox_UID"));
        comboBox_UID->setGeometry(QRect(90, 20, 191, 21));
        label_73 = new QLabel(groupBox_6);
        label_73->setObjectName(QString::fromUtf8("label_73"));
        label_73->setGeometry(QRect(10, 22, 71, 16));
        label_74 = new QLabel(groupBox_6);
        label_74->setObjectName(QString::fromUtf8("label_74"));
        label_74->setGeometry(QRect(294, 19, 31, 21));
        dateEdit_2 = new QDateEdit(groupBox_6);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));
        dateEdit_2->setGeometry(QRect(330, 20, 151, 21));
        tableWidget_Info = new QTableWidget(groupBox_6);
        if (tableWidget_Info->columnCount() < 7)
            tableWidget_Info->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget_Info->setHorizontalHeaderItem(0, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget_Info->setHorizontalHeaderItem(1, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget_Info->setHorizontalHeaderItem(2, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget_Info->setHorizontalHeaderItem(3, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget_Info->setHorizontalHeaderItem(4, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget_Info->setHorizontalHeaderItem(5, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget_Info->setHorizontalHeaderItem(6, __qtablewidgetitem31);
        tableWidget_Info->setObjectName(QString::fromUtf8("tableWidget_Info"));
        tableWidget_Info->setGeometry(QRect(10, 50, 731, 361));
        btn_getInfo = new QPushButton(groupBox_6);
        btn_getInfo->setObjectName(QString::fromUtf8("btn_getInfo"));
        btn_getInfo->setGeometry(QRect(630, 20, 91, 21));
        btn_getDate_2 = new QPushButton(groupBox_6);
        btn_getDate_2->setObjectName(QString::fromUtf8("btn_getDate_2"));
        btn_getDate_2->setGeometry(QRect(510, 20, 91, 23));
        tabWidget->addTab(tab_4, QString());
        MainWindow->setCentralWidget(centralWidget);
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
        groupBox->setTitle(QApplication::translate("MainWindow", "01 \350\216\267\345\217\226\345\237\272\346\234\254\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
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
        groupBox_2->setTitle(QApplication::translate("MainWindow", "04 \344\277\241\351\201\223\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
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
        groupBox_3->setTitle(QApplication::translate("MainWindow", "05 \350\256\276\347\275\256WIFI\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "\345\216\237\345\257\206\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "\346\226\260\345\257\206\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        btn_setPasswd->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "03 \350\256\276\347\275\256\347\273\204\347\275\221", 0, QApplication::UnicodeUTF8));
        btn_addID->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240ID", 0, QApplication::UnicodeUTF8));
        btn_SetID->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\347\273\204\347\275\221", 0, QApplication::UnicodeUTF8));
        plainTextEdit_ID->setPlainText(QString());
        label_12->setText(QApplication::translate("MainWindow", "\351\234\200\350\246\201\346\267\273\345\212\240\347\232\204ID", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "\351\234\200\350\246\201\346\263\250\345\206\214\347\232\204ID\345\210\227\350\241\250", 0, QApplication::UnicodeUTF8));
        btn_ECUImport->setText(QApplication::translate("MainWindow", "ECU\345\257\274\345\205\245ID", 0, QApplication::UnicodeUTF8));
        groupBox_26->setTitle(QApplication::translate("MainWindow", "09 10 \346\234\211\347\272\277\347\275\221\347\273\234\350\256\276\347\275\256\350\216\267\345\217\226", 0, QApplication::UnicodeUTF8));
        label_72->setText(QApplication::translate("MainWindow", "IP\347\261\273\345\236\213", 0, QApplication::UnicodeUTF8));
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\345\212\250\346\200\201IP", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "\351\235\231\346\200\201IP", 0, QApplication::UnicodeUTF8)
        );
        btn_setNetwork->setText(QApplication::translate("MainWindow", "\351\205\215\347\275\256", 0, QApplication::UnicodeUTF8));
        l_1->setText(QApplication::translate("MainWindow", "IP:", 0, QApplication::UnicodeUTF8));
        l_3->setText(QApplication::translate("MainWindow", "\347\275\221\345\205\263\357\274\232", 0, QApplication::UnicodeUTF8));
        l_4->setText(QApplication::translate("MainWindow", "DNS1\357\274\232", 0, QApplication::UnicodeUTF8));
        l_5->setText(QApplication::translate("MainWindow", "DNS2\357\274\232", 0, QApplication::UnicodeUTF8));
        l_6->setText(QApplication::translate("MainWindow", ".", 0, QApplication::UnicodeUTF8));
        l_11->setText(QApplication::translate("MainWindow", ".", 0, QApplication::UnicodeUTF8));
        l_7->setText(QApplication::translate("MainWindow", ".", 0, QApplication::UnicodeUTF8));
        l_8->setText(QApplication::translate("MainWindow", ".", 0, QApplication::UnicodeUTF8));
        l_9->setText(QApplication::translate("MainWindow", ".", 0, QApplication::UnicodeUTF8));
        l_10->setText(QApplication::translate("MainWindow", ".", 0, QApplication::UnicodeUTF8));
        l_12->setText(QApplication::translate("MainWindow", ".", 0, QApplication::UnicodeUTF8));
        l_13->setText(QApplication::translate("MainWindow", ".", 0, QApplication::UnicodeUTF8));
        l_14->setText(QApplication::translate("MainWindow", ".", 0, QApplication::UnicodeUTF8));
        l_15->setText(QApplication::translate("MainWindow", ".", 0, QApplication::UnicodeUTF8));
        l_17->setText(QApplication::translate("MainWindow", ".", 0, QApplication::UnicodeUTF8));
        l_16->setText(QApplication::translate("MainWindow", ".", 0, QApplication::UnicodeUTF8));
        l_18->setText(QApplication::translate("MainWindow", ".", 0, QApplication::UnicodeUTF8));
        l_19->setText(QApplication::translate("MainWindow", ".", 0, QApplication::UnicodeUTF8));
        l_20->setText(QApplication::translate("MainWindow", ".", 0, QApplication::UnicodeUTF8));
        l_2->setText(QApplication::translate("MainWindow", "\346\216\251\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        btn_getNetwork->setText(QApplication::translate("MainWindow", "\350\216\267\345\217\226", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindow", "MAC", 0, QApplication::UnicodeUTF8));
        label_mac->setText(QString());
        groupBox_21->setTitle(QApplication::translate("MainWindow", "11 Flash\345\211\251\344\275\231\347\251\272\351\227\264", 0, QApplication::UnicodeUTF8));
        btn_getFlash->setText(QApplication::translate("MainWindow", "\350\216\267\345\217\226Flash\347\251\272\351\227\264", 0, QApplication::UnicodeUTF8));
        groupBox_27->setTitle(QApplication::translate("MainWindow", "06 RSD\345\212\237\350\203\275\345\274\200\345\205\263", 0, QApplication::UnicodeUTF8));
        btn_setFunction->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\345\212\237\350\203\275", 0, QApplication::UnicodeUTF8));
        comboBox_SetFunction->clear();
        comboBox_SetFunction->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "00\357\274\232\345\205\263", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "01\357\274\232\345\274\200", 0, QApplication::UnicodeUTF8)
        );
        groupBox_25->setTitle(QApplication::translate("MainWindow", "\350\216\267\345\217\226\344\277\241\345\217\267", 0, QApplication::UnicodeUTF8));
        btn_getWIFI->setText(QApplication::translate("MainWindow", "\350\216\267\345\217\226WIFI\344\277\241\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_SSID->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "SSID", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_SSID->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\344\277\241\345\217\267\345\274\272\345\272\246", 0, QApplication::UnicodeUTF8));
        label_70->setText(QApplication::translate("MainWindow", "SSID", 0, QApplication::UnicodeUTF8));
        label_71->setText(QApplication::translate("MainWindow", "\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        btn_connect->setText(QApplication::translate("MainWindow", "\350\277\236\346\216\245", 0, QApplication::UnicodeUTF8));
        lineEdit_SSID_2->setText(QApplication::translate("MainWindow", "yuneng_ecu_test", 0, QApplication::UnicodeUTF8));
        lineEdit_PassWD->setText(QApplication::translate("MainWindow", "123456789", 0, QApplication::UnicodeUTF8));
        groupBox_24->setTitle(QApplication::translate("MainWindow", "\350\216\267\345\217\226WIFI\350\277\236\346\216\245\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
        btn_getWIFIStatus->setText(QApplication::translate("MainWindow", "\350\216\267\345\217\226WIFI\350\277\236\346\216\245\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
        label_LinkStatus->setText(QString());
        label_69->setText(QApplication::translate("MainWindow", "\350\277\236\346\216\245\n"
"\344\277\241\345\217\267", 0, QApplication::UnicodeUTF8));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "\351\200\232\344\277\241\345\217\202\346\225\260", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("MainWindow", "IP\357\274\232", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("MainWindow", "\347\253\257\345\217\243\357\274\232", 0, QApplication::UnicodeUTF8));
        lineEdit_IP->setText(QApplication::translate("MainWindow", "10.10.100.254", 0, QApplication::UnicodeUTF8));
        lineEdit_Port->setText(QApplication::translate("MainWindow", "8899", 0, QApplication::UnicodeUTF8));
        btn_config->setText(QApplication::translate("MainWindow", "\351\205\215\347\275\256\345\217\202\346\225\260", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\345\237\272\346\234\254\350\257\267\346\261\202", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "02 \347\263\273\347\273\237\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        btn_getSystem->setText(QApplication::translate("MainWindow", "\350\216\267\345\217\226\347\263\273\347\273\237\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "ID", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\350\256\276\345\244\207\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "\345\274\200\345\205\263\346\234\272", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "\345\212\237\350\203\275\345\274\200\345\205\263", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "PV1\346\254\240\345\216\213", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "PV1\346\254\240\345\216\213", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "\345\277\203\350\267\263\346\254\241\346\225\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "\350\266\205\346\227\266\346\254\241\346\225\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "\345\275\223\345\244\251\345\205\263\346\234\272\346\225\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "PV1\350\276\223\345\205\245\347\224\265\345\216\213", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->horizontalHeaderItem(10);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "PV2\350\276\223\345\205\245\347\224\265\345\216\213", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->horizontalHeaderItem(11);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "\350\276\223\345\205\245\347\224\265\346\265\201", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->horizontalHeaderItem(12);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "PV1\350\276\223\345\205\245\345\212\237\347\216\207", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->horizontalHeaderItem(13);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "PV2\350\276\223\345\205\245\345\212\237\347\216\207", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->horizontalHeaderItem(14);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "\350\276\223\345\207\272\347\224\265\345\216\213", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->horizontalHeaderItem(15);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "\344\277\241\345\217\267\345\274\272\345\272\246", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->horizontalHeaderItem(16);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow", "PV1\347\253\257\345\217\221\347\224\265\351\207\217", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->horizontalHeaderItem(17);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWindow", "PV2\347\253\257\345\217\221\347\224\265\351\207\217", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->horizontalHeaderItem(18);
        ___qtablewidgetitem20->setText(QApplication::translate("MainWindow", "MOS\345\205\263\346\226\255\346\254\241\346\225\260", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "\346\200\273\345\217\260\346\225\260\357\274\232", 0, QApplication::UnicodeUTF8));
        label_all->setText(QString());
        label_open->setText(QString());
        label_17->setText(QApplication::translate("MainWindow", "\345\274\200\346\234\272\345\217\260\346\225\260\357\274\232", 0, QApplication::UnicodeUTF8));
        label_close->setText(QString());
        label_19->setText(QApplication::translate("MainWindow", "\345\205\263\346\234\272\345\217\260\346\225\260\357\274\232", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\347\263\273\347\273\237\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        groupBox_22->setTitle(QApplication::translate("MainWindow", "12 \345\212\237\347\216\207\346\233\262\347\272\277", 0, QApplication::UnicodeUTF8));
        btn_getPower->setText(QApplication::translate("MainWindow", "\350\216\267\345\217\226\345\212\237\347\216\207\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget_Power->horizontalHeaderItem(0);
        ___qtablewidgetitem21->setText(QApplication::translate("MainWindow", "\346\227\266\351\227\264\347\202\271", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget_Power->horizontalHeaderItem(1);
        ___qtablewidgetitem22->setText(QApplication::translate("MainWindow", "\345\212\237\347\216\207", 0, QApplication::UnicodeUTF8));
        label_67->setText(QApplication::translate("MainWindow", "\346\227\266\351\227\264\357\274\232", 0, QApplication::UnicodeUTF8));
        btn_getDate->setText(QApplication::translate("MainWindow", "\350\216\267\345\217\226\345\275\223\345\211\215\346\227\245\346\234\237", 0, QApplication::UnicodeUTF8));
        groupBox_23->setTitle(QApplication::translate("MainWindow", "08 \345\217\221\347\224\265\351\207\217\346\233\262\347\272\277", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget_Energy->horizontalHeaderItem(0);
        ___qtablewidgetitem23->setText(QApplication::translate("MainWindow", "\346\227\266\351\227\264\347\202\271", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget_Energy->horizontalHeaderItem(1);
        ___qtablewidgetitem24->setText(QApplication::translate("MainWindow", "\345\217\221\347\224\265\351\207\217", 0, QApplication::UnicodeUTF8));
        btn_getEnergy->setText(QApplication::translate("MainWindow", "\350\216\267\345\217\226\345\217\221\347\224\265\n"
"\351\207\217\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        label_68->setText(QApplication::translate("MainWindow", "\350\216\267\345\217\226\346\227\266\351\227\264\346\256\265\357\274\232", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "0.\345\275\223\346\234\210\345\222\214\344\270\212\344\270\200\344\270\252\346\234\210\345\220\204\345\244\251", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "1.\345\275\223\345\271\264\345\222\214\345\211\215\344\270\200\345\271\264\347\232\204\345\220\204\346\234\210", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "2.\345\216\206\345\217\262\344\270\212\345\220\204\345\271\264\345\217\221\347\224\265\351\207\217", 0, QApplication::UnicodeUTF8)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\345\212\237\347\216\207\343\200\201\345\217\221\347\224\265\351\207\217\346\233\262\347\272\277", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "07 \345\215\225\345\217\260\347\233\270\345\205\263\346\233\262\347\272\277", 0, QApplication::UnicodeUTF8));
        label_73->setText(QApplication::translate("MainWindow", "\351\234\200\350\246\201\350\216\267\345\217\226\347\232\204ID\345\217\267", 0, QApplication::UnicodeUTF8));
        label_74->setText(QApplication::translate("MainWindow", "\346\227\266\351\227\264\357\274\232", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget_Info->horizontalHeaderItem(0);
        ___qtablewidgetitem25->setText(QApplication::translate("MainWindow", "\346\227\266\351\227\264\347\202\271", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget_Info->horizontalHeaderItem(1);
        ___qtablewidgetitem26->setText(QApplication::translate("MainWindow", "PV1\347\224\265\345\216\213", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget_Info->horizontalHeaderItem(2);
        ___qtablewidgetitem27->setText(QApplication::translate("MainWindow", "PV1\347\224\265\346\265\201", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget_Info->horizontalHeaderItem(3);
        ___qtablewidgetitem28->setText(QApplication::translate("MainWindow", "PV1\345\212\237\347\216\207", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget_Info->horizontalHeaderItem(4);
        ___qtablewidgetitem29->setText(QApplication::translate("MainWindow", "PV2\347\224\265\345\216\213", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget_Info->horizontalHeaderItem(5);
        ___qtablewidgetitem30->setText(QApplication::translate("MainWindow", "PV2\347\224\265\346\265\201", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget_Info->horizontalHeaderItem(6);
        ___qtablewidgetitem31->setText(QApplication::translate("MainWindow", "PV2\345\212\237\347\216\207", 0, QApplication::UnicodeUTF8));
        btn_getInfo->setText(QApplication::translate("MainWindow", "\350\216\267\345\217\226\345\215\225\345\217\260\346\233\262\347\272\277", 0, QApplication::UnicodeUTF8));
        btn_getDate_2->setText(QApplication::translate("MainWindow", "\350\216\267\345\217\226\345\275\223\345\211\215\346\227\245\346\234\237", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "\345\215\225\345\217\260\346\233\262\347\272\277", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
