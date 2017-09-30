#ifndef RSCLIENT_H
#define RSCLIENT_H
#include <QtNetwork>
#include "String.h"
#include "QDebug"


class RSClient
{
public:
    RSClient();
    RSClient(QString ip,quint16 port);
    ~RSClient();


    bool ECU_Communication(char *Sendbuff,qint64 sendLen, char *Recvbuff,qint64 *recvLen,int timeout,int *commtime);


    QString IP;
    quint16 Port;
private:
    QTcpSocket *rsClient;
};

#endif // RSCLIENT_H
