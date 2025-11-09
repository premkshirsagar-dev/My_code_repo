#include<stdio.h>

int main(){

    FILE *fptr=NULL;
    char s1[100];
    fptr=fopen("","r");

    while(!feof(fptr)){    // this function return 0 which is falas that y we we use"!" for 1 and run forword
        
    // fgets(s1,100,fptr);
    fscanf(fptr,"%s",&s1);
    printf("%s",s1);
    }
    fclose(fptr);
    return 0;

}