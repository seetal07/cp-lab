//find the area of the triangle with conditions

#include<stdio.h>
#include<math.h>
 int main()
{
	float a,b,c;
	printf("enter the three sides of the triangle a,b,c");
	scanf("%f %f %f",&a,&b,&c);

	float s = (a+b+c)/2;
	float area = sqrt(s*(s-a)*(s-b)*(s-c));

	if ((a+b>c) || (a+c>b) || (b+c>a)){
		printf("the area of the triangle is %f",area);
	}
	else{
		printf("the triangle is not valid");
	}

	return 0;
}
