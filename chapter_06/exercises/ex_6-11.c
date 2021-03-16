/********************************************************
*
* Chapter: 6
*
* ex_06-11.c -- Running totals
*
* Author: Lee Howard
*
* Date: 03/12/2021
*
* Purpose: Practice with calculations
*
* Usage: 
*       Enter a limit and outputs results
*       
*
********************************************************/

/*
  Write a program that reads eight integers into an array
  and then prints them in reverse order.

*/

// This one kind of went over my head so i copied solution from:
// https://github.com/sgreenlee/C-Primer-Plus-Exercises/blob/master/ch06/exercise12.c

#include <stdio.h>

int main(void)
{
    long int limit;
	float sign = 1.0f;
	float series1 = 0, series2 = 0;

	printf("Enter a number of terms to sum: ");
	scanf("%ld", &limit);

	for (long int i = 1; i <= limit; i++)
	{
		series1 += 1.0f/i;
		series2 += (1.0f/i) * sign;
		sign = -sign; // toggle sign
	}

	printf("The %ldth partial sum for series 1 is: %.5f\n", limit, series1);
	printf("The %ldth partial sum for series 2 is: %.5f\n", limit, series2);

	// Answer: Series 1 has no limit. Series 2 appears to be bounded above
    return 0;
}