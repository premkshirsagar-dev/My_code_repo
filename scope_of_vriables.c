#include<stdio.h>
 int a=10;  // gloable varibale

void value();


int main(){
 
 value(); // funcation call

  auto int a=11;  // local variable declaration 

 {
  auto int a=12; // local variable declaration 

    printf("%d\n",a);
 }
printf("%d\n",a);
return 0;
}
void value(){

   auto int a=12;// local variable declaration 

    printf("%d\n",a);
}