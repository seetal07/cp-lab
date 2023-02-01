//write a program to print the number of days of a month if a month number and year is given using function

#include <stdio.h>

    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};

void daysinmonths(int m);
int main()
{



    int m;
    printf("Enter the month number:");

    scanf("%d",&m);

   daysinmonths(m);
return 0;
}
void daysinmonths(int m)
{

   if(m>12 || m<1)
    {


     printf("Invalid input");
    }
    else if(m==2)
    {
    	printf("no of days in month 2 is either 29 or 28");
    }
    else

    	printf("no of days in month %d is %d",m,a[m-1]);

}
