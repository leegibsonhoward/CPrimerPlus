/********************************************************
*
* Chapter: 04
*
* 4-10_strings.c -- Formatting strings
* 
* Listing: 4-10
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn to use formatting with strings
*
* Usage:
*       Just run the program no input needed
*
********************************************************/
#include <stdio.h>

#define BLURB "Authentic imitation!"

int main(void)
{
    printf("/%2s/\n", BLURB);
    printf("/%24s/\n", BLURB);
    printf("/%24.5s/\n", BLURB);
    printf("/%-24.5s/\n", BLURB);

    return 0;
}