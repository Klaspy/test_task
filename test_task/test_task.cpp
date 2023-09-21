#include "test_task.h"

using namespace std;

int main()
{
	list<Figure *> figureList;
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dist(0, 1);
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
		}
	}
	int i = 0;
	for (Figure* figure : figureList)
	{
		cout << "\nnumber " << i << ":\nType: ";
		figure->getFigureType();
		cout << "; ";
		figure->getCoordinate(M_PI / 4.);
		cout << "; ";
		figure->getDerivative(M_PI / 4.);
		cout << endl;
		i++;
	}
	return 0;
}
