/********************************************************
*
* Chapter: 04
*
* 4-15_input.c -- Input and &
* 
* Listing: 4-15
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn when to use & and when not too
*
* Usage:
*       Enter your age, assets, and favorite pet
*
********************************************************/
#include <stdio.h>

int main(void)
{
    int age;
    float assets;
    char pet[30];

    printf("Enter your age, assets, and favorite pet.\n");
    scanf("%d %f", &age, &assets);

    scanf("%s", pet);

    printf("%d $%.2f %s\n", age, assets, pet);

    return 0;
}
