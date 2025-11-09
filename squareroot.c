#include<stdio.h>

int main(){
 int n,p ,pow=1;
printf(" entre your value of n and p that is multilplaing to n ,p times  ");
scanf(" %d%d",&n,&p);

for( int i=1;i<=p;i++){

    pow=pow*n;
}

printf("%d to  the power  of %d is: %d ",n,p,pow);

return 0;
}