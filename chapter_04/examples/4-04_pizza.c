/********************************************************
*
* Chapter: 04
*
* 4-04_pizza.c -- Use defined constants in pizza context
* 
* Listing: 4-04
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn about defined constants
*
* Usage:
*       Enter radius of pizza and prints calculation of
*       circumference, and area.
*
********************************************************/
#include <stdio.h>

#define PI 3.14159

int main(void)
{
    float area, circum, radius;

    printf("What is the radius of your pizza?\n");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circum = 2.0 * PI * radius;

    printf("Your basic pizza parameters are as follows:\n");
    printf("circumference = %1.2f, area = %1.2f\n", circum, area);

    return 0;
}