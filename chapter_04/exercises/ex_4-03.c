/********************************************************
*
* Chapter: 4
*
* ex_04-03.c -- Print Floating points
*
* Author: Lee Howard
*
* Date: 03/3/2021
*
* Purpose: Practice printing floating points exponential
*           notation and decimal point notation
*
* Usage: 
*       input floating point number and outputs different
*       formats
*       
*
********************************************************/

#include <stdio.h>
#include <string.h>

int main(void)
{
    float num;

    printf("Enter floating point number:\n");
    scanf("%f", &num);

    printf("The input is %.1f or %.1e.\n", num, num);

    return 0;
}