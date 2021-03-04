/********************************************************
*
* Chapter: 05
*
* 5-01_shoe1.c -- Convert a shoe size to inches
* 
* Listing: 5-01
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn how not using loops can be counter productive
*
* Usage:
*      Just run the program no input needed
*
********************************************************/
#include <stdio.h>

#define ADJUST 7.64
#define SCALE 0.325

int main(void)
{
    double shoe, foot;
    
    shoe = 9.0;
    foot = SCALE * shoe + ADJUST;
    printf("Shoe size (men's)   foot length\n");
    printf("%10.1f %15.2f inches\n", shoe, foot);

    return 0;
}