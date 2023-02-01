//write a program to compute sum of square of first n natural numbers

#include<stdio.h>
#include<math.h>

int main()

{
	int num,sum=0,i;
	printf("enter the number till you want to calculate the sum: ");
	scanf("%d",&num);

	for(i=1;i<=num;i++)
	{
		sum = sum + pow(i,2);
	}
	 
	printf("the sum is : %d",sum );

	return 0;
}
	
