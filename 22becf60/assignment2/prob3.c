//write a program to claculate the compound interest 

#include<stdio.h>
#include<math.h>

int main()
{
	float p,r,t,n;
	printf("enter the principle amount:");
	scanf("%f",&p);

	printf("enter the rate of interest:");
	scanf("%f",&r);

	printf("enter the time(in years):");
	scanf("%f",&t);

	printf("enter the number of times you are getting interest in  a year:");
	scanf("%f",&n);

	float CI=(1+(r/n));
	float FV=(p) * pow(CI,(n*t));

	printf("the compound interest is: %f",FV);

	return 0;
}
