/********************************************************
*
* Chapter: 04
*
* 4-05_defines.c -- Use defined constants from limits.h and float.h
* 
* Listing: 4-05
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn more about defined symbolic constants
*          using the C preprocessor
*
* Usage:
*       Just run the program no input needed
*
********************************************************/
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    printf("Some number limits for this system:\n");
    printf("Biggest int: %d:", INT_MAX);
    printf("Smallest long long: %ld\n", LLONG_MIN);
    printf("One byte = %d bits on this system.\n", CHAR_BIT);
    printf("Largest double: %e\n", DBL_MAX);
    printf("Smallest normal float: %e\n", FLT_MIN);
    printf("float precision = %d digits\n", FLT_DIG);
    printf("float epsilon = %e\n", FLT_EPSILON);

    return 0;
}