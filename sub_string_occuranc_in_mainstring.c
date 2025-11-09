/* this program will find the number of occurance  of sub string in given string  meance that how 
many time the sub string is came in the  main string  */

#include<stdio.h>
#include<string.h>

void  main(){
    char str[100],sub[100];
    int len1,len2,c=0;
    int i,j;

    printf(" enter your main string : ");
    gets(str);
    len1=strlen(str);
    printf("%d is lenth of main string\n",len1);

    printf(" enter your sub string :  ");
    gets(sub);
    len2=strlen(sub);
    printf("%d is lenth of sub string\n",len2);

    for(i=0;i<len1-len2;i++){

        j=0;
        while(j<len2 && str[i+j]==sub[j]){

            j++;
        }

        if(j==len2){
            c++;
        
        }
    }
    printf("{ %s} sub string, occurs %d time in {%s} main string",sub,c,str);
    }