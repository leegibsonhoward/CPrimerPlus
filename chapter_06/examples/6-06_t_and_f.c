/********************************************************
*
* Chapter: 06
*
* 6-06_t_and_f.c -- true and false values
* 
* Listing: 6-06
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn about true and false values
*
* Usage:
*      Just run the program no input needed
*
********************************************************/
#include <stdio.h>

int main(void)
{
    int true_val, false_val;

    true_val = (10 > 2);
    false_val = (10 == 2);
    printf("true = %d; false = %d \n", true_val, false_val);
    
    return 0;
}