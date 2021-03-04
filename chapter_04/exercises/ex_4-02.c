/********************************************************
*
* Chapter: 4
*
* ex_04-02.c -- Print first name
*
* Author: Lee Howard
*
* Date: 03/3/2021
*
* Purpose: Practice printing with character widths
*
* Usage: 
*       Enter first name and outputs with widths
*       
*
********************************************************/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char fname[15];
    int nlen;

    printf("Enter your first and last name:\n");
    scanf("%s", fname);
    nlen = strlen(fname);

    printf("\"%s\"\n", fname);
    printf("\"%20s\"\n", fname);
    printf("\"%-20s\"\n", fname);
    printf("\"%*s\"\n", nlen + 3, fname);

    return 0;
}