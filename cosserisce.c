#include<stdio.h>
int main (){
 
 int n,i;
 float x ,cosx,trem;

 printf(" entre your degree of cox ");
 scanf("%f",&x);

 printf("entre your numbre of n trem ");
 scanf("%d",&n);


 x=x*(3.14159/180.0);
trem=1;
cosx=1;
for(i=1;i<=n;i++){

trem=(trem*(-1)*x*x)/((2*i)*(2*i-1));

cosx=cosx+trem;
printf(" %f, is %d term\n ",trem,i);
}


printf(" %f, is sum of %d term\n",cosx,n); 

return 0;
}