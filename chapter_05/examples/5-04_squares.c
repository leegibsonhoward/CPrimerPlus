/********************************************************
*
* Chapter: 05
*
* 5-04_squares.c -- Table of numbers squared
* 
* Listing: 5-04
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn about multiplication operator 
*
* Usage:
*      Just run the program no input needed
*
********************************************************/
#include <stdio.h>

int main(void)
{
    int num = 1;

    while (num < 21)
    {
        printf("%4d %6d\n", num, num * num);
        num = num + 1;
    }

    return 0;
}