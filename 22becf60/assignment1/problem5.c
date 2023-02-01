//write a program to covert celcius to fahrenheit

#include<stdio.h>
int main()
{
	float c;
	printf("temperature in celcius:");
	scanf("%f",&c);

	
	float f=c*1.8+32;

	printf("temperature in fahrenheit is: %f", f);

	return 0;
}


