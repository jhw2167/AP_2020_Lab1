#include "prime.h"
//prime.c implementation code for prime.h

_Bool isPrime(int test)
{
	/*
		Function will test if a passed int "test"
		is prime using the modulo operator
		we return a bool
	*/

	//0 and 1 are not prime numbers so lets
	//test for them
	if ((test == 0) || (test == 1))
		return false;

	//half test is the greatest number that
	//test could be divisible by
	int half_test = test / 2;
	int divisor = 2;

	while (divisor <= half_test)
	{
		//if the modulo is 0, we dont have a prime
		if ((test % divisor) == 0) {
			return false;
		}
		else
			divisor++;
	}

	//if we didnt find a divisor, must be prime
	return true;
}
