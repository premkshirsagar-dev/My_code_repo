#include<stdio.h>
int main (){

int a[10],i,n;

printf(" enter your array element size  : ");
scanf("%d",&n);
printf(" now enter your array element ");
for(i=0;i<n;i++){

scanf("%d",&a[i]);


}
  printf(" given array element ");
for(i=0;i<n;i++){
    printf(" \n[%d][%d] = %d ",i,i+1,a[i]);

}
return 0;
}


//  this is the other level program