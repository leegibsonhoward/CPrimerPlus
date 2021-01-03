/********************************************************
*
* Chapter: 02
* 
* Listing: 2-02
*
* 2-02_fathm_ft.c -- Feet to fathoms
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Calculate fathms from feet value
*
* Usage:
*
********************************************************/
#include <stdio.h>

int main()
{
    int feet, fathoms;

    fathoms = 2;
    feet = 6 * fathoms;

    printf("There are %d feet in %d fathoms!\n", feet, fathoms);
    printf("Yest, I said %d feet!\n", feet);

    return 0;

}