/********************************************************
*
* Chapter: 07
*
* 7-02_cypher1.c -- Alter input preserving whitespace
* 
* Listing: 7-02
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

#define SPACE ' '

int main(void)
{
    char ch;

    ch = getchar();
    while(ch != '\n')
    {
        if (ch == SPACE)
            putchar(ch);
        else
            putchar(ch + 1);
        ch = getchar();
    }

    putchar(ch);
    
    return 0;
}