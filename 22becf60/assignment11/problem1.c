//write a program to calculate the gross salary of an employee by giving basic salary using a user defined function .also calculate DA(60%)HRA(15%)

#include<stdio.h>

int main()
{
	int gross_salary, basic, da, hra;

   printf("Enter basic salary : ");
   scanf("%d", &basic);

   da = (60 * basic) / 100;
   hra = (15 * basic) / 100;

   gross_salary = basic + da + hra;

   printf("\nGross salary : %d", gross_salary);
   return (0);
}
