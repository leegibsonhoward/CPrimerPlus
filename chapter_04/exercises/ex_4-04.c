/********************************************************
*
* Chapter: 4
*
* ex_04-04.c -- Person info
*
* Author: Lee Howard
*
* Date: 03/3/2021
*
* Purpose: Practice with conversion specifiers
*
* Usage: 
*       Enter height in inches and name and prints info
*       
*
********************************************************/

#include <stdio.h>

int main(void)
{
    float height;
    char name[20];

    printf("Please enter your height(inches) and name:\n");
    scanf("%f %s", &height, name);
    printf("%s, you are %.3f feet tall\n",name, height / 12);

    return 0;
}