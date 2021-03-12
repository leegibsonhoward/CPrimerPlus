/********************************************************
*
* Chapter: 06
*
* 6-12_for_cube.c -- Table of cubes
* 
* Listing: 6-12
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Use a for loop to create a table of cubes
*
* Usage:
*      Just run the program no input needed
*
********************************************************/
#include <stdio.h>

int main(void)
{
    int num;

    printf("    n   n cubed\n");
    for (num = 1; num <= 6; num++)
        printf("%5d %5d\n", num, num * num* num);
    return 0;
}