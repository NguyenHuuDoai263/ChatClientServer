#include "chatvm.h"

ChatVM::ChatVM()
{
    connect(this, SIGNAL(nameChanged(QString)), this, SLOT(handleName(QString)));
}

void ChatVM::init()
{
    QObject::connect(NetWorkMng::getInstance(), &NetWorkMng::receiveMessage, this, &ChatVM::receiveMessage);
}

void ChatVM::handleName(QString name)
{
    NetWorkMng::getInstance()->sendMessage(QString("/me: " + name  + "\n").toUtf8());
}

QString ChatVM::name() const
{
    return m_name;
}

void ChatVM::chat(QString message)
{
    NetWorkMng::getInstance()->sendMessage(message);
}

void ChatVM::receiveMessage(QString user, QString message)
{
    QDateTime currentTime;
    QString timeStr = currentTime.currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
    setMessage(timeStr + "  " + user + ": " + message);
}

void ChatVM::disconnect()
{
    writeLog();
    NetWorkMng::getInstance()->disconnect();
}

void ChatVM::writeLog()
{
    QString path= QCoreApplication::applicationDirPath() + QString("/log.txt");
    QFile file(path);
    if(!file.open(QIODevice::WriteOnly)){
        qDebug() << "can't open file";
        file.close();
    } else {
        qDebug() << "write file success";
        QTextStream out(&file);
        out << m_message.toUtf8();
        file.close();
    }
}

QString ChatVM::message() const
{
    return m_message;
}

void ChatVM::setname(QString name)
{
    if (m_name == name)
        return;

    m_name = name;
    emit nameChanged(name);
}

void ChatVM::setMessage(QString message)
{
    m_message = m_message + "\n" + message ;
    emit messageChanged(message);
}
