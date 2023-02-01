//write a program to swap the values of two variables using 3rd variable

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter value of a:");
	scanf("%d",&a);

	printf("enter value of b:");
	scanf("%d",&b);

	c=a;
	a=b;
	b=c;

	printf("value of a: %d
