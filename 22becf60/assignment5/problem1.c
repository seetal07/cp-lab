//write a program to compute 1+2+3+4+......+n

#include<stdio.h>

int main()
{
	int a,i=1, sum=0;
	printf("enter the number till you want to calculate the sum:");
	scanf("%d",&a);

	while(i<=a)
	{
		sum=sum + i;
		i++;

	
	}
	printf("the sum is : %d",sum);

	return 0;
}
