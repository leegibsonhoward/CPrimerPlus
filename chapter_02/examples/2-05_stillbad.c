/********************************************************
*
* Chapter: 02
* 
* Listing: 2-04
*
* 2-04_nogood.c -- A program with syntax errors fixed
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Introduction to finding semantic errors.
*
* Usage:
*       Just run the program no input needed
*
********************************************************/
#include <stdio.h>

int main(void)
{
    int n, n2, n3;

    /* this program has semantic errors */

    n = 5;
    n2 = n * n;
    n3 = n2 * n2;
    printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3);

    return 0;

}