#include"stdio.h"

int main (){
//     int age;
// printf(" entre your age "); 
// scanf("%d",&age); 
// // int  age = 24 ;

// int *p = &age;
// int _age=*p;

// printf("\n%d is the address of age",&age);
// printf("\n%d is the  value of *age ",*p);
// printf("\n%d is the value of _age",_age);
// p++;
// printf("\n this is increment of adress by +4 byte %d",p);
// p--;
// printf("\n this is the decrement of adress by -4 byte %d",p);




// int n;
// printf(" \nentr value of n :");
// scanf("%d",&n);
// for( int i=1;i<=n;i++){
// float  price;
// printf(" entre your price  ");
// scanf("%d",&price);
// // int  age = 24 ;

// int *p = &price;
// int _price=*p;

// printf("\n%d is the address of price",&price);
// printf("\n%d is the  value of *price",*p);
// printf("\n%d is the value of _price",_price);
// p++;
// printf("\n this is increment of price by +4 byte %d",p);
// p--;
// printf("\n this is the decrement of price by -4 byte %d\n",p);

// int n;
// printf(" \nentr value of n :");
// scanf("%d",&n);
// for( int i=1;i<=n;i++){
char ch;
printf(" entre your charectre ");
scanf("%d",&ch);


char *p = &ch;
char _ch=*p;

printf("\n%d is the address of price",&ch);
// printf("\n%d is the  value of *price",*p);
// printf("\n%d is the value of _price",_ch);
p++;
printf("\n this is increment of price by +4 byte %d",p);
p--;
printf("\n this is the decrement of price by -4 byte %d\n",p);

return 0;

}


