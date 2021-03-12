/********************************************************
*
* Chapter: 06
*
* 6-14_zeno.c -- Series sum
* 
* Listing: 6-14
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: More practice with for loops and comma operator
*
* Usage:
*      Enter number of terms and outputs time and term number
*
********************************************************/
#include <stdio.h>

int main(void)
{
    // term count
    int t_ct;

    double time, x;
    int limit;

    printf("Enter the number of terms you want: ");
    scanf("%d", &limit);
    for (time = 0, x = 1, t_ct = 1; t_ct <= limit; t_ct++, x *= 2.0)
    {
        time += 1.0 / x;
        printf("time = % f when terms = % d.\n", time, t_ct);
    }

    return 0;
}