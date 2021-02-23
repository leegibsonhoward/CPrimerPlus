/********************************************************
*
* Chapter: 03
* 
* Listing: 3-04
*
* 3-04_print2.c -- More printf properties
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Show different C data type values using printf
*
* Usage:
*       Just run the program no input needed
*
********************************************************/
#include <stdio.h>

int main(void)
{
    unsigned int un = 3000000000;   /* systems with 32-bit int */
    short end = 200;                /* and 16-bit short */
    long big = 65537;
    long long verybig = 12345678908642;

    printf("un = %u and not %d\n", un, un);
    printf("end = %hd and %d\n", end, end);
    printf("big = %ld and not %hd\n", big, big);
    printf("verybig = %lld and not %ld\n", verybig, verybig);

    return 0;
}