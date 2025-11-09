#include<stdio.h>
#include<stdlib.h>
int main(){

    FILE*fptr=NULL;          // file decleration 
    
    int a;                
    float price;             // variable`s decleration 
    char ch='e';
    char s1[100];

   

    printf(" enter the value of \n");       // run time initiallagtion 
    scanf("%d",&a);
    
    printf(" enter your price\n");
    scanf("%f",&price);

    // printf("entre your charecter\n");
    // getc(ch);

    printf("enter your string\n");
     gets(s1); 
     
      fptr=fopen("1.txt","w");             //file opening with their mode

    if(fptr==NULL){
        printf(" //not an exist file");

        exit(1);
    }  
                          
    fprintf(fptr,"%d\n",a);             // flie value printing 
    fprintf(fptr,"%f\n",price);        // in all case of write we must pass first pointer varible name and then pass name of other variable
    // fputc(ch,fptr);
    
    fputs(s1,fptr);

    fclose(fptr);                  // file closing 

    return 0;
}