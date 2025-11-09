#include<stdio.h>
void swap(int*a,int*b);

int main(){

    int a,b;
    printf(" entre your number a");
    scanf("%d",&a);
    printf(" enter your second number");
    scanf("%d",&b);
    swap(&a,&b);
    printf("a=%d,b=%d",a,b);
    return 0;
}// call by refreance
void swap(int*x,int*y){

int t;
t=*x;
*x=*y;
*y=t;

printf("x=%d,Y=%d\n",*x,*y);

}