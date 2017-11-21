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
    setFixedSize(791,520);
    ECU_RSClient = new RSClient;
    UDPClient1 = new CommUDP("10.10.100.254",49000);
    UDPClient2 = new CommUDP("10.10.100.254",48899);

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
    ui->tableWidget->setColumnWidth(14,80);
    ui->tableWidget->setColumnWidth(15,80);
    IPInterfaceSataus(false);


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

void MainWindow::IPInterfaceSataus(bool status)
{
    if(status == true)
    {
        ui->l_1->show();
        ui->l_2->show();
        ui->l_3->show();
        ui->l_4->show();
        ui->l_5->show();

        ui->l_6->show();
        ui->l_7->show();
        ui->l_8->show();
        ui->l_9->show();
        ui->l_10->show();

        ui->l_11->show();
        ui->l_12->show();
        ui->l_13->show();
        ui->l_14->show();
        ui->l_15->show();

        ui->l_16->show();
        ui->l_17->show();
        ui->l_18->show();
        ui->l_19->show();
        ui->l_20->show();


        ui->lineEdit_IPAddress->show();
        ui->lineEdit_Mask->show();
        ui->lineEdit_gate->show();
        ui->lineEdit_DNS1->show();
        ui->lineEdit_DNS2->show();

        ui->lineEdit_IPAddress2->show();
        ui->lineEdit_Mask2->show();
        ui->lineEdit_gate2->show();
        ui->lineEdit_DNS12->show();
        ui->lineEdit_DNS22->show();

        ui->lineEdit_IPAddress3->show();
        ui->lineEdit_Mask3->show();
        ui->lineEdit_gate3->show();
        ui->lineEdit_DNS13->show();
        ui->lineEdit_DNS23->show();

        ui->lineEdit_IPAddress4->show();
        ui->lineEdit_Mask4->show();
        ui->lineEdit_gate4->show();
        ui->lineEdit_DNS14->show();
        ui->lineEdit_DNS24->show();
    }else
    {
        ui->l_1->hide();
        ui->l_2->hide();
        ui->l_3->hide();
        ui->l_4->hide();
        ui->l_5->hide();

        ui->l_6->hide();
        ui->l_7->hide();
        ui->l_8->hide();
        ui->l_9->hide();
        ui->l_10->hide();

        ui->l_11->hide();
        ui->l_12->hide();
        ui->l_13->hide();
        ui->l_14->hide();
        ui->l_15->hide();

        ui->l_16->hide();
        ui->l_17->hide();
        ui->l_18->hide();
        ui->l_19->hide();
        ui->l_20->hide();


        ui->lineEdit_IPAddress->hide();
        ui->lineEdit_Mask->hide();
        ui->lineEdit_gate->hide();
        ui->lineEdit_DNS1->hide();
        ui->lineEdit_DNS2->hide();

        ui->lineEdit_IPAddress2->hide();
        ui->lineEdit_Mask2->hide();
        ui->lineEdit_gate2->hide();
        ui->lineEdit_DNS12->hide();
        ui->lineEdit_DNS22->hide();

        ui->lineEdit_IPAddress3->hide();
        ui->lineEdit_Mask3->hide();
        ui->lineEdit_gate3->hide();
        ui->lineEdit_DNS13->hide();
        ui->lineEdit_DNS23->hide();

        ui->lineEdit_IPAddress4->hide();
        ui->lineEdit_Mask4->hide();
        ui->lineEdit_gate4->hide();
        ui->lineEdit_DNS14->hide();
        ui->lineEdit_DNS24->hide();
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
    int commtime;
    char cur_Time[15];
    char Version[100];
    bool flag = false;
    char Sendbuff[30];
    char Recvbuff[200] = {'\0'};
    int year = QDateTime::currentDateTime().date().year();
    int month = QDateTime::currentDateTime().date().month();
    int day = QDateTime::currentDateTime().date().day();
    int hour = QDateTime::currentDateTime().time().hour();
    int minute = QDateTime::currentDateTime().time().minute();
    int second = QDateTime::currentDateTime().time().second();

    //设置ECU-R的时间
    sprintf(cur_Time,"%04d%02d%02d%02d%02d%02d",year,month,day,hour,minute,second);
    cur_Time[14] = '\0';

    memset(Recvbuff,0x00,200);
    sprintf(Sendbuff,"APS11002801%sEND",cur_Time);
    flag = ECU_RSClient->ECU_Communication(Sendbuff,28,Recvbuff,&recvLen,2000,&commtime);
    if(flag == true)
    {
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
        statusBar()->showMessage(tr("Add Device Success ... time:%1 ms").arg(commtime), 2000);
    }else
    {
        statusBar()->showMessage(tr("Please verify WIFI Connect ..."), 2000);
    }
}

void MainWindow::on_btn_SetChannel_clicked()
{
    qint64 recvLen=0;
    bool flag = false;
    int commtime = 0;
    char Sendbuff[50];
    char Recvbuff[200] = {'\0'};
    char SIGNAL_LEVEL[4];
    char SIGNAL_CHANNEL[3];
    char oldChannel[3];
    char setChannel[3];
    memcpy(oldChannel,ui->comboBox_OldChannel->currentText().toLatin1().data(),2);
    oldChannel[2] = '\0';
    memcpy(setChannel,ui->comboBox_SetChannel->currentText().toLatin1().data(),2);
    setChannel[2] = '\0';

    qDebug("%s  %s\n",oldChannel,setChannel);
    sprintf(Sendbuff,"APS11003304%sEND%s%sEND\n",ECUID,oldChannel,setChannel);
    qDebug("%s\n",Sendbuff);
    memset(Recvbuff,0x00,200);
    flag = ECU_RSClient->ECU_Communication(Sendbuff,33,Recvbuff,&recvLen,2000,&commtime);
    if(flag == true)
    {
        if(Recvbuff[12] == '1')
        {//ECU ID不匹配
            statusBar()->showMessage(tr("ECU ID Mismatching ... time:%1 ms").arg(commtime), 2000);
        }
        else
        {
            memcpy(SIGNAL_CHANNEL,&Recvbuff[13],2);
            SIGNAL_CHANNEL[2]  = '\0';
            ui->label_CurrentChannel->setText(SIGNAL_CHANNEL);

            memcpy(SIGNAL_LEVEL,&Recvbuff[15],3);
            SIGNAL_LEVEL[3]  = '\0';
            ui->label_Stren->setText(SIGNAL_LEVEL);
            statusBar()->showMessage(tr("Set Channel Success ... time:%1 ms").arg(commtime), 2000);
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
    int commtime = 0;
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
    flag = ECU_RSClient->ECU_Communication(Sendbuff,QString(Sendbuff).length(),Recvbuff,&recvLen,2000,&commtime);
    if(flag == true)
    {
        if(Recvbuff[12] == '1')
        {//ECU ID不匹配
            statusBar()->showMessage(tr("ECU ID Mismatching ...  time:%1 ms").arg(commtime), 2000);
        }
        else
        {
            statusBar()->showMessage(tr("Set Password Success ...  time:%1 ms").arg(commtime), 2000);
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
    int commtime = 0;
    char Sendbuff[8192];
    char Recvbuff[200] = {'\0'};
    char ID_BCD[7];
    char ID_BCD_List[8192];
    char text[8192] = {'\0'};
    int OPTCount = 0,index=0;
    char packlength[5] = {'\0'};
    int length = ui->plainTextEdit_ID->toPlainText().length();
    OPTCount = (length + 1)/13;
    memcpy(text,ui->plainTextEdit_ID->toPlainText().toLatin1().data(),length);

    for(index = 0;index<OPTCount;index++)
    {
        memset(ID_BCD,0x00,7);
        ID_BCD[0] = (text[0+index*13] - '0')*16 + (text[1+index*13] - '0');
        ID_BCD[1] = (text[2+index*13] - '0')*16 + (text[3+index*13] - '0');
        ID_BCD[2] = (text[4+index*13] - '0')*16 + (text[5+index*13] - '0');
        ID_BCD[3] = (text[6+index*13] - '0')*16 + (text[7+index*13] - '0');
        ID_BCD[4] = (text[8+index*13] - '0')*16 + (text[9+index*13] - '0');
        ID_BCD[5] = (text[10+index*13] - '0')*16 + (text[11+index*13] - '0');
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

    flag = ECU_RSClient->ECU_Communication(Sendbuff,(OPTCount*6+29),Recvbuff,&recvLen,3000,&commtime);
    if(flag == true)
    {
        if(Recvbuff[12] == '1')
        {//ECU ID不匹配
            statusBar()->showMessage(tr("ECU ID Mismatching ... time:%1 ms").arg(commtime), 2000);
        }
        else
        {
            statusBar()->showMessage(tr("Set ID Success ... time:%1 ms").arg(commtime), 2000);
        }
    }else
    {
        statusBar()->showMessage(tr("Please verify WIFI Connect ..."), 2000);
    }

}

void MainWindow::on_btn_getSystem_clicked()
{
    qint64 recvLen=0;
    int commtime = 0;
    bool flag = false;
    char Sendbuff[200] = "APS11000002%sEND";
    char Recvbuff[8192] = {'\0'};
    int optcount = 0,openCount = 0,closeCount = 0;
    int length = 0,index = 0;
    unsigned char status;
    memset(Recvbuff,0x00,200);
    sprintf(Sendbuff,"APS11002602%sEND",ECUID);

    flag = ECU_RSClient->ECU_Communication(Sendbuff,26,Recvbuff,&recvLen,5000,&commtime);
    OPT700_RSList.clear();
    ui->comboBox_UID->clear();
    if(flag == true)
    {
        //回复的是02命令
        if(!memcmp(&Recvbuff[9],"02",2))
        {
            if(Recvbuff[12] == '1')
            {   //ECU ID不匹配
                statusBar()->showMessage(tr("ECU ID Mismatching ... time:%1 ms").arg(commtime), 2000);
            }
            else
            {
                if(recvLen == 14)
                {
                    ui->tableWidget->setRowCount(0);
                    //清空Table中内容
                    ui->tableWidget->clearContents();

                    statusBar()->showMessage(tr("Don't Have OPT700-RS ... time:%1 ms").arg(commtime), 2000);
                    return;
                }else
                {

                    optcount = Recvbuff[13]*256 + Recvbuff[14];
                    qDebug("optcount:%d\n",optcount);
                    length = 15;

                    for(index = 0;index < optcount;index++)
                    {
                        OPT700_RS *opt700_rs = new OPT700_RS;

                        sprintf(opt700_rs->ID,"%02x%02x%02x%02x%02x%02x",(Recvbuff[length] & 0x000000ff),(Recvbuff[length+1] & 0x000000ff),(Recvbuff[length+2] & 0x000000ff),(Recvbuff[length+3] & 0x000000ff),(Recvbuff[length+4] & 0x000000ff),(Recvbuff[length+5] & 0x000000ff));
                        ui->comboBox_UID->insertItem(index,opt700_rs->ID);
                        opt700_rs->ID[12] = '\0';
                        opt700_rs->Equipment_Status = Recvbuff[length + 6];

                        status = Recvbuff[length+7] & 0x000000ff;

                        opt700_rs->Mos_Status = status & (int)1;
                        opt700_rs->Function_Status = ((status & (int)(1<<1)) >> 1);
                        opt700_rs->PV1_Protect = ((status&(int)(1<<2)) >> 2);
                        opt700_rs->PV2_Protect = ((status&(int)(1<<3)) >> 3);

                        opt700_rs->Heart_Rate = (Recvbuff[length+8] & 0x000000ff)*256+(Recvbuff[length+9] & 0x000000ff);
                        opt700_rs->Off_Times = (Recvbuff[length+10] & 0x000000ff)*256+(Recvbuff[length+11] & 0x000000ff);
                        opt700_rs->Shutdown_Num = (Recvbuff[length+12] & 0x000000ff);
                        opt700_rs->PV1 = (Recvbuff[length+13] & 0x000000ff)*256+(Recvbuff[length+14] & 0x000000ff);
                        opt700_rs->PV2 = (Recvbuff[length+15] & 0x000000ff)*256+(Recvbuff[length+16] & 0x000000ff);
                        opt700_rs->PI = (Recvbuff[length+17] & 0x000000ff)*256 +  (Recvbuff[length+18] & 0x000000ff);
                        opt700_rs->PI2 = (Recvbuff[length+19] & 0x000000ff)*256 +  (Recvbuff[length+20] & 0x000000ff);

                        opt700_rs->Power1 = (Recvbuff[length+21] & 0x000000ff)*256+(Recvbuff[length+22] & 0x000000ff);
                        opt700_rs->Power2 = (Recvbuff[length+23] & 0x000000ff)*256+(Recvbuff[length+24] & 0x000000ff);
                        opt700_rs->Output_PV = (Recvbuff[length+25] & 0x000000ff)*256+(Recvbuff[length+26] & 0x000000ff);
                        opt700_rs->PI_Output = (Recvbuff[length+27] & 0x000000ff)*256+(Recvbuff[length+28] & 0x000000ff);
                        opt700_rs->Power_Output = (Recvbuff[length+29] & 0x000000ff)*256+(Recvbuff[length+30] & 0x000000ff);


                        opt700_rs->RSSI = (Recvbuff[length+31]  & 0x000000ff);

                        opt700_rs->PV1_ENERGY =  (Recvbuff[length+32] & 0x000000ff)*256*256*256+(Recvbuff[length+33] & 0x000000ff)*256*256 + (Recvbuff[length+34] & 0x000000ff)*256+(Recvbuff[length+35] & 0x000000ff);
                        opt700_rs->PV2_ENERGY = (Recvbuff[length+36] & 0x000000ff)*256*256*256+(Recvbuff[length+37] & 0x000000ff)*256*256 + (Recvbuff[length+38] & 0x000000ff)*256+(Recvbuff[length+39] & 0x000000ff);
                        opt700_rs->PV_Output_ENERGY = (Recvbuff[length+40] & 0x000000ff)*256*256*256+(Recvbuff[length+41] & 0x000000ff)*256*256 + (Recvbuff[length+42] & 0x000000ff)*256+(Recvbuff[length+43] & 0x000000ff);

                        opt700_rs->MOS_CLOSE_NUM = (Recvbuff[length+44] & 0x000000ff);
                        opt700_rs->version = (Recvbuff[length+45] & 0x000000ff)*256+(Recvbuff[length+46] & 0x000000ff);
                        OPT700_RSList.push_back(opt700_rs);

                        length += 56;

                        if(opt700_rs->Mos_Status == 1)
                        {
                            openCount++;
                        }else
                        {
                            closeCount++;
                        }
                    }

                    statusBar()->showMessage(tr("Get System Info Success ... time:%1 ms").arg(commtime), 2000);
                    ui->label_all->setText(QString::number(optcount));
                    ui->label_open->setText(QString::number(openCount));
                    ui->label_close->setText(QString::number(closeCount));
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
        ui->comboBox_UID->clear();
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
        QTableWidgetItem *item14 = new QTableWidgetItem();
        QTableWidgetItem *item15 = new QTableWidgetItem();
        QTableWidgetItem *item16 = new QTableWidgetItem();
        QTableWidgetItem *item17 = new QTableWidgetItem();
        QTableWidgetItem *item18 = new QTableWidgetItem();
        QTableWidgetItem *item19 = new QTableWidgetItem();
        QTableWidgetItem *item20 = new QTableWidgetItem();
        QTableWidgetItem *item21 = new QTableWidgetItem();
        QTableWidgetItem *item22 = new QTableWidgetItem();
        QTableWidgetItem *item23 = new QTableWidgetItem();



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
        item12->setText(QString::number((*iter)->PI2));

        item13->setText(QString::number((*iter)->Power1));
        item14->setText(QString::number((*iter)->Power2));
        item15->setText(QString::number((*iter)->Output_PV));
        item16->setText(QString::number((*iter)->PI_Output));
        item17->setText(QString::number((*iter)->Power_Output));
        item18->setText(QString::number((*iter)->RSSI));

        item19->setText(QString::number((*iter)->PV1_ENERGY));
        item20->setText(QString::number((*iter)->PV2_ENERGY));
        item21->setText(QString::number((*iter)->PV_Output_ENERGY));
        item22->setText(QString::number((*iter)->MOS_CLOSE_NUM));
        item23->setText(QString::number((*iter)->version));


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
            item14->setBackgroundColor(QColor(0,238,0));
            item15->setBackgroundColor(QColor(0,238,0));
            item16->setBackgroundColor(QColor(0,238,0));
            item17->setBackgroundColor(QColor(0,238,0));
            item18->setBackgroundColor(QColor(0,238,0));
            item19->setBackgroundColor(QColor(0,238,0));
            item20->setBackgroundColor(QColor(0,238,0));
            item21->setBackgroundColor(QColor(0,238,0));
            item22->setBackgroundColor(QColor(0,238,0));
            item23->setBackgroundColor(QColor(0,238,0));
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
        table->setItem(row_count, 14, item14);
        table->setItem(row_count, 15, item15);
        table->setItem(row_count, 16, item16);
        table->setItem(row_count, 17, item17);
        table->setItem(row_count, 18, item18);
        table->setItem(row_count, 19, item19);
        table->setItem(row_count, 20, item20);
        table->setItem(row_count, 21, item21);
        table->setItem(row_count, 22, item22);
        table->setItem(row_count, 23, item23);
    }
}





void MainWindow::on_btn_ECUImport_clicked()
{
    qint64 recvLen=0;
    int commtime = 0;
    bool flag = false;
    char Sendbuff[200] = "APS11000002%sEND";
    char Recvbuff[8192] = {'\0'};
    int optcount = 0;
    int length = 0,index = 0;
    char ID[13] = {'\0'};
    memset(Recvbuff,0x00,200);
    sprintf(Sendbuff,"APS11002602%sEND",ECUID);

    ui->plainTextEdit_ID->clear();
    flag = ECU_RSClient->ECU_Communication(Sendbuff,26,Recvbuff,&recvLen,10000,&commtime);

    if(flag == true)
    {
        //回复的是02命令
        if(!memcmp(&Recvbuff[9],"02",2))
        {
            if(Recvbuff[12] == '1')
            {   //ECU ID不匹配
                statusBar()->showMessage(tr("ECU ID Mismatching ... time:%1 ms").arg(commtime), 2000);
            }
            else
            {
                if(recvLen == 14)
                {
                    statusBar()->showMessage(tr("Don't Have OPT700-RS ... time:%1 ms").arg(commtime), 2000);
                    return;
                }else
                {
                    optcount = Recvbuff[13]*256 + Recvbuff[14];
                    qDebug("optcount:%d\n",optcount);
                    length = 15;
                    for(index = 0;index < optcount;index++)
                    {
                        memset(ID,0x00,13);
                        sprintf(ID,"%02x%02x%02x%02x%02x%02x",(Recvbuff[length] & 0xff),(Recvbuff[length+1] & 0xff),(Recvbuff[length+2] & 0xff),(Recvbuff[length+3] & 0xff),(Recvbuff[length+4] & 0xff),(Recvbuff[length+5] & 0xff));
                        ID[12] = '\0';
                        length += 56;
                        ui->plainTextEdit_ID->appendPlainText(ID);

                    }
                    statusBar()->showMessage(tr("Import ID Success ... time:%1 ms").arg(commtime), 2000);
                }
            }
        }

    }else
    {
        statusBar()->showMessage(tr("Please verify WIFI Connect ..."), 2000);
    }
}

void MainWindow::on_btn_setNetwork_clicked()
{
    qint64 recvLen=0;
    bool flag = false;
    int commtime = 0;
    unsigned char Sendbuff[200] = {'\0'};
    unsigned char Recvbuff[8192] = {'\0'};
    int select_item = 0;
    memset(Recvbuff,0x00,8192);

    select_item = ui->comboBox_4->currentIndex();
    //先判断是静态  还是动态
    if(select_item == 0)
    {   //动态获取IP
        sprintf((char *)Sendbuff,"APS11005109%sEND0000000000000000000000END",ECUID);
    }else if(select_item == 1)
    {   //静态获取IP
        sprintf((char *)Sendbuff,"APS11005109%sEND0100000000000000000000END",ECUID);
        Sendbuff[28] = (unsigned char )ui->lineEdit_IPAddress->text().toInt(); //IP 1
        Sendbuff[29] = (unsigned char )ui->lineEdit_IPAddress2->text().toInt(); //IP 2
        Sendbuff[30] = (unsigned char )ui->lineEdit_IPAddress3->text().toInt(); //IP 3
        Sendbuff[31] = (unsigned char )ui->lineEdit_IPAddress4->text().toInt(); //IP 4

        Sendbuff[32] = (unsigned char )ui->lineEdit_Mask->text().toInt(); //MASK 1
        Sendbuff[33] = (unsigned char )ui->lineEdit_Mask2->text().toInt(); //MASK 2
        Sendbuff[34] = (unsigned char )ui->lineEdit_Mask3->text().toInt(); //MASK 3
        Sendbuff[35] = (unsigned char )ui->lineEdit_Mask4->text().toInt(); //MASK 4

        Sendbuff[36] = (unsigned char )ui->lineEdit_gate->text().toInt(); //GATE 1
        Sendbuff[37] = (unsigned char )ui->lineEdit_gate2->text().toInt(); //GATE 2
        Sendbuff[38] = (unsigned char )ui->lineEdit_gate3->text().toInt(); //GATE 3
        Sendbuff[39] = (unsigned char )ui->lineEdit_gate4->text().toInt(); //GATE 4

        Sendbuff[40] = (unsigned char )ui->lineEdit_DNS1->text().toInt(); //DNS1 1
        Sendbuff[41] = (unsigned char )ui->lineEdit_DNS12->text().toInt(); //DNS1 2
        Sendbuff[42] = (unsigned char )ui->lineEdit_DNS13->text().toInt(); //DNS1 3
        Sendbuff[43] = (unsigned char )ui->lineEdit_DNS14->text().toInt(); //DNS1 4

        Sendbuff[44] = (unsigned char )ui->lineEdit_DNS2->text().toInt(); //DNS2 1
        Sendbuff[45] = (unsigned char )ui->lineEdit_DNS22->text().toInt(); //DNS2 2
        Sendbuff[46] = (unsigned char )ui->lineEdit_DNS23->text().toInt(); //DNS2 3
        Sendbuff[47] = (unsigned char )ui->lineEdit_DNS24->text().toInt(); //DNS2 4

    }

    flag = ECU_RSClient->ECU_Communication((char *)Sendbuff,53,(char *)Recvbuff,&recvLen,2000,&commtime);
    if(flag == true)
    {
        if(!memcmp(&Recvbuff[11],"00",2))
        {
            statusBar()->showMessage(tr("Set Network Success ... time:%1 ms").arg(commtime), 1000);
        }
        else
        {
            statusBar()->showMessage(tr("Set Network Failed ... time:%1 ms").arg(commtime), 1000);
        }
    }else
    {
        statusBar()->showMessage(tr("Please verify WIFI Connect ..."), 1000);
    }

}

void MainWindow::on_btn_getNetwork_clicked()
{
    qint64 recvLen=0;
    int commtime = 0;
    bool flag = false;
    unsigned char Sendbuff[200] = {'\0'};
    unsigned char Recvbuff[8192] = {'\0'};
    char MAC[20] = {'\0'};
    memset(Recvbuff,0x00,8192);

    sprintf((char *)Sendbuff,"APS11002610%sEND",ECUID);


    flag = ECU_RSClient->ECU_Communication((char *)Sendbuff,26,(char *)Recvbuff,&recvLen,2000,&commtime);
    if(flag == true)
    {
        if(!memcmp(&Recvbuff[11],"00",2))
        {
            if(Recvbuff[14] == '0')
            {
                ui->comboBox_4->setCurrentIndex(0);
                IPInterfaceSataus(false);
            }else
            {
                ui->comboBox_4->setCurrentIndex(1);
                IPInterfaceSataus(true);
            }

            ui->lineEdit_IPAddress->setText(QString::number(Recvbuff[15])); //IP 1
            ui->lineEdit_IPAddress2->setText(QString::number(Recvbuff[16])); //IP 2
            ui->lineEdit_IPAddress3->setText(QString::number(Recvbuff[17])); //IP 3
            ui->lineEdit_IPAddress4->setText(QString::number(Recvbuff[18])); //IP 4

            ui->lineEdit_Mask->setText(QString::number(Recvbuff[19])); //MASK 1
            ui->lineEdit_Mask2->setText(QString::number(Recvbuff[20])); //MASK 2
            ui->lineEdit_Mask3->setText(QString::number(Recvbuff[21])); //MASK 3
            ui->lineEdit_Mask4->setText(QString::number(Recvbuff[22])); //MASK 4

            ui->lineEdit_gate->setText(QString::number(Recvbuff[23])); //GATE 1
            ui->lineEdit_gate2->setText(QString::number(Recvbuff[24])); //GATE 2
            ui->lineEdit_gate3->setText(QString::number(Recvbuff[25])); //GATE 3
            ui->lineEdit_gate4->setText(QString::number(Recvbuff[26])); //GATE 4

            ui->lineEdit_DNS1->setText(QString::number(Recvbuff[27])); //DNS1 1
            ui->lineEdit_DNS12->setText(QString::number(Recvbuff[28])); //DNS1 2
            ui->lineEdit_DNS13->setText(QString::number(Recvbuff[29])); //DNS1 3
            ui->lineEdit_DNS14->setText(QString::number(Recvbuff[30])); //DNS1 4

            ui->lineEdit_DNS2->setText(QString::number(Recvbuff[31])); //DNS2 1
            ui->lineEdit_DNS22->setText(QString::number(Recvbuff[32])); //DNS2 2
            ui->lineEdit_DNS23->setText(QString::number(Recvbuff[33])); //DNS2 3
            ui->lineEdit_DNS24->setText(QString::number(Recvbuff[34])); //DNS2 4
            memcpy(MAC,&Recvbuff[35],12);
            sprintf(MAC,"%c%c:%c%c:%c%c:%c%c:%c%c:%c%c",MAC[0],MAC[1],MAC[2],MAC[3],MAC[4],MAC[5],MAC[6],MAC[7],MAC[8],MAC[9],MAC[10],MAC[11]);
            MAC[17] = '\0';
            ui->label_mac->setText(MAC);

            statusBar()->showMessage(tr("Get Network Success ... time:%1 ms").arg(commtime), 1000);
        }
        else
        {
            statusBar()->showMessage(tr("Get Network Failed ... time:%1 ms").arg(commtime), 1000);
        }
    }else
    {
        statusBar()->showMessage(tr("Please verify WIFI Connect ..."), 1000);
    }
}

void MainWindow::on_btn_getFlash_clicked()
{
    qint64 recvLen=0;
    bool flag = false;
    int commtime = 0;
    char Sendbuff[200] = {'\0'};
    char Recvbuff[8192] = {'\0'};

    memset(Recvbuff,0x00,8192);
    sprintf(Sendbuff,"APS11002611%sEND",ECUID);
    flag = ECU_RSClient->ECU_Communication(Sendbuff,26,Recvbuff,&recvLen,2000,&commtime);
    if(flag == true)
    {
        if(Recvbuff[12] == '1')
        {   //ECU ID不匹配
            statusBar()->showMessage(tr("ECU ID Mismatching ... time:%1 ms").arg(commtime), 2000);
        }
        else
        {
            unsigned int FlashSize = 0;
            statusBar()->showMessage(tr("ECU Get Flash Size Success ... time:%1 ms").arg(commtime), 2000);

            FlashSize = (Recvbuff[13]&0x000000ff)*16777216+(Recvbuff[14]&0x000000ff)*65536+(Recvbuff[15]&0x000000ff)*256+(Recvbuff[16]&0x000000ff);
            ui->lineEdit_flashsize->setText(QString::number(FlashSize));
        }


    }else
    {
        statusBar()->showMessage(tr("Please verify WIFI Connect ..."), 2000);
    }
}

void MainWindow::on_btn_getWIFI_clicked()
{
    char send[100] = {'\0'};
    char recv[8192] = {'\0'};
    bool flag = false;
    qint64 recvlen,length,num,index,j,SSIDLen;

    send[0] = 0xFF;
    send[1] = 0x00;
    send[2] = 0x01;
    send[3] = 0x01;
    send[4] = 0x02;
    UDPClient1->ECU_Connect();
    flag =UDPClient1->ECU_CommUDP(send, 5, recv, &recvlen, 5000);
    SSID_List.clear();
    if(flag == true)
    {    ui->tableWidget_SSID->setRowCount(0);
        //清空Table中内容
        ui->tableWidget_SSID->clearContents();
        num = recv[4];
        length = 5;

        for(index = 0;index < num;index++)
        {
            SSID_t *SSID = new SSID_t;
            for(j = length;j<recvlen;j++)
            {
                if(recv[j] == 0x00)
                {
                    SSIDLen = j - length;
                    break;
                }
            }
            memcpy(SSID->SSID,&recv[length],SSIDLen);
            SSID->SSID[SSIDLen] = '\0';

            SSID->signalStrength = recv[length+SSIDLen+1];
            SSID_List.push_back(SSID);
            length += SSIDLen+4;
        }
        addSSIDData(ui->tableWidget_SSID,SSID_List);

        QList<SSID_t *>::Iterator iter = SSID_List.begin();
        for ( ; iter != SSID_List.end(); iter++)  {
            delete (*iter);
        }

    }else
    {
        ui->tableWidget_Energy->setRowCount(0);
        //清空Table中内容
        ui->tableWidget_Energy->clearContents();
        statusBar()->showMessage(tr("Please verify WIFI Connect ..."), 2000);
    }
    UDPClient1->ECU_Abrot();
}

void MainWindow::addSSIDData(QTableWidget *table, QList<SSID_t *> &List)
{
    table->setRowCount(0);
    //清空Table中内容
    table->clearContents();

    QList<SSID_t *>::Iterator iter = List.begin();
    for ( ; iter != List.end(); iter++)  {
        int row_count = table->rowCount(); //获取表单行数
        table->insertRow(row_count); //插入新行
        QTableWidgetItem *item = new QTableWidgetItem();
        QTableWidgetItem *item1 = new QTableWidgetItem();

        item->setText((*iter)->SSID);
        item1->setText(QString::number((double)(*iter)->signalStrength));

        item->setBackgroundColor(QColor(0,238,0));
        item1->setBackgroundColor(QColor(0,238,0));

        table->setItem(row_count, 0, item);
        table->setItem(row_count, 1, item1);
    }
}

void MainWindow::on_btn_connect_clicked()
{
    char send[300] = {'\0'};
    char SSID[100] = {'\0'};
    char PassWD[100] = {'\0'};
    char recv[8192] = {'\0'};
    bool flag = false;
    qint64 recvlen,SSIDLen,PassWDLen,length = 0,i = 0,sum = 0;

    SSIDLen = ui->lineEdit_SSID_2->text().length();
    PassWDLen = ui->lineEdit_PassWD->text().length();
    memcpy(SSID,ui->lineEdit_SSID_2->text().toLatin1().data(),SSIDLen);
    SSID[SSIDLen] = '\0';
    memcpy(PassWD,ui->lineEdit_PassWD->text().toLatin1().data(),PassWDLen);
    PassWD[PassWDLen] = '\0';
    send[length++] = 0xFF;
    send[length++] = 0x00;
    send[length++] = 0x01;
    send[length++] = 0x02;
    send[length++] = 0x00;
    memcpy(&send[length],SSID,SSIDLen);
    length += SSIDLen;
    send[length++] = 0x0D;
    send[length++] = 0x0A;
    memcpy(&send[length],PassWD,PassWDLen);
    length += PassWDLen;
    send[1] = (length-3)/256;
    send[2] = (length-3)%256;

    for(i = 1;i<length;i++)
    {
        sum+=send[i];
    }
    send[length++] = sum;
    UDPClient1->ECU_Connect();

    for(i = 1;i<length;i++)
    {
        qDebug("%x ",send[i]);
    }

    flag = UDPClient1->ECU_CommUDP(send, length, recv, &recvlen, 3000);
    if(flag == true)
    {
        if(recv[4] == 0x00)
        {
            statusBar()->showMessage(tr("DON'T Search WIFI SSID ..."), 2000);
        }else
        {
            if(recv[5] == 0x00)
            {
                statusBar()->showMessage(tr("DON'T Password Mismatching ..."), 2000);
            }else
            {
                statusBar()->showMessage(tr("Set Success ..."), 2000);
            }
        }

    }else
    {
        statusBar()->showMessage(tr("Please verify WIFI Connect ..."), 2000);
    }

    UDPClient1->ECU_Abrot();
}

void MainWindow::on_btn_getWIFIStatus_clicked()
{
    char send[100] = "HF-A11ASSISTHREAD";
    char recv[8192] = {'\0'};
    bool flag = false;
    qint64 recvlen;
    UDPClient2->ECU_Connect();
    flag = UDPClient2->ECU_CommUDP(send, 17, recv, &recvlen, 2000);
    if(flag == true)
    {
        UDPClient2->ECU_SendUDP("+ok", 3);
        memset(recv,'\0',8192);
        flag = UDPClient2->ECU_CommUDP("AT+WSLK\n", 9, recv, &recvlen, 3000);
        if(flag == true)
        {
            ui->label_LinkStatus->setText(QString(&recv[4]));
        }

        UDPClient2->ECU_SendUDP("AT+Q\n", 5);
    }else
    {
        statusBar()->showMessage(tr("Please verify WIFI Connect ..."), 2000);
    }
    UDPClient2->ECU_Abrot();
}

void MainWindow::on_tableWidget_SSID_itemClicked(QTableWidgetItem *item)
{
    QString SSID;
    SSID = ui->tableWidget_SSID->item(item->row(),0)->text();
    ui->lineEdit_SSID_2->clear();
    ui->lineEdit_SSID_2->setText(SSID.toLatin1().data());
    ui->lineEdit_PassWD->clear();
    if(!SSID.compare("yuneng_ecu_test"))
    {
        ui->lineEdit_PassWD->setText("123456789");
    }else if(!SSID.compare("yuneng_wifi"))
    {
        ui->lineEdit_PassWD->setText("yunengaps2014");
    }else if(!SSID.compare("yuneng_ecu"))
    {
        ui->lineEdit_PassWD->setText("yunengaps2014");
    }else if(!SSID.compare("TP-LINK_CS"))
    {
        ui->lineEdit_PassWD->setText("yunengaps");
    }else if(!SSID.compare("HUAWEI-6MTDB2"))
    {
        ui->lineEdit_PassWD->setText("shiyanshi2016");
    }


}

void MainWindow::on_btn_setFunction_clicked()
{
    qint64 recvLen=0;
    bool flag = false;
    int commtime = 0;
    unsigned char Sendbuff[200] = {'\0'};
    unsigned char Recvbuff[8192] = {'\0'};
    int select_item = 0;
    memset(Recvbuff,0x00,8192);

    select_item = ui->comboBox_SetFunction->currentIndex();
    //先判断是关闭  还是开启
    if(select_item == 0)
    {   //关闭RSD功能
        sprintf((char *)Sendbuff,"APS11002706%s0END",ECUID);
    }else if(select_item == 1)
    {   //开启RSD功能
        sprintf((char *)Sendbuff,"APS11002706%s1END",ECUID);
    }

    flag = ECU_RSClient->ECU_Communication((char *)Sendbuff,27,(char *)Recvbuff,&recvLen,2000,&commtime);
    if(flag == true)
    {
        if(!memcmp(&Recvbuff[11],"00",2))
        {
            statusBar()->showMessage(tr("Set RSD Function Success ... time:%1 ms").arg(commtime), 1000);
        }
        else
        {
            statusBar()->showMessage(tr("Set RSD Function Failed ... time:%1 ms").arg(commtime), 1000);
        }
    }else
    {
        statusBar()->showMessage(tr("Please verify WIFI Connect ..."), 1000);
    }
}



void MainWindow::on_comboBox_4_activated(int index)
{
    if(index == 0)
    {
        IPInterfaceSataus(false);
    }else if(index == 1)
    {
        IPInterfaceSataus(true);
    }
}

void MainWindow::addPowerData(QTableWidget *table, QList<PowerData_t *> &List)
{
    table->setRowCount(0);
    //清空Table中内容
    table->clearContents();

    QList<PowerData_t *>::Iterator iter = List.begin();
    for ( ; iter != List.end(); iter++)  {
        int row_count = table->rowCount(); //获取表单行数
        table->insertRow(row_count); //插入新行
        QTableWidgetItem *item = new QTableWidgetItem();
        QTableWidgetItem *item1 = new QTableWidgetItem();

        item->setText((*iter)->time);
        item1->setText(QString::number((*iter)->power));

        item->setBackgroundColor(QColor(0,238,0));
        item1->setBackgroundColor(QColor(0,238,0));

        table->setItem(row_count, 0, item);
        table->setItem(row_count, 1, item1);
    }
}


void MainWindow::addEnergyData(QTableWidget *table, QList<EnergyData_t *> &List)
{
    table->setRowCount(0);
    //清空Table中内容
    table->clearContents();

    QList<EnergyData_t *>::Iterator iter = List.begin();
    for ( ; iter != List.end(); iter++)  {
        int row_count = table->rowCount(); //获取表单行数
        table->insertRow(row_count); //插入新行
        QTableWidgetItem *item = new QTableWidgetItem();
        QTableWidgetItem *item1 = new QTableWidgetItem();

        item->setText((*iter)->date);
        item1->setText(QString::number((double)(*iter)->energy));

        item->setBackgroundColor(QColor(0,238,0));
        item1->setBackgroundColor(QColor(0,238,0));

        table->setItem(row_count, 0, item);
        table->setItem(row_count, 1, item1);
    }
}

void MainWindow::on_btn_getDate_clicked()
{
    //获取当前的时间
    ui->dateEdit->setDate(QDate::currentDate());
}

void MainWindow::on_btn_getPower_clicked()
{
    qint64 recvLen=0;
    bool flag = false;
    int commtime = 0;
    char Sendbuff[200] = {'\0'};
    char Recvbuff[8192] = {'\0'};
    int length = 0,index = 0;
    int num = 0;
    int year = ui->dateEdit->date().year();
    int month = ui->dateEdit->date().month();
    int day = ui->dateEdit->date().day();
    memset(Recvbuff,0x00,8192);
    sprintf(Sendbuff,"APS11003712%sEND%02d%02d%02dEND",ECUID,year,month,day);

    flag = ECU_RSClient->ECU_Communication(Sendbuff,37,Recvbuff,&recvLen,5000,&commtime);
    PowerData_List.clear();

    if(flag == true)
    {
        ui->tableWidget_Power->setRowCount(0);
        //清空Table中内容
        ui->tableWidget_Power->clearContents();
        if(Recvbuff[12] == '1')
        {   //ECU ID不匹配
            statusBar()->showMessage(tr("ECU ID Mismatching ... time:%1 ms").arg(commtime), 2000);
        }else if(Recvbuff[12] == '2')
        {
            statusBar()->showMessage(tr("ECU Have no Power Data ... time:%1 ms").arg(commtime), 2000);
        }

        else
        {
            statusBar()->showMessage(tr("ECU Get Power Data Success ... time:%1 ms").arg(commtime), 2000);
            num = (recvLen-24)/4;
            length = 21;
            for(index = 0;index < num;index++)
            {
                PowerData_t *PowerData = new PowerData_t;
                sprintf(PowerData->time,"%02x:%02x",Recvbuff[length],Recvbuff[length+1]);
                PowerData->time[5] = '\0';
                PowerData->power = (Recvbuff[length+2] & 0x000000ff)*256 + (Recvbuff[length+3] & 0x000000ff);

                PowerData_List.push_back(PowerData);
                length += 4;

            }
            addPowerData(ui->tableWidget_Power,PowerData_List);

            QList<PowerData_t *>::Iterator iter = PowerData_List.begin();
            for ( ; iter != PowerData_List.end(); iter++)  {
                delete (*iter);
            }
        }


    }else
    {
        ui->tableWidget_Power->setRowCount(0);
        //清空Table中内容
        ui->tableWidget_Power->clearContents();
        statusBar()->showMessage(tr("Please verify WIFI Connect ..."), 2000);
    }

}

void MainWindow::on_btn_getEnergy_clicked()
{
    qint64 recvLen=0;
    bool flag = false;
    int commtime = 0;
    char Sendbuff[200] = {'\0'};
    char Recvbuff[8192] = {'\0'};
    int length = 0,index = 0;
    int num = 0;
    int select_item = ui->comboBox->currentIndex();
    int year = QDateTime::currentDateTime().date().year();
    int month = QDateTime::currentDateTime().date().month();
    int day = QDateTime::currentDateTime().date().day();

    memset(Recvbuff,0x00,8192);
    sprintf(Sendbuff,"APS11003908%sEND%02d%02d%02d%02dEND",ECUID,year,month,day,select_item);
    qDebug("send:%s\n",Sendbuff);

    flag = ECU_RSClient->ECU_Communication(Sendbuff,39,Recvbuff,&recvLen,5000,&commtime);
    EnergyData_List.clear();

    if(flag == true)
    {
        ui->tableWidget_Energy->setRowCount(0);
        //清空Table中内容
        ui->tableWidget_Energy->clearContents();
        if(Recvbuff[12] == '1')
        {   //ECU ID不匹配
            statusBar()->showMessage(tr("ECU ID Mismatching ... time:%1 ms").arg(commtime), 2000);
        }else if(Recvbuff[12] == '2')
        {
            statusBar()->showMessage(tr("ECU Don't Have Energy Data ... time:%1 ms").arg(commtime), 2000);
        }
        else
        {
            statusBar()->showMessage(tr("ECU Get Energy Data Success ... time:%1 ms").arg(commtime), 2000);
            num = (recvLen-26)/6;
            length = 23;
            for(index = 0;index < num;index++)
            {
                EnergyData_t *EnergyData = new EnergyData_t;

                sprintf(EnergyData->date,"%02x%02x-%02x-%02x",Recvbuff[length],Recvbuff[length+1],Recvbuff[length+2],Recvbuff[length+3]);
                EnergyData->energy = ((double)((Recvbuff[length+4] & 0x000000ff)*256 + (Recvbuff[length+5] & 0x000000ff))/100);
                EnergyData_List.push_back(EnergyData);
                length += 6;
            }
            addEnergyData(ui->tableWidget_Energy,EnergyData_List);

            QList<EnergyData_t *>::Iterator iter = EnergyData_List.begin();
            for ( ; iter != EnergyData_List.end(); iter++)  {
                delete (*iter);
            }
        }


    }else
    {
        ui->tableWidget_Energy->setRowCount(0);
        //清空Table中内容
        ui->tableWidget_Energy->clearContents();
        statusBar()->showMessage(tr("Please verify WIFI Connect ..."), 2000);
    }

}


void MainWindow::on_btn_getDate_2_clicked()
{
    //获取当前的时间
    ui->dateEdit_2->setDate(QDate::currentDate());
}



void MainWindow::addINFOTableData(QTableWidget *table, QList<OPT700_RS_INFO *> &List)
{
    table->setRowCount(0);
    //清空Table中内容
    table->clearContents();

    QList<OPT700_RS_INFO *>::Iterator iter = List.begin();
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


        item->setText((*iter)->time);
        item1->setText(QString::number((*iter)->PV1));
        item2->setText(QString::number((*iter)->PI1));

        item3->setText(QString::number((*iter)->Power1));
        item4->setText(QString::number((*iter)->PV2));
        item5->setText(QString::number((*iter)->PI2));
        item6->setText(QString::number((*iter)->Power2));


        item->setBackgroundColor(QColor(0,238,0));
        item1->setBackgroundColor(QColor(0,238,0));
        item2->setBackgroundColor(QColor(0,238,0));
        item3->setBackgroundColor(QColor(0,238,0));
        item4->setBackgroundColor(QColor(0,238,0));
        item5->setBackgroundColor(QColor(0,238,0));
        item6->setBackgroundColor(QColor(0,238,0));

        table->setItem(row_count, 0, item);
        table->setItem(row_count, 1, item1);
        table->setItem(row_count, 2, item2);
        table->setItem(row_count, 3, item3);
        table->setItem(row_count, 4, item4);
        table->setItem(row_count, 5, item5);
        table->setItem(row_count, 6, item6);
    }
}


void MainWindow::on_btn_getInfo_clicked()
{
    qint64 recvLen=0;
    char uid_str[13] = {'\0'};
    char uid[7] = {'\0'};
    bool flag = false;
    int commtime = 0;
    char Sendbuff[200] = {'\0'};
    char Recvbuff[8192] = {'\0'};
    int optcount = 0;
    int length = 0,index = 0;
    int year = ui->dateEdit_2->date().year();
    int month = ui->dateEdit_2->date().month();
    int day = ui->dateEdit_2->date().day();

    memset(Recvbuff,0x00,200);
    sprintf(Sendbuff,"APS11004307%sEND%04d%02d%02d000000END",ECUID,year,month,day);
    memcpy(uid_str,ui->comboBox_UID->currentText().toLatin1().data(),12);
    uid[0] = (uid_str[0] - '0')*0x10 + (uid_str[1] - '0');
    uid[1] = (uid_str[2] - '0')*0x10 + (uid_str[3] - '0');
    uid[2] = (uid_str[4] - '0')*0x10 + (uid_str[5] - '0');
    uid[3] = (uid_str[6] - '0')*0x10 + (uid_str[7] - '0');
    uid[4] = (uid_str[8] - '0')*0x10 + (uid_str[9] - '0');
    uid[5] = (uid_str[10] - '0')*0x10 + (uid_str[11] - '0');
    memcpy(&Sendbuff[34],uid,6);

    flag = ECU_RSClient->ECU_Communication(Sendbuff,43,Recvbuff,&recvLen,15000,&commtime);
    OPT700_RS_INFOList.clear();

    if(flag == true)
    {
        //回复的是02命令
        if(!memcmp(&Recvbuff[9],"07",2))
        {
            if(Recvbuff[12] == '1')
            {   //ECU ID不匹配
                statusBar()->showMessage(tr("ECU ID Mismatching ... time:%1 ms").arg(commtime), 2000);
            }else if(Recvbuff[12] == '2')
            {
                statusBar()->showMessage(tr("ECU Don't Have Data ... time:%1 ms").arg(commtime), 2000);
            }
            else
            {
                optcount = (recvLen - 30)/12;
                qDebug("optcount:%d\n",optcount);
                length = 27;

                for(index = 0;index < optcount;index++)
                {
                    OPT700_RS_INFO *opt700_rs_info = new OPT700_RS_INFO;
                    sprintf(opt700_rs_info->time,"%02x:%02x",Recvbuff[length],Recvbuff[length+1]);
                    opt700_rs_info->PV1 = Recvbuff[length+2]*256+Recvbuff[length+3];
                    opt700_rs_info->PI1 = Recvbuff[length+4];
                    opt700_rs_info->Power1 = Recvbuff[length+5]*256+Recvbuff[length+6];
                    opt700_rs_info->PV2 = Recvbuff[length+7]*256+Recvbuff[length+8];
                    opt700_rs_info->PI2 = Recvbuff[length+9];
                    opt700_rs_info->Power2 = Recvbuff[length+10]*256+Recvbuff[length+11];
                    OPT700_RS_INFOList.push_back(opt700_rs_info);

                    length += 12;

                }

                statusBar()->showMessage(tr("Get RSD Info Success ... time:%1 ms").arg(commtime), 2000);

                addINFOTableData(ui->tableWidget_Info,OPT700_RS_INFOList);
                QList<OPT700_RS_INFO *>::Iterator iter = OPT700_RS_INFOList.begin();
                for ( ; iter != OPT700_RS_INFOList.end(); iter++)  {
                    delete (*iter);
                }

            }
        }

    }else
    {
        ui->tableWidget_Info->setRowCount(0);
        //清空Table中内容
        ui->tableWidget_Info->clearContents();
        statusBar()->showMessage(tr("Please verify WIFI Connect ..."), 2000);
    }
}

void MainWindow::on_btn_config_clicked()
{
    if(ECU_RSClient != NULL)
    {
        delete ECU_RSClient;
        ECU_RSClient = NULL;
    }

    ECU_RSClient = new RSClient(ui->lineEdit_IP->text(),ui->lineEdit_Port->text().toUShort());
    statusBar()->showMessage(tr("Configure IP And Port Successful ..."), 1000);
}

