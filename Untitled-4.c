#include<stdio.h>

void table(int n);

int main (){
int n;
printf("%d",table1(n));
return 0;
}

void table1(int n){
 int i;
printf("enter your number ");
scanf("%d",&n);
    for(i=1;i<=10;i++){
      printf("%d\n",i*n);
   }
}