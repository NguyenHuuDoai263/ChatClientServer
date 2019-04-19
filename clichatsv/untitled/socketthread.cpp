#include "socketthread.h"

SocketThread::SocketThread(qintptr descriptor, QObject *parent)
    :  QThread(parent), m_descriptor(descriptor)
{

}

SocketThread::~SocketThread(){
    delete m_socket;
}

void SocketThread::run()
{
    qDebug() << Q_FUNC_INFO;
    m_socket = new QTcpSocket();
    m_socket->setSocketDescriptor(m_descriptor);

    connect(m_socket, SIGNAL(readyRead()),    this, SLOT(onReadyRead()), Qt::DirectConnection);
    connect(m_socket, SIGNAL(disconnected()), this, SLOT(onDisconnected()), Qt::DirectConnection);

    exec();
}

void SocketThread::onReadyRead()
{
    QDataStream in(m_socket);
    in.setVersion(QDataStream::Qt_5_5);

    QString message;
    in >> message;
    qDebug() << message;

//    m_socket->disconnectFromHost();
}

void SocketThread::onDisconnected()
{
    m_socket->close();
    // Exit event loop
    quit();
}

void SocketThread::onConnected()
{
    qDebug() << "On connected";
}
