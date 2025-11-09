#include<stdio.h>
#include<string.h>
int main (){

char s1[100],ch;
int  v=0,cons=0,s=0,i=0, wc=0,len=0,w;

printf(" enter your string ");
gets(s1);
puts(s1);
while(s1[i]!='\0'){  // we build over own logic for finding the lenth of string,
 len++;
  ch=s1[i];
             // string element count ++ until null("\0") Or terminate is mate    

if(ch=='a'||ch=='e'||ch=='o'||ch=='u'||ch=='i'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){

   v++; // this part count the vowel 
}
else if(ch==' '){

    s++;    // this part count the white space 
   w=s+1;    // and also do white world =world+space;
}
else{

    cons++;
}  
i++;
}

printf(" %d: is the total numbre of element \n",len);
printf(" %d: is the total numbre of vovel \n",v);
printf(" %d: is the total numbre of space \n",s);
printf(" %d: is the total numbre of consonant \n",cons);
printf(" %d: is the total numbre of world \n",w);

return 0;

}