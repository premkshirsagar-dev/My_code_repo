#include<stdio.h>

void hw(int n);

int main (){

int n;
printf(" entre number ");
 scanf("%d",&n);
  hw(n);           //argument /actual parametre 
    return 0;
}
void hw(int n){     // parameter /formul parametre 
                         
    if(n==0){
        return ;
    }
    printf(" hellow\n");
     hw(n-1);
}