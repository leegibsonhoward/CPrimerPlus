/********************************************************
*
* Chapter: 04
*
* 4-12_floatcnv.c -- Missmatched floating point conversion
* 
* Listing: 4-12
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

int main(void)
{

    float n1 = 3.0;
    double n2 = 3.0;
    long n3 = 2000000000;
    long n4 = 1234567890;

    printf("%.1e %.1e %.1e %.1e\n", n1, n2, n3, n4);
    printf("%ld %ld\n", n3, n4);
    printf("%ld %ld %ld %ld\n", n1, n2, n3, n4);

    return 0;
}

/*
    produced different output than book:
        3.0e+00 3.0e+00 0.0e+00 0.0e+00
        2000000000 1234567890
        2000000000 1234567890 0 0

*/