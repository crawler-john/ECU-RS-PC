#include "rsclient.h"

RSClient::RSClient()
{
    rsClient = new QTcpSocket;
}

RSClient::~RSClient()
{
    delete rsClient;
    rsClient = NULL;
}

bool RSClient::ECU_Communication(char *Sendbuff,qint64 sendLen, char *Recvbuff,qint64 *recvLen,int timeout)
{
    bool flag;
    rsClient->connectToHost(QHostAddress("10.10.100.254"), 8899);
    rsClient->write(Sendbuff,sendLen);
    flag =  rsClient->waitForReadyRead(timeout);
    *recvLen = rsClient->read(Recvbuff,8192);
    /*
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
            *recvLen = rsClient->read(Recvbuff,8192);
           qDebug("recvLen: %d\n",*recvLen);
           if(Recvbuff[(*recvLen-1)] == '\n')
           {
                break;
           }
       }
    }
    */
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
