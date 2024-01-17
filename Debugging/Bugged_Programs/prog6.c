/*
 * What happens with this code and why?
 * Does it compile and an executable is built? 
 * 
-- Kazi Ashrafuzzaman
*/

#include<stdio.h>

/* This function is meant to convert a temperature value given in Fahrenheit
 * into its equivalent measure in Celcius scale. */
double Fahrenheit_to_Celcius(double f)
{
  double c;
  c = 5 / 9 * (f - 32);		
  return c;
}

int main()
{
	double	f;
	printf("Enter a temperature in Fahrenheit: ");
	scanf("%lf",&f);
	double	celcius = Fahrenheit_to_Celcius(f);		
	printf("The equivalent measure in Celsius scale = %lf \n", celcius); 
	return 0;
}

