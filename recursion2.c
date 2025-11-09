#include<stdio.h>

char  hw(int n);

int main(){
    int n=344;
hw(n);                   // passing value caLLED : it is call by value  actual prametre /argument ;
return 0;

}

 char hw(int n){    // formal parameters/parametre
    char s;
    if(n==0){

    return 0;
    }
s=printf(" prem kshirsagar");

hw(n-1);
return s;
 }