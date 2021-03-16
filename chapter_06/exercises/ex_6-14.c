/********************************************************
*
* Chapter: 6
*
* ex_06-14.c -- Reverse line
*
* Author: Lee Howard
*
* Date: 03/15/2021
*
* Purpose: Practice with input 
*
* Usage: 
*       Enter a line of words and outputs in reverse order
*       
*
********************************************************/

/*

	Write a program that reads in a line of input and then
	prints the line in reverse order. You can store the input
	in an array of char ; assume that the line is no longer than
	255 characters. Recall that you can use scanf() with the %c
	specifier to read a character at a time from input and that
	the newline character ( \n ) is generated when you press the
	Enter key.
	
*/

#include <stdio.h>
#include <string.h>

#define SIZE 255

int main(void)
{
	char str[SIZE];
    int index = 0;

    printf("Enter a word: ");
	while(scanf("%c", &str[index]), str[index] != '\n')
		index++;

	for (; 0 <= index; index--)
        printf("%c", str[index]);

	printf("\n");
	
	return 0;
}