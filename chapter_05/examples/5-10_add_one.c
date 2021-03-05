/********************************************************
*
* Chapter: 05
*
* 5-10_add_one.c -- Incrementing: prefix and postfix
* 
* Listing: 5-10
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn about the ++ and -- operators
*
* Usage:
*      Just run the program no input needed
*
********************************************************/
#include <stdio.h>

int main(void)
{
    int ultra = 0, super = 0;

    while (super < 5)
    {
        super++;
        ++ultra;
        printf("super = %d, ultra = %d \n", super, ultra);
    }

    return 0;
}