//write a program to make upper triangular values to zero.

#include<stdio.h>

int main()

{
	 int rows, cols;  
          
    
    int a[][4] = {     
                    {1, 2, 3, 5},  
                    {8, 6, 4, 7},  
                    {4, 5, 6, 4},
		    {5, 6, 2, 1}  
                 };  
      
    
    rows = (sizeof(a)/sizeof(a[0]));  
    cols = (sizeof(a)/sizeof(a[0][0]))/rows;  
      
    if(rows != cols){  
        printf("Matrix should be a square matrix\n");  
    }  
    else{  
        
        printf("Upper triangular matrix: \n");  
        for(int i = 0; i < cols; i++){  
            for(int j = 0; j <rows; j++){  
              if(i < j)  
                printf("0 ");  
              else  
                printf("%d ", a[i][j]);  
            }  
            printf("\n");  
        }  
    }  
          
    return 0;  
}  


