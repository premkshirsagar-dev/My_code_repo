/* this progarm is use for revers of string by using recurions */

#include<stdio.h>

void revers(char*str);

int main (){

    char str[100];

    printf(" enter you string ");
    gets(str);

    revers(str);

    return 0;
}
void revers(char*str){
if (*str!=NULL)
{
    revers(str+1);
    printf("%c",*str);
}


}
