#include<stdio.h>
int main (){


int n,p,i,pow=1;

printf("  enter your value of n and value of p  which is multiplaing to n ,p time " );
scanf("%d%d",n,p);

while (i<=p)
{
pow=pow*n;
i++;
}


printf(" %d to the power of %d",pow,n);

  return 0;
}