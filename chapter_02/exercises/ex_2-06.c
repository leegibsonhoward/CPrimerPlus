/********************************************************
*
* Chapter: 2
*
* ex_2-06.c -- Print Smile! multiple times using one function
*
* Author: Lee Howard
*
* Date: 02/18/2021
*
* Purpose: Practice the reuse of functions
*
* Usage:
*       Just run the program no input required
*
********************************************************/

#include <stdio.h>

void print_smile(void);

int main(void)
{
    printf("\n");
    print_smile();
    print_smile();
    print_smile();
    
    printf("\n");
    print_smile();
    print_smile();
    
    printf("\n");
    print_smile();
    
    printf("\n");

    return 0;
}

void print_smile(void)
{
    printf("Smile!");
}