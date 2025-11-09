#include<stdio.h>
int main(){

int n,r,sum=0;

printf(" enter your numbres ");
scanf("%d",&n);

while(n>0){

r=n%10;
sum=sum+r;
n=n/10;

}

printf(" %d is the  sum of given  digits ",sum);

    return 0;
}