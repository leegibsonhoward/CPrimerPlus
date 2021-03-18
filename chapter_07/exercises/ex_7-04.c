/********************************************************
*
* Chapter: 7
*
* ex_07-04.c -- Substitute program
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
    Using if else statements, write a program that reads
    input up to # , replaces each period with an exclamation
    mark, replaces each exclamation mark initially present with
    two exclamation marks, and reports at the end the number of
    substitutions it has made.

*/

#include <stdio.h>

int main(void)
{
    char ch;
    int sub_count = 0;

    printf("Enter character until (# to quit): ");
    while ((ch = getchar()) != '#')
    {
        if(ch == '!')
        {
            ch = '!' + '!';
            sub_count++;
        }
        if(ch == '.')
        {
            ch = '!';
            sub_count++;
        }
        else
            ch = getchar();
    }

    printf("%d substitutions were made\n", sub_count);
    return 0;
}