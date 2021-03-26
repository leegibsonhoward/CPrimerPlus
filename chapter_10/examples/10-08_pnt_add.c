/********************************************************
*
* Chapter: 10
*
* 10-08_pnt_add.c --  Pointer addition program
* 
* Listing: 10-08
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn about pointer addition
*
* Usage:
*      Just run the program no input needed
*
********************************************************/
#include <stdio.h>

#define SIZE 4

int main(void)
{
    short dates[SIZE];
    short *pti;
    short index;
    double bills[SIZE];
    double *ptf;

    pti = dates;
    ptf = bills;

    printf("%28s %14s\n", "short", "double");
    for (index = 0; index < SIZE; index++)
        printf("pointers + %d: %10p %10p\n",
            index, pti + index, ptf + index);
    
    return 0;
}