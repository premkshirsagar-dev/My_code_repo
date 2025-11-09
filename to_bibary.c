#include<stdio.h>
void tobinary(int n);

int main(){

int n;
printf(" enter your that you want to convert into binary ");
scanf("%d",&n);

 tobinary(n);

return 0;
}

void tobinary(int n){

    int binary[32];
    int i=0;
    if(n==0){
        return;
    }

    while(n!=0){
     int r=0;
     r=n%2;

binary[i]=r;
i++;
n=n/2;
}

for( i=i-1; i>=0; i--){
    printf("%d",binary[i]);
} 
printf("\n");
  }

    

