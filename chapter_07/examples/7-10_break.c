/********************************************************
*
* Chapter: 07
*
* 7-10_break.c -- Exit a loop
* 
* Listing: 7-10
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn about using break to exit a loop
*
* Usage:
*      Enter length and width of a rectangle, outputs area
*
********************************************************/
#include <stdio.h>

int main(void)
{
    float length, width;

    printf("Enter the length of the rectangle:\n");
    while (scanf("%f", &length) == 1)
    {
        printf("Length = %0.2f:\n", length);
        printf("Enter its width:\n");
        if (scanf("%f", &width) != 1)
            break;
        printf("Width = %0.2f:\n", width);
        printf("Area = %0.2f:\n", length * width);
        printf("Enter the length of the rectangle:\n");
    }

    printf("Done.\n");

    return 0;
}