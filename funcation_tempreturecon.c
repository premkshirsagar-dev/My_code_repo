// this program for tempreture conversion by using funcation 
#include<stdio.h>
float ctof(float c);
float ftoc(float f);

int main (){
    int choice;

printf(" entre your 1 for celsious to fherenhite\n 2 for fherinhite to celsious");
scanf("%d",&choice);
if(choice==1){
    
    float c;
    printf(" entre your celsiuo value ");
    scanf("%f",&c);
   printf("%f",ctof(c));
}
else if(choice==2){
    float f;
    printf(" entre your fherenhie value :");
    scanf("%f",&f);
    printf("%f",ctof(f));
}
else{
    printf(" not a vaild choice ");
}

    return 0;
    }


float ctof(float c){

 float f=(c*(9.0/5.0))+32;
return f;

}
float ftoc(float f){

 float c=(f-32)*(9.0/5.0);  //   c=(f-32)/1.8;
return c;
}