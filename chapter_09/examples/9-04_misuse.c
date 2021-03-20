/********************************************************
*
* Chapter: 09
*
* 9-04_misuse.c --  Old style program
* 
* Listing: 9-04
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn about old function declarations
*
* Usage:
*      Just run the program no input needed
*
********************************************************/
#include <stdio.h>

int imin(int, int);

int main(void)
{
    int evil1, evil2;
    printf("Enter a pair of integers(q to quit):\n");
    while (scanf("%d %d", &evil1, &evil2) == 2)
    {
        printf("The lesser of %d and %d is %d.\n",
               evil1, evil2, imin(evil1, evil2));
        printf("Enter a pair of integers(q to quit):\n");
    }
    printf("Bye.\n");

    return 0;
}

int imin(int n, int m)
{
    int min;

    if (n < m)
        min = n;
    else
        min = m;

    return min;
}