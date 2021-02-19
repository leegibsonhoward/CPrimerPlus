/********************************************************
*
* Chapter: 2
*
* ex_2-05.c -- Print toes * 2 and toes squared
*
* Author: Lee Howard
*
* Date: 02/18/2021
*
* Purpose: More practice using simple math and printf statements
*
* Usage:
*       Just run the program no input required
*
********************************************************/

#include <stdio.h>

int main(void)
{
    int toes = 10;

    printf("toes = %d, toes twice = %d, toes squared = %d\n",
    toes, toes * 2, toes * toes);
    
    return 0;
}