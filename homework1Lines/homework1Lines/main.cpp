#include "lines.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Lines w;
	w.show();
	return a.exec();
}
