/********************************************************
*
* Chapter: 3
*
* ex_03-03.c -- Beep then prints a message
*
* Author: Lee Howard
*
* Date: 02/24/2021
*
* Purpose: Practice using escape sequences with printf
*
* Usage: 
*       Just run the program no input required
*       
*
********************************************************/

#include <stdio.h>

int main(void)
{
    /* \a sounds an alert / terminal bell */
    printf("\aStartled by the sudden sound, Sally shouted, ");
    printf("\"By the Great Pumpkin, what was that!\"\n");

    return 0;
}