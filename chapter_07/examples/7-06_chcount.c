/********************************************************
*
* Chapter: 07
*
* 7-06_chcount.c -- Lets get logical
* 
* Listing: 7-06
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn about logical AND operator
*
* Usage:
*      Enter characters and outputs count of non-quote
*      characters
*
********************************************************/
#include <stdio.h>
#include <stdbool.h>

#define PERIOD '.'

int main(void)
{
    int ch;
    int charcount = 0;

    while ((ch = getchar()) != PERIOD)
    {
        if(ch != '"' && ch != '\'')
            charcount++;
    }
    
    printf("There are %d non-quote characters.\n", charcount);
    
    return 0;
}