#include<stdio.h>
#include<string.h>

int main(){

    char str1[100];
    char str2[100];

    printf(" entre your string  first ");
    gets(str1);
    //  printf(" entre your  second  string  ");
    // gets(str2);

 strcpy(str1,str2);
 printf("%s is copise of b first string ",str2);
 return 0;

}