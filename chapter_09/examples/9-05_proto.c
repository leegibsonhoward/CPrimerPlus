/********************************************************
*
* Chapter: 09
*
* 9-05_proto.c --  Proto program
* 
* Listing: 9-05
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn about function prototypes
*
* Usage:
*      Just run the program no input needed
*
********************************************************/
#include <stdio.h>

int imax(int, int); /* prototype */

int main(void)
{
    printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3)); /* Error */
    printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3.0, 5.0));

    return 0;
}

int imax(int n, int m)
{
    int max;
    if (n > m)
        max = n;
    else
        max = m;
    return max;
}