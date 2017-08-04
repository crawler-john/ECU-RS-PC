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
    setFixedSize(791,480);
    ECU_RSClient = new RSClient;

    //设置表格属性
    ui->tableWidget->setColumnWidth(0,100);
    ui->tableWidget->setColumnWidth(1,60);
    ui->tableWidget->setColumnWidth(2,50);
    ui->tableWidget->setColumnWidth(3,60);
    ui->tableWidget->setColumnWidth(4,60);
    ui->tableWidget->setColumnWidth(5,60);
    ui->tableWidget->setColumnWidth(6,60);
    ui->tableWidget->setColumnWidth(7,60);
    ui->tableWidget->setColumnWidth(8,80);
    ui->tableWidget->setColumnWidth(9,80);
    ui->tableWidget->setColumnWidth(10,80);
    ui->tableWidget->setColumnWidth(11,60);
    ui->tableWidget->setColumnWidth(12,80);
    ui->tableWidget->setColumnWidth(13,80);

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
        statusBar()->showMessage(tr("Add ID Success ..."), 1000);
    }else
    {
        statusBar()->showMessage(tr("ID Length Mismatching ..."), 1000);
    }
}



void MainWindow::on_btn_AddDevice_clicked()
{
    qint64 recvLen=0;
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
    flag = ECU_RSClient->ECU_Communication(Sendbuff,14,Recvbuff,&recvLen,2000);
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
        statusBar()->showMessage(tr("Add Device Success ..."), 2000);
    }else
    {
        statusBar()->showMessage(tr("Please verify WIFI Connect ..."), 2000);
    }
}

void MainWindow::on_btn_SetChannel_clicked()
{
    qint64 recvLen=0;
    bool flag = false;
    char Sendbuff[50];
    char Recvbuff[200] = {'\0'};
    char SIGNAL_LEVEL[4];
    char SIGNAL_CHANNEL[3];
    char setChannel[3];
    memcpy(setChannel,ui->comboBox_SetChannel->currentText().toLatin1().data(),2);
    setChannel[2] = '\0';
    sprintf(Sendbuff,"APS11003104%sEND%sEND\n",ECUID,setChannel);
    memset(Recvbuff,0x00,200);
    qDebug("%s\n",Sendbuff);
    flag = ECU_RSClient->ECU_Communication(Sendbuff,31,Recvbuff,&recvLen,2000);
    if(flag == true)
    {
        if(Recvbuff[12] == '1')
        {//ECU ID不匹配
            statusBar()->showMessage(tr("ECU ID Mismatching ..."), 2000);
        }
        else
        {
            qDebug("%s\n",Recvbuff);
            memcpy(SIGNAL_CHANNEL,&Recvbuff[13],2);
            SIGNAL_CHANNEL[2]  = '\0';
            ui->label_CurrentChannel->setText(SIGNAL_CHANNEL);

            memcpy(SIGNAL_LEVEL,&Recvbuff[15],3);
            SIGNAL_LEVEL[3]  = '\0';
            ui->label_Stren->setText(SIGNAL_LEVEL);
            statusBar()->showMessage(tr("Set Channel Success ..."), 2000);
        }
    }else
    {
        statusBar()->showMessage(tr("Please verify WIFI Connect ..."), 2000);
    }

}

void MainWindow::on_btn_setPasswd_clicked()
{
    qint64 recvLen=0;
    bool flag = false;
    char Sendbuff[300];
    char Recvbuff[200] = {'\0'};
    int OldLen = 0;
    int NewLen = 0;
    char OldPasswd[100];
    char NewPasswd[100];
    char length[5] = {'\0'};

    OldLen = ui->lineEdit_oldPasswd->text().length();
    NewLen = ui->lineEdit_newPasswd->text().length();
    if(OldLen < 8 || NewLen < 8)
    {
        statusBar()->showMessage(tr("size too short ..."), 2000);
        qDebug("字节长度太短\n");
        return;
    }
    memcpy(OldPasswd, ui->lineEdit_oldPasswd->text().toLatin1().data(),OldLen);
    memcpy(NewPasswd, ui->lineEdit_newPasswd->text().toLatin1().data(),NewLen);
    OldPasswd[OldLen] = '\0';
    NewPasswd[NewLen] = '\0';

    sprintf(Sendbuff,"APS11000005%sEND%02d%s%02d%sEND",ECUID,OldLen,OldPasswd,NewLen,NewPasswd);
    sprintf(length,"%04d",QString(Sendbuff).length());
    memcpy(&Sendbuff[5],length,4);
    memset(Recvbuff,0x00,200);
    qDebug("%s\n",Sendbuff);
    flag = ECU_RSClient->ECU_Communication(Sendbuff,QString(Sendbuff).length(),Recvbuff,&recvLen,2000);
    if(flag == true)
    {
        if(Recvbuff[12] == '1')
        {//ECU ID不匹配
            statusBar()->showMessage(tr("ECU ID Mismatching ..."), 2000);
        }
        else
        {
            statusBar()->showMessage(tr("Set Password Success ..."), 2000);
            qDebug("设置WIFI密码成功！");
        }
    }else
    {
        statusBar()->showMessage(tr("Please verify WIFI Connect ..."), 2000);
    }
}

void MainWindow::on_btn_SetID_clicked()
{
    qint64 recvLen=0;
    bool flag = false;
    char Sendbuff[4096];
    char Recvbuff[200] = {'\0'};
    char ID_BCD[7];
    char ID_BCD_List[4096];
    char text[4096] = {'\0'};
    int OPTCount = 0,index=0;
    char packlength[5] = {'\0'};
    int length = ui->plainTextEdit_ID->toPlainText().length();
    OPTCount = (length + 1)/13;
    //qDebug("%d,%s",length,ui->plainTextEdit_ID->toPlainText().toLatin1().data());
    memcpy(text,ui->plainTextEdit_ID->toPlainText().toLatin1().data(),length);

    for(index = 0;index<OPTCount;index++)
    {
        ID_BCD[0] = (text[0+index*13] - '0')*16 + (text[1+index*13] - '0');
        ID_BCD[1] = (text[2+index*13] - '0')*16 + (text[3+index*13] - '0');
        ID_BCD[2] = (text[4+index*13] - '0')*16 + (text[5+index*13] - '0');
        ID_BCD[3] = (text[6+index*13] - '0')*16 + (text[7+index*13] - '0');
        ID_BCD[4] = (text[7+index*13] - '0')*16 + (text[9+index*13] - '0');
        ID_BCD[5] = (text[10+index*13] - '0')*16 + (text[11+index*13] - '0');
        qDebug("%02x%02x%02x%02x%02x%02x\n",ID_BCD[0],ID_BCD[1],ID_BCD[2],ID_BCD[3],ID_BCD[4],ID_BCD[5]);
        memcpy(&ID_BCD_List[index*6],ID_BCD,6);
    }

    sprintf(Sendbuff,"APS11000003%sEND",ECUID);
    memcpy(&Sendbuff[26],ID_BCD_List,(OPTCount*6));
    Sendbuff[OPTCount*6+26] = 'E';
    Sendbuff[OPTCount*6+27] = 'N';
    Sendbuff[OPTCount*6+28] = 'D';

    sprintf(packlength,"%04d",(OPTCount*6+29));
    memcpy(&Sendbuff[5],packlength,4);

    memset(Recvbuff,0x00,200);
    qDebug("len:%d send:%s\n",(OPTCount*6+29),Sendbuff);


    flag = ECU_RSClient->ECU_Communication(Sendbuff,(OPTCount*6+29),Recvbuff,&recvLen,3000);
    if(flag == true)
    {
        if(Recvbuff[12] == '1')
        {//ECU ID不匹配
            statusBar()->showMessage(tr("ECU ID Mismatching ..."), 2000);
        }
        else
        {
            statusBar()->showMessage(tr("Set ID Success ..."), 2000);
        }
    }else
    {
        statusBar()->showMessage(tr("Please verify WIFI Connect ..."), 2000);
    }

}

void MainWindow::on_btn_getSystem_clicked()
{
    qint64 recvLen=0;
    bool flag = false;
    char Sendbuff[200] = "APS11000002%sEND";
    char Recvbuff[4096] = {'\0'};
    int optcount = 0;
    int length = 0,index = 0;
    memset(Recvbuff,0x00,200);
    sprintf(Sendbuff,"APS11002602%sEND",ECUID);
    qDebug("send:%s\n",Sendbuff);
    flag = ECU_RSClient->ECU_Communication(Sendbuff,26,Recvbuff,&recvLen,2000);
    OPT700_RSList.clear();

    if(flag == true)
    {
        if(!memcmp(&Recvbuff[9],"12",2))
        {
            if(Recvbuff[12] == '1')
            {   //ECU ID不匹配
                statusBar()->showMessage(tr("ECU ID Mismatching ..."), 2000);
            }
            else
            {
                if(recvLen == 14)
                {
                    ui->tableWidget->setRowCount(0);
                    //清空Table中内容
                    ui->tableWidget->clearContents();

                    statusBar()->showMessage(tr("Don't Have OPT700-RS ..."), 2000);
                    return;
                }else
                {
                    optcount = Recvbuff[13]*256 + Recvbuff[14];
                    qDebug("optcount:%d\n",optcount);
                    length = 15;
                    qDebug("Recvbuff[length + 6] :%d %c \n",Recvbuff[length + 6],Recvbuff[length + 6]);
                    for(index = 0;index < optcount;index++)
                    {
                        OPT700_RS *opt700_rs = new OPT700_RS;
                        if(Recvbuff[length + 6] == 0)
                        {
                            sprintf(opt700_rs->ID,"%02x%02x%02x%02x%02x%02x",Recvbuff[length],Recvbuff[length+1],Recvbuff[length+2],Recvbuff[length+3],Recvbuff[length+4],Recvbuff[length+5]);
                            opt700_rs->ID[12] = '\0';
                            opt700_rs->Equipment_Status = 0;
                            opt700_rs->Mos_Status = Recvbuff[length+7] & 1;
                            opt700_rs->Function_Status = (Recvbuff[length+7])&(1<<1);
                            opt700_rs->PV1_Protect = 0;
                            opt700_rs->PV2_Protect = 0;
                            opt700_rs->Heart_Rate = Recvbuff[length+8]*256+Recvbuff[length+9];
                            opt700_rs->Off_Times = Recvbuff[length+10]*256+Recvbuff[length+11];
                            opt700_rs->Shutdown_Num = Recvbuff[length+12];
                            opt700_rs->PV1 = 0;
                            opt700_rs->PV2 = 0;
                            opt700_rs->PI = 0;
                            opt700_rs->Power1 = 0;
                            opt700_rs->Power2 = 0;
                            OPT700_RSList.push_back(opt700_rs);

                            length += 13;
                        }else if (Recvbuff[length + 6] == 1)
                        {
                            sprintf(opt700_rs->ID,"%02x%02x%02x%02x%02x%02x",Recvbuff[length],Recvbuff[length+1],Recvbuff[length+2],Recvbuff[length+3],Recvbuff[length+4],Recvbuff[length+5]);
                            opt700_rs->ID[12] = '\0';
                            opt700_rs->Equipment_Status = 1;
                            opt700_rs->Mos_Status = Recvbuff[length+7] & 1;
                            opt700_rs->Function_Status = (Recvbuff[length+7])&(1<<1);
                            opt700_rs->PV1_Protect = (Recvbuff[length+7])&(1<<1);
                            opt700_rs->PV2_Protect = (Recvbuff[length+7])&(1<<1);
                            opt700_rs->Heart_Rate = Recvbuff[length+8]*256+Recvbuff[length+9];
                            opt700_rs->Off_Times = Recvbuff[length+10]*256+Recvbuff[length+11];
                            opt700_rs->Shutdown_Num = Recvbuff[length+12];
                            opt700_rs->PV1 = Recvbuff[length+13]*256+Recvbuff[length+14];
                            opt700_rs->PV2 = Recvbuff[length+15]*256+Recvbuff[length+16];
                            opt700_rs->PI = Recvbuff[length+17];
                            opt700_rs->Power1 = Recvbuff[length+18]*256+Recvbuff[length+19];
                            opt700_rs->Power2 = Recvbuff[length+20]*256+Recvbuff[length+21];
                            OPT700_RSList.push_back(opt700_rs);


                            length += 22;
                        }
                    }

                    statusBar()->showMessage(tr("Get System Info Success ..."), 2000);
                    addTableData(ui->tableWidget,OPT700_RSList);
                    QList<OPT700_RS *>::Iterator iter = OPT700_RSList.begin();
                    for ( ; iter != OPT700_RSList.end(); iter++)  {
                        delete (*iter);
                    }
                }
            }
        }

    }else
    {
        ui->tableWidget->setRowCount(0);
        //清空Table中内容
        ui->tableWidget->clearContents();
        statusBar()->showMessage(tr("Please verify WIFI Connect ..."), 2000);
    }
}


void MainWindow::addTableData(QTableWidget *table, QList<OPT700_RS *> &List)
{
    table->setRowCount(0);
    //清空Table中内容
    table->clearContents();

    QList<OPT700_RS *>::Iterator iter = List.begin();
    for ( ; iter != List.end(); iter++)  {
        int row_count = table->rowCount(); //获取表单行数
        table->insertRow(row_count); //插入新行
        QTableWidgetItem *item = new QTableWidgetItem();
        QTableWidgetItem *item1 = new QTableWidgetItem();
        QTableWidgetItem *item2 = new QTableWidgetItem();
        QTableWidgetItem *item3 = new QTableWidgetItem();
        QTableWidgetItem *item4 = new QTableWidgetItem();
        QTableWidgetItem *item5 = new QTableWidgetItem();
        QTableWidgetItem *item6 = new QTableWidgetItem();
        QTableWidgetItem *item7 = new QTableWidgetItem();
        QTableWidgetItem *item8 = new QTableWidgetItem();
        QTableWidgetItem *item9 = new QTableWidgetItem();
        QTableWidgetItem *item10 = new QTableWidgetItem();
        QTableWidgetItem *item11 = new QTableWidgetItem();
        QTableWidgetItem *item12 = new QTableWidgetItem();
        QTableWidgetItem *item13 = new QTableWidgetItem();

        if((*iter)->Equipment_Status == 0)
        {
            item->setText((*iter)->ID);
            item1->setText(QString::number((*iter)->Equipment_Status));
            item2->setText(QString::number((*iter)->Mos_Status));
            item3->setText(QString::number((*iter)->Function_Status));
            item4->setText("-");
            item5->setText("-");
            item6->setText(QString::number((*iter)->Heart_Rate));
            item7->setText(QString::number((*iter)->Off_Times));
            item8->setText(QString::number((*iter)->Shutdown_Num));
            item9->setText("-");
            item10->setText("-");
            item11->setText("-");
            item12->setText("-");
            item13->setText("-");

        }else if((*iter)->Equipment_Status == 1)
        {
            item->setText((*iter)->ID);
            item1->setText(QString::number((*iter)->Equipment_Status));
            item2->setText(QString::number((*iter)->Mos_Status));

            item3->setText(QString::number((*iter)->Function_Status));
            item4->setText(QString::number((*iter)->PV1_Protect));
            item5->setText(QString::number((*iter)->PV2_Protect));
            item6->setText(QString::number((*iter)->Heart_Rate));
            item7->setText(QString::number((*iter)->Off_Times));
            item8->setText(QString::number((*iter)->Shutdown_Num));
            item9->setText(QString::number((*iter)->PV1));
            item10->setText(QString::number((*iter)->PV2));
            item11->setText(QString::number((*iter)->PI));
            item12->setText(QString::number((*iter)->Power1));
            item13->setText(QString::number((*iter)->Power2));
        }

        if((*iter)->Mos_Status == 1)
        {
            item->setBackgroundColor(QColor(0,238,0));
            item1->setBackgroundColor(QColor(0,238,0));
            item2->setBackgroundColor(QColor(0,238,0));
            item3->setBackgroundColor(QColor(0,238,0));
            item4->setBackgroundColor(QColor(0,238,0));
            item5->setBackgroundColor(QColor(0,238,0));
            item6->setBackgroundColor(QColor(0,238,0));
            item7->setBackgroundColor(QColor(0,238,0));
            item8->setBackgroundColor(QColor(0,238,0));
            item9->setBackgroundColor(QColor(0,238,0));
            item10->setBackgroundColor(QColor(0,238,0));
            item11->setBackgroundColor(QColor(0,238,0));
            item12->setBackgroundColor(QColor(0,238,0));
            item13->setBackgroundColor(QColor(0,238,0));
        }

        table->setItem(row_count, 0, item);
        table->setItem(row_count, 1, item1);
        table->setItem(row_count, 2, item2);
        table->setItem(row_count, 3, item3);
        table->setItem(row_count, 4, item4);
        table->setItem(row_count, 5, item5);
        table->setItem(row_count, 6, item6);
        table->setItem(row_count, 7, item7);
        table->setItem(row_count, 8, item8);
        table->setItem(row_count, 9, item9);
        table->setItem(row_count, 10, item10);
        table->setItem(row_count, 11, item11);
        table->setItem(row_count, 12, item12);
        table->setItem(row_count, 13, item13);

    }
}

void MainWindow::on_btn_ECUImport_clicked()
{
    qint64 recvLen=0;
    bool flag = false;
    char Sendbuff[200] = "APS11000002%sEND";
    char Recvbuff[4096] = {'\0'};
    int optcount = 0;
    int length = 0,index = 0;
    char ID[13] = {'\0'};
    memset(Recvbuff,0x00,200);
    sprintf(Sendbuff,"APS11002602%sEND",ECUID);
    qDebug("send:%s\n",Sendbuff);
    flag = ECU_RSClient->ECU_Communication(Sendbuff,26,Recvbuff,&recvLen,2000);
    if(flag == true)
    {
        if(!memcmp(&Recvbuff[9],"12",2))
        {
            if(Recvbuff[12] == '1')
            {   //ECU ID不匹配
                statusBar()->showMessage(tr("ECU ID Mismatching ..."), 2000);
            }
            else
            {
                if(recvLen == 14)
                {
                    statusBar()->showMessage(tr("Don't Have OPT700-RS ..."), 2000);
                    return;
                }else
                {
                    optcount = Recvbuff[13]*256 + Recvbuff[14];
                    qDebug("optcount:%d\n",optcount);
                    length = 15;
                    qDebug("Recvbuff[length + 6] :%d %c \n",Recvbuff[length + 6],Recvbuff[length + 6]);
                    for(index = 0;index < optcount;index++)
                    {
                        memset(ID,0x00,13);
                        if(Recvbuff[length + 6] == 0)
                        {
                            sprintf(ID,"%02x%02x%02x%02x%02x%02x",Recvbuff[length],Recvbuff[length+1],Recvbuff[length+2],Recvbuff[length+3],Recvbuff[length+4],Recvbuff[length+5]);
                            ID[12] = '\0';
                            length += 13;
                        }else if (Recvbuff[length + 6] == 1)
                        {
                            sprintf(ID,"%02x%02x%02x%02x%02x%02x",Recvbuff[length],Recvbuff[length+1],Recvbuff[length+2],Recvbuff[length+3],Recvbuff[length+4],Recvbuff[length+5]);
                            ID[12] = '\0';
                            length += 22;
                        }
                        ui->plainTextEdit_ID->appendPlainText(ID);
                    }
                    statusBar()->showMessage(tr("Import ID Success ..."), 2000);
                }
            }
        }

    }else
    {
        statusBar()->showMessage(tr("Please verify WIFI Connect ..."), 2000);
    }
}
