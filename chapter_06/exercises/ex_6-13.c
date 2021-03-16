/********************************************************
*
* Chapter: 6
*
* ex_06-13.c -- Multiple arrays
*
* Author: Lee Howard
*
* Date: 03/15/2021
*
* Purpose: More practice with arrays
*
* Usage: 
*       Enter 8 values and outputs to second array as sums
*       
*
********************************************************/

/*

	Write a program that creates two eight-element arrays of
	double s and uses a loop to let the user enter values for
	the eight elements of the first array. Have the program set
	the elements of the second array to the cumulative totals of
	the elements of the first array.
	
*/

#include <stdio.h>

#define SIZE 8

int main(void)
{
	double arr1[SIZE];
	double arr2[SIZE];
	int index;
	int sum = 0;

	printf("Enter eight numbers: ");

	for (index = 0; index < SIZE; index++)
	{
		scanf("%lf", &arr1[index]);
		sum += arr1[index];
		arr2[index] = sum;
	}

	printf("Numbers: \n");
	for (index = 0; index < SIZE; index++)
	{
		printf("%6.2lf", arr1[index]);
	}

	printf("\n");
	printf("Cumilative: \n");
	for (index = 0; index < SIZE; index++)
	{
		printf("%6.2lf", arr2[index]);
	}
	printf("\n");

	return 0;
}