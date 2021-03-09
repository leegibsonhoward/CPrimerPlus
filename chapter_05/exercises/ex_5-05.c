/********************************************************
*
* Chapter: 5
*
* ex_05-05.c -- Dollars a day
*
* Author: Lee Howard
*
* Date: 03/8/2021
*
* Purpose: Calulate dollars
*
* Usage: 
*       Enter number of days to calculate
*       
*
********************************************************/

/*
  Change the program addemup.c (Listing 5.13), which found the sum of the first 20 inte-
gers. (If you prefer, you can think of addemup.c as a program that calculates how much
money you get in 20 days if you receive $1 the first day, $2 the second day, $3 the third
day, and so on.) Modify the program so that you can tell it interactively how far the cal-
culation should proceed. That is, replace the 20 with a variable that is read in.

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
        dollars = dollars + count;

    printf("$%d\n", dollars);
    
    return 0;
}
