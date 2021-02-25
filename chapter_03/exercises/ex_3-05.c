/********************************************************
*
* Chapter: 3
*
* ex_03-05.c -- Convert age in years to seconds
*
* Author: Lee Howard
*
* Date: 02/24/2021
*
* Purpose: More practice expressing exponential notation
*
* Usage: 
*       Input age and output converted to seconds
*       
*
********************************************************/

#include <stdio.h>

int main(void)
{
    float seconds_a_year = 3.156e7;
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("%d in seconds = %f\n", age, age * seconds_a_year);
    
    return 0;
}