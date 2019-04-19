#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "networkmng.h"
#include "loginvm.h"
#include "chatvm.h"
#include <QQmlContext>

int main(int argc, char *argv[])
{
    NetWorkMng *instance = NetWorkMng::getInstance();
//    instance->listen(QHostAddress::Any, 4444);

    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;
    QQmlContext *context = engine.rootContext();
    context->setContextProperty("network", instance);

    QString uriStr = "Control";
    QByteArray ba = uriStr.toLatin1();
    const char *uri = ba.data();

    qmlRegisterType<LoginVM>(uri, 1, 0, "LoginVM");
    qmlRegisterType<ChatVM>(uri, 1, 0, "ChatVM");

    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    engine.load(QUrl(QLatin1String("qrc:/main.qml")));

    return app.exec();
}
