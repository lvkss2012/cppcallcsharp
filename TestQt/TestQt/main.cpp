#pragma execution_character_set("utf-8")
#include "testqt.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	TestQt w;
	w.show();
	return a.exec();
}
