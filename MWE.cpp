#include "MWE.h"
#include <QApplication>
#include <QWidget>
#include <Eigen/Geometry>

using namespace std;

int main(int argc, char** argv)
{
	QApplication app(argc, argv);
	QWidget widget;
	widget.show();

	Eigen::Affine3d aff;

	return app.exec();
}
