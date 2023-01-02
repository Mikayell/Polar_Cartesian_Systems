#include <iostream>
#include <cmath>
#include "cartesian.h"
#include "polar.h"

int main()
{
	// create two cartesian points;
	Cartesian c1(1,2);
	Cartesian c2(2,2);
	
	// check + operation
	Cartesian sum;
	sum = c1 + c2;
	sum.printCoords();
	std::cout << std::endl;
	
	// create a polar version
	
	Polar p1(sum);	
	p1.printCoords();
		
}


