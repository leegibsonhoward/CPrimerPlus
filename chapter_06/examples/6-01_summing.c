/********************************************************
*
* Chapter: 06
*
* 6-01_summing.c -- Sum integers entered interactively
* 
* Listing: 6-01
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Revisit while loops
*
* Usage:
*      Enter integer numbers and output sum when done
*
********************************************************/
#include <stdio.h>

int main(void)
{
    long num;
    long sum = 0L;
    int status;

    printf("Please enter an integer to be summed ");
    printf("(q to quit): ");
    status = scanf("%ld", &num);
    while (status == 1)
    {
        sum = sum + num;
        printf("Please enter next integer (q to quit): ");
        status = scanf("%ld", &num);

    }
    printf("Those integers sum to %ld.\n", sum);


    return 0;
}