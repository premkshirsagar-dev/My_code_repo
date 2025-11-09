#include<stdio.h>

int main(){

    int r=0;
    int n;
    int i;

    printf(" enter your numbre ");
    scanf("%d",&n);

    for(i=2;i<n/2;i++){

        if(n%i==0){
            break;
        }
    }

    if(i<n/2){
        printf("%d is prime not numbrer ",n);

    }
    else{
        printf(" %d is  prime namber ",n);
    }
    
    return 0;
}