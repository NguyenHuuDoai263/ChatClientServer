#include "loginvm.h"
#include "networkmng.h"

LoginVM::LoginVM()
{

}

void LoginVM::connect(QString ip, int port)
{
    NetWorkMng::getInstance()->connectHost(ip, static_cast<qint16>(port));
}

void LoginVM::connected()
{
    emit connectSuccess();
    NetWorkMng::getInstance()->sendMessage(QString("/me: user111\n").toUtf8());
}

void LoginVM::init()
{
    QObject::connect(NetWorkMng::getInstance(), &NetWorkMng::connectSuccess, this, &LoginVM::connected);
}
