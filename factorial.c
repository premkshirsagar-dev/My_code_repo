// this program for find the factorial of given number 

#include<stdio.h>
int main (){

 long unsigned int  fact=1;
int n,i ;
printf("entre your number ");
scanf("%d",&n);


for(i=1;i<=n;i++){

fact=fact*i;


}

printf(" given number`s factorial is %d",fact);

return 0;
}