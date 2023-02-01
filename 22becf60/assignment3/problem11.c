// write a program to check whether a given year is leap year or not using nested if else

#include<stdio.h>

int main()
{
	int year;
	printf("enter the year");
	scanf("%d",&year);

	if(year%4==0 ){
		printf("the year is leap year");
	}
	else{
		printf("the year is not a leap year");
	}
	return 0;
}
