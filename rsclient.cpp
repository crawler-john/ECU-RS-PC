#include "rsclient.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

RSClient::RSClient()
{
    this->IP = "10.10.100.254";
    this->Port = 8899;
    rsClient = new QTcpSocket;
}

RSClient::RSClient(QString ip, quint16 port)
{
    this->IP = "192.168.7.1";
    this->Port = 8899;
    rsClient = new QTcpSocket;
}

RSClient::~RSClient()
{
    delete rsClient;
    rsClient = NULL;
}

bool RSClient::ECU_Communication(char *Sendbuff,qint64 sendLen, char *Recvbuff,qint64 *recvLen,int timeout,int *commtime)
{
    bool flag;
    int length = 0,read_Size = 0;
    rsClient->connectToHost(QHostAddress(IP), Port);


    rsClient->write(Sendbuff,sendLen);
    //获取开始时间
    clock_t start = clock();   //记录开始时间


    //读取数据，如果读到的是\n  表示接受完毕
    while(1)
    {
       flag =  rsClient->waitForReadyRead(timeout);
       if(flag == false)
       {
           *recvLen = 0;
            break;
       }else
       {
           //读到最后个字节为'\n'  表示读取结束

           read_Size = rsClient->read(&Recvbuff[length],8192);
           length+= read_Size;
           qDebug("recvLen: %d   length : %d    %d\n",read_Size,length,Recvbuff[(length-1)]);

           if(Recvbuff[(length-1)] == '\n')
           {
               *recvLen =length;
                break;
           }
       }
    }
    //获取结束时间
    clock_t finish = clock();   //结束时间
    int duration = (finish - start) ;
    *commtime = duration;
    qDebug("Time iterations: %d ms",duration);

    qDebug("recv :%d\n",*recvLen);
    qDebug("recv :%s\n",Recvbuff);
    rsClient->abort();

    if(*recvLen > 0)
    {
        return true;
    }else
    {
        return false;
    }
}
