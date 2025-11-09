#include<stdio.h>
 int main(){
int a=10;
int b=20;
// int =*p,*q;
int  *p=&a;
int * q=&b;
int _a=*p;
int _b=*q;
printf(" \n%d  is value of a",a);  //10
printf("\n %d  is value of b",b); //20


printf(" \n%d  is address of a",&a); //address of a
printf(" \n%d  is address of a",&b);  //address of b
printf("\n %d  is value of a address",*p); //value of a  10
printf(" \n%d  is value of b address",*q);  // value of b  20
printf("\n %d  is value of a address",_a); // this is prit  10  the value of _a value which is currenty store in _a
printf(" \n%d  is value of b address",_b);  // this is funcation  printn 20 the value of  which is currently store in _b

printf("\n %d  is value of a address",&_a); // this print address that is occupide by _a;
printf(" \n%d  is value of b address",&_b); // this funtion is print address that is occupide by _b;

return 0;
 }