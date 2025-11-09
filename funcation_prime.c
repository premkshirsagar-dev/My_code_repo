#include<stdio.h>

void prime(int n, int i);

int main(){
int n,i;
printf(" entre your number ");
scanf("%d",&n);

prime(n,i);   //  actual paramete // argument  
}

void prime(int n,int i){

    for(i=2;i<=n/2;i++){

        if(n%i==0)
        break;
        i++;
    }
    if(i>=n/2){
        printf("%d is the prime number ",n);
    }
    else{
        printf("%d is the  not prime number ",n);
    }
}