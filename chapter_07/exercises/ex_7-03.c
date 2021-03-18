/********************************************************
*
* Chapter: 7
*
* ex_07-03.c -- Odd and evens program
*
* Author: Lee Howard
*
* Date: 03/16/2021
*
* Purpose: Practice with conditional statements
*
* Usage: 
*       input ints and outputs odd/even count and average
*       of both groups
*       
*
********************************************************/

/*
    Write a program that reads integers until 0 is entered.
    After input terminates, the program should report the
    total number of even integers (excluding the 0) entered,
    the average value of the even integers, the total number
    of odd integers entered, and the average value of the odd
    integers.

*/

#include <stdio.h>

int main(void)
{
    int num, even, odd, even_avg, odd_avg, even_sum, odd_sum;

    // set all values to 0 in one go
    even = odd = even_avg = odd_avg = even_sum = odd_sum = 0;

    printf("enter integer numbers: ");
    while (scanf("%d", &num) == 1)
    {
        if(num == 0)
            break;
        if(num % 2 == 0)
        {
            even++;
            even_sum += num;
            even_avg = even_sum / even;
        }
        else
        {
            odd++;
            odd_sum += num;
            odd_avg = odd_sum / odd;
        }

    }

    printf("total even integers = %d, average = %d\n", even, even_avg);
    printf("total odd integers = %d, average = %d\n", odd, odd_avg);

    return 0;
}