/********************************************************
*
* Chapter: 03
*
* 3-01_rhodium.c -- Your weight in rhodium
* 
* Listing: 3-01
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Are you worth your weight in rhodium
*
* Usage:
*       Enter your weight in pounds
*       outputs your value in rhodium
*
********************************************************/
#include <stdio.h>

int main(void)
{
    float weight;   /* user weight */
    float value;    /* rhodium equivalent*/

    printf("Are you worth your weight in rhodium?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds: ");
    
    /* get input from user */
    scanf("%f", &weight);

    /* assume rhodium is worth $770 per pound */
    value = 770 * weight * 14.5833;
    
    printf("Your weight in rhodium is worth $%.2f.\n", value);
    printf("You are easily worth that! If rhodium prices drop,\n");
    printf("eat more to maintain your value.\n");

    return 0;
}