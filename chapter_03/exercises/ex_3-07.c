/********************************************************
*
* Chapter: 3
*
* ex_03-07.c -- Convert height in inches to centimeters
*
* Author: Lee Howard
*
* Date: 02/24/2021
*
* Purpose: Practice with floating point values
*
* Usage: 
*       Input height in inches outputs in centimeters
*       
*
********************************************************/

#include <stdio.h>

int main(void)
{
    float cent_to_inch = 2.54;
    float height;

    printf("Enter your height: ");
    scanf("%f", &height);
    printf("%.2f\n", height * cent_to_inch);

    return 0;
}