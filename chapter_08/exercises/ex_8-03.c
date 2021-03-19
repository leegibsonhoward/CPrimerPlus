/********************************************************
*
* Chapter: 8
*
* ex_08-03.c -- Character counting
*
* Author: Lee Howard
*
* Date: 03/18/2021
*
* Purpose: Practice input characters and ASCII decimal values
*
* Usage: 
*       input characters outputs ASCII decimal value
*       
*
********************************************************/

/*

    Write a program that reads input as a stream of characters
    until encountering EOF. Have it report the number of uppercase
    letters and the number of lowercase letters in the input. You
    may assume that the numeric values for the lowercase letters
    are sequential and assume the same for uppercase. Or, more
    portably, you can use appropriate classification functions
    from the ctype.h library.

*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int ch;
    int uct = 0;
    int lct = 0;
    
    while ((ch = getchar()) != EOF)
        if (isupper(ch))
            uct++;
        else if (islower(ch))
            lct++;
    printf("%d uppercase characters read\n", uct);
    printf("%d lowercase characters read\n", lct);
    
    return 0;
}
