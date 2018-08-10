#include "ChatServer.h"
//https://blog.csdn.net/u014695839/article/details/70041771
ChatServer::ChatServer(QWidget *parent)
	: QMainWindow(parent)
{

	ui.setupUi(this);
	socket1 = new QTcpSocket();
	server = new QTcpServer();
	//Á¬½ÓÐÅºÅ²Û
	connect(ui.Bt_listen, SIGNAL(clicked()), this, SLOT(Bt_listen()));
	connect(ui.Bt_send, SIGNAL(clicked()), this, SLOT(Bt_send()));
	connect(server, SIGNAL(newConnection()), this, SLOT(server_new_conncet()));
	ui.Bt_send->setEnabled(false);
	ui.Edit_show->setReadOnly(true);
}
ChatServer::~ChatServer()
{
	server->close();
	server->deleteLater();
//	delete ui;
}
void ChatServer::Bt_listen()
{
	if (ui.Bt_listen->text() == GBK::s2q("ÕìÌý"))
	{
		int port = ui.Port_edit->text().toInt();
		if (!server->listen(QHostAddress::Any, port))
		{
			QMessageBox::warning(this, "Error", server->errorString(), QMessageBox::Yes);
			return;
		}
		ui.Bt_listen->setText(GBK::s2q("È¡ÏûÕìÌý"));

	}
	else
	{
		if (socket1->state()==QAbstractSocket::ConnectedState)
		{
			socket1->disconnectFromHost();
		}
		server->close();
		ui.Bt_listen->setText(GBK::s2q("ÕìÌý"));
		ui.Bt_send->setEnabled(false);
	}

}
void ChatServer::Bt_send()
{
	QString msgsend = ui.Edit_input->toPlainText();
	socket1->write(msgsend.toLocal8Bit());
	QString str =  ui.Edit_show->toPlainText() + "\n";
	str += ("Server:"+msgsend);
	ui.Edit_show->setPlainText(str);
	ui.Edit_input->clear();
	socket1->flush();

}
void ChatServer::server_new_conncet()
{
	socket1 = server->nextPendingConnection();
	connect(socket1, SIGNAL(readyRead()), this, SLOT(socket_read_data()));
	connect(socket1, SIGNAL(disconnected()), this, SLOT(socket_disconnected()));
	ui.Bt_send->setEnabled(true);

}
void ChatServer::socket_read_data()
{

	QTcpSocket* obj = (QTcpSocket*)sender();
	QByteArray BAmsg = obj->readAll();
	QString msg = QString::fromLocal8Bit(BAmsg);
	QString str = ui.Edit_show->toPlainText()+"\n";
	str += ("Client:"+msg);
	ui.Edit_show->setPlainText(str);
}
void ChatServer::socket_disconnected()
{
	ui.Bt_send->setEnabled(false);
	QMessageBox::information(this, "Disconnected", "Connection dropped!", QMessageBox::Yes);
	//ui.Bt_listen->setText(GBK::s2q(""));

}