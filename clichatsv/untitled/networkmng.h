#ifndef NETWORKMNG_H
#define NETWORKMNG_H

#include <QtNetwork>
#include <QtCore>
#include <QObject>

class NetWorkMng : public QTcpSocket
{
    Q_OBJECT
public:
    static NetWorkMng *getInstance();
    Q_INVOKABLE void connectHost(QString ip, qint16 port);
    void sendMessage(QString message);
    void disconnect();

private:
    static NetWorkMng *instance;
    explicit NetWorkMng(QObject *parent=0);
    QTcpSocket *socket;
    QSet<QTcpSocket*> clients;

private slots:
    void readyRead();
    void connected();

signals:
    void connectSuccess();
    void receiveMessage(QString user, QString message);

};

#endif // NETWORKMNG_H
