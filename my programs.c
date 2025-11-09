#include<stdio.h>

float ctof(float c);
float ftoc(float f);

int main(){
int choice;

printf(" entre you \n 1 for c to f \n 2 for f  to c ");
scanf("%d",&choice);
if(choice==1){
    float c;
    printf(" entre  your c value ");
    scanf("%f",&c);
    printf("%f",ctof(c));
}
else if (choice==2){

    float f;
    printf(" entre your ferinhie value ");
    scanf("%f",&f);
    printf("%f",ftoc(f));
}
else {

    printf(" not a valid value");
}
}
float ctof(float c){

    float f=(c*9.0/5.0)+32;
    return f;
}
float ftoc(float f){

float c=(f-32)*9.0/5.0;
    return c;
}

