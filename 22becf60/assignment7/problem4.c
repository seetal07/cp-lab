//print the folowing pattern of alphabets

#include <stdio.h>
int main() 
{
	   int i, j;
	   char input, a = 'A';
	   printf("Enter an uppercase character you want to print in the last row: ");
	   scanf("%c", &input);
   
	   for (i = 1; i <= (input - 'A' + 1); ++i) 
	   {
    	  for (j = 1; j <= i; ++j) {
	         printf("%c ", a);
      }
      ++a;
      printf("\n");
   }
   return 0;
}

