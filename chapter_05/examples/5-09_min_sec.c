/********************************************************
*
* Chapter: 05
*
* 5-09_min_sec.c -- seconds converter
* 
* Listing: 5-09
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn about the modulo operator
*
* Usage:
*      Input seconds and converts to minutes and seconds
*
********************************************************/
#include <stdio.h>

#define SEC_PER_MIN 60

int main(void)
{
    int sec, min, left;

    printf("Convert seconds to minutes and seconds!\n");
    printf("Enter the number of seconds (<=0 to quit):\n");
    scanf("%d", &sec);

    while (sec > 0)
    {
        min = sec / SEC_PER_MIN;
        left = sec % SEC_PER_MIN;
        printf("%d seconds is %d minutes %d seconds.\n",
        sec, min, left);
        printf("Enter the next value(<=0 to quit):\n");
        scanf("%d", &sec);
    }

    printf("Done!\n");
    
    return 0;
}