/********************************************************
*
* Chapter: 01
*
* 1-01_dogs.c -- Example of C source code
* 
* Listing: 1-01
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: To look at a simple c program.
*
* Usage:
*       Enter how many dogs you have and prints a message
*       about how many dogs you have.
*
********************************************************/
#include <stdio.h>

int main()
{
    int dogs;

    printf("How many dogs do you have?\n");
    scanf("%d", &dogs);
    printf("So you have %d dog(s)!\n", dogs);
    
    return 0;
}