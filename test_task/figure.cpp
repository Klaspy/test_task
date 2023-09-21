#include "figure.h"

void Figure::getCoordinate(double t)
{
}

void Figure::getDerivative(double t)
{
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
