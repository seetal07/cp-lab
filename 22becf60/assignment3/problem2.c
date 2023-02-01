//write a program to check whether the number is even or odd

#include<stdio.h>
#include<math.h>

int main()
{
	int a;
	printf("enter the number:");
	scanf("%d",&a);

	if(a%2==0){
		printf("the number is even.");
	}
	
	else{
		printf("the number is odd.");
	}

	return 0;
}
