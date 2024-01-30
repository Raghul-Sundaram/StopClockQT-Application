#include "clock.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	clock_1 w;
	w.show();
	return a.exec();
}
