#include "figure.h"

ThreeDim Figure::getCoordinate(double t)
{
	return ThreeDim(0, 0, 0);
}

ThreeDim Figure::getDerivative(double t)
{
	return ThreeDim(0, 0, 0);
}

figureType Figure::getFigureType()
{
	switch (type)
	{
	case (figureType::circle):
	{
		cout << "Circle";
		break;
	}
	case (figureType::ellipse):
	{
		cout << "Ellipse";
		break;
	}
	case (figureType::helix):
	{
		cout << "Helix";
		break;
	}
	}
	return type;
}
