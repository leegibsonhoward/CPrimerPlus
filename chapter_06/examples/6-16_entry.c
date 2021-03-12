/********************************************************
*
* Chapter: 06
*
* 6-16_entry.c -- Entry with while loop
* 
* Listing: 6-16
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn about entry condition loop(while)
*
* Usage:
*      Enter number and if matches code program exits
*
********************************************************/
#include <stdio.h>

int main(void)
{
    const int secret_code = 13;
    int code_entered;

    printf("To enter the triskaidekaphobia therapy club,\n");
    printf("please enter the secret code number: ");
    scanf("%d", &code_entered);
    while (code_entered != secret_code)
    {
        printf("To enter the triskaidekaphobia therapy club,\n");
        printf("please enter the secret code number: ");
        scanf("%d", &code_entered);
    }

    printf("Congratulations! You are cured!\n");

    return 0;
}