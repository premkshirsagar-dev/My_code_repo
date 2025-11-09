#include<stdio.h>

int main(){
    char s1[100],sub[100];
    int c=0;
    
    char *ptr;

    // input the main string
    printf("entre your main string ");
    gets(s1);
    
    // input your sud string

    printf(" entre your sub string ");
    gets(sub);
    
ptr=strstr(s1,sub);


}