/********************************************************
*
* Chapter: 10
*
* 10-04_day_mon2.c --  Days of each month V2 program
* 
* Listing: 10-04
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

int main(void)
{
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index;

    for (index = 0; index < sizeof days / sizeof days[0]; index++)
        printf("Month %2d has %d days.\n", index + 1, days[index]);

    return 0;
}