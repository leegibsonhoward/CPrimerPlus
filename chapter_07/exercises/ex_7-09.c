/********************************************************
*
* Chapter: 7
*
* ex_07-09.c -- Pay rates with menu
*
* Author: Lee Howard
*
* Date: 03/17/2021
*
* Purpose: More practice with conditional statements
*
* Usage: 
*       Enter number and outputs all prime numbers in range
*
*
********************************************************/

/*
   Write a program that accepts an integer as input and
   then displays all the prime numbers smaller than or
   equal to that number.

*/

#include <stdio.h>

#define NO 0
#define YES 1
int main(void)
{
   long num;                      /* value to be checked */
   long div;                      /* potential divisors  */
   long lim;                      /* limit to values     */
   int prime;

   printf("Please enter limit to values to be checked; ");
   printf("Enter q to quit.\n");
   while (scanf("%ld", &lim) == 1 && lim > 0)
   {
         for (num = 2; num <= lim; num++)
         {               
          for (div = 2, prime = YES; (div * div) <= num; div++)
             if (num % div == 0)
                prime = NO;           /* number is not prime  */
          if (prime == YES)
             printf("%ld is prime.\n", num);
      }
      printf("Please enter another limit; ");
      printf("Enter q to quit.\n");
   }
   return 0;
}
