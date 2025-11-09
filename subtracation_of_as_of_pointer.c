#include<stdio.h>

int main(){

int n,i;
 int a[100];
printf("entr your size of array");
scanf("%d",&n);

for(i=0;i<n;i++){
printf(" enter %d index value ",i);                // imp; 
    scanf("%d",&a[i]);
}
    int *p=&a[4];
    printf("\n%d is the value of 4 index",*p);
    printf("\n%d is the address of %d   value is store ",p,*p);
    p=p-3;
    printf("\n%d is back word 3*4= 12 byte ",p);
     printf("\n%d is back word 3*4= 12 byte ",*p);

for(i=0;i<n;i++){

    printf("\n%d is the address  of value  %d index and and acutal value is %d ",&a[i],i,*p);
    
}

return 0;
}