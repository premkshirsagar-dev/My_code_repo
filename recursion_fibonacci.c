// #include<stdio.h>

// int feb(int n);

// int main(){

// int n,f,i;
// printf(" entre your number n ");
// scanf("%d",&n);
// for(i=0;i<n;i++){

// f=feb(i);


// printf("%d\n",f);
// }

// printf("%d is the value %d fibboncci",f,n);
// return 0;
// }

// int feb(int n){
// int f;
// if(n==0){ 
//     return 0;
// }
// if(n==1)
// {
//     return 1;
// }

// f=feb(n-1)+feb(n-2);
// return f;
// }

 /* this program will find fibbonacci sequence of n term using recursion */
#include<stdio.h>

int f(int n);
int main(){

int n,i,fibbo=0;

printf(" enter your number of term");
scanf("%d",&n);

for(i=0;i<n;i++){
    fibbo=f(i);
    printf("%d\n",fibbo);

}
    printf("\n%d is the %d term\n",fibbo,n);

return 0;
}

int f(int n){

    int fib=0;
    if(n==0){
        return 0;
        
    }
    if(n==1){
        return 1;
    }
    fib=(f(n-1)+f(n-2));
    return fib;
}