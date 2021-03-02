/********************************************************
*
* Chapter: 04
*
* 4-08_floats.c -- Field widths using floating points
* 
* Listing: 4-08
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn to use field widths with floating point
*           combinations
*
* Usage:
*       Just run the program no input needed
*
********************************************************/
#include <stdio.h>

int main(void)
{
    const double RENT = 3852.99;

    printf("*%f*\n", RENT);
    printf("*%e*\n", RENT);
    printf("*%4.2f*\n", RENT);
    printf("*%3.1f*\n", RENT);

    printf("*%10.3f*\n", RENT);
    printf("*%10.3e*\n", RENT);
    printf("*%+4.2f*\n", RENT);
    printf("*%010.2f*\n", RENT);
    
    return 0;
}