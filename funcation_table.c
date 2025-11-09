#include<stdio.h>


void fab(int n);         //declearation funcation
int main(){

    int n;
    printf(" ente your value of n ");   // calling funcatoin 
    scanf("%d",&n);
    fab(n);

    return 0;
}

void fab(int x){
int i,f1=0;
for(i=1;i<=10;i++){
    f1=x*i;
  printf("%d\n",f1);  
}    

}