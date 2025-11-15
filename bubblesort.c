/* 
#include<stdio.h>
int main(){
    int n, i, j,  temp, arr[100];
    
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
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
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