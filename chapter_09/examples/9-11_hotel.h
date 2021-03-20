/********************************************************
*
* Chapter: 09
*
* 9-11_hotel.h --  Hotel program
* 
* Listing: 9-11
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn more multiple source files
*
* Usage:
*      Declarations
*
********************************************************/
#include <stdio.h>

#define QUIT 5
#define HOTEL1 80.00
#define HOTEL2 125.00
#define HOTEL3 155.00

#define HOTEL4 200.00
#define DISCOUNT 0.95
#define STARS "**********************************"

// shows list of choices
int menu(void);

// returns number of nights desired
int getnights(void);

// calculates price from rate, nights
// and displays result
void showprice(double rate, int nights);