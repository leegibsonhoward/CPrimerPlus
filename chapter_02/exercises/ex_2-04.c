/********************************************************
*
* Chapter: 2
*
* ex_2-04.c -- Print For he's a jolly good fellow
*
* Author: Lee Howard
*
* Date: 02/18/2021
*
* Purpose: Use functions to call printf statements
*
* Usage:
*       Just run the program no input required
*
********************************************************/

#include <stdio.h>

void jolly_fellow(void);
void cant_deny(void);

int main(void)
{
    printf("For he's a jolly good fellow!\n");
    printf("For he's a jolly good fellow!\n");
    jolly_fellow();
    cant_deny();

    return 0;
}

void jolly_fellow(void)
{
    printf("For he's a jolly good fellow!\n");
}

void cant_deny(void)
{
    printf("Which nobody cant deny!\n");
}
