/********************************************************
*
* Chapter: 05
*
* 5-08_sizeof.c -- Division truncation
* 
* Listing: 5-08
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn about sizeof operator
*
* Usage:
*      Just run the program no input needed
*
********************************************************/
#include <stdio.h>

int main(void)
{
    int n = 0;
    size_t intsize;
    intsize = sizeof(int);
    printf("n = %d, n has %zd bytes; all ints have %zd bytes.\n",
        n, sizeof n, intsize);
    return 0;
}