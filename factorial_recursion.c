#include<stdio.h>

int factorial(int n);  // funcation decleration and funcation prototype

int main(){

    int n,fact=0;
    printf("  entre your number that you want to find the factorial");
    scanf("%d",&n);

    fact=factorial(n);
    printf("%d is the value of %d factorial",fact,n);
    return 0;
}

int factorial(int n){

    int fact=0;
    if(n==1)
    return 1;

    fact=(n*factorial(n-1));

    return fact;

}