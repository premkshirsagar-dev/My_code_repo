#include<stdio.h>

int fi(int n);

int main(){

    int n,i=0,c;
    printf(" enter your number ");
    scanf("%d",&n);

    printf(" fibboncci serial\n");
    for(i=0;i<n;i++){

        printf("%d\n",fi(n));

    }
    return 0;

}
int fi(int n){
    int f;
    if(n==0)
        
    return 0;
    if(n==1){
        return 1;

    }
f=(fi(n-1)+fi(n-2));
return f;
}