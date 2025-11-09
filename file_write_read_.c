#include<stdio.h>

int main(){

    char s1[100];

    printf(" entre your string ");
    gets(s1);

    FILE* fptr=NULL;

    fptr=fopen("1.txt","w+"); // this funcation write the string first then read this same string 

    if(fptr==NULL){

        printf("file is not a vaild ");
        return 1;
        
    }
    // we  have both option by fprintf and fputs

    fprintf(fptr,"%s",s1);

    // we have  funcation for reading a string  from the file     

    fgets(s1,100,fptr);

    printf("%s",s1);  // this funcation print the string on display;
    fclose(fptr);
    return 0;
}