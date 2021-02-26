/********************************************************
*
* Chapter: 04
*
* 4-02_praise1.c -- Praise1 message
* 
* Listing: 4-02
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Use an assortment of strings
*
* Usage:
*       Enter name and prints a message
*
********************************************************/
#include <stdio.h>

#define PRAISE "What a super marvelous name!"

int main(void)
{
    char name[40];

    printf("What's your name?\n");
    scanf("%s", name);
    printf("Hello, %s. %s\n", name, PRAISE);
    
    return 0;
}