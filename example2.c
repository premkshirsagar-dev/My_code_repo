#include<stdio.h>

int main(){

int i,c=0,sum=0;

for(i=100;i<=200;i++){

   if(i%7==0){

    c++;
    sum=sum+i;
  
    printf(" %d is divisiable by 7\n",i);

       }
   }

  printf(" %d is  total  number  which is ,divisiable by 7\n",c);
  printf(" %d is the sum of total numbers \n",sum);
  return  0;
}