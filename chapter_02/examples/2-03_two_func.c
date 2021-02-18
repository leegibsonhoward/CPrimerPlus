/********************************************************
*
* Chapter: 02
* 
* Listing: 2-03
*
* 2-03_two_func.c -- A program using two functions in one file
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Message from the butler
*
* Usage:
*       Just run the program to see the messages print to console
*
********************************************************/
#include <stdio.h>

/* Function Prototype */

void butler(void);

int main(void)
{
    printf("I will summon the butler function\n");
    butler();
    printf("Yes. Bring me some tea and writeable CD-ROMS.\n");

    return 0;
}

void butler(void)
{
    printf("You rang, sir?\n");
}
