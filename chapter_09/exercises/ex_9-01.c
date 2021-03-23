/********************************************************
*
* Chapter: 9
*
* ex_09-01.c -- Min/Max program
*
* Author: Lee Howard
*
* Date: 03/15/2021
*
* Purpose: Practice counting input characters until EOF 
*
* Usage: 
*       input characters until # is input value then stop
*       
*
********************************************************/

/*
    Devise a program that counts the number of characters
    in its input up to the end of file.

*/

double min(double x, double y);

#include <stdio.h>

int main(void)
{
    printf("%.2f\n", min(5, 3));
    return 0;
}

double min(double x, double y)
{
    return (x < y) ? x : y;
}
