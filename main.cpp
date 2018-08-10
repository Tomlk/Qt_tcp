#include "Chat.h"
#include "ChatServer.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Chat w;
	ChatServer s;
	w.show();
	s.show();
	return a.exec();
}
