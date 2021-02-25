/********************************************************
*
* Chapter: 3
*
* ex_03-06.c -- Amount of molecules in an amount of water
*
* Author: Lee Howard
*
* Date: 02/24/2021
*
* Purpose: More practice expressing exponential notation
*
* Usage: 
*       Input quarts of water and output number of molecules
*       in that amount
*       
*
********************************************************/

#include <stdio.h>

int main(void)
{
    /* single molecule */
    float water_molecule_mass = 3.0e-23;
    /* 950 grams per quart */
    int quart_of_water = 950;
    int quarts;

    printf("Enter quarts of water: ");
    scanf("%d", &quarts);
    
    printf("quarts of water: %d\nmolecules: %f\n",
        quarts, quarts * quart_of_water / water_molecule_mass);

    return 0;
}