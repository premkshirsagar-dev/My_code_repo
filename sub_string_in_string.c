#include<stdio.h>
#include<string.h>

int main(){

    char s1[100];
    char s2[100];
    printf(" enter fist main  string ");
    gets(s1);

     printf(" enter second sub  string ");
    gets(s2);


    char *ptr=strstr(s1,s2);
    printf("%s is the sub string is exsits in string \n",ptr);

    return 0;
}