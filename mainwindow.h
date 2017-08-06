#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "rsclient.h"
#include <QTableWidget>
typedef struct
{
    char ID[13];
    unsigned char Equipment_Status;
    unsigned char Mos_Status;
    unsigned char Function_Status;
    unsigned char PV1_Protect;
    unsigned char PV2_Protect;
    unsigned short Heart_Rate;
    unsigned short Off_Times;
    unsigned char Shutdown_Num;
    unsigned short PV1;
    unsigned short PV2;
    unsigned char PI;
    unsigned short Power1;
    unsigned short Power2;
    unsigned short Output_PV;
    unsigned char RSSI;
} OPT700_RS;



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    

    void addTableData(QTableWidget *table,QList<OPT700_RS *> &List);

private slots:
    void on_btn_addID_clicked();

    void on_btn_AddDevice_clicked();

    void on_btn_SetChannel_clicked();

    void on_btn_setPasswd_clicked();

    void on_btn_SetID_clicked();

    void on_btn_getSystem_clicked();

    void on_btn_ECUImport_clicked();

private:
    Ui::MainWindow *ui;
    RSClient *ECU_RSClient;
    char ECUID[13];
    QList<OPT700_RS *> OPT700_RSList;
};

#endif // MAINWINDOW_H
