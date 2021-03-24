/********************************************************
*
* Chapter: 10
*
* 10-01_day_mon1.c --  Days of each month program
* 
* Listing: 10-01
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn about array initialization
*
* Usage:
*      Just run the program no input needed
*
********************************************************/
#include <stdio.h>

#define MONTHS 12

int main(void)
{
    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index;

    for (index = 0; index < MONTHS; index++)
        printf("Month %2d has %d days.\n", index + 1, days[index]);

    return 0;
}