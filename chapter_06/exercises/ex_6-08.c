/********************************************************
*
* Chapter: 6
*
* ex_06-08.c -- Product program 
* Author: Lee Howard
*
* Date: 03/12/2021
*
* Purpose: Learn to use functions for repeated tasks
*
* Usage: 
*       Enter two float values and outputs difference
*       and product of the two
*
********************************************************/

/*

    Modify exercise 7 so that it uses a function to return
    the value of the calculation.

*/

#include <stdio.h>

float calculation(float, float);

int main(void)
{
    float num1, num2;
    

    printf("Enter two floats: ");
    
    while (scanf("%f %f", &num1, &num2) == 2)
    {
        printf("result = %f\n", calculation(num1, num2));
        printf("Enter two floats: ");

    }

    return 0;
}

float calculation(float n1, float n2)
{
    float diff, product, result;
    
    diff = n1 - n2;
    product = n1 * n2;
    
    result = diff / product;
    
    return result;
}