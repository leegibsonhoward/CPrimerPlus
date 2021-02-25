/********************************************************
*
* Chapter: 3
*
* ex_03-01.c -- Overflow of data types
*
* Author: Lee Howard
*
* Date: 02/24/2021
*
* Purpose: Test what happens with integer, and floating
*           point overflow. Along with floating point
*           underflow.
*
* Usage: 
*       Just run the program no input required
*       
*
********************************************************/

#include <stdio.h>

int main(void)
{
    int over_int = 2147483647;
    float over_float = 3.4e37;
    float under_float = 0.000000000054;

    /* overflow of int flips it to negative value + 1 */
    printf("%d, overflow of int: %d\n", over_int, over_int + 1);

    /* overflow of float has value of inf or infintiy */
    printf("%f, overflow of float: %f\n", over_float, over_float * 100.0f);

    /* (TODO): floating point underflow */
    printf("%f, underflow of float: %f\n", under_float, under_float - 1);

    return 0;
}