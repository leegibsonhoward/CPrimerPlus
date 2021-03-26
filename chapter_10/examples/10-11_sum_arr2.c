/********************************************************
*
* Chapter: 10
*
* 10-11_sum_arr2.c --  Sum of array values V2 program
* 
* Listing: 10-11
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn about letting compiler count array elements
*
* Usage:
*      Just run the program no input needed
*
********************************************************/
#include <stdio.h>

#define SIZE 10

int sump(int *start, int *end);

int main(void)
{
    int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
    long answer;

    answer = sump(marbles, marbles + SIZE);

    printf("The total number of marbles is %ld.\n", answer);

    return 0;
}

int sump(int *start, int *end)
{
    int total = 0;
    while (start < end)
    {
        total += *start;
        start++;
    }

    return total;
}
