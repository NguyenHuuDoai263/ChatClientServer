#ifndef LOGINVM_H
#define LOGINVM_H

#include <QObject>
#include <QtNetwork>
#include <QtCore>
#include "chatvm.h"

class LoginVM : public QObject
{
    Q_OBJECT
public:
    LoginVM();

    Q_INVOKABLE void connect(QString ip, int port);
    Q_INVOKABLE void init();

public slots:
    void connected();
signals:
    void connectSuccess();
};

#endif // LOGINVM_H
