/********************************************************
*
* Chapter: 06
*
* 6-07_truth.c -- true and false values
* 
* Listing: 6-07
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn about true and false values
*
* Usage:
*      Just run the program no input needed
*
********************************************************/
#include <stdio.h>

int main(void)
{
    int n = 3;

    while (n)
        printf("%2d is true\n", n--);
    printf("%2d is false\n", n);

    n = -3;
    while(n)
        printf("%2d is true\n", n++);
    printf("%2d is false\n", n);

    return 0;
}