/********************************************************
*
* Chapter: 05
*
* 5-11_post_pre.c -- prefix vs. postfix
* 
* Listing: 5-11
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn about difference
*
* Usage:
*      Just run the program no input needed
*
********************************************************/
#include <stdio.h>

#define SEC_PER_MIN 60

int main(void)
{

    int a = 1, b = 1;
    int aplus, plusb;

    aplus = a++;
    plusb = ++b;
    printf("a   aplus   b   plusb \n");
    printf("%1d %5d %5d %5d\n", a, aplus, b, plusb);

    return 0;
}