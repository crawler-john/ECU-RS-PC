#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug.h"

#define MAJOR_VERSION   1
#define MINOR_VERSION   1

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle(tr("ECU-R-RS Test V%1.%2").arg(MAJOR_VERSION).arg(MINOR_VERSION));
    setFixedSize(546,480);
    ECU_RSClient = new RSClient;
}

MainWindow::~MainWindow()
{
    delete ui;
    delete ECU_RSClient;
    ECU_RSClient = NULL;
}

void MainWindow::on_btn_addID_clicked()
{
    QString addID = ui->lineEdit_ID->text();

    if(12 == addID.length())
    {
        ui->plainTextEdit_ID->appendPlainText(addID);
    }
}



void MainWindow::on_btn_AddDevice_clicked()
{
    char Type[4];
    char SIGNAL_LEVEL[4];
    char SIGNAL_CHANNEL[3];
    char Equipment_Status[2];
    char Length[3];
    char Version[100];
    bool flag = false;
    char Sendbuff[20] = "APS11001401END";
    char Recvbuff[200] = {'\0'};
    memset(Recvbuff,0x00,200);
    flag = ECU_RSClient->ECU_Communication(Sendbuff,Recvbuff,2000);
    if(flag == true)
    {
        qDebug("%s\n",Recvbuff);
        memcpy(ECUID,&Recvbuff[11],12);
        ECUID[12]  = '\0';
        ui->lineEdit_ECUID->setText(ECUID);
        memcpy(Type,&Recvbuff[23],3);
        Type[3]  = '\0';
        ui->label_TYPE->setText(Type);

        memcpy(SIGNAL_LEVEL,&Recvbuff[26],3);
        SIGNAL_LEVEL[3]  = '\0';
        ui->label_SIGNAL_LEVEL->setText(SIGNAL_LEVEL);

        memcpy(SIGNAL_CHANNEL,&Recvbuff[29],2);
        SIGNAL_CHANNEL[2]  = '\0';
        ui->label_SIGNAL_CHANNEL->setText(SIGNAL_CHANNEL);

        memcpy(Equipment_Status,&Recvbuff[31],1);
        Equipment_Status[1]  = '\0';
        ui->label_Equipment_Status->setText(Equipment_Status);

        memcpy(Length,&Recvbuff[32],2);
        Length[2]  = '\0';

        memcpy(Version,&Recvbuff[34],atoi(Length));
        Version[(atoi(Length))]  = '\0';
        ui->label_Version->setText(Version);

    }
}

void MainWindow::on_btn_SetChannel_clicked()
{
    char Sendbuff[50];
    char Recvbuff[200] = {'\0'};
    char SIGNAL_LEVEL[4];
    char SIGNAL_CHANNEL[3];
    char setChannel[3];
    setChannel = ui->comboBox_SetChannel->currentText().toLatin1().data();
    sprintf("APS11002904%sEND%sEND",ECUID,setChannel);
    memset(Recvbuff,0x00,200);

    flag = ECU_RSClient->ECU_Communication(Sendbuff,Recvbuff,2000);
    if(flag == true)
    {

        qDebug("%s\n",Recvbuff);
        memcpy(ECUID,&Recvbuff[11],12);
        ECUID[12]  = '\0';
        ui->lineEdit_ECUID->setText(ECUID);
        memcpy(Type,&Recvbuff[23],3);
        Type[3]  = '\0';
        ui->label_TYPE->setText(Type);

        memcpy(SIGNAL_LEVEL,&Recvbuff[26],3);
        SIGNAL_LEVEL[3]  = '\0';
        ui->label_SIGNAL_LEVEL->setText(SIGNAL_LEVEL);

        memcpy(SIGNAL_CHANNEL,&Recvbuff[29],2);
        SIGNAL_CHANNEL[2]  = '\0';
        ui->label_SIGNAL_CHANNEL->setText(SIGNAL_CHANNEL);

        memcpy(Equipment_Status,&Recvbuff[31],1);
        Equipment_Status[1]  = '\0';
        ui->label_Equipment_Status->setText(Equipment_Status);

        memcpy(Length,&Recvbuff[32],2);
        Length[2]  = '\0';

        memcpy(Version,&Recvbuff[34],atoi(Length));
        Version[(atoi(Length))]  = '\0';
        ui->label_Version->setText(Version);

    }

}

void MainWindow::on_btn_setPasswd_clicked()
{

}

void MainWindow::on_btn_SetID_clicked()
{

}

void MainWindow::on_btn_getSystem_clicked()
{

}
