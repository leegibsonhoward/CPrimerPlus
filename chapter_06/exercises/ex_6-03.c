/********************************************************
*
* Chapter: 6
*
* ex_06-03.c -- More nested loop
*
* Author: Lee Howard
*
* Date: 03/11/2021
*
* Purpose: More practice with nested loops
*
* Usage: 
*       Just run the program no input needed
*       
*
********************************************************/

/*
    Use nested loops to produce the following pattern:
    
    F
    FE
    FED
    FEDC
    FEDCB
    FEDCBA

*/

#include <stdio.h>

#define ROWS 7
#define CHARS 6

int main(void)
{
    int row;

    for(row = 0; row < ROWS; row++)
    {
        for (char ch = 'F'; 'F' - ch < row; ch--)
        {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}