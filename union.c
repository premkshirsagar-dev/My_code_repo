#include<stdio.h>
 
union abc{

int a;
char b[50];
float c;

};
 
int main(){
    union abc u1;
printf(" entre your  value of a\n");
scanf("%d",&u1.a);

printf(" entre your  value of a\n");
scanf("%s",&u1.b);

printf(" entre your  value of a\n");
scanf("%f",&u1.c);

printf("\n%d  roll number is this ",u1.a);
printf("\n%s roll number is this ",u1.b);
printf("\n%f roll number is this ",u1.c);

return 0;

}