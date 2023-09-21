#include "ellipse.h"

Ellipse::Ellipse()
{
	type = figureType::ellipse;
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dist(1, 20);
	funcParms.push_back(dist(gen));
	funcParms.push_back(dist(gen));
	cout << "radii 1 = " << funcParms[0] << endl << "radii 2 = " << funcParms[1] << endl;
}

void Ellipse::getCoordinate(double t)
{
	double x = funcParms[0] * cos(t), y = funcParms[1] * sin(t), z = 0;
	x = floor(x * 100) / 100;
	y = floor(y * 100) / 100;
	cout.precision(2);
	cout << "coordinate: {" << x << "; " << y << "; " << z << "}";
}

void Ellipse::getDerivative(double t)
{
	double derivative = (funcParms[1] / ( -funcParms[0] * tan(t)));
	derivative = floor(derivative * 100) / 100;
	cout << "derivative: " << derivative;
}
