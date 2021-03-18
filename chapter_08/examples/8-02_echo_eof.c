/********************************************************
*
* Chapter: 08
*
* 8-02_echo_eof.c --  Repeat input until end of file
* 
* Listing: 8-02
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn about EOF(end of file)
*
* Usage:
*      Enter characters and outputs same text
*
********************************************************/
#include <stdio.h>

int main(void)
{
    char ch;
    
    /* EOF signal is ^D (linux), ^Z (windows/dos) */

    while ((ch = getchar()) != EOF)
        putchar(ch);

    return 0;
}