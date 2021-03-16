/********************************************************
*
* Chapter: 6
*
* ex_06-10.c -- Array program
*
* Author: Lee Howard
*
* Date: 03/12/2021
*
* Purpose: Practice with arrays
*
* Usage: 
*       Enter 8 integer values and outputs reverse order
*       
*
********************************************************/

/*
  Write a program that reads eight integers into an array
  and then prints them in reverse order.

*/

#include <stdio.h>

#define SIZE 8

int main(void)
{
    int index, nums[SIZE];

    printf("Enter 8 integer values: ");
    
    for (index = 0; index < SIZE; index++)
    {
        scanf("%d", &nums[index]);
    }

    printf("Array Contents\n===========\n");
    
    for (index = SIZE - 1; index >= 0; index--)
    {
        printf("%d\n", nums[index]);
    
    }
    
    return 0;
}