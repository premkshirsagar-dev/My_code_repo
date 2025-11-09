#include<stdio.h>


int main (){
int n,a=1,b=1;
printf("enter your  numbre ");
scanf("%d",&n);

while(n>=a){

if(a==n||b==n)

    break;
    a=a+b;
    b=b+a;

}
if(a==n||b==n){

    printf("  %d numbre is febbocci",n);
}
else{

     printf("  %d numbre is  not a febbocci",n);
}
 return 0;

}