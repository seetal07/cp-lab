//write a program to find the minimum and the maximum and average of an array

#include<stdio.h>

int main()
{
	int a[8],i,l,g,s=0;
	float avg;
	printf("enter 8 numbers : \n");

	for (i=0;i<8;i++)
	{
		scanf("%d",&a[i]);
		s= s+ a[i];
		avg= s/8.0;
	}
	printf("average is %.2f \n",avg);
	g= a[0];

	for(i=0;i<8;i++)
		if (a[i]>g)
			g=a[i];
	printf("greatest number is %d \n",g);

	l=a[0];

	for (i=0;i<8;i++)
		if (a[i]<l)
			l=a[i];
	printf("lowest number is %d \n",l);

	return 0;
}
