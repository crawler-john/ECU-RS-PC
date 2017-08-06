/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun Aug 6 19:49:58 2017
**      by: Qt User Interface Compiler version 4.7.4
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
        tabWidget->setGeometry(QRect(10, 0, 791, 451));
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
        groupBox_4->setGeometry(QRect(260, 10, 511, 411));
        lineEdit_ID = new QLineEdit(groupBox_4);
        lineEdit_ID->setObjectName(QString::fromUtf8("lineEdit_ID"));
        lineEdit_ID->setGeometry(QRect(10, 50, 113, 20));
        btn_addID = new QPushButton(groupBox_4);
        btn_addID->setObjectName(QString::fromUtf8("btn_addID"));
        btn_addID->setGeometry(QRect(10, 80, 71, 23));
        btn_SetID = new QPushButton(groupBox_4);
        btn_SetID->setObjectName(QString::fromUtf8("btn_SetID"));
        btn_SetID->setGeometry(QRect(10, 110, 71, 23));
        plainTextEdit_ID = new QPlainTextEdit(groupBox_4);
        plainTextEdit_ID->setObjectName(QString::fromUtf8("plainTextEdit_ID"));
        plainTextEdit_ID->setGeometry(QRect(130, 50, 191, 351));
        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 20, 81, 21));
        label_13 = new QLabel(groupBox_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(130, 20, 111, 20));
        btn_ECUImport = new QPushButton(groupBox_4);
        btn_ECUImport->setObjectName(QString::fromUtf8("btn_ECUImport"));
        btn_ECUImport->setGeometry(QRect(10, 140, 75, 23));
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
        if (tableWidget->columnCount() < 16)
            tableWidget->setColumnCount(16);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(11, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(12, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(13, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(14, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(15, __qtablewidgetitem15);
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
        btn_ECUImport->setText(QApplication::translate("MainWindow", "ECU\345\257\274\345\205\245ID", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\345\237\272\346\234\254\350\257\267\346\261\202", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "\347\263\273\347\273\237\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        btn_getSystem->setText(QApplication::translate("MainWindow", "\350\216\267\345\217\226\347\263\273\347\273\237\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "ID", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\350\256\276\345\244\207\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\345\274\200\345\205\263\346\234\272", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\345\212\237\350\203\275\345\274\200\345\205\263", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "PV1\346\254\240\345\216\213", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "PV1\346\254\240\345\216\213", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "\345\277\203\350\267\263\346\254\241\346\225\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "\350\266\205\346\227\266\346\254\241\346\225\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "\345\275\223\345\244\251\345\205\263\346\234\272\346\225\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "PV1\350\276\223\345\205\245\347\224\265\345\216\213", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "PV2\350\276\223\345\205\245\347\224\265\345\216\213", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->horizontalHeaderItem(11);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "\350\276\223\345\205\245\347\224\265\346\265\201", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->horizontalHeaderItem(12);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "PV1\350\276\223\345\205\245\345\212\237\347\216\207", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->horizontalHeaderItem(13);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "PV2\350\276\223\345\205\245\345\212\237\347\216\207", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->horizontalHeaderItem(14);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "\350\276\223\345\207\272\347\224\265\345\216\213", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->horizontalHeaderItem(15);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "\344\277\241\345\217\267\345\274\272\345\272\246", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "\346\200\273\345\217\260\346\225\260\357\274\232", 0, QApplication::UnicodeUTF8));
        label_all->setText(QString());
        label_open->setText(QString());
        label_17->setText(QApplication::translate("MainWindow", "\345\274\200\346\234\272\345\217\260\346\225\260\357\274\232", 0, QApplication::UnicodeUTF8));
        label_close->setText(QString());
        label_19->setText(QApplication::translate("MainWindow", "\345\205\263\346\234\272\345\217\260\346\225\260\357\274\232", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\347\263\273\347\273\237\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
