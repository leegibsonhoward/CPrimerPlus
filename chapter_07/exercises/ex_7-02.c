/********************************************************
*
* Chapter: 7
*
* ex_07-02.c -- ASCII program
*
* Author: Lee Howard
*
* Date: 03/15/2021
*
* Purpose: Practice counting input characters 
*
* Usage: 
*       input characters until # is input value then stop
*       
*
********************************************************/

/*
    Write a program that reads input until encountering #.
    Have the program print each input character and its
    ASCII decimal code. Print eight character-code pairs
    per line. Suggestion: Use a character count and the
    modulus operator ( % ) to print a newline character
    for every eight cycles of the loop.

*/

#include <stdio.h>
#include <ctype.h>

#define SIZE 255

int main(void)
{
    char ch;
    char ch_array[255];
  
    while ((ch = getchar()) != '#')
    {
        for (int i = 0; i < SIZE; i++)
            ch_array[i] = ch;   
    }
    

    for (int i = 0; i < SIZE - 1; i++)
        printf("%c %d\n", ch_array[i], ch_array[i]);
    return 0;
}