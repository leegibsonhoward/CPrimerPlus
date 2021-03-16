/********************************************************
*
* Chapter: 6
*
* ex_06-12.c -- Squared sums
*
* Author: Lee Howard
*
* Date: 03/12/2021
*
* Purpose: Practice with arrays
*
* Usage: 
*       Just run the program no input needed
*       
*
********************************************************/

/*
	Write a program that creates an eight-element array
	of int's and sets the elements to the first eight powers
	of 2 and then prints the values. Use a for loop to set the
	values, and, for variety, use a do while loop to display
	the values.
*/

#include <stdio.h>

#define SIZE 8

int main(void)
{
	int nums[SIZE];
	int index;
	int power = 1;

	for (index = 0; index < SIZE; index++)
	{
		power *= 2;
		nums[index] = power;

	}
	index = 0;
	do
	{
		printf("%d\n", nums[index]);
		index++;
	} while (index < SIZE);

	return 0;
}