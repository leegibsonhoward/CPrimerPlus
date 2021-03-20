/********************************************************
*
* Chapter: 09
*
* 9-01_lethead1.c --  Starbar program
* 
* Listing: 9-01
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Using simple functions
*
* Usage:
*      Just run the program no input needed
*
********************************************************/
#include <stdio.h>

#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40

void starbar(void); /* prototype the function */

int main(void)
{
    starbar();
    printf("%s\n", NAME);
    printf("%s\n", ADDRESS);
    printf("%s\n", PLACE);
    starbar(); /* use the function */
    return 0;
}
void starbar(void)
{
    int count; /* define the function */
    for (count = 1; count <= WIDTH; count++)
        putchar('*');
    putchar('\n');
}