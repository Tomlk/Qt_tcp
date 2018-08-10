#include "Chat.h"
//https://blog.csdn.net/u014695839/article/details/70041771
Chat::Chat(QWidget *parent)
	: QMainWindow(parent)
{

	ui.setupUi(this);
	socket = new QTcpSocket();

	//连接信号槽
	connect(socket, SIGNAL(readyRead()), this, SLOT(socket_read_data()));
	connect(socket, SIGNAL(disconnected()), this, SLOT(socket_disconnected()));
	connect(ui.Bt_connect, SIGNAL(clicked()), this, SLOT(Bt_connect()));
	connect(ui.Bt_send, SIGNAL(clicked()), this, SLOT(Bt_send()));
	ui.Bt_send->setEnabled(false);
	ui.Text_show->setReadOnly(true);
}
void Chat::Bt_connect()
{
	if (ui.Bt_connect->text() == GBK::s2q("连接"))
	{
		QString IP;
		int port;
		IP = ui.IP_edit->text();
		port = ui.Port_edit->text().toInt();
		socket->abort();//取消已有的连接
		socket->connectToHost(IP, port);

		if (!socket->waitForConnected(10000))
		{
			QMessageBox::warning(this, "Failed", "Connection failed!", QMessageBox::Yes);
			return;
		}
		ui.Bt_send->setEnabled(true);
		ui.Bt_connect->setText(GBK::s2q("断开连接"));
	}
	else
	{
		socket->disconnectFromHost();
		ui.Bt_connect->setText(GBK::s2q("连接"));
		ui.Bt_send->setEnabled(false);
	}
}
void Chat::Bt_send()
{
	QString msgsend = ui.Text_input->toPlainText();
	socket->write(msgsend.toLocal8Bit());
	QString str = ui.Text_show->toPlainText()+"\n";
	str += ("Client:"+msgsend);
	ui.Text_show->setPlainText(str);
	ui.Text_input->clear();
	socket->flush();
}
void Chat::socket_read_data()
{
	
	QTcpSocket* obj = (QTcpSocket*)sender();
	QByteArray BAmsg = obj->readAll();
	QString msg = QString::fromLocal8Bit(BAmsg);
	QString str = ui.Text_show->toPlainText()+"\n";
	str += ("Server:"+msg);
	ui.Text_show->setPlainText(str);
}
void Chat::socket_disconnected()
{
	ui.Bt_send->setEnabled(false);
	ui.Bt_connect->setText(GBK::s2q("连接"));


}