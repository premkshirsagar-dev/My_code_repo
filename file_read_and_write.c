#include<stdio.h>

int main(){
char a[100];

FILE*fptr=NULL;

fptr=fopen("1.txt","r+"); // both thing happing first reading from the file and then write to the file

    if(fptr==NULL){
        printf(" not a vaild");
        return 1;
    }

// fscanf(fptr,"%s",a);
fgets(a,100,fptr); // this funcation read string from the file 
fprintf(fptr,"%s",a); // this funcation use to print this same string in file 
printf("%s",a);       // this funtion print read value from file on dislplay
fclose(fptr);        // this is file closing 

return 0;
}