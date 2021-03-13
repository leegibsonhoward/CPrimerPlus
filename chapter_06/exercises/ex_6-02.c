/********************************************************
*
* Chapter: 6
*
* ex_06-02.c -- Nested loop
*
* Author: Lee Howard
*
* Date: 03/11/2021
*
* Purpose: Practice with nested loops
*
* Usage: 
*       Just run the program no input needed
*       
*
********************************************************/

/*
    Use nested loops to produce the following pattern:

    $
    $$
    $$$
    $$$$
    $$$$$

*/

#include <stdio.h>

#define ROWS 6

int main(void)
{
    int row;
    char dollar_sign = '$';

    for (row = 0; row < ROWS; row++){
        for (int i = 0; i < row; i++)
        {
            printf("%c", dollar_sign);
        }
        printf("\n");
    }

    return 0;
}