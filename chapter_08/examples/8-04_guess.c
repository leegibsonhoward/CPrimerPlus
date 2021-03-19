/********************************************************
*
* Chapter: 08
*
* 8-04_guess.c --  Faulty guessing game
* 
* Listing: 8-04
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn about buffered input
*
* Usage:
*      Enter a number and outputs if guess is correct
*
********************************************************/
#include <stdio.h>

/*  Original implementation with faulty logic

int main(void)
{
    int guess = 1;

    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right and with");
    printf("\nan n if it is wrong.\n");
    printf("Uh...is your number %d?\n", guess);
    while ((getchar()) != 'y')
    {
        printf("Well, then is it %d?\n", ++guess);
    }
    printf("I knew i could do it!\n");


    return 0;
}

*/

int main(void)
{
    int guess = 1;
    char response;

    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right and with");
    printf("\nan n if it is wrong.\n");
    printf("Uh...is your number %d?\n", guess);
    while ((response = getchar()) != 'y')
    {
        if(response == 'n')
            printf("Well, then is it %d?\n", ++guess);
        else
            printf("Sorry, I understand only y and n.\n");
            while(getchar() != '\n')
                continue;
    }
    printf("I knew i could do it!\n");


    return 0;
}
