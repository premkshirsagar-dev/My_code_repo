#include<stdio.h>

int main(){

    int n,i;
    int arr[100];

    printf(" entre your size of array");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf(" enter %d index value ",i);
        scanf("%d",&arr[i]);
        
       
    }

    for(i=0;i<n;i++){
          int *ptr;
         ptr=&arr[i];
    
         printf("  %d index value is %d the their address %d  ",i,*ptr,ptr);
       
        
    }
    
    return 0;
}

