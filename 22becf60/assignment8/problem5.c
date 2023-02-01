//write a program to find the even number,odd number,positive number,negative number,present in an array

#include<stdio.h>

int main()
{
	int a[10],i,j,k;
	printf("enter 8 elements : \n");
	
	for(i=0;i<8;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<8;i++)
	{
		if(a[i]%2==0)
			printf("\n a[%d] is even",i);
	
		else
			printf("\n a[%d] is odd",i);
		if(a[i]<0)
			printf("\n a[%d] is negative",i);
		else
			printf("\n a[%d] is positive",i);
	}
	return 0;
}
