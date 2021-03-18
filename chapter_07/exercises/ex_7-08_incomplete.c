/********************************************************
*
* Chapter: 7
*
* ex_07-08.c -- Pay rates with menu
*
* Author: Lee Howard
*
* Date: 03/17/2021
*
* Purpose: More practice with conditional statements
*
* Usage: 
*       Enter number of hours worked for a week 
*       and outputs 
*       
*
********************************************************/

/*
    Modify assumption a. in exercise 7 so that the program
    presents a menu of pay rates from which to choose. Use
    a switch to select the pay rate.

*/

#include <stdio.h>

#define BASEPAY     10      /* $10 per hour         */
#define BASEHRS     40      /* hours at basepay     */
#define OVERTIME    1.5     /* 1.5 time             */
#define AMT1        300     /* 1st rate tier        */
#define AMT2        150     /* 2st rate tier        */
#define RATE1       0.15    /* rate for 1st tier    */
#define RATE2       0.20    /* rate for 2nd tier    */
#define RATE3       0.25    /* rate for 3rd tier    */

int main(void)    
{
    double hours;
    double gross;
    double net;
    double taxes;
    
    printf("Enter the number of hours worked this week: ");
    scanf("%lf", &hours);
    if (hours <= BASEHRS)
        gross = hours * BASEPAY;
    else
        gross = BASEHRS * BASEPAY + (hours - BASEHRS) * BASEPAY * OVERTIME;
    if (gross <= AMT1)
        taxes = gross * RATE1;
    else if (gross <= AMT1 + AMT2)
        taxes = AMT1 * RATE1 + (gross - AMT1) * RATE2;
    else
        taxes = AMT1 * RATE1 + AMT2 * RATE2 + (gross - AMT1 - AMT2) * RATE3;
    net = gross - taxes;
    printf("gross: $%.2f; taxes: $%.2f; net: $%.2f\n", gross, taxes, net);
      
    return 0;
}