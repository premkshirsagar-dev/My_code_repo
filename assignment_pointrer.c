#include<stdio.h>

int main (){

float w=10.0, x=20.0;

// float *p,*q;

float *p=&x; 
  float *q=&w;  // p pointing to x , of there memory address value  
    q=p;
    

 printf(" p=  %f ",*p);
 
 printf("\n p= %f \nq =%f ",*p,*q);
 printf(" &w address =%f",&w);
return 0; 
}