#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i]<0)
        {
            printf(" %d is a Negative number , ", arr[i]);
        }
        if (arr[i]%2==0)
        {
            printf(" %d is a even number  ", arr[i]);
        }
        if (arr[i]%2!=0)
        {
            printf(" %d is a odd number ", arr[i]);
        }

        printf("\n");
    }

    

    
       
    return 0;
}