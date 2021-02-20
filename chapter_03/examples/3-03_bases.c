/********************************************************
*
* Chapter: 03
*
* 3-03_bases.c -- Print 100 in octal, decimal, and hex
* 
* Listing: 3-03
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn about base 8, 10, 16 number systems
*
* Usage:
*       Just run the program no input needed
*
********************************************************/
#include <stdio.h>

int main(void)
{
    int x = 100;
  
    printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
    printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);

    return 0;
}