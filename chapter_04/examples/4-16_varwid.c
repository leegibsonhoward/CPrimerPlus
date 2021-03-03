/********************************************************
*
* Chapter: 04
*
* 4-16_varwid.c -- Variable width
* 
* Listing: 4-16
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn about using * for variable width output
*
* Usage:
*       Enter width and precision to show width in output
*
********************************************************/
#include <stdio.h>

int main(void)
{
    unsigned width, precision;
    int number = 256;
    double weight = 242.5;

    printf("What field width?\n");
    scanf("%d", &width);
    printf("The number is : %*d:\n", width, number);
    printf("Now enter a width and precision:\n");
    scanf("%d %d", &width, &precision);
    printf("Weight = %*.*f\n", width, precision, weight);
    printf("Done!\n");

    return 0;
}
