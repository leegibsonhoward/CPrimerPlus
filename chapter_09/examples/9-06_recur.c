/********************************************************
*
* Chapter: 09
*
* 9-06_recur.c --  Recursion program
* 
* Listing: 9-06
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn about recursive functions
*
* Usage:
*      Just run the program no input needed
*
********************************************************/
#include <stdio.h>

void up_and_down(int);

int main(void)
{

    up_and_down(1);
    return 0;
}

void up_and_down(int n)
{
    printf("Level %d: n location %p\n", n, &n);
    if(n < 4)
        up_and_down(n + 1);
    printf("LEVEL %d: n location %p\n", n, &n);

}