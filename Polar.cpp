#include <vector>
#include <iostream>
#include "polar.h"
Polar::Polar() {}

Polar::Polar(double a, double d)
:	angle{a}, dist{d}
{}

void Polar::setCoords(double a, double d)
{
	angle = a;
	dist = d;	
}

void Polar::printCoords()
{
	std::cout << "angle    : " << angle << std::endl;
	std::cout << "distance : " << dist << std::endl;
}

Polar Polar::operator+(const Polar& rhs)
{
	Polar pol(angle + rhs.angle, dist + rhs.dist);
	return pol;
}

Polar Polar::operator-(const Polar& rhs)
{
	Polar pol(angle - rhs.angle, dist - rhs.dist);
	return pol;
}

Polar Polar::operator=(const Polar& rhs)
{
	angle = rhs.angle;
	dist = rhs.dist;
	return *this;
}

double Polar::getAngle()
{
	return angle;
}

double Polar::getDist()
{
	return dist;
}
