// #include<stdio.h>
// #include<stdlib.h>
// int main(){

//     FILE *fptr= NULL; // pointer flie decleration 

//  char ch[100]="my name is prem kshirsagar  ";  // variables decleration 
//   int a=2,i,ta=0;

//  fptr=fopen("1.txt","w");                    // file opening befor for anythin  with their mode
//  if(fptr==NULL) {
//    printf(" not a file exist");
//    exit(1);
//  } 
      
// for(i=1;i<=10;i++){

//    ta=a*i;
//     fprintf(fptr,"\n%d\n%s",ta,ch);    // we are printing within loop
 
// }
//     fputs(ch,fptr);
//     fclose(fptr);        // file closed

//       return 0;
// }

#include<stdio.h>

int main(){

  FILE*ptr=NULL;  // TRHIS IS THE FIKLE POINTER DECLERATION AND INITILIED WITH NULL 

char s[100];
int n;
printf(" enter your size of string element ");
scanf("%d",&n);
for( int i=0;i<n;i++){

  ptr=fopen("PREM","w");
  if(ptr==NULL){
    printf(" file is not exist ");
    return 1;
  }

  printf(" my name is prem kshirsagar");
  break;
}
fclose(ptr);
return 0;
}