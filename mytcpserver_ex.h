#ifndef MYSERVER_EX_H
#define MYSERVER_EX_H
#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>

#include <QtNetwork>
#include <QByteArray>
#include <QDebug>

class MyTcpServer : public QObject
{
    Q_OBJECT
public:
    explicit MyTcpServer(QObject *parent = nullptr);
    ~MyTcpServer();
public slots:
    void slotNewConnection();
    void slotClientDisconnected();
    void slotServerRead();

private:
    QTcpServer * mTcpServer;
   // QTcpSocket * mTcpSocket;
    QMap <int,QTcpSocket*>  mTcpSocket;
    int server_status;
};
#endif // MYSERVER_H







