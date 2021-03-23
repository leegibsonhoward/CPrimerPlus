/********************************************************
*
* Chapter: 9
*
* ex_09-06.c -- Larger of program
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

    Write a program that reads characters from the standard
	input to end-of-file. For each character, have the program
	report whether it is a letter. If it is a letter, also report
	its numerical location in the alphabet. For example, c and C
	would both be letter 3. Incorporate a function that takes a
	character as an argument and returns the numerical location if
	the character is a letter and that returns –1 otherwise

*/

#include <stdio.h>
#include <ctype.h>

void char_location(char ch);

int main(void)
{
	char ch;

	printf("Enter character: ");
	while ((ch = getchar()) != EOF)
	{
		char_location(ch);
	}

	return 0;
}

void char_location(char ch)
{
	if(isalpha(ch)){
		printf("%c is a letter\n", ch);
		printf("number %d in alphabet\n", ch - 'a' + 1);
	}
	else if (ch != '\n' && ch != ' ')
	{
		printf("Sorry %c is not a letter!\n", ch);
	}
}