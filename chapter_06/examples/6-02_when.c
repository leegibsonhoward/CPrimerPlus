/********************************************************
*
* Chapter: 06
*
* 6-02_when.c -- When a loop quits
* 
* Listing: 6-01
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn about when a loop terminates
*
* Usage:
*      Just run the program no input needed
*
********************************************************/
#include <stdio.h>

int main(void)
{
    int n = 5;
    while (n < 7)
    {
        printf("n = %d\n", n);
        n++;
        printf("Now n = %d\n", n);
    }
    printf("The loop has finished.\n");

    return 0;
}