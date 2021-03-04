/********************************************************
*
* Chapter: 4
*
* ex_04-07.c -- Calculate miles and gallons of gas
*
* Author: Lee Howard
*
* Date: 03/3/2021
*
* Purpose: More practice with conversion specifiers
*
* Usage: 
*       Enter miles and gallons of gasoline and output results
*       
*
********************************************************/

#include <stdio.h>

#define KM_TO_MILE 1.609
#define LI_TO_GALLON 3.785

int main(void)
{
    float miles_traveled;
    float gallons_used;
    float miles_per_gallon;

    /* (TODO): conversion to EU */
    printf("Enter number of miles traveled and gallons used:\n");
    scanf("%f %f", &miles_traveled, &gallons_used);
    miles_per_gallon = miles_traveled / gallons_used;

        return 0;
}