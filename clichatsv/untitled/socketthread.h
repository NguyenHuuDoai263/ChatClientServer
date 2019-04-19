#ifndef SOCKETTHREAD_H
#define SOCKETTHREAD_H


#include <QThread>
#include <QObject>
#include <QDataStream>
#include <QTcpSocket>

class QTcpSocket;

class SocketThread: public QThread
{
    Q_OBJECT
public:
    SocketThread(qintptr descriptor, QObject *parent = 0);
    ~SocketThread();

protected:
    void run() Q_DECL_OVERRIDE;

private slots:
    void onConnected();
    void onReadyRead();
    void onDisconnected();

private:
    QTcpSocket *m_socket;
    qintptr m_descriptor;
};

#endif // SOCKETTHREAD_H
