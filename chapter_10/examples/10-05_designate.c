/********************************************************
*
* Chapter: 10
*
* 10-05_designate.c --  Designate program
* 
* Listing: 10-05
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn about designated initializers
*
* Usage:
*      Just run the program no input needed
*
********************************************************/
#include <stdio.h>

#define MONTHS 12

int main(void)
{
    int days[MONTHS] = {31, 28, [4] = 31,30,31,[1] = 29};
    int i;

    for (i = 0; i < MONTHS; i++)
        printf("%2d %d\n", i + 1, days[i]);

    return 0;
}