/********************************************************
*
* Chapter: 4
*
* ex_04-05.c -- Person name and count
*
* Author: Lee Howard
*
* Date: 03/3/2021
*
* Purpose: More practice with conversion specifiers
*
* Usage: 
*       Enter persons name and outputs formatted with count 
*       
*
********************************************************/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char fname[20];
    char lname[20];
    int fname_len;
    int lname_len;

    printf("Please enter your first and last name:\n");
    scanf("%s %s", fname, lname);
    fname_len = strlen(fname);
    lname_len = strlen(lname);

    printf("%s %s\n%*d %*d\n",
        fname, lname, fname_len, fname_len, lname_len, lname_len);
    
    /* left aligned */
    printf("%s %s\n%-*d %-*d\n",
        fname, lname, fname_len, fname_len, lname_len, lname_len);
    return 0;
}