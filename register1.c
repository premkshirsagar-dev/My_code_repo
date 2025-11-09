#include<stdio.h>

int main(){

  int data ;
  printf("enter your value ");
  scanf("%d",&data);
int*pi='\0';
pi=&data;



printf("%d is the value of *p \n and %d is the address of pi ",*pi,pi);

return 0;
}