#include<stdio.h>


int main(){


//     int p=10;
//     int *q=&p;

// printf("%d is the value of p", q);

// q=q+2;    /*   addrecc = actual address+  number * numbre of byte which occupide by data type  
//                 after this statement the value is incres by its size of data type meance +4 byte */ 

// printf("\n%d is the value of p", q);


float a=32.0;
float*p=&a;

printf(" %d actual address  of a ",p);

p=p+1;
printf("\n%d is the increcme by 1 floal byte ",p);

return 0;
}