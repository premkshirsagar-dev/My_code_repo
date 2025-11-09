.   #include<stdio.h>

int main (){

char ch[100];
int i=0,c=0;

printf(" entre your string element ");
//scanf("%s",ch);

//printf("%s",ch);

gets(ch);
puts(ch);
// while(ch[i]!='\0')
// {

//     c++;i++;
// }

for(i=0;ch[i]!='\0';i++){

    
    c++;
}
printf(" the size of given string is %d",c);
return 0;
}