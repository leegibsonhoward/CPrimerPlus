/********************************************************
*
* Chapter: 03
* 
* Listing: 3-08
*
* 3-08_showf_pt.c -- Print type sizes using sizeof
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Show basic data type sizes in bytes
*
* Usage:
*       Just run the program no input needed
*
********************************************************/
#include <stdio.h>

int main(void)
{
    /* c99 provides a %zd specifier for sizes */
    printf("Type int has size of %u bytes\n", sizeof(int));
    printf("Type char has size of %u bytes\n", sizeof(char));
    printf("Type long has size of %u bytes\n", sizeof(long));
    printf("Type double has size of %u bytes\n", sizeof(double));

    return 0;
}