/********************************************************
*
* Chapter: 09
*
* 9-03_lesser.c --  Lesser of two evils
* 
* Listing: 9-03
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn about functions with return values
*
* Usage:
*      Enter a pair of integers outputs lesser of the two
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