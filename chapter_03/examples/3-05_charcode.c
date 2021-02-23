/********************************************************
*
* Chapter: 03
* 
* Listing: 3-05
*
* 3-05_charcode.c -- Display code number for character
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Show char code integer value
*
* Usage:
*       Input char and outputs integer value of that character
*
********************************************************/
#include <stdio.h>

int main(void)
{
    char ch;

    printf("Please enter a character.\n");
    scanf("%c", &ch);
    printf("The code for %c is %d\n", ch, ch);

    return 0;
}