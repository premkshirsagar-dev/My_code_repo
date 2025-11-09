#include<stdio.h>

int add(int a,int b);
int main(){

int a,b,sum;
printf("enter your  both numbres ");
scanf("%d %d",&a,&b);

sum=add(a,b);

printf("%d is sum opf both given number ",sum);

}
int add(int x,int y){

    int sum=0;
    sum=x+y;
    return sum;
}