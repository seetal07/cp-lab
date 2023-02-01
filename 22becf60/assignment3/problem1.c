//write a program to check whether the given number is positive or negative.

#include<stdio.h>
#include<math.h>

int main()
{
	int a;
	printf("enter a number:");
	scanf("%d",&a);

	if(a>0){
		printf("the number is positive.");

	}
	else{
		printf("the number is negative.");
	}

	return 0;
}
