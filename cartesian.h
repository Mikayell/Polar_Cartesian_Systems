#ifndef CARTESIAN_H
#define CASRTESIAN_H
class Cartesian
{

public:
	Cartesian();
	Cartesian(double xCor, double yCor);
	void setCoords(double xCor, double yCor);
	void printCoords();
	Cartesian operator+(const Cartesian& rhs);
	Cartesian operator-(const Cartesian& rhs);
	Cartesian operator=(const Cartesian& rhs);
	double module();
	double getX();
	double getY();

private:

	double x;
	double y;

};
#endif
