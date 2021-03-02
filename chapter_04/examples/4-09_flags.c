/********************************************************
*
* Chapter: 04
*
* 4-09_flags.c -- Formatting flags
* 
* Listing: 4-09
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn to use formatting flags
*
* Usage:
*       Just run the program no input needed
*
********************************************************/
#include <stdio.h>

int main(void)
{
    printf("%x %X %#x\n", 31, 31, 31);
    printf("**%d**% d**% d**\n", 42, 42, -42);
    printf("**%5d**%5.3d**%05d**%05.3d**\n", 6, 6, 6, 6);

    return 0;
}