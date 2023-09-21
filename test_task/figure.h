#pragma once
#include <iostream>
#include <list>
#include <random>

using namespace std;

enum figureType {
	circle,
	ellipse,
	helix
};

class Figure
{
public:
	void virtual getCoordinate(double t);
	void virtual getDerivative(double t);
	figureType getFigureType();

protected:
	vector<int> funcParms;
	figureType type;
};