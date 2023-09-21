#include "helix.h"

Helix::Helix()
{
	type = figureType::ellipse;
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dist(1, 20);
	funcParms.push_back(dist(gen));
	funcParms.push_back(dist(gen));
}

ThreeDim Helix::getCoordinate(double t)
{
	double x = funcParms[0] * cos(t), y = funcParms[0] * sin(t), z = funcParms[1] * (t / (2 * M_PI));
	x = floor(x * 100) / 100;
	y = floor(y * 100) / 100;
	z = floor(z * 100) / 100;
	return ThreeDim(x, y, z);
}

ThreeDim Helix::getDerivative(double t)
{
	double x = -funcParms[0] * sin(t), y = funcParms[1] * cos(t), z = funcParms[0] / (2 * M_PI);
	x = floor(x * 100) / 100;
	y = floor(y * 100) / 100;
	z = floor(z * 100) / 100;
	return ThreeDim(x, y, z);
}
