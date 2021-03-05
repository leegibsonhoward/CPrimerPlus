/********************************************************
*
* Chapter: 05
*
* 5-07_rules.c -- Division truncation
* 
* Listing: 5-07
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn about precedence order
*
* Usage:
*      Just run the program no input needed
*
********************************************************/
#include <stdio.h>

int main(void)
{
    int top, score;

    top = score = -(2 + 5) * 6 + (4 + 3 * (2 + 3));
    printf("top = %d\n", top);
    
    return 0;
}