#include<stdio.h>
int main(){

int i,j,table=0,n;

// printf(" entre your numbre of table ");
// scanf("%d",&n);
for(n=2;n<=10;n++){
printf(" multiplication table for %d ",n);
   for(j=1;j<=10;j++){
   
        printf("%d\n",n*j);
   }
   

       printf("\n");
}

return 0;
}