#include<stdio.h>
int main (){

char s1[100], search;

int c=0,i=0;
printf("enter your string ");
gets(s1);
puts(s1);

printf(" entre your single charactre that you want to search ");
search=getchar();

for(i=0;s1[i]!='\0';i++){

if(search==s1[i])
c++;
}
printf(" total number of ocuurance of %c is %d ",search,c);

return 0;
}