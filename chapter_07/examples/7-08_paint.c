/********************************************************
*
* Chapter: 07
*
* 7-08_paint.c -- Paint program
* 
* Listing: 7-08
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn more conditional operators
*
* Usage:
*      Enter square feet to be painted and outputs cans needed
*
********************************************************/
#include <stdio.h>

#define COVERAGE 200

int main(void)
{
    int sq_feet;
    int cans;

    printf("Enter number of square feet to be painted:\n");
    while (scanf("%d", &sq_feet) == 1)
    {
        cans = sq_feet / COVERAGE;
        cans += ((sq_feet % COVERAGE == 0)) ? 0 : 1;
        printf("You need %d %s of paint.\n", cans,
               cans == 1 ? "can" : "cans");
        printf("Enter next value(q to quit):\n");
    }

    return 0;
}