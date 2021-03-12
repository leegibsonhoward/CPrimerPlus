/********************************************************
*
* Chapter: 06
*
* 6-10_sweetie1.c -- Counting loop
* 
* Listing: 6-10
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn about the process of using a loop
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

    while (count <= NUMBER)
    {
        printf("Be my Valentine!\n");
        count++;
    }
    return 0;
}