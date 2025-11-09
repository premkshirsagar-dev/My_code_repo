#include<stdio.h>
#include<string.h>

struct employe{
    int n;
    char name[100];
    float salary;

};

int main(){

    struct employe e1;

    printf(" entere first employ number ,name,salary");
    scanf("%d %s %f",&e1.n,e1.name,&e1.salary);  // run time inintilation 

printf("%d is the number of employe\n%s is name of employe\n %f is salary of employe ",e1.n,e1.name,e1.salary);
return 0;
} 