#ifndef CUASOMAYCHU_H
#define CUASOMAYCHU_H

#include <QtWidgets>
#include <QtNetwork>
#include <QMap>
#include <QTime>
class CuaSoMayChu : public QWidget {
    Q_OBJECT

public:
    CuaSoMayChu();

private slots:
    void ketNoiMoi();
    void nhanDuLieu();
    void ngatKetNoi();

private:
    QLabel *trangThai;
    QPushButton *thoat;

    QTcpServer *mayChu;
    QList<QTcpSocket *> nguoiDung;
    quint16 kichThuoc;
    QMap <QString,QString> infoNguoiDung;
    QTcpSocket *nguoiDungHt;
    QTime starttime;
    QList<QString> namelist;

    QTcpServer *server;
    QSet<QTcpSocket*> clients;
    QMap<QTcpSocket*,QString> users;

};



#endif
