/********************************************************
*
* Chapter: 6
*
* ex_06-06.c -- Reverse word
*
* Author: Lee Howard
*
* Date: 03/12/2021
*
* Purpose: Reverse a character array
*
* Usage: 
*       Enter a word and outputs reversed
*       
*
********************************************************/

/*

    Write a program that reads a single word into a character
    array and then prints the word backward. Hint: Use strlen()
    (Chapter 4) to compute the index of the last character in
    the array.

*/

#include <stdio.h>
#include <string.h>

#define SIZE 20

int main(void)
{
    char str[SIZE];
    int index, len;

    printf("Enter a word: ");
    scanf("%s", str);

    len = strlen(str) - 1;

    for (index = len; index >= 0; index--)
        printf("%c", str[index]);

    return 0;
}