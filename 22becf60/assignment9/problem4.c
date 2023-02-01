//write a program to find the maximum element and minimum element present in a matrix.// program to find the maximum and minimum of a matrix

#include <stdio.h>

#define MAX_SIZE 100   

int main()
{
    int arr[MAX_SIZE];
    int i, max, min, rows, cols;


    printf("Enter rows of the matrix : \n");
    scanf("%d", &rows);
    printf("Enter cols of the matrix : \n");
    scanf("%d", &cols);
    int size = rows * cols;

   
    printf("Enter elements in the matrix : \n ");

    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }



    max = arr[0];
    min = arr[0];

    
     

    for(i=1; i<size; i++)
    {
       
        if(arr[i] > max)
        {
            max = arr[i];
        }

     
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

   
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d", min);

    return 0;
}
