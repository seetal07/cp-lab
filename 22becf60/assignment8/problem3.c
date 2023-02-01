//write a program to multiply the content of two array and store the result in third array

#include<stdio.h>

int main()
{
	int a[]={1,2,3,4};
	int b[]={1,2,3,4};
	int c[4],i;
	int size= sizeof(a)/sizeof(a[0]);
	
	for(int i=0;i<size;i++){
		c[i]=a[i]*b[i];
		printf("\n c[%d]=%d",i,c[i]);
	}

	return 0;
}

	

