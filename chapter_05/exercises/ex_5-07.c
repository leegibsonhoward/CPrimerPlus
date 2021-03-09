/********************************************************
*
* Chapter: 5
*
* ex_05-07.c -- Cubed value
*
* Author: Lee Howard
*
* Date: 03/8/2021
*
* Purpose: Work with functions and calculations
*
* Usage: 
*       Enter number output its cubed value
*       
*
********************************************************/

/*
  Write a program that requests a type float number and prints the value of the number
cubed. Use a function of your own design to cube the value and print it. The main()
program should pass the entered value to this function.

*/

#include <stdio.h>

void cubed(float);

int main(void)
{
    float num;

    printf("Enter a floating point number: ");
    scanf("%f", &num);

    cubed(num);
    
    return 0;
}

void cubed(float n)
{
    printf("%2.2f", n * n * n);
}
