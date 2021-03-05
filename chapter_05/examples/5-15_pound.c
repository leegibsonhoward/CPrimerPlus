/********************************************************
*
* Chapter: 05
*
* 5-15_pound.c -- Pound sign
* 
* Listing: 5-15
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn about function arguments and type casting
*
* Usage:
*      Just run the program no input needed
*
********************************************************/
#include <stdio.h>

void pound(int n);

int main(void)
{
    int times = 5;
    char ch = '!';  /* ASCII code 33 */
    float f = 6.0;

    pound(times);   /* int */
    pound(ch);      /* char automatically int */
    pound((int)f);  /* cast forces f -> int */

    return 0;
}

void pound(int n)
{
    while (n-- > 0)
        printf("#");
    printf("\n");
}
