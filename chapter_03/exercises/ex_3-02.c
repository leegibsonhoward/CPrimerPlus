/********************************************************
*
* Chapter: 3
*
* ex_03-02.c -- Convert ASCII code to character
*
* Author: Lee Howard
*
* Date: 02/24/2021
*
* Purpose: Learn how to use ASCII codes
*
* Usage: 
*       Input ASCII code in decimal value and program
*       outputs character for that code
*       
*
********************************************************/

#include <stdio.h>

int main(void)
{
    int ch;

    printf("Enter ASCII code(decimal): ");
    scanf("%d", &ch);
    printf("%d = %c\n", ch, ch);

    return 0;
}