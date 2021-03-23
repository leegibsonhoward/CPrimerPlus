/********************************************************
*
* Chapter: 9
*
* ex_09-09.c -- Larger of program
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

    Redo exercise 7, but this time use a recursive function.

*/

#include <stdio.h>

void to_base_n(int x, int base);

int main(void)
{
	int number;
	int b;

	printf("Enter an integer (q to quit):\n");
	while (scanf("%d", &number) == 1)
	{
		printf("Enter number base (2-10): ");
		scanf("%d", &b);
		printf("Base %d equivalent: ", b);
		to_base_n(number, b);
		putchar('\n');
		printf("Enter an integer (q to quit):\n");
	}
	return 0;
}

void to_base_n(int x, int base) /* recursive function */
{
	int r;

	r = x % base;
	if (x >= 2)
		to_base_n(x / base, base);
	putchar('0' + r);
	return;
}
