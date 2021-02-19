/********************************************************
*
* Chapter: 2
*
* ex_2-03.c -- Convert age in years to days
*
* Author: Lee Howard
*
* Date: 02/18/2021
*
* Purpose: Another program to get use to using printf statements
*
* Usage:
*       Just run the program no input required
*
********************************************************/
#include <stdio.h>

int main(void)
{
    int age = 39;
    int days_in_year = 365;

    printf("my age is: %d which is equal to %d days\n",
    age, age * days_in_year);

    return 0;
}