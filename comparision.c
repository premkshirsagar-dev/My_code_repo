#include<stdio.h>
#include<string.h>
 
 int main (){

    char s1[100];
    char s2[100];
    printf(" entre your string  first ");
    gets(s1);

     printf(" entre your string  second ");
    gets(s2);

//    int r= strcmp(s1,s2);
//    if(r==0)
//    printf(" both string are equal ");
//    else
//   printf("both string are not equal ");


// now here is over own logic
int i=0;
while (s1[i]==s2[i]&&s1[i]!='\0'&&s2[i]!='\0')
i++;


if(s1[i]=='\0'&&s2[i]=='\0')
{
    printf(" both string are equal ");

}
else{

    printf(" both string are not equal ");
}


  return 0;

 }