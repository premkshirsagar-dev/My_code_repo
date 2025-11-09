/*this program for find the sum of array element and their address */

#include<stdio.h>

int main(){
int num[100],n;
int sum=0,agv=0;

printf("enter your number ");
scanf("%d",&n);
for( int i=0;i<n;i++){
printf(" entre your %d element ",i+1);

scanf("%d",&num[i]);
}
  
for( int i=0;i<n;i++){

    printf("%d",num[i]);
    sum+=num[i];
    
}
printf(" %d is sum of total given array element \n",sum);
agv=sum/n;
printf(" %d is the avrage  given array element\n ",agv);
return sum;
}