/********************************************************
*
* Chapter: 10
*
* 10-09_day_mon3.c --  Days of each month V3 program
* 
* Listing: 10-09
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn about letting compiler count array elements
*
* Usage:
*      Just run the program no input needed
*
********************************************************/
#include <stdio.h>

#define MONTHS 12

int main(void)
{
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index;

    for (index = 0; index < MONTHS; index++)
        printf("Month %2d has %d days.\n",
            index + 1, *(days + index)); // same as days[index]

    return 0;
}