/********************************************************
*
* Chapter: 7
*
* ex_07-01.c -- Character counting
*
* Author: Lee Howard
*
* Date: 03/15/2021
*
* Purpose: Practice counting input characters 
*
* Usage: 
*       input characters until # is input value then stop
*       
*
********************************************************/

/*
    Write a program that reads input until encountering
    the # character and then reports the number of spaces
    read, the number of newline characters read, and the
    number of all other characters read.

*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int spaces, newline, others;
    spaces = 0;
    newline = 0;
    others = 0;

    while ((ch = getchar()) != '#')
    {
        if(ch == ' ')
        {
            spaces++;
        }
        if (ch == '\n')
        {
            newline++;
        }
        else
        {
            if(ch != '\0')
            {
                others++;
            }
        }
    }
    
    printf("spaces = %d, newlines = %d, other characters = %d\n",
        spaces, newline, others);
    
    return 0;
}