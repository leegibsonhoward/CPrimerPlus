/********************************************************
*
* Chapter: 04
*
* 4-13_prntval.c -- The printf() function has a return value
* 
* Listing: 4-13
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn about printf's return value
*
* Usage:
*       Just run the program no input needed
*
********************************************************/
#include <stdio.h>

int main(void)
{

    int bph2o = 212;
    int rv;

    rv = printf("%d F is water's boilng point.\n", bph2o);

    /* rv, printf return value should = 31 */
    printf("The printf() function printed %d characters.\n",
        rv);

    return 0;
}
