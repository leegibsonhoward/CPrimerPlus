/********************************************************
*
* Chapter: 05
*
* 5-13_addemup.c -- Four kinds of statements
* 
* Listing: 5-13
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn about using several statements
*
* Usage:
*      Just run the program no input needed
*
********************************************************/
#include <stdio.h>

int main(void)
{
    int count, sum;

    count = 0;
    sum = 0;
    while (count++ < 20)
        sum = sum + count;
    printf("sum = %d\n", sum);
    
    return 0;
}