/********************************************************
*
* Chapter: 5
*
* ex_05-04.c -- Height calculator
*
* Author: Lee Howard
*
* Date: 03/8/2021
*
* Purpose: Convert height in centimeter and output in
*           centimeters and feet and inches
*
* Usage: 
*       Enter height in centimeters
*       
*
********************************************************/

/*
   Write a program that asks the user to enter a height in centimeters and then displays the
height in centimeters and in feet and inches. Fractional centimeters and inches should
be allowed, and the program should allow the user to continue entering heights until a
nonpositive value is entered. A sample run should look like this:

Enter a height in centimeters: 182
182.0 cm = 5 feet, 11.7 inches
Enter a height in centimeters (<=0 to quit): 168.7 
168.0 cm = 5 feet, 6.4 inches
Enter a height in centimeters (<=0 to quit): 0
bye

*/

#include <stdio.h>

const float CM_PER_IN = 2.54;
const int IN_PER_FT = 12;

int main(void)
{
	float cm, in, left;
	int feet;

	printf("Enter a height in centimeters: ");
	scanf("%f", &cm);

	while (cm > 0)
	{
		in = cm / CM_PER_IN; // convert height to inches
		feet = (int) in / IN_PER_FT; // get number of feet in height
		left = in - feet * IN_PER_FT; // get remaining inches

		printf("%.1f cm = %d feet, %.1f inches\n",
		       cm, feet, left);

		printf("Enter a height in centimeters (<= 0 to quit): ");
		scanf("%f", &cm);
	}

	printf("bye!\n");
    
	return 0;
}