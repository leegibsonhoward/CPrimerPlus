/********************************************************
*
* Chapter: 06
*
* 6-08_trouble.c -- Misuse of =
* 
* Listing: 6-08
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn about troubles of mistaking = for ==
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
    while (status = 1)
    {
        sum = sum + num;
        printf("Please enter next integer (q to quit): ");
        status = scanf("%ld", &num);

    }
    printf("Those integers sum to %ld.\n", sum);


    return 0;
}