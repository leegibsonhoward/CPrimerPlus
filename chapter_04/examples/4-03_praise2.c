/********************************************************
*
* Chapter: 04
*
* 4-03_praise2.c -- Praise2 message
* 
* Listing: 4-03
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Use strlen function
*
* Usage:
*       Enter name and prints a message along with storage info
*
********************************************************/
#include <stdio.h>
#include <string.h>

#define PRAISE "What a super marvelous name!"

int main(void)
{
    char name[40];

    printf("What's your name?\n");
    scanf("%s", name);
    printf("Hello, %s. %s\n", name, PRAISE);
    printf("Your name of %d letters occupies %d memory cells.\n", strlen(name), sizeof name);
    printf("The praise phrase has %d letters ", strlen(PRAISE));
    printf("and occupies %d memory cells.\n", sizeof PRAISE);

    return 0;
}