#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "rsclient.h"
#include <QTableWidget>
#include "commudp.h"
typedef struct
{
    char ID[13];
    unsigned char Equipment_Status;
    unsigned char Mos_Status;
    unsigned char Function_Status;
    unsigned char PV1_Protect;
    unsigned char PV2_Protect;
    unsigned long Heart_Rate;
    unsigned short Off_Times;
    unsigned char Shutdown_Num;
    unsigned short PV1;
    unsigned short PV2;
    unsigned char PI;
    unsigned short Power1;
    unsigned short Power2;
    unsigned short Output_PV;
    unsigned char RSSI;
    unsigned int PV1_ENERGY;    //10 -6次方度
    unsigned int PV2_ENERGY;    //10 -6次方度
    unsigned char MOS_CLOSE_NUM;

} OPT700_RS;


typedef struct
{
    char time[6];
    unsigned short PV1;
    unsigned char PI1;
    unsigned short Power1;
    unsigned short PV2;
    unsigned char PI2;
    unsigned short Power2;
} OPT700_RS_INFO;


typedef struct
{
    char time[6];
    int power;
} PowerData_t;

typedef struct
{
    char date[11];
    double energy;
} EnergyData_t;


typedef struct
{
    char SSID[50];
    int  signalStrength;
} SSID_t;

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

    void on_btn_setNetwork_clicked();

    void on_btn_getNetwork_clicked();
    void IPInterfaceSataus(bool status);

    void on_btn_getFlash_clicked();

    void on_btn_getWIFI_clicked();

    void on_btn_connect_clicked();

    void on_btn_getWIFIStatus_clicked();

    void addSSIDData(QTableWidget *table, QList<SSID_t *> &List);

    void on_tableWidget_SSID_itemClicked(QTableWidgetItem *item);

    void on_btn_setFunction_clicked();

    void on_comboBox_4_activated(int index);

    void on_btn_getDate_clicked();

    void on_btn_getPower_clicked();

    void on_btn_getEnergy_clicked();
    void addPowerData(QTableWidget *table, QList<PowerData_t *> &List);
    void addEnergyData(QTableWidget *table, QList<EnergyData_t *> &List);
    void addINFOTableData(QTableWidget *table, QList<OPT700_RS_INFO *> &List);
    void on_btn_getDate_2_clicked();

    void on_btn_getInfo_clicked();

private:
    Ui::MainWindow *ui;
    RSClient *ECU_RSClient;
    CommUDP *UDPClient1;
    CommUDP *UDPClient2;
    char ECUID[13];
    QList<OPT700_RS *> OPT700_RSList;
    QList<PowerData_t *> PowerData_List;
    QList<EnergyData_t *> EnergyData_List;
    QList<SSID_t *> SSID_List;
    QList<OPT700_RS_INFO *> OPT700_RS_INFOList;

};

#endif // MAINWINDOW_H
