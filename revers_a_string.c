
// this progarm find the proper sequence of revers of given string 

#include<stdio.h>
#include<string.h>

int main(){
 
int flag=0;
    int lin,i;
    char s1[100],ch;
    printf(" ENTER YOUR STRING ");
    gets(s1);

    lin=strlen(s1);
    for(i=0;i<lin/2;i++){

        ch=s1[i];
        s1[i]=s1[lin-1-i];
        s1[lin-1-i]=ch;


    }

    printf("%s is the  revers order of string ",s1);

    for(i=0;i<lin/2;i++){
        if(s1[i]==s1[lin-i-1]){
        printf(" given string is pelidreom ");
        break;

    }
    else{
        printf(" this is not an pelindreom");
    }
}
 return 0;
}

