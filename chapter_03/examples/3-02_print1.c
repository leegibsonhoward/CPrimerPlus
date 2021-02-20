/********************************************************
*
* Chapter: 03
*
* 3-02_print1.c -- Display some properties of printf
* 
* Listing: 3-02
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Use integer format specifier to print int values  
*
* Usage:
*       Just run the program no input needed
*
********************************************************/
#include <stdio.h>

int main(void)
{
    int ten = 10;
    int two = 2;

    printf("Doing it right: ");
    printf("%d minus %d is %d\n", ten, two, ten - two);
    
    printf("Doing it wrong: ");
    
    /* warning: format ‘%d’ expects a matching ‘int’ argument */
    printf("%d minus %d is %d\n", ten); /* missing 2 arguments */

    return 0;
}