#include<stdio.h>
 
 // defination part 
 int sum(int x){
    int s=0;
if(x==1)
return 1;

s=x+sum(x-1);
return s;

 }

 int main (){
 int s;
 int n=10;
 s=sum(n);
 printf("%d is the sum  of %d nuture number ",s,n);
 }