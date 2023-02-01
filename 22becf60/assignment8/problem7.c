//write program to insert an element to a given index

#include<stdio.h>

int main()
{
	int arr[50],pos,c,n,value;
	printf("enter the number of elements in the array \n");
	scanf("%d",&n);

	printf("enter %d elements \n",n);
	for(c=0;c<n;c++)
		scanf("%d",&arr[c]);

	printf("enter the location where you want to insert the new element \n");
	scanf("%d",&pos);
	printf("enter the value \n");
	scanf("%d",&value);

	for(c=n-1;c>=pos-1;c--)
		arr[c+1]=arr[c];
	arr[pos-1]=value;
	printf("resultant array is \n");

	for(c=0;c<n;c++)
		printf("%d \n",arr[c]);

	return 0;
}
	
