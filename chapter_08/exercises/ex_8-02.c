/********************************************************
*
* Chapter: 8
*
* ex_08-02.c -- Character counting
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

    Write a program that reads input as a stream of
    characters until encountering EOF. Have the program
    print each input character and its ASCII decimal value.

*/

#include <stdio.h>

int main(void)
{
    int ch, char_count = 0;

    printf("Enter characters:\n");
    while ((ch = getchar()) != EOF)
    {
        if (ch >= ' ')
            printf("\'%c\': %d", ch, ch);
        else if (ch == '\n')
            printf("\'\\n\': %d", ch);
        else if (ch == '\t')
            printf("\'\\t\': %d", ch);
        else // ascii control characters
            printf("\'^%c\': %d", ch + 64, ch);

        char_count++;
        if (char_count % 10 == 0)
            printf("\n"); // print new line for every 10 characters
        else
            printf("  "); // otherwise, print spaces
    }

    printf("\n");

    return 0;

}