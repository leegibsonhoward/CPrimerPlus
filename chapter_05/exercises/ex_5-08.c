/********************************************************
*
* Chapter: 5
*
* ex_05-08.c -- Temperature converter
*
* Author: Lee Howard
*
* Date: 03/8/2021
*
* Purpose: Work with functions and calculations
*
* Usage: 
*       Enter temp in farhenheit and output celsius and kelvin
*
*       
*
********************************************************/

#include <stdio.h>

void Temperatures(double);

int main(void)
{
    double temp;

    printf("Enter a Temp in farhrenheit (non-numeric to quit): ");
    while(scanf("%lf", &temp) == 1)
    {
      Temperatures(temp);
      printf("Enter a temp in farhrenheit (non-numeric to quit): ");
    }

    return 0;
}

void Temperatures(double fahr)
{
  const float FAHRENHEIT = fahr;
  const float CELSIUS = (FAHRENHEIT - 32.0) * 5/9;
  const float KELVIN = CELSIUS + 273.16;

  printf("Farhrenheit = %2.2f\nCelsius = %2.2f\nKelvin = %2.2f\n",
    FAHRENHEIT, CELSIUS, KELVIN);

}
