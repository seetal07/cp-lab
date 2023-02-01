//write a program to obtain the running sum of the fist n numbers using recursion

#include<stdio.h>

	int recSum(int n)
{

    if (n <= 1)
        return n;
   

    return n + recSum(n - 1);
}
 

int main()
{
    int n = 10;
    printf("Sum = %d ", recSum(n));
    return 0;
}
