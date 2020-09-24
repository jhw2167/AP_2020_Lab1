//main.c

/* 
	Main file for comipiling and running our short
	mathematics program with objectives:

	- Determine avg of two numbers
	- Determine if each is prime
	- Determine if they are relatively prime
*/

/*
	Output format: {
	You typed in 'num1' and 'num2'
	Avg: x.f
	First prime: 0
	Second prime: 1 
	Relatively Prime: 0
	}// End output

	0 indicates false, 1 is true
	in the above output, the first number was NOT prime,
	the second number was
*/

//Our include statements
#include <stdio.h>
#include "gcd.h"
#include "prime.h"


int main() {

	//define our two number vars, init to 0
	int num1 = 0;
	int num2 = 0;

	//Recieve input with scanf
	printf("\nEnter a number and press enter:  ");
	scanf("%d", &num1);
	printf("Enter a second number:  ");
	scanf("%d", &num2);

	//Show User the input
	printf("\n\nYou typed in %d and %d\n", num1, num2);


	//Calculate and pring avg
	float x = num1;
	float y = num2;

	float avg = (x + y) / 2;
	printf("Avg: %f\n", avg);

	//Test if values are prime and print
	_Bool isFirstPrime = isPrime(num1);
	_Bool isSecPrime = isPrime(num2);

	printf("First prime: %d\n", isFirstPrime);
	printf("Second prime: %d\n", isSecPrime);


	//Call values on gcd function

	/*
		three cases:
		- if either number is 1, they are coprime
		- if one is 0 and NEITHER are 1, not coprime
		- we call function to determine
	*/

	int gcd = 1;
	_Bool relPrime = true;

	if ( (num1 == 1) || (num2 == 1)) {
		relPrime = true;
	}
	else if ((num1 == 0) || (num2 == 0)) {
		relPrime = false;
	}
	else {
		if ( findGCD(num1, num2) > 1)
			relPrime = false;
	}
	
	//and we print
	printf("Relatively Prime: %d\n", relPrime);
}