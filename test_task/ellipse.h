#pragma once
#include "figure.h"

class Ellipse : public Figure
{
public:
	Ellipse();
	void getCoordinate(double t) override;
	void getDerivative(double t) override;
};