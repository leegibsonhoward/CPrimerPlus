/********************************************************
*
* Chapter: 5
*
* ex_05-01.c -- Hours and minutes program
*
* Author: Lee Howard
*
* Date: 03/5/2021
*
* Purpose: Convert minutes to hours and minutes
*
* Usage: 
*       Enter minutes and outputs hours and minutes
*       
*
********************************************************/

/*
    Write a program that converts time in minutes to time in hours
    and minutes. Use #define or const to create a symbolic constant
    for 60. Use a while loop to allow the user to enter values
    repeatedly and terminate the loop if a value for the time of
    0 or less is entered.
*/

#include <stdio.h>

#define MIN_PER_HOUR 60

int main(void)
{
    int min, hour, left;

    printf("Convert minutes to hours and minutes!\n");
    printf("Enter the number of minutes (<=0 to quit):\n");
    scanf("%d", &min);

    while (min > 0)
    {
        hour = min / MIN_PER_HOUR;
        left = min % MIN_PER_HOUR;
        printf("%d minutes is %d hours %d minutes.\n",
        min, hour, left);
        printf("Enter the next value(<=0 to quit):\n");
        scanf("%d", &min);
    }

    printf("Done!\n");
    
    return 0;
}