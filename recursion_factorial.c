#include<stdio.h>

int fact(int n);

int main(){

    int f=0; 
    int n;
    printf(" enter your number of factorial");
    scanf("%d",&n);
    f=fact(n);                // argument /actual parameter
    printf("%d is the factorail of %d",f,n);
    return 0;
}

int fact(int x){
int f;

    if(x==1)
    return 1;

    f=(x*fact(x-1));
    return f;
}