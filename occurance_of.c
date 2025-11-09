/* this program will find the which is occurance in main string */
#include<stdio.h>
#include<string.h>

int main(){
    char str[100],sub[100];
    int c=0,len1,len2,i,j;

 

    printf(" enter your main string : ");
    gets(str);

    len1=strlen(str);
    // printf("%d is lenth of main string\n",len1);

    printf(" enter your sub string :  ");
    gets(sub);
    
    len2=strlen(sub);
    // printf("%d is lenth of sub string\n",len2);


    for(i=0;i<len1-len2;i++){
        j=0;
        while (j<len2&&str[i+j]==sub[j])
        {
           j++;
        }
        if(j==len2){
            c++;
        }

    }

    printf(" %s  string is occurnce in %d time in %s main string ",sub,c,sub);

}