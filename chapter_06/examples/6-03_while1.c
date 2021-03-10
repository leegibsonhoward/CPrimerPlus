/********************************************************
*
* Chapter: 06
*
* 6-03_while1.c -- bad code
* 
* Listing: 6-03
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn about infinite loops
*
* Usage:
*      Just run the program no input needed
*
********************************************************/
#include <stdio.h>

int main(void)
{
    // WARNING RUNS AN INFINIT LOOP
    int n = 0;
    while (n < 3)
        printf("n is %d\n", n);
    n++;
    printf("That’s all this program does\n");

    return 0;
}