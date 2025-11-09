#include<stdio.h>
#include<string.h>

int main(){

    char s1[100];

    printf(" entre  any string ");
    gets(s1);

    printf(" revers order of string is %s ",strrev(s1));
    return 0;
}