#pragma once
#include "figure.h"

class Circle : public Figure
{
public:
	Circle();
	void getCoordinate(double t) override;
	void getDerivative(double t) override;
};