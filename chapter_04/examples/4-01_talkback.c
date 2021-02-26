/********************************************************
*
* Chapter: 04
*
* 4-01_talkback.c -- Nosy, informative program
* 
* Listing: 4-01
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Print information of a person
*
* Usage:
*       Enter your name, weight, and outputs calculated
*       volume in cubic feet, letters count and
*       and size of storage for name in bytes.
*
********************************************************/
#include <stdio.h>
#include <string.h>

#define DENSITY 62.4

int main(void)
{
    float weight, volume;
    int size, letters;
    char name[40];

    printf("Hi!, What's your first name?\n");
    scanf("%s", name);
    printf("%s, what's your weight in pounds?\n", name);
    scanf("%f", &weight);
    size = sizeof(name);
    letters = strlen(name);
    volume = weight / DENSITY;
    printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
    printf("Also, your fist name has %d letters,\n", letters);
    printf("and we have %d bytes to store it in.\n", size);

    return 0;
}