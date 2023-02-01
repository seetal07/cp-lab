//to check whether the number is divisible by both 11and 13

#include<stdio.h>
#include<math.h>

int main()
{
	int a;
	printf("enter the number:");
	scanf("%d",&a);

	if(a%11==0 && a%13==0){
		printf("the number is divisible by both 11 and 13.");
	}
	else{
		printf("the number is not divisible by 11 and 13");
	}
	 return 0;
}
