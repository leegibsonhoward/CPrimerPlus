/********************************************************
*
* Chapter: 09
*
* 9-14_swap2.c --  Second attempt swap program
* 
* Listing: 9-14
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn about pointers
*
* Usage:
*       Just run the program no input needed      
*
********************************************************/
#include <stdio.h>

void interchange(int u, int v); /* declare function */

int main(void)
{
    int x = 5, y = 10;
    printf("Originally x = %d and y = %d.\n", x, y);
    interchange(x, y);
    printf("Now x = %d and y = %d.\n", x, y);
    return 0;
}

void interchange(int u, int v)
{
    int temp;
    printf("Originally u = %d and v = %d.\n", u, v);
    temp = u;
    u = v;
    v = temp;
    printf("Now u = %d and v = %d.\n", u, v);
}