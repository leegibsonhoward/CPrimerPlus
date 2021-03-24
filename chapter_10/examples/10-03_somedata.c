/********************************************************
*
* Chapter: 10
*
* 10-03_somedata.c -- Some data program
* 
* Listing: 10-03
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn about partially initialized arrays
*
* Usage:
*      Just run the program no input needed
*
********************************************************/
#include <stdio.h>

#define SIZE 4

int main(void)
{
    /* initialize 3rd and 4th to 0 */
    int no_data[SIZE] = {1492, 1066};
    int i;

    printf("%2s%14s\n", "i", "no_data[i]");
    for (i = 0; i < SIZE; i++)
        printf("%2d%14d\n", i, no_data[i]);

    return 0;
}