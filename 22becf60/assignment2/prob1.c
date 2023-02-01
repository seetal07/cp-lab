//write a program to find the volume of sphere

#include<stdio.h>
#include<math.h>
int main()
{
	float r;
	printf("enter the radius:");
	scanf("%f",&r);

	float volume=(4/3)*3.14*r*r*r;

	printf("the volume of the sphere is: %f",volume);

	return 0;
}
