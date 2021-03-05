/********************************************************
*
* Chapter: 5
*
* ex_05-02.c -- Print integers
*
* Author: Lee Howard
*
* Date: 03/5/2021
*
* Purpose: Learn more about using while loops
*
* Usage: 
*       Enter integer value and outputs counting to +10
*       
*
********************************************************/

/*
    Write a program that asks for an integer and then prints
    all the integers from (and including) that value up to
    (and including) a value larger by 10. (That is, if
    the input is 5, the output runs from 5 to 15.) Be sure
    to separate each output value by a space or tab or newline.
*/

#include <stdio.h>

int main(void)
{
    int num;
    int count = 0;

    printf("Enter a integer number: ");
    scanf("%d", &num);
    
    while (count <= 10)
    {
        printf("%d\n", num);
        ++count;
        ++num;
    }

    return 0;
}