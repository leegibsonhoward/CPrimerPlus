/********************************************************
*
* Chapter: 02
* 
* Listing: 2-04
*
* 2-04_nogood.c -- A program with syntax errors
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Introduction to finding bugs.
*
* Usage:
*       Just run the program no input needed
*
********************************************************/
#include <stdio.h>

int main(void)
(
    int n, int n2, int n3;

    /* this program has several errors - like this one

    n = 5;
    n2 = n * n;
    n3 = n2 * n2;
    printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3)
    
    return 0;

)