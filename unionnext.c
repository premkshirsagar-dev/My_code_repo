#include<stdio.h>
 
union abc{

int a;
char b[50];
float c;

};
 
int main(){
    union abc u;
   
 u.a;
 u.b;
 u.c;


printf(" entre your  value of a");
scanf("%d",&u.a);
printf(" entre your  value of a");
// scanf("%c",&u2.b);
gets(u.b);
printf(" entre your  value of a");
scanf("%f",&u.c);

printf("\n%d  roll number is this ",u.a);
printf("\n%c roll number is this ",u.b);
printf("\n%f roll number is this ",u.c);

return 0;

}