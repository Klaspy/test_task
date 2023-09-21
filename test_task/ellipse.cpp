#include "ellipse.h"

Ellipse::Ellipse()
{
	type = figureType::ellipse;
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dist(1, 20);
	funcParms.push_back(dist(gen));
	funcParms.push_back(dist(gen));
}

ThreeDim Ellipse::getCoordinate(double t)
{
	double x = funcParms[0] * cos(t), y = funcParms[1] * sin(t), z = 0;
	x = floor(x * 100) / 100;
	y = floor(y * 100) / 100;
	return ThreeDim(x, y, z);
}

ThreeDim Ellipse::getDerivative(double t)
{
	double x = -funcParms[0] * sin(t), y = funcParms[1] * cos(t), z = 0;
	x = floor(x * 100) / 100;
	y = floor(y * 100) / 100;
	return ThreeDim(x, y, z);
}
