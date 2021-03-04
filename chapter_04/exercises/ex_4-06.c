/********************************************************
*
* Chapter: 4
*
* ex_04-06.c -- Display floating point values
*
* Author: Lee Howard
*
* Date: 03/3/2021
*
* Purpose: More practice with conversion specifiers
*
* Usage: 
*       Just run the program no input required 
*       
*
********************************************************/

#include <stdio.h>
#include <float.h>

int main(void)
{
    double val1 = 1.0 / 3.0;
    float val2 = 1.0 / 3.0;

    printf("%.4f %.4f\n", val1, val2);
    printf("%.12f %.12f\n", val1, val2);
    printf("%.16f %.16f\n", val1, val2);

    /* check for consistency with values */
    printf("%.4f %.4f\n", DBL_DIG, FLT_DIG);
    printf("%.12f %.12f\n", DBL_DIG, FLT_DIG);
    printf("%.16f %.16f\n", DBL_DIG, FLT_DIG);
    
    return 0;
}