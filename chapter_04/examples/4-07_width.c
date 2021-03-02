/********************************************************
*
* Chapter: 04
*
* 4-07_width.c -- Field widths
* 
* Listing: 4-07
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn to use field widths
*
* Usage:
*       Just run the program no input needed
*
********************************************************/
#include <stdio.h>

#define PAGES 931

int main(void)
{
    printf("*%d*\n", PAGES);
    printf("*%2d*\n", PAGES);
    printf("*%10d*\n", PAGES);
    printf("*%-10d*\n", PAGES);

    return 0;
}