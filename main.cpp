#include "mainwindow.h"
#include <QApplication>

#include "window.h"

int main(int argc, char *argv[])
{
	QApplication::setAttribute(Qt::AA_EnableHighDpiScaling); //��ӶԸ߷���֧��
	QApplication a(argc, argv);
	MainWindow w;
	w.show();
	return a.exec();
}
