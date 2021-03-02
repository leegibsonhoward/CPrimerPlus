/********************************************************
*
* Chapter: 04
*
* 4-11_intconv.c -- Missmatched integer conversion
* 
* Listing: 4-11
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn what happens with missmatched conversions
*
* Usage:
*       Just run the program no input needed
*
********************************************************/
#include <stdio.h>

#define PAGES 336
#define WORDS 65618

int main(void)
{

    short num = PAGES;
    short mnum = -PAGES;

    printf("num as short and unsigned short: %hd %hu\n", num, num);
    printf("-num as short and unsigned short: %hd %hu\n", mnum, mnum);
    printf("num as int and char: %d %c\n", num, num);
    printf("WORDS as int, short, and char: %d %hd %c\n", WORDS, WORDS, WORDS);
    
    return 0;
}