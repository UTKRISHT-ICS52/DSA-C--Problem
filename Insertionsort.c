/* 
#include<stdio.h>
int main(){
    int n, i, j, swap, arr[100];
    
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    printf("\n");
    
    
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d:",i);
        scanf("%d",&arr[i]);
        printf("\n");
    }
    printf("Array:\t");
    for (i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=swap;
            }
        }
    }
    
    printf("Array in sorted order:\t");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}
*/
