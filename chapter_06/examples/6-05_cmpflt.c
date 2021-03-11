/********************************************************
*
* Chapter: 06
*
* 6-05_cmpflt.c -- Compare Floats
* 
* Listing: 6-05
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn about loops and floating point conversions
*
* Usage:
*      Input value of pi and outputs if close enough
*
********************************************************/
#include <math.h>
#include <stdio.h>

int main(void)
{
    const double ANSWER = 3.14159;
    double response;
    printf("What is the value of pi?\n");
    scanf("%lf", &response);
    while (fabs(response - ANSWER) > 0.0001)
    {
        printf("Try again!\n");
        scanf("%lf", &response);
    }
    printf("Close enough!\n");
    return 0;
}