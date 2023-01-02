#include <iostream>
#include <cmath>

#include "polar.h"
#include "cartesian.h"

Polar::Polar() {}

Polar::Polar(double a, double d)
: angle{a}, dist{d}
{}

Polar::Polar(const Cartesian& obj)
: Polar(atan((obj.getY() / obj.getX())), obj.module())
{}

void Polar::setCoords(double a, double d)
{
	angle = a;
	dist = d;	
}

void Polar::printCoords() const
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

Polar& Polar::operator=(const Polar& rhs)
{	
	if(this == &rhs)
		return *this; 
	angle = rhs.angle;
	dist = rhs.dist;
	return *this;
}

double Polar::getAngle() const
{
	return angle;
}

double Polar::getDist() const
{
	return dist;
}
