#pragma once
#include "figure.h"

class Ellipse : public Figure
{
public:
	Ellipse();
	ThreeDim getCoordinate(double t) override;
	ThreeDim getDerivative(double t) override;
};