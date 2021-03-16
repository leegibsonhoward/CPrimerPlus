/********************************************************
*
* Chapter: 6
*
* ex_06-05.c -- Table program
*
* Author: Lee Howard
*
* Date: 03/12/2021
*
* Purpose: Practice with nested loops
*
* Usage: 
*       Enter an integer value and outputs table
*       of square and cubed values
*
********************************************************/

/*
   Write a program that prints a table with each line
   giving an integer, its square, and its cube. Ask the
   user to input the lower and upper limits for the table.
   Use a for loop.

*/

#include <stdio.h>

int main(void)
{
    int index, lower, upper;
    printf("Enter lower and upper limit integers: ");
    scanf("%d %d", &lower, &upper);
    
    printf("    Integer         Squared         Cubed\n");
    printf("=============================================");
    for (index = 0; index < upper; index++)
    {
        printf("%11d %15d %13d\n",
               lower, lower * lower, lower * lower * lower);
        ++lower;

    }

        return 0;
}