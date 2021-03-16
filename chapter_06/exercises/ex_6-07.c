/********************************************************
*
* Chapter: 6
*
* ex_06-07.c -- Product program
*
* Author: Lee Howard
*
* Date: 03/12/2021
*
* Purpose: Practice with floating point calculations
*
* Usage: 
*       Enter two float values and outputs difference
*       and product of the two
*
********************************************************/

/*

    Write a program that requests two floating-point numbers
    and prints the value of their difference divided by their
    product. Have the program loop through pairs of input values
    until the user enters nonnumeric input.

*/

#include <stdio.h>

int main(void)
{
    float num1, num2;
    float diff, product, result;

    printf("Enter two floats: ");
    
    while (scanf("%f %f", &num1, &num2) == 2)
    {
        diff = num1 - num2;
        product = num1 * num2;
        result = diff / product;
        printf("result = %f\n", result);
        printf("Enter two floats: ");

    }

    return 0;
}