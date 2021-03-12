/********************************************************
*
* Chapter: 06
*
* 6-20_power.c -- Raise numbers to integer powers
* 
* Listing: 6-20
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn about function return values
*
* Usage:
*      Enter a number and positive integer power
*
********************************************************/
#include <stdio.h>

double power(double n, int p);

int main(void)
{
    double x, xpow;
    int exp;

    printf("Enter a number and the positive integer power");
    printf(" to which\nthe number will be raised. Enter 1");
    printf(" to quit.\n");
    
    while(scanf("%lf%d", &x, &exp) == 2)
    {
        xpow = power(x, exp);
        printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
        printf("Enter the next pair of numbers or q to quit.\n");
    }
    
    printf("Hope you enjoyed this power trip -- bye!\n");

    return 0;
}

double power(double n, int p)
{
    double pow = 1;
    int i;

    for (i = 1; i <= p; i++)
        pow *= n;
    
    return pow;
}