/********************************************************
*
* Chapter: 6
*
* ex_06-01.c -- Alphabet in an array
*
* Author: Lee Howard
*
* Date: 03/11/2021
*
* Purpose: Practice with arrays
*
* Usage: 
*       Just run the program no input needed
*       
*
********************************************************/

/*
    Write a program that creates an array with 26 elements and
    stores the 26 lowercase letters in it. Also have it show
    the array contents.
*/

#include <stdio.h>

#define SIZE 26

int main(void)
{
    char ch;
    char alphabet[SIZE];

    for (ch = 'a'; ch - 'a' < SIZE; ch++)
        alphabet[ch - 'a'] = ch;

    for (int i = 0; i < SIZE; i++)
        printf("%c", alphabet[i]);
    printf("\n");
    return 0;
}