#include<stdio.h>
int main(){  
int n;
 printf(" enter any numbre ");                                                             
scanf("%d",&n);

int a=12;

 int *p=&a;
  *p=11;

printf(" %d is the value of  \n %d",a,*p);

return 0;
}