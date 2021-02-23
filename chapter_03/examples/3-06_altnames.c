/********************************************************
*
* Chapter: 03
* 
* Listing: 3-06
*
* 3-06_altnames.c -- Portable names for int types
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Show C implementation of c portable types
*
* Usage:
*       Just run the program no input needed
*
********************************************************/
#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    int16_t me16;   // me16 16-bit signed variable

    me16 = 4593;

    printf("First, assume int16_t is short: ");
    printf("me16 = %hd\n", me16);
    printf("Next, lets not make any assumptions.\n");
    printf("Instead, use a \"macro\" from inttypes.h: ");
    printf("me16 = %" PRId16 "\n", me16);
    
    return 0;
}