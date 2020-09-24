#include "gcd.h"
//gcd.c implementation code for gcd.h

int findGCD(int x, int y)
{
	/*
		Function will make use of a while loop to determine the GCD
		and determine coprime relation and return that value
	*/

	if ((x == 0) || (y == 0))
		return 0;

	//assign gcd to minimum of x & y
	int gcd = 1;
	int larger = 1;

	if (x > y) {
		larger = x;
		gcd = y;
	}
	else {
		larger = y;
		gcd = x;
	}

	int remainder = (larger % gcd);

	while (remainder != 0) {
		larger = gcd;
		gcd = remainder;
		remainder = (larger % gcd);
	}

	return gcd;
}
