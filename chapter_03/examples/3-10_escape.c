/********************************************************
*
* Chapter: 03
* 
* Listing: 3-10
*
* 3-10_escape.c -- Use escape characters
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Show how backspace, tab, and carriage return work 
*
* Usage:
*       Input desired salary and prints monthly amount earned 
*
********************************************************/
#include <stdio.h>

int main(void)
{
    float salary;
    printf("\aEnter your desired monthly salary:");
    printf(" $_______\b\b\b\b\b\b\b");
    scanf("%f", &salary);
    printf("\n\t$%.2f a month is $%.2f a year",
        salary, salary * 12.0);
    printf("\rGee!\n");

    return 0;
}
