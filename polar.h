#ifndef POLAR_H
#define POLAR_H
class Polar
{
public:
	Polar();
	Polar(double a, double d);
	void setCoords(double a, double d);
	void printCoords();
	Polar operator+(const Polar& rhs);
	Polar operator-(const Polar& rhs);
	Polar operator=(const Polar& rhs);
	double getAngle();
	double getDist();
private:

	double angle;
	double dist;

};

#endif
