#pragma once

#define _USE_MATH_DEFINES

#include <iostream>
#include <list>
#include <random>
#include <math.h>

using namespace std;

struct ThreeDim { double x; double y; double z; };

enum figureType {
	circle,
	ellipse,
	helix
};

class Figure
{
public:
	ThreeDim virtual getCoordinate(double t);
	ThreeDim virtual getDerivative(double t);
	figureType getFigureType();

protected:
	vector<int> funcParms;
	figureType type;
};