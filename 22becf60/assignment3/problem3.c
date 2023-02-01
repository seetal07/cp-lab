//to find the largest among two numbers

#include<stdio.h>
#include<math.h>

int main()
{
	int a,b;
	printf("enter the first number:");
	scanf("%d",&a);
	printf("enter the second number:");
	scanf("%d",&b);

	if(a>b){
		printf("the first number is largest.");
	}
	else{
		printf("the second number is the largest.");
	}

	return 0;
}
