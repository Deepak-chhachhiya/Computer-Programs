#include<stdio.h>
int main(){
    int r1,c1;
    printf("Enter the row and coloumn of matrix 1 : ");
    scanf("%d %d",&r1 ,&c1);
    
    int arr1[r1][c1] , arr2[c1][r1];
    printf("Enter the elements of square matrix 1 : ");
    for (int  i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
        
    }   
    
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1 ; j++)
        {
           arr2[j][i] = arr1[i][j]; 
        }
        
    }

    for (int  i = 0; i < c1; i++)
    {
        for (int j = 0; j < r1; j++)
        {
            printf("%d ",arr2[i][j]);
        }
        
    } 

    return 0;
}