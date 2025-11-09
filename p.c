#include<stdio.h>
int main(){

    int num=10;
    int *ptr=&num;
     *ptr= *ptr +1;

    printf("%d  %d ",*ptr,num);  

    return 0;
}