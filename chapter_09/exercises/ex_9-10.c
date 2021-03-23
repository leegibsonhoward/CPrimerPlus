/********************************************************
*
* Chapter: 9
*
* ex_09-10.c -- Fibonacci Sequence
*
* Author: Lee Howard
*
* Date: 03/22/2021
*
* Purpose:
*
* Usage: 
*       Enter a integer to calculate and output results
*
********************************************************/

/*

    Redo exercise 7, but this time use a recursive function.

*/

#include <stdio.h>

long Fibonacci(long n);

int main(void) {
	long n;

	printf("Test Fibonacci() function\n");
	printf("Enter an integer n: ");

	while (scanf("%ld", &n) == 1)
	{
		printf("Fibonacci #%ld = %ld\n", n, Fibonacci(n));

		printf("Enter an integer n: ");
	}

	return 0;
}

long Fibonacci(long n)
{
	// return nth Fibonacci number

	// handle invalid arguments
	if (n < 1)
	{
		printf("Error: n must be a positive integer.\n");
		return -1;
	}

	long fib_n1 = 0, fib_n = 1, fib_n2;

	// n equals 1 or 2
	if (n == 1) return 0;
	if (n == 2) return 1;

	// n greater than or equal to 3
	for (long i = 3; i <= n; i++)
	{
		// update old values
		fib_n2 = fib_n1;
		fib_n1 = fib_n;
		fib_n = fib_n1 + fib_n2;
	}

	return fib_n;
}