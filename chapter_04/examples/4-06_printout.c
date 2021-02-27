/********************************************************
*
* Chapter: 04
*
* 4-06_printout.c -- Espresso cups
* 
* Listing: 4-06
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn to use conversion specifiers
*
* Usage:
*       Just run the program no input needed
*
********************************************************/
#include <stdio.h>

#define PI 3.141593

int main(void)
{
    int number = 5;
    float espresso = 13.5;
    int cost = 3100;

    printf("The %d CEOs drink %f cups of espresso.\n", number, espresso);
    printf("The value of pi is %f.\n", PI);
    printf("Farewell! thou art too dear for my possessing,\n");
    printf("%c%d\n", '$', 2 * cost);
    
    return 0;
}