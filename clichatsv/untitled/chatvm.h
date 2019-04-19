#ifndef CHATVM_H
#define CHATVM_H

#include <QObject>
#include "networkmng.h"
#include <QFile>
#include <QTextStream>
#include <QDateTime>

class ChatVM : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ name WRITE setname NOTIFY nameChanged)
    Q_PROPERTY(QString message READ message WRITE setMessage NOTIFY messageChanged)

public:
    ChatVM();
    Q_INVOKABLE void chat(QString message);
    Q_INVOKABLE void init();
    Q_INVOKABLE void disconnect();
    Q_INVOKABLE void writeLog();

    QString name() const;

    QString message() const;

private:
    QString m_name = "user111";

    QString m_message;

public slots:
    void setname(QString name);
    void setMessage(QString message);
    void receiveMessage(QString user, QString message);
    void handleName(QString name);

signals:
    void nameChanged(QString name);
    void messageChanged(QString message);
};

#endif // CHATVM_H
