#include<stdio.h>

int add();

int main(){

 int sum=0;
                       
    sum=add();

printf("%d is the sum of both numbers",sum);    
    return 0;
}
    int add(){

        int a,b,sum=0;
     printf("enter first and second number");
    scanf("%d %d ",&a,&b); 
        sum=a+b;
        return sum;
       
    }