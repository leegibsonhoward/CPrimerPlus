/********************************************************
*
* Chapter: 8
*
* ex_08-05.c -- Guessing game
*
* Author: Lee Howard
*
* Date: 03/18/2021
*
* Purpose: Practice input streams
*
* Usage: 
*        outputs guess
*       
*
********************************************************/

/*

    Modify the guessing program of Listing 8.4 so that it
	uses a more intelligent guessing strategy. For example,
	have the program initially guess 50, and have it ask the
	user whether the guess is high, low, or correct. If, say,
	the guess is low, have the next guess be halfway between
	50 and 100, that is, 75. If that guess is high, let the
	next guess be halfway between 75 and 50, and so on. Using
	this binary search strategy, the program quickly zeros in
	on the correct answer, at least if the user does not cheat.

*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
  int high = 100;
  int low = 1;
  int guess = (high + low) / 2;
  char response;

  printf("Pick an integer from 1 to 100. I will try to guess ");
  printf("it.\nRespond with a y if my guess is right, with");
  printf("\na h if it is high, and with an l if it is low.\n");
  printf("Uh...is your number %d?\n", guess);
  while ((response = getchar()) != 'y')       /* get response */
  {
      if (response == '\n')
          continue;
      if (response != 'h' && response != 'l')
      {
           printf("I don't understand that response. Please enter h for\n");
           printf("high, l for low, or y for correct.\n");
           continue;
       }
    
      if (response == 'h')
          high = guess - 1;
      else if (response == 'l')
          low = guess + 1;
      guess = (high + low) / 2;
    printf("Well, then, is it %d?\n", guess);
  }
  printf("I knew I could do it!\n");
  return 0;
}
