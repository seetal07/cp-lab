//write a program to find the prime numbers within a range

#include<stdio.h>
#include<math.h>


int main()
{
       int a, b, i, c;
       printf("\n Enter start value :");
       scanf("%d",&a);
      
       printf("\n Enter end value : ");
       scanf("%d",&b);
    
       printf("\n Prime Numbers between %d and %d : ", a, b);

       while (a < b)
{

	c = 0;
	for(i = 2; i <= a/2; ++i)
{
	if(a % i == 0)
{
	c = 1;
	break;
}
}

        if (c == 0)
        printf("%d ", a);
        ++a;
}
       printf("\n");
       

       return 0;
}


