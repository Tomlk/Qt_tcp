#pragma once
#include <QtWidgets/QMainWindow>
#include "ui_ChatServer.h"
#include "qtcpsocket.h"
#include "qtcpserver.h"
#include "qmessagebox.h"
#include "GBK.h"
class ChatServer : public QMainWindow
{
	Q_OBJECT

public:
	ChatServer(QWidget *parent = Q_NULLPTR);
	~ChatServer();

private:
	Ui::MainWindow ui;
	QTcpSocket* socket1;
	QTcpServer* server;
private slots:
	void Bt_listen();
	void Bt_send();
	void server_new_conncet();
	void socket_read_data();
	void socket_disconnected();
};
