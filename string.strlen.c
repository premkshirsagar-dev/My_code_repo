#include<stdio.h>
#include<string.h>

int main(){

    char str[100];
    int len=0;

    printf(" enter your string ");
    // scanf("%s",len);

    gets(str);

    len=strlen(str);
    printf(" %d is the lenth of given string ",len);

    return 0;



}