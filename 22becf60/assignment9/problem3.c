//write a program to swap two rows  in a given matrix.

#include<stdio.h>

int main()
{
	int matrix[3][3]={
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	int i,j,n1,n2,temp;
	printf("matrix before row exchange : \n");
	
	for (i=0;i<3;++i)
	{
		for (j=0;j<3;++j)
			printf("%d",matrix[i][j]);
		printf("\n");
	}
	
	printf("enter the two rows number to be swap:");
	scanf("%d %d",&n1,&n2);

	for (i=0;i<3;++i)
	{
		temp=matrix[n1-1][i];
		matrix[n1-1][i]=matrix[n2-1][i];
		matrix[n2-1][i]=temp;

		printf("matrix after row exchange: \n");
	}
		for(i=0;i<3;++i)
		{
			for(j=0;j<3;++j)
				printf("%d",matrix[i][j]);
						printf("\n");
						}
						return 0;
						}
					
			

