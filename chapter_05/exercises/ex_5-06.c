/********************************************************
*
* Chapter: 5
*
* ex_05-06.c -- Dollars a day squared
*
* Author: Lee Howard
*
* Date: 03/8/2021
*
* Purpose: Calulate dollars squared
*
* Usage: 
*       Enter number of days to calculate
*       
*
********************************************************/

/*
  Now modify the program of Programming Exercise 5 so that it computes the sum of the
squares of the integers. (If you prefer, how much money you receive if you get $1 the
first day, $4 the second day, $9 the third day, and so on. This looks like a much better
deal!) C doesn’t have a squaring function, but you can use the fact that the square of n is
n * n .

*/

#include <stdio.h>

int main(void)
{
    int count, dollars, days;

    count = 0;
    dollars = 0;
    printf("Enter number of days: ");
    scanf("%d", &days);

    while (count++ < days)
    {
        dollars = dollars + 1;
    }

    printf("$%d\n", dollars * dollars);    
    
    return 0;
}
