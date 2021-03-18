/********************************************************
*
* Chapter: 7
*
* ex_07-05.c -- Substitute program using switch statement
*
* Author: Lee Howard
*
* Date: 03/16/2021
*
* Purpose: More practice with conditional statements
*
* Usage: 
*       input characters until and outputs substitutions
*       
*
********************************************************/

/*
    Redo exercise 3 using a switch. But, I believe they meant
    exercise 4

*/

#include <stdio.h>

int main(void)
{
    char ch;
    int sub_count1 = 0;
    int sub_count2 = 0;

    printf("Enter character (# to quit): ");
    while ((ch = getchar()) != '#')
    {
        switch (ch)
        {
        case '.':
            putchar('!');
            sub_count1++;
            break;
        case '!':
            putchar('!');
            putchar('!');
            sub_count2++;
            break;
        default:
            putchar(ch);
        }
    }

    printf("%d substitutions of . were made.\n", sub_count1);
    printf("%d substitutions of ! were made.\n", sub_count2);

    return 0;
}