 /* in this  THE  bigest progrm in which gather everything till we did */


// q 1 for prime febbinacchi ,and armstrong
// q2 for  subnmition of serisec sin(x), cos(x), exp(x);
// q3 for string manipilation in which 1 for count vovel consonet and white space and word
// 2 for check string is pelindrome 3 for find number of accurance   in 


#include<stdio.h>
#include<string.h>
#include<math.h>

void prime(); 
void sinx();
void cosx();

void exponatial();
void febb();
void arm();

void count();
void pelindrom();
void occurance();
void blank();



int main (){
    int number;

printf(" /this progam for solving 5 question of  my college practicals /\n");
printf("  Enter here number of  your college program practical that you want to solve : ");

scanf("%d",&number);

if (number==1){
 int part;

    printf(" In this  first question here three more part entre \n1: for prime number check \n2: for febbinacci \n3: for armstrong  ");
    scanf("%d",&part);

    if(part==1){
        // int n;
        // printf(" entre your value of n ;");
        // scanf("%d",&n);
     prime();
    }
     if(part==2){
        // int n;
        // printf(" entre your value of n ;");
        // scanf("%d",&n);
     febb();
    }

     if(part==3){
        // int n;
        // printf(" entre your value of n ;");
        // scanf("%d",&n);
     arm();
    }
}
if(number==2){
    int part;
     printf(" In this  first question here three more part entre \n1: for sin serice \n2: for cosx serice  \n3: for exponatial serice  ");
    scanf("%d",&part);

    if(part==1){
        // int n;
        // printf(" entre your value of n ;");
        // scanf("%d",&n);
     sinx();
    }
     if(part==2){
        // int n;
        // printf(" entre your value of n ;");
        // scanf("%d",&n);
     cosx();
    }

     if(part==3){
        // int n;
        // printf(" entre your value of n ;");
        // scanf("%d",&n);
     exponatial();
    }
}

if(number==3){
    int part;  
     printf(" In this  first question here four more part entre\n for string manipilation in which\n1: for count vovel consonet and white space and word\n2: for check string is pelindrome\n3: for find number of accurance  of sub string  in a string \n4: string removel and replacing ");  

    scanf("%d",&part);

    if(part==1){
        
    count();

    }
     if(part==2){
        // int n;
        // printf(" entre your value of n ;");
        // scanf("%d",&n);
     pelindrom();
    }

     if(part==3){
        // int n;
        // printf(" entre your value of n ;");
        // scanf("%d",&n);
          occurance();   
       }

    if(part==4){

}
}
return 0;
}



void prime(){
int i,n,c=0;
printf(" entre your numbre ");
                        
scanf("%d",&n);

for(i=2;i<=n/2;i++){

if(n%i==0)
break;

}
if(n/2>i){

    printf(" %d numbre is   not prime ",n);
}
else {
    printf( " %d numbre is  prime ",n);
}
}



void febb(){
  int  n,a=1,b=1;

    printf(" entre your numbre ");
    scanf("%d",&n);

while(n>=a){
    if(a==n||b==n)

     break;
        a+=b;
        b+=a;
    }
    if(a==n||b==n){

        printf(" number is feb.");

    }else{

        printf(" number is not feb.");
    }
    
}

void arm(){
int n,arm=0,c,r;

printf("entre your number for armstrong  ");
scanf("%d",&n);


c=n;
while(n>0){
    
r=n%10;
n=n/10;
arm+=(r*r*r);

}
if(arm==c){
    printf(" numbre is armstrong");
}
else{
    printf(" numbre is not a aremstrong ");
    }

}

 void sinx(){
 int n,i;
 float x ,sinx,trem;

 printf(" entre your degree of sinx ");
 scanf("%f",&x);

 printf("entre your numbre of n trem ");
 scanf("%d",&n);

 
 x=x*(3.14159/180.0);
trem=x;
sinx=x;
for(i=1;i<=n;i++){

trem=(trem*(-1)*x*x)/((2*i)*(2*i+1));

sinx=sinx+trem;
printf("  %f : is %d term\n",trem,i);
}

printf(" %f : is sum of %d term\n",sinx,n); 

}

void cosx(){
 
 int n,i;
 float x ,cosx,trem;

 printf(" entre your degree of cox ");
 scanf("%f",&x);

 printf("entre your numbre of n trem ");
 scanf("%d",&n);


 x=x*(3.14159/180.0);
trem=1;
cosx=1;
for(i=1;i<=n;i++){

trem=(trem*(-1)*x*x)/((2*i)*(2*i-1));

cosx=cosx+trem;
printf(" %f, is %d term\n ",trem,i);
}


printf(" %f, is sum of %d term\n",cosx,n); 

}
void exponatial(){
    
 int n,i;
 float x ,sum,trem;

 printf(" entre your degree in between < 1;");
 scanf("%f",&x);

 printf("entre your numbre of n trem ");
 scanf("%d",&n);


// x=x*(3.14159/180.0);
trem=1;
sum=1;
for(i=1;i<=n;i++){

trem=trem*(x/i);

sum =sum+trem;
printf(" %f, is %d term\n ",trem,i);
}
printf(" %f, is some of %d term\n",sum,n); 

}

 void count(){

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



}

void pelindrom(){
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
}

 void occurance(){
 char str[100],sub[100];
    int len1=0,len2=0;             /* this pro*/
    int i,j;
    int c=0;

    printf("enter your main string ");
    gets(str);
    len1=strlen(str);

     printf("enter your sub string ");
    gets(sub);
    len2=strlen(sub);

    printf("%d is the length of main string\n ",len1);
    printf("%d is the length of sub string\n",len2);


for(i=0;i<len1-len2;i++){
j=0;
while(j>len1 &&str[i+j]==sub[i]){
 j++;
}
if(j==len2){
  c++;
}
 
}
printf(" %s  string is occurnce in %d time in %s main string ",sub,c,sub);
} 

// Function to replace a substring


