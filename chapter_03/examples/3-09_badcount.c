/********************************************************
*
* Chapter: 03
* 
* Listing: 3-09
*
* 3-09_badcount.c -- Incorrect argument count
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Show what happens when printf has too few or to many
*           arguments
*
* Usage:
*       Just run the program no input needed
*
********************************************************/
#include <stdio.h>

int main(void)
{
    int f = 4;
    int g = 5;
    float h = 5.0f;

    printf("%d\n", f, g);       /* too many */
    printf("%d %d\n", f);       /* too few */
    printf("%d %f\n", h, g);    /* wrong kind of values */

    return 0;
}

/*
    Ubuntu 20.04, gcc version 9.3.0 
    output:

    4
    4 0
    5 5.000000
*/