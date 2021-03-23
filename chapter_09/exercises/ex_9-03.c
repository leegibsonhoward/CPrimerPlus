/********************************************************
*
* Chapter: 9
*
* ex_09-03.c -- Print character program
*
* Author: Lee Howard
*
* Date: 03/20/2021
*
* Purpose:
*
* Usage: 
*       input character and two integer numbers
*       
*
********************************************************/

/*

    Write a function that takes three arguments: a character
	and two integers. The character is to be printed. The
	first integer specifies the number of times that the
	character is to be printed on a line, and the second
	integer specifies the number of lines that are to be
	printed. Write a program that makes use of this function.

*/

#include <stdio.h>

void printch(char ch, int j, int k);

int main(void)
{
	char ch;
	int i, j;
	while (scanf("%c %d %d", &ch, &i, &j) == 3)
	{
		printch(ch, i, j);
	}

	return 0;
}

void printch(char ch, int j, int k)
{
	for (int i = 0; i < j; i++)
		printf("%c", ch);
}