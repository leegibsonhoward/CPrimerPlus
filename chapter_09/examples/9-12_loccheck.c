/********************************************************
*
* Chapter: 09
*
* 9-12_loccheck.c --  Variable location program
* 
* Listing: 9-12
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn about the "address of operator '&'."
*
* Usage:
*       Just run the program no input needed      
*
********************************************************/
#include <stdio.h>

#include "9-11_hotel.h" /* defines constants, declares functions */

void mikado(int);

int main(void)
{
    int pooh = 2, bah = 5;

    printf("In main(), pooh = %d and &pooh = %p\n", pooh, &pooh);
    printf("In main(), bah = %d and &bah = %p\n", bah, &bah);
    
    mikado(pooh);
    
    return 0;
}

void mikado(int bah)
{
    int pooh = 10;
    printf("In mikado(), pooh = %d and &pooh = %p\n", pooh, &pooh);
    printf("In mikado(), bah = %d and &bah = %p\n", bah, &bah);

    
}