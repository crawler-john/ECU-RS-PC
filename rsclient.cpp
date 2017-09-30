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
    //��ȡ��ʼʱ��
    clock_t start = clock();   //��¼��ʼʱ��


    //��ȡ���ݣ������������\n  ��ʾ�������
    while(1)
    {
       flag =  rsClient->waitForReadyRead(timeout);
       if(flag == false)
       {
           *recvLen = 0;
            break;
       }else
       {
           //���������ֽ�Ϊ'\n'  ��ʾ��ȡ����

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
    //��ȡ����ʱ��
    clock_t finish = clock();   //����ʱ��
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
