/********************************************************
*
* Chapter: 08
*
* 8-01_echo.c --  Repeat input program
* 
* Listing: 8-01
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Revisit I/O
*
* Usage:
*      Enter characters and outputs same text
*
********************************************************/
#include <stdio.h>

int main(void)
{
    char ch;

    while ((ch = getchar()) != '#')
        putchar(ch);

    return 0;
}