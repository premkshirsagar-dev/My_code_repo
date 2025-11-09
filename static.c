#include<stdio.h>

void disaplay(); // funcation prototype or funcation declaration 

void  mani(){


 disaplay(); 
 disaplay(); 


}

void disaplay(){

    static int x=10;
    int y=1-12;

    y++;
    x++;

    printf("\n%d=x",x);  // first time x=11  ,x=12
    printf("\n%d=y",y);  // first time y=12,12;

}