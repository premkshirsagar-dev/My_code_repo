#include<stdio.h>

int sum (int n);   //declearation 
int main(){


int n;
printf(" entre your value of n");
scanf("%d",&n);
printf("%d",sum(n));
sum(n);

printf("%d",sum(n));
    return 0;
}
//recursive funtioun 
int sum(int n){      
    if(n==1){          // base condition  which is prefrom 1;
    
     return 1;
    }             

int sumnm1=sum(n-1);  // this function giving AS sum of n minus 1 ;
int sumn=sumnm1+n;
return sumn;
}