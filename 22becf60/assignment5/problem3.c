//write a program to compute the sum of the series 1+7^2+7^3+.....+nth term 

#include<stdio.h>
#include<math.h>

int main()
{
	int num,i=0, sum=0;
	printf("enter the nth term till you want to calcute the sum:");
	scanf("%d",&num);
	
	while(i<=num)
	{
		sum = sum + pow(7,i);
		i++;
	}

	printf("the sum is %d",sum);

	return 0;
}



