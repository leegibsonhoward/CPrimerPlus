/********************************************************
*
* Chapter: 05
*
* 5-12_bottles.c -- Bottles of spring water on the wall lyrics
* 
* Listing: 5-12
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn about decrementing operator
*
* Usage:
*      Just run the program no input needed
*
********************************************************/
#include <stdio.h>

#define MAX 100

int main(void)
{
    int count = MAX + 1;

    while (--count > 0)
    {
        printf("%d bottles of spring water on the wall, "
            "%d bottles of spring water!\n", count, count);
        printf("Take one down and pass it around,\n");
        printf("%d bottles of spring water!\n\n", count - 1);
    }

    return 0;
}