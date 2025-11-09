#include<stdio.h>
#include<string.h>

int main(){

char s1[100],sub[100];
int lin1=0,lin2=0;
char*p;

printf(" enter your string  main string ");
gets(s1);
puts(s1);

printf(" entre your second string ");
gets(sub);
puts(sub);

lin1=strlen(s1);
lin2=strlen(sub);

printf("\n%d is the lentha of main string ",lin1);
printf("\n%d is the lentha of sub  string ",lin2);

p=strstr(s1,sub);
if(p){

    printf(" \nthe sub string is present in a main string ");
}else{
    printf("\nthe sub string is not exsist ");
}


return 0;
}