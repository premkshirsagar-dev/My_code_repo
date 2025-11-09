#include<stdio.h>


 int  printname();

void main(){

int n,i,arr[100];

printf("enter your size of array ");
scanf("%d",&n);
for(i=0;i<n;i++){

    printf(" enter your %d number of array ",i+1);
    scanf("%d",&arr[i]);

}
 int max=0;
 max=printname();
 printf("%d is maxium ",max);

}

 int printname(){

static  int max=0;
int n;

for(int i=0;i<n;i++){

if(arr[i]>max);
max=arr[i];
// printf("%d is maxium ",max);

}
return max;
 }