#include<stdio.h>

void table(int n,int i );

int main(){

    int n;
    printf(" entre your number ");
    scanf("%d",&n);
    table(n,1);
    return 0;
}

void table(int x,int i){

if(i>10)
{
return ;}
printf("%d*%d=%d\n",x,i,x*i);
table(x,i+1);


}