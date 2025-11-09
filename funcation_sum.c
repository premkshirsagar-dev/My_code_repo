#include<stdio.h>

 int sum(int a,int b);
int table(int n,int i);
 int table1(int n);
 int main (){

// int a,b;
// printf(" %d is the sum of two number ",sum(a,b));    // argument /actual parameter 
// return 0;

int n;
printf("%d",table1(n));
return 0;

 }



int sum(int a,int b){    // parameter /formal parameter 

printf(" enter your first number ");
scanf("%d",&a);

printf(" enter your second numbers ");
scanf("%d",&b);
return a+b;


}

int table1(int n){
 int i;
printf("enter your number ");
scanf("%d",&n);
    for(i=1;i<=10;i++){
      return i*n;
   }
 
}