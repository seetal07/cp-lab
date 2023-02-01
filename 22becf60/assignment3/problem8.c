//write a program to round floating point to integer by considering floor and ceing operationwithout using built in function 

#include<stdio.h>

int main()
{
	float a;
	printf("enter the floating point:");
	scanf("%f",&a);

	int b = a; 
	printf("the floor value is %d",b);

	int c=++b;
	printf("the ceiling value is %d",c);

	return 0;
}
 
