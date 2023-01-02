#ifndef CARTESIAN_H
#define CASRTESIAN_H

class Polar;

class Cartesian
{

public:
	Cartesian();
	Cartesian(double xCor, double yCor);
	Cartesian(const Polar& obj);
	
	void setCoords(double xCor, double yCor);
	void printCoords() const;

	Cartesian operator+(const Cartesian& rhs);
	Cartesian operator-(const Cartesian& rhs);
	Cartesian& operator=(const Cartesian& rhs);
	
	double module() const;
	double getX() const;
	double getY() const;

private:

	double x;
	double y;

};
#endif
