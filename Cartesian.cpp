#include <iostream>
#include <cmath>

#include "cartesian.h"
#include "polar.h"

Cartesian::Cartesian() {}

Cartesian::Cartesian(double xCor, double yCor)
: x{xCor}, y{yCor} 
{}

Cartesian::Cartesian(const Polar& obj)
: Cartesian(obj.getDist() * cos(obj.getAngle()), obj.getDist() * sin(obj.getAngle()))
{}

void Cartesian::setCoords(double xCor, double yCor)
{
	x = xCor;
	y = yCor;
}

void Cartesian::printCoords() const
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

Cartesian& Cartesian::operator=(const Cartesian& rhs)
{
	if(this == &rhs)
		return *this;
	x = rhs.x;
	y = rhs.y;
	return *this;
}

double Cartesian::module() const
{
	return sqrt(x * x + y * y);
}

double Cartesian::getX() const
{
	return x;
}
double Cartesian::getY() const
{
	return y;
}
