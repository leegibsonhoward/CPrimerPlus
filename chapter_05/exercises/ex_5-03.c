/********************************************************
*
* Chapter: 5
*
* ex_05-03.c -- Weeks and days program
*
* Author: Lee Howard
*
* Date: 03/5/2021
*
* Purpose: Convert days to weeks and days
*
* Usage: 
*       Enter days and outputs weeks and days
*       
*
********************************************************/

/*
    Write a program that asks the user to enter the number of
    days and then converts that value to weeks and days. For
    example, it would convert 18 days to 2 weeks, 4 days. Display
    results in the following format: 18 days are 2 weeks, 4 days.
*/

#include <stdio.h>

#define DAYS_PER_WEEK 7

int main(void)
{
    int days, weeks, left;

    printf("Convert days to weeks and days!\n");
    printf("Enter the number of days (<=0 to quit):\n");
    scanf("%d", &days);

    while (days > 0)
    {
        weeks = days / DAYS_PER_WEEK;
        left = days % DAYS_PER_WEEK;
        printf("%d days are %d weeks, %d days.\n",
        days, weeks, left);
        printf("Enter the next value(<=0 to quit):\n");
        scanf("%d", &days);
    }

    printf("Done!\n");
    
    return 0;
}