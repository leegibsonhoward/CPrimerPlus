/********************************************************
*
* Chapter: 10
*
* 10-12_order.c --  Order program
* 
* Listing: 10-12
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn about precedence in pointer operations 
*
* Usage:
*      Just run the program no input needed
*
********************************************************/
#include <stdio.h>

int data[2] = {100, 200};

int moredata[2] = {300, 400};

int main(void)
{
    int *p1, *p2, *p3;
    p1 = p2 = data;
    p3 = moredata;
    printf("  *p1 = %d,   *p2 = %d,     *p3 = %d\n",
           *p1, *p2, *p3);
    printf("*p1++ = %d, *++p2 = %d, (*p3)++ = %d\n",
           *p1++, *++p2, (*p3)++);
    printf("  *p1 = %d,   *p2 = %d,     *p3 = %d\n",
           *p1, *p2, *p3);
    return 0;
}