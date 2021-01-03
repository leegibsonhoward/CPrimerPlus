/********************************************************
*
* Chapter: 02
* 
* Listing: 2-01
*
* 2-01_first.c - Breakdown the use of a simple c program
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Putting together a simple program in c
*
* Usage:
*       Prints a message with a interpolated integer value
*
********************************************************/
#include <stdio.h>

int main()
{
    int num;
    num = 1;
    printf("I am a simple ");
    printf("computer. \n");
    printf("My favorite number is %d because it is first.\n", num);
}
