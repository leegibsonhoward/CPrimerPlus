/********************************************************
*
* Chapter: 8
*
* ex_08-01.c -- Character counting
*
* Author: Lee Howard
*
* Date: 03/15/2021
*
* Purpose: Practice counting input characters until EOF 
*
* Usage: 
*       input characters until # is input value then stop
*       
*
********************************************************/

/*
    Devise a program that counts the number of characters
    in its input up to the end of file.

*/

#include <stdio.h>

int main(void)
{
    char ch;
    int count = 0;
    printf("Enter characters:\n");
    while ((ch = getchar()) != EOF)
    {
        if(ch != ' ')
            count++;
    }
    printf("%d characters counted\n", count - 1);

    return 0;
}