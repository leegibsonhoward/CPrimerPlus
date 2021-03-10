/********************************************************
*
* Chapter: 06
*
* 6-04_while2.c -- Semicolons
* 
* Listing: 6-04
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Watch were you put your semicolons in while loops
*
* Usage:
*      Just run the program no input needed
*
********************************************************/
#include <stdio.h>

int main(void)
{
    int n = 0;
    
    // loop ends here because of semicolon
    while (n++ < 3);
        printf("n is %d\n", n);
    printf("That’s all this program does.\n");

    return 0;
}