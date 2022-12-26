#include <iostream>
#include "cartesian.h"
#include <cmath>

Cartesian::Cartesian(){}
Cartesian::Cartesian(double xCor, double yCor)
{
	x = xCor;
	y = yCor;
}
void Cartesian::setCoords(double xCor, double yCor)
{
	x = xCor;
	y = yCor;
}

void Cartesian::printCoords()
{
	std::cout << "x : " << x << std::endl;
	std::cout << "y : " << y << std::endl;
}

Cartesian Cartesian::operator+(const Cartesian& rhs)
{
	Cartesian res(x + rhs.x, y + rhs.y);
	return res;
}

Cartesian Cartesian::operator-(const Cartesian& rhs)
{
	Cartesian dec(x - rhs.x, y - rhs.y);
	return dec;
}

Cartesian Cartesian::operator=(const Cartesian& rhs)
{
	x = rhs.x;
	y = rhs.y;
	return *this;
}

double Cartesian::module()
{
	return sqrt(x * x + y * y);
}

double Cartesian::getX()
{
	return x;
}
double Cartesian::getY()
{
	return y;
}
