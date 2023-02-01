//to check the validity of a triangle

#include<stdio.h>


int main()
{
	int a,b,c;
	printf("the sides of the triangle respectively are:");
	scanf("%d %d %d", &a,&b,&c);

	if(a+b>c || b+c>a || a+c>b){
		printf("the triangle is valid.");
	}
	else{
		printf("the triangle is not valid.");
	}

	return 0;
}
