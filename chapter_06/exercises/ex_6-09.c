/********************************************************
*
* Chapter: 6
*
* ex_06-09.c -- Sum of squares
*
* Author: Lee Howard
*
* Date: 03/12/2021
*
* Purpose: Practice with calculations
*
* Usage: 
*       Enter lower and upper limits and outputs table
*       
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
    int sum = 0;

    printf("Enter lower and upper limit integers: ");
    scanf("%d %d", &lower, &upper);
    
    while (lower < upper)
    {
        for (index = lower; index <= upper; index++)
        {
            sum += index * index;
        }
        
        printf("The sums of the squares from %d to %d is %d\n",
            lower * lower, upper * upper, sum);

        printf("Enter next set of limits: ");
        scanf("%d %d", &lower, &upper);
    }
    
    printf("Done!\n");

    return 0;
}