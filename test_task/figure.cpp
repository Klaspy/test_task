#include "figure.h"

ThreeDim Figure::getCoordinate(double t)
{
	return ThreeDim(0, 0, 0);
}

ThreeDim Figure::getDerivative(double t)
{
	return ThreeDim(0, 0, 0);
}

string Figure::getFigureType()
{
	string typeStr;
	switch (type)
	{
	case (figureType::circle):
	{
		typeStr = "Circle";
		break;
	}
	case (figureType::ellipse):
	{
		typeStr = "Ellipse";
		break;
	}
	case (figureType::helix):
	{
		typeStr = "Helix";
		break;
	}
	default:
	{
		typeStr = "Err";
		break;
	}
	}
	return typeStr;
}
