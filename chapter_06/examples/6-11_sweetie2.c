/********************************************************
*
* Chapter: 06
*
* 6-11_sweetie2.c -- Counting loop
* 
* Listing: 6-11
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn about the for loop
*
* Usage:
*      Just run the program no input needed
*
********************************************************/
#include <stdio.h>

int main(void)
{
    const int NUMBER = 22;
    int count = 1;

    for (count = 1; count <= NUMBER; count++)
        printf("Be my Valentine!\n");
    
    return 0;
}