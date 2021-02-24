/********************************************************
*
* Chapter: 03
* 
* Listing: 3-07
*
* 3-07_showf_pt.c -- Display float value in two ways
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Show default output of float and double types
*
* Usage:
*       Just run the program no input needed
*
********************************************************/
#include <stdio.h>

int main(void)
{
    float aboat = 32000.0;
    double abet = 2.14e9;
    long double dip = 5.32e-5;

    printf("%f can be written %e\n", aboat, aboat);
    printf("%f can be written %e\n", abet, abet);
    /* change %f to %Lf and %e to %Le, removes gcc warning */
    printf("%Lf can be written %Le\n", dip, dip);

    return 0;
}