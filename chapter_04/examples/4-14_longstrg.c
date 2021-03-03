/********************************************************
*
* Chapter: 04
*
* 4-14_longstrg.c -- Printing long strings
* 
* Listing: 4-14
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn about the best method to print long strings
*
* Usage:
*       Just run the program no input needed
*
********************************************************/
#include <stdio.h>

int main(void)
{

    /* method 1 */
    printf("Here's one way to print a ");
    printf("long string.\n");

    /* method 2 */
    printf("Here's another way to print a \
long string.\n");

    /* method 3 (ANSI C) */
    printf("Here's the newest way to print a "
        "long string.\n");

    return 0;
}
