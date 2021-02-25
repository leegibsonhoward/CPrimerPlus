/********************************************************
*
* Chapter: 3
*
* ex_03-04.c -- Using floating points and exponents
*
* Author: Lee Howard
*
* Date: 02/24/2021
*
* Purpose: Practice expressing exponent notation
*
* Usage: 
*       Input a floating point number and outputs it
*       in exponent notation
*       
*
********************************************************/

#include <stdio.h>

int main(void)
{
    float num;

    printf("Enter a number(floating point): ");
    scanf("%f", &num);

    /* exponents number of digits displayed, depends on system */
    printf("The input is %f or %e\n", num, num);
    
    return 0;
}