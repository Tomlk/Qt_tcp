#pragma once
#include <QtWidgets/QMainWindow>
#include "ui_Chat.h"
#include "qtcpsocket.h"
#include "qmessagebox.h"
#include "GBK.h"
class Chat : public QMainWindow
{
	Q_OBJECT

public:
	Chat(QWidget *parent = Q_NULLPTR);

private:
	Ui::ChatClass ui;
	QTcpSocket* socket;
private slots:
	void Bt_connect();
	void Bt_send();
	void socket_read_data();
	void socket_disconnected();
};
