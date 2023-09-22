#include "test_task.h"

using namespace std;

int main()
{
	list<Figure *> figureList;
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dist(0, 2);
	for (int i = 0; i < 10; i++)
	{
		switch (dist(gen))
		{
		case (figureType::circle):
		{
			figureList.push_back(new Circle());
			break;
		}
		case (figureType::ellipse):
		{
			figureList.push_back(new Ellipse());
			break;
		}
		case (figureType::helix):
		{
			figureList.push_back(new Helix());
			break;
		}
		}
	}
	int i = 0;
	ThreeDim threeDim;
	for (Figure* figure : figureList)
	{
		cout << "\nFigure number " << i << ":\nType: " << figure->getFigureType() << ";\n";
		threeDim = figure->getCoordinate(M_PI / 4.);
		cout << "3D point: { " << threeDim.x << "; " << threeDim.y << "; " << threeDim.z << "}; ";
		threeDim = figure->getDerivative(M_PI / 4.);
		cout << "derivative: { " << threeDim.x << "; " << threeDim.y << "; " << threeDim.z << "}\n";
		i++;
	}
	vector<Figure*> circleList;
	cout << "\n\nCircle list:";
	i = 0;
	for (Figure* figure : figureList)
	{
		if (figure->getFigureType() == "Circle")
		{
			cout << "\nnumber " << i++ << ":\tRadius: " << figure->getCoordinate(0).x;
			circleList.push_back(figure);
		}
	}
	cout << endl;

	bool isChanged = true;
	int maxPos = circleList.size();
	Figure* t;
	while (isChanged)
	{
		isChanged = false;
		for (int i = 1; i < maxPos; i++)
		{
			if (circleList[i - 1]->getCoordinate(0).x > circleList[i]->getCoordinate(0).x)
			{
				isChanged = true;
				t = circleList[i - 1];
				circleList[i - 1] = circleList[i];
				circleList[i] = t;
			}
		}
		maxPos--;
	}

	cout << "\n\nSorted circle list:";
	i = 0;
	int radiusSum = 0;
	for (Figure* circle : circleList)
	{
		cout << "\nnumber " << i++ << ":\tRadius: " << circle->getCoordinate(0).x;
		radiusSum += circle->getCoordinate(0).x;
	}
	cout << "\n\n Total sum of radius of all circles is " << radiusSum << endl;

	system("pause");
	return 0;
}
