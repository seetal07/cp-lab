//write a program to claculate the simple interest

#include<stdio.h>
#include<math.h>

int main()
{
	float P,R,T;
	printf("enter the principle amount:");
	scanf("%f",&P);

	printf("enter the rate of interest:");
	scanf("%f",&R);

	printf("enter the time(in years):");
	scanf("%f",&T);

	float SI=(P*R*T)/100;

	printf("the simple interest is: %f",SI);

	return 0;
}
