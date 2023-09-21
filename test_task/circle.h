#pragma once
#include "figure.h"

class Circle : public Figure
{
public:
	Circle();
	ThreeDim getCoordinate(double t) override;
	ThreeDim getDerivative(double t) override;
};