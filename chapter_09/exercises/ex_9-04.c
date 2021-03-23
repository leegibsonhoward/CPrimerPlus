/********************************************************
*
* Chapter: 9
*
* ex_09-04.c -- Harmonic mean program
*
* Author: Lee Howard
*
* Date: 03/22/2021
*
* Purpose:
*
* Usage: 
*       input two integer numbers
*       
*
********************************************************/

/*

    The harmonic mean of two numbers is obtained by taking
	the inverses of the two numbers, averaging them, and
	taking the inverse of the result. Write a function that
	takes two double arguments and returns the harmonic mean
	of the two numbers.

*/

#include <stdio.h>

double harmonic_mean(double, double);

int main(void)
{
	double a, b;

	printf("Harmonic means\n");
	printf("Enter two numbers: ");
	while (scanf("%lf %lf", &a, &b) == 2)
	{
		printf("%f\n", harmonic_mean(a, b));

		printf("Enter two numbers: ");
	}

	return 0;
}

double harmonic_mean(double a, double b)
{
	return 2 / (1 / a + 1 / b);
}