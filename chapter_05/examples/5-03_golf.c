/********************************************************
*
* Chapter: 05
*
* 5-03_golf.c -- Golf tournament score card
* 
* Listing: 5-03
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn how assignments work 
*
* Usage:
*      Just run the program no input needed
*
********************************************************/
#include <stdio.h>

int main(void)
{
    int jane, tarzan, cheeta;

    cheeta = tarzan = jane = 68;

    printf("            cheeta  tarzan  jane\n");
    printf("First round score %4d %8d %8d\n", cheeta, tarzan, jane);
    
    return 0;
}