#ifndef RSCLIENT_H
#define RSCLIENT_H
#include <QtNetwork>
#include "String.h"
#include "QDebug"


class RSClient
{
public:
    RSClient();
    ~RSClient();


    bool ECU_Communication(char *Sendbuff,char *Recvbuff,int timeout);



private:
    QTcpSocket *rsClient;
};

#endif // RSCLIENT_H
