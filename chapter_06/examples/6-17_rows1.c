/********************************************************
*
* Chapter: 06
*
* 6-17_rows1.c -- Nested loops
* 
* Listing: 6-17
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn about using nested loops
*
* Usage:
*      Just run the program no input needed
*
********************************************************/
#include <stdio.h>

#define ROWS 6
#define CHARS 10

int main(void)
{
    int row;
    char ch;

    for (row = 0; row < ROWS; row++)
    {
        for (ch = 'A'; ch < ('A' + CHARS); ch++)
            printf("%c", ch);
        printf("\n");
    }
        return 0;
}