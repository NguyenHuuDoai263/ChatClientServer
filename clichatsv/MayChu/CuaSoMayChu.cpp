#include "CuaSoMayChu.h"
int stt=2;
CuaSoMayChu::CuaSoMayChu () {
    // Tao va sap xep widget
    trangThai = new QLabel();
    thoat = new QPushButton(tr("Thoát"));
    connect(thoat, SIGNAL(clicked()), qApp, SLOT(quit()));

    QVBoxLayout *lop = new QVBoxLayout();
    lop->addWidget(trangThai);
    lop->addWidget(thoat);
    setLayout(lop);

    setWindowTitle(tr("Máy chủ Chat room!"));

    // Quan ly may chu
    mayChu = new QTcpServer(this);
    if (!mayChu->listen(QHostAddress::Any, 1080)) { // Khoi dong may chu o cong 1080 và tren tat ca cac dia chi IP cua may
        // Neu may chu chua duoc khoi dong
        trangThai->setText(tr("Máy chủ chưa khởi động được. Lý do :<br />") +mayChu->errorString());
    } else {
        // Neu may chu duoc khoi dong thanh cong
        trangThai->setText(tr("Máy chủ được mở trên cổng <strong>") + QString::number(mayChu->serverPort()) + tr("</strong>.<br />Người dùng có thể nhanh chóng kết nối để tán gẫu."));
        connect(mayChu, SIGNAL(newConnection()), this, SLOT(ketNoiMoi()));
    }

    kichThuoc = 0;
}


void CuaSoMayChu::ketNoiMoi() {
    qDebug() << "New connection";

    QTcpSocket *nguoiDungMoi = mayChu->nextPendingConnection();
    clients.insert(nguoiDungMoi);

    connect(nguoiDungMoi, SIGNAL(readyRead()), this, SLOT(nhanDuLieu()));
    connect(nguoiDungMoi, SIGNAL(disconnected()), this, SLOT(ngatKetNoi()));
}

void CuaSoMayChu::nhanDuLieu() {
    QTcpSocket *client = (QTcpSocket*)sender();
    while(client->canReadLine())
    {
        QString line = QString::fromUtf8(client->readLine()).trimmed();

        QRegExp meRegex("^/me:(.*)$");

        if(meRegex.indexIn(line) != -1)
        {
            QString user = meRegex.cap(1);
            users[client] = user;
            foreach(QTcpSocket *client, clients)
                client->write(QString("Server:" + user + " has joined.\n").toUtf8());
        }
        else if(users.contains(client))
        {
            QString message = line;
            QString user = users[client];
            qDebug() << "User:" << user;
            qDebug() << "Message:" << message;

            foreach(QTcpSocket *otherClient, clients)
                otherClient->write(QString(user + ":" + message + "\n").toUtf8());
        }
        else
        {
            qWarning() << "Got bad message from client:" << client->peerAddress().toString() << line;
        }
    }
}

void CuaSoMayChu::ngatKetNoi() {
    QTcpSocket *client = (QTcpSocket*)sender();
    qDebug() << "Client disconnected:" << client->peerAddress().toString();

    clients.remove(client);

    QString user = users[client];
    users.remove(client);

//    sendUserList();
    foreach(QTcpSocket *client, clients)
        client->write(QString("Server:" + user + " has left.\n").toUtf8());
}




