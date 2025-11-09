// this program for cheak a  given sub string  is exsist in main string 

#include"stdio.h"
#include"string.h"

int main (){
    char s1[100],sub[100];
    int lin1=0,lin2=0,i,j;                //  here i is use  for  until string treminate ,j is cheack for sub string is exsist in string
                                       //  in a loop we can `t take a same index variable ,therefor we puts value of i in k for  cheaking 
                                       //   the value of i is equal to j // that is why  we puts value of i in k

printf(" entre you string ");
gets(s1);

printf(" enter your sub string  : ");
gets(sub);
lin1=strlen(s1);
lin2=strlen(sub);
printf(" main string size is %d\n ",lin1);
printf(" sub string size is %d\n  ",lin2);

for(i=0;i<lin1;i++){            // for main string 
    
     for(j=0;j<=lin2;j++){         
    
        if(s1[i+j]!=sub[j]){
           break;
           
       }
    }  
}
if(j==lin1){

printf(" given sub string is exits in string ");
}
else{
    printf("  not exsist");
}
return 0;
}