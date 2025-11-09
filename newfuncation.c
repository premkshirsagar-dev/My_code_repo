#include<stdio.h>

void bonjure();
void indian();


int main(){
    int choice ;
printf("  enter your choice ");
printf(" 1, for  if your indian and 2, for if your freanch");
scanf(" %d",&choice);


if(choice ==1){

indian();
                              // this system will be giving you namste and bounjure output 
}
else if(choice==2){


bonjure();
}
else{
 printf(" not a vaild condition ");
}return 0;
}

void bonjure(){


printf(" bounjur ");

}

 void indian(){

    printf(" namste ");
}

