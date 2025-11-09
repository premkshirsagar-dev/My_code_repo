#include<stdio.h>
#include<string.h>

int main(){

 char str1[100];
 char str2[100];

printf("enter fistr string  : ");
scanf("%s",str1);

printf("enter your second string  : ");
scanf("%s",str2);

strcat(str1,str2);

printf("%s\n is concatenated string :  ",str1);
return 0;

}