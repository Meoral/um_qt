#include "mainwindow.h"
#include <QApplication>
//#include <qdesktopwidget.h>

#include "window.h"

int main(int argc, char *argv[])
{
	//QApplication::setAttribute(Qt::AA_EnableHighDpiScaling); //��ӶԸ߷���֧��
	QApplication a(argc, argv);
	MainWindow w;
	w.resize(1200, 1000);

	//QDesktopWidget *desk = QApplication::desktop();
	//QRect deskRect = desk->availableGeometry();

	w.show();

	//w.move((deskRect.width() - w.width()) / 2, (deskRect.height() - w.height()) / 2);

	return a.exec();
}
