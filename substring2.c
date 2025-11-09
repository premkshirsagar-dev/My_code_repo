#include<stdio.h>
#include<string.h>

int main(){


char s1[100],sub[100];
    int lin1=0,lin2=0;
    char*p; 

printf(" entre you string ");
gets(s1);

printf(" enter your sub string  : ");
gets(sub);
lin1=strlen(s1);
lin2=strlen(sub);
printf(" main string size is %d\n ",lin1);
printf(" sub string size is %d\n  ",lin2);

p=strstr(s1,sub);
if(p){

    printf(" the string is exsist");
}else{

    printf(" the string is not exsist");
}
printf("\n%d: is the address of  p pointer ",&p);

return 0;
}