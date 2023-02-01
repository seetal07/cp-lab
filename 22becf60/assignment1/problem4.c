//write a program to enter two number, find the sum and average

#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the first number: ");
	scanf("%d",&a);

	printf("enter the second number:");
	scanf("%d" ,&b);
	
	int sum=a+b;
	int avg=sum/2;

	printf("sum is: %d", sum);
	printf("average is: %d", avg);

	return 0;
}	
