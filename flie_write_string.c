#include<stdio.h>
#include<stdlib.h>

int main(){

    FILE*fp;

char s1[100];

fp=fopen("1.txt","w+");

printf("  ");
gets(s1);

   // in all case we pass name of the variables first then we pass name of pointer 
fputs(s1,fp);

fgets(s1,100,fp);
printf("%s",s1);
fclose(fp);
return 0;
}