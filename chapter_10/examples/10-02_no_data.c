/********************************************************
*
* Chapter: 10
*
* 10-02_no_data.c --  No data program
* 
* Listing: 10-02
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn about uninitialized arrays
*
* Usage:
*      Just run the program no input needed
*
********************************************************/
#include <stdio.h>

#define SIZE 4

int main(void)
{
    int no_data[SIZE];
    int i;

    printf("%2s%14s\n", "i", "no_data[i]");
    for (i = 0; i < SIZE; i++)
        printf("%2d%14d\n", i, no_data[i]);

    return 0;
}