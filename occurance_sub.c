#include<stdio.h>
#include<string.h>

int main(){

  int i,c=0,lin2,lin1;
  char str[100],sub[100];

  printf(" enter your main string : ");
  gets(str);

  printf(" enter your sub string  ");
  gets(sub);

  lin1=strlen(str);
  lin2=strlen(sub);

  for(i=0;i<lin1-lin2;i++){
    
    int j=0;
    while(j<lin2&&str[i+j]==sub[j]){
      j++;
    }
    if(j==lin2){
      c++;
    }
  }
printf("%d time %s string  occurn  in %s  string ",c,sub,str);
  return 0;
}