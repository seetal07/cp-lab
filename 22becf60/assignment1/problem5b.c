//write a program to convert fahrenheit to celcius

#include<stdio.h>
int main()
{
	float f;
	printf("temperature in fahrenheit:");
	scanf("%f",&f);

	float c=(f-32)/1.8;

	printf("temperature in celcius : %f",c);

	return 0;
}

