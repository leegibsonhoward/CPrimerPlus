/********************************************************
*
* Chapter: 04
*
* 4-17_skip2.c -- Skip over first two
* 
* Listing: 4-17
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn to skip over input using variable width
*
* Usage:
*       Enter three integers and outputs last one
*
********************************************************/
#include <stdio.h>

int main(void)
{
    int n;

    printf("Please enter three integers:\n");
    scanf("%*d %*d %d", &n);
    printf("The last integer was %d\n", n);

    return 0;
}

/* 
    This skipping facility is useful if, for example,
    a program needs to read a particular column of
    a file that has data arranged in uniform columns.
*/