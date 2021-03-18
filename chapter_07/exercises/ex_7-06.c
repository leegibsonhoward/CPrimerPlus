/********************************************************
*
* Chapter: 7
*
* ex_07-06.c -- ei counter
*
* Author: Lee Howard
*
* Date: 03/17/2021
*
* Purpose: More practice with conditional statements
*
* Usage: 
*       input characters until and outputs count of 'ei' used
*       
*
********************************************************/

/*
    Redo exercise 3 using a switch. But I believe they meant
    exercise 4

*/

#include <stdio.h>

int main(void)
{
    char ch;
    int last_ch;
    int cur_ch;
    int count = 0;

    printf("Enter character (# to quit): ");
    while ((ch = getchar()) != '#')
    {
        if(ch == 'e')
            last_ch = ch;
        if(ch == 'i' && last_ch == 'e')
        {
            cur_ch = ch;
            count++;
        }
    }

    printf("%d of ei's were used.\n", count);

    return 0;
}