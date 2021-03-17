/********************************************************
*
* Chapter: 07
*
* 7-03_cypher2.c -- Alter input preserving non-letters
* 
* Listing: 7-03
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn about getchar() and putchar()
*
* Usage:
*      Enter characters and outputs altered character 
*      percentage.
*
********************************************************/
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;

    while((ch = getchar()) != '\n')
    {
        if (isalpha(ch))
            putchar(ch + 1);
        else
            putchar(ch);
    }

    putchar(ch);
    
    return 0;
}