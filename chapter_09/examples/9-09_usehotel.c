/********************************************************
*
* Chapter: 09
*
* 9-09_usehotel.c --  Hotel program
* 
* Listing: 9-09
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn more about recursion
*
* Usage:
*      Choose hotel choice from menu and prompts for
*      number of nights and outputs total cost.
*
********************************************************/
#include <stdio.h>

#include "9-11_hotel.h" /* defines constants, declares functions */

int main(void)
{
    int nights;
    double hotel_rate;
    int code;
    while ((code = menu()) != QUIT)
    {
        switch (code)
        {
        case 1:
            hotel_rate = HOTEL1;
            break;
        case 2:
            hotel_rate = HOTEL2;
            break;
        case 3:
            hotel_rate = HOTEL3;
            break;
        case 4:
            hotel_rate = HOTEL4;
            break;
        default:
            hotel_rate = 0.0;
            printf("Oops!\n");
            break;
        }
        nights = getnights();
        showprice(hotel_rate, nights);
    }
    printf("Thank you and goodbye.\n");
    return 0;
}