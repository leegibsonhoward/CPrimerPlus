/********************************************************
*
* Chapter: 2
*
* ex_2-07.c -- Display one, two, three using multiple functions
*
* Author: Lee Howard
*
* Date: 02/18/2021
*
* Purpose: Practice calling functions from other functions
*
* Usage:
*       Just run the program no input required
*
********************************************************/

#include <stdio.h>

void one_three(void);
void two(void);

int main(void)
{
    printf("starting now:\n");
    one_three();
    printf("done!\n");
    
    return 0;
}

void one_three(void)
{
    printf("one\n");
    two();
    printf("three\n");
}

void two(void)
{
    printf("two\n");
}