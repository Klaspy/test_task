#include "circle.h"

Circle::Circle()
{
	type = figureType::circle;
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dist(1, 20);
	funcParms.push_back(dist(gen));
}

ThreeDim Circle::getCoordinate(double t)
{
	double x = funcParms[0] * cos(t), y = funcParms[0] * sin(t), z = 0;
	x = floor(x * 100) / 100;
	y = floor(y * 100) / 100;
	return ThreeDim(x, y, z);
}

ThreeDim Circle::getDerivative(double t)
{
	double x = -funcParms[0] * sin(t), y = funcParms[0] * cos(t), z = 0;
	x = floor(x * 100) / 100;
	y = floor(y * 100) / 100;
	return ThreeDim(x, y, z);
}
