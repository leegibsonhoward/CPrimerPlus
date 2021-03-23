/********************************************************
*
* Chapter: 9
*
* ex_09-05.c -- Larger of program
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

    Write and test a function called larger_of() that
	replaces the contents of two double variables with
	the maximum of the two values. For example,
	larger_of(x,y) would reset both x and y to
	the larger of the two.

*/

#include <stdio.h>

void larger_of(double *, double *);

int main(void)
{
	double a, b;

	printf("Larger of\n");
	printf("Enter two numbers: ");
	while (scanf("%lf %lf", &a, &b) == 2)
	{
		printf("a = %.2lf, b = %.2lf\n", a, b);
		larger_of(&a, &b);
		printf("a = %.2lf, b = %.2lf\n", a, b);

		printf("Enter two numbers: ");
	}

	return 0;
}

void larger_of(double *a, double *b)
{
	int temp = (*a > *b) ? *a : *b;
	*a = *b = temp;
}