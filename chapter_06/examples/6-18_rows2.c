/********************************************************
*
* Chapter: 06
*
* 6-18_rows2.c -- Nested loops v2
* 
* Listing: 6-18
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn about using dependent nested loops
*
* Usage:
*      Just run the program no input needed
*
********************************************************/
#include <stdio.h>

#define ROWS 6
#define CHARS 6

int main(void)
{
    int row;
    char ch;

    for (row = 0; row < ROWS; row++)
    {
        for (ch = ('A' + row ); ch < ('A' + CHARS); ch++)
            printf("%c", ch);
        printf("\n");
    }
        return 0;
}