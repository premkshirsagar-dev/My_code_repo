#include<stdio.h>

int main (){

     float price=100.0;
     float *pr=&price;
     
     float age=*pr;
    printf(" %u is a address of given n",&price); // address
     printf("\n %f is a address of given n",pr);  // addrss 
    printf("\n %f is a address of given n",*pr);  // value 100.0

      printf(" \n%f is the address of given n",age);  // value 100.0
    return 0;
}