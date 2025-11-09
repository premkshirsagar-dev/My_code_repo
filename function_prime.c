#include<stdio.h>

void  prime( int n);

int main(){

int n;
    printf(" entr your number ;");
    scanf("%d",&n);

    prime(n);

    return 0;
}

void prime (int x){

    int i,c=0;

    for(i=1;i<=x;i++){

        if(x%2==0)

        c++;
    }
if(c==2){

    printf("%d is the prime number ",x);

}
else{
    printf("%d is the not prime number ",x);
}

}