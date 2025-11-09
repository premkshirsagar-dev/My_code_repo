#include<stdio.h>


void prime(int n);
int main(){
 int n;
 printf(" enter your numbre ");
 scanf("%d",&n);

prime(n);

}
void prime(int n){
int i;
for(  i=1;i<n/2;i++){

if(i%n==0){

    break;
}
   } if(i>n/2){

        printf("%d is primr number ",n);

    }
    else{

        printf(" %d is not a prime number ");
    }

}