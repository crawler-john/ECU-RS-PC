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

bool RSClient::ECU_Communication(char *Sendbuff, char *Recvbuff,int timeout)
{
    qint64 recvcount = 0;
    rsClient->connectToHost(QHostAddress("192.168.1.106"), 8899);
    rsClient->write(Sendbuff);
    rsClient->waitForReadyRead(timeout);
    recvcount = rsClient->read(Recvbuff,4096);
    qDebug("%s\n",Recvbuff);
    rsClient->abort();
    if(recvcount > 0)
    {
        return true;
    }else
    {
        return false;
    }
}
