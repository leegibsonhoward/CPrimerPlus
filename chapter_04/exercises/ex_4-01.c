/********************************************************
*
* Chapter: 4
*
* ex_04-01.c -- Print last, first name
*
* Author: Lee Howard
*
* Date: 03/3/2021
*
* Purpose: Practice printing with conversion specifiers
*
* Usage: 
*       Enter first and last name
*       
*
********************************************************/

#include <stdio.h>

int main(void)
{
    char fname[15];
    char lname[15];

    printf("Enter your first and last name:\n");
    scanf("%s %s", fname, lname);
    printf("%s, %s\n", lname, fname);

    return 0;
}