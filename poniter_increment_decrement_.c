#include<stdio.h>

int main(){
int a[100]={3,-7,6,4,9,-5,9};


    int *p;
    p=a;
    // printf("\n %d is value of 3 index is ",*p);
    // printf("\n%d is value of 3 index is ",p);
    // *p++;
    //  printf(" \n%d is value of 3 index is ",*p);
    // printf("\n%d is value of 3 index is ",p);
    // *p++;
    // printf(" \n%d is value of 3 index is ",*p);
    // printf("\n%d is value of 3 index is ",p);
    // *p++;
    // printf(" \n%d is value of 3 index is ",*p);
    // printf("\n%d is value of 3 index is ",p);


    printf("\n%d is the post increment value ",*p++);
    
    printf("\n%d is the post increment value ",p++);
    
    printf("\n%d is the post increment value ",*p);
     printf("\n%d is the post increment value ",p);
    p=p+2;
    printf("\n%d is increment by 2 byte \n and address is %d ",*p,p);

        printf("\n%d \n %d\n %d\n    %d ",*--p,*--p,*--p,  p);


    return 0;

}