#include "networkmng.h"
#include "socketthread.h"

NetWorkMng *NetWorkMng::instance = 0;

NetWorkMng::NetWorkMng(QObject *parent) : QTcpSocket(parent)
{
    socket = new QTcpSocket(this);
    QObject::connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()));
    QObject::connect(socket, SIGNAL(connected()), this, SLOT(connected()));
}

NetWorkMng *NetWorkMng::getInstance()
{
    if (!instance) {
        instance = new NetWorkMng();
    }
    return instance;
}

void NetWorkMng::disconnect()
{
    socket->disconnectFromHost();
}

void NetWorkMng::connectHost(QString ip, qint16 port)
{
    socket->abort();
    socket->connectToHost(ip, port);
}

void NetWorkMng::sendMessage(QString message)
{
    message = message.trimmed();
    if(!message.isEmpty())
    {
        socket->write(QString(message + "\n").toUtf8());
    }
}

void NetWorkMng::readyRead()
{
    while(socket->canReadLine())
    {
        QString line = QString::fromUtf8(socket->readLine()).trimmed();

        QRegExp messageRegex("^([^:]+):(.*)$");

        QRegExp usersRegex("^/users:(.*)$");

        if(usersRegex.indexIn(line) != -1)
        {
            QStringList users = usersRegex.cap(1).split(",");
        }
        else if(messageRegex.indexIn(line) != -1)
        {
            QString user = messageRegex.cap(1);
            QString message = messageRegex.cap(2);

            emit receiveMessage(user, message);

            qDebug() << "receive message: " << message;
        }
    }
}

void NetWorkMng::connected()
{
    emit connectSuccess();
}

