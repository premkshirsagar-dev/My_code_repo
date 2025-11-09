#include<stdio.h>
#include<string.h>

int main (){

int i,lin=0;
char s1[100],ch;
printf(" entre your string ");
gets(s1);
// for(i=0;s1[i]!='\0';i++){
//     lin++;

lin=strlen(s1);
printf(" size of givin arrays element  %d ",lin);

for(i=0;i<lin/2;i++){

ch=s1[i];
s1[i]=s1[lin-1-i];
s1[lin-1-i]=ch;

}
printf(" \n revers order of given string %s ",s1);

//now cheack the given matrix is pelidreom 

for(i=0;i<lin/2;i++){
if(s1[i]==s1[lin-1-i]){

    printf(" given string is a pelidrom ");
break;
}
else{
    printf(" given string is not a pelidrom ");
    break;
}
}
return 0;
}
