/********************************************************
*
* Chapter: 6
*
* ex_06-04.c -- Pyramid program
*
* Author: Lee Howard
*
* Date: 03/12/2021
*
* Purpose: Practice with nested loops
*
* Usage: 
*       Enter base letter to start
*       
*
********************************************************/

/*
    Have a program request the user to enter an uppercase
    letter. Use nested loops to produce a pyramid pattern
    like this:
        
        A
       ABA
      ABCBA
     ABCDCDA
    ABCDEDCBA


    The pattern should extend to the character entered. For
    example, the preceding pattern would result from an input
    value of E . Hint: Use an outer loop to handle the rows. Use
    three inner loops in a row, one to handle the spaces, one for
    printing letters in ascending order, and one for printing
    letters in descending order.
*/

#include <stdio.h>

int main(void)
{
    int row;
    char ch;

    printf("Enter an uppercase letter: ");
    scanf("%c", ch);

    // (TODO): Finish implementation
    /*
    //Use an outer loop to handle the rows. 
    for (row = 0; row < 'A' - ch; row++)
    {
        // Use three inner loops in a row

        // 1. handle the spaces
        for ()
        {
            // 2. printing letters in ascending order 
            for()
            {
                // 3. printing letters in descending order
                for()
                {

                }
            }
        }
    }*/

    return 0;
}