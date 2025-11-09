#include<stdio.h>
int sum(int n);

int main(){
int s=0;
int n=0;
printf("enter the value of your n");
scanf("%d",&n);
s=sum(n);
printf("%d is sum of n nutural number ",s);
return 0;
}

int sum(int x){
int s=0;
if(x==1)
return x;

s=x+sum(x-1);
return s;
}