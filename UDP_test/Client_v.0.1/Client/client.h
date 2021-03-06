#ifndef CLIENT_H
#define CLIENT_H

#include <QMainWindow>
#include <QTcpSocket>

#include <settings.h>

namespace Ui {
class Client;
}

class QUdpSocket;
class QTimer;

class Client : public QMainWindow
{
    Q_OBJECT

public:
    explicit Client(QWidget *parent = 0);
    ~Client();

private slots:
    void on_actionSettings_triggered();

    void on_actionExit_triggered();

    void broadcastDatagram();

    void on_ON_pushButton_clicked();

    void on_OFF_pushButton_clicked();

private:
    Ui::Client *ui;
    QUdpSocket *udpSocket;
    QTimer *timer;
    int messageNo;
};

#endif // CLIENT_H
