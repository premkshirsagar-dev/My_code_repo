#include<stdio.h>
int main (){
 
 int n,i;
 float x ,sum,trem;

 printf(" entre your degree of cox ");
 scanf("%f",&x);

 printf("entre your numbre of n trem ");
 scanf("%d",&n);


// x=x*(3.14159/180.0);
trem=1;
sum=1;
for(i=1;i<=n;i++){

trem=trem*x/i;

sum =sum+trem;
printf(" %f, is %d term\n ",trem,i);
}
printf(" %f, is some of %d term\n",sum,n); 

return 0;
}