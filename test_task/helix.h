#pragma once
#include "figure.h"

class Helix : public Figure
{
public:
	Helix();
	ThreeDim getCoordinate(double t) override;
	ThreeDim getDerivative(double t) override;
};