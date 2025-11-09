/* In this program we leare the  defining ,decleratiion ,intilation ,complie time initilagation  
and how to access the value of variable /object and element of structure */
#include<stdio.h>
#include<string.h>

struct student {
    int id;
    float presantaile; // structure defineing 
    char name[100];
}; 

struct employe_t1 {
    int number ;       // seconed structure defining 
    char name[100];
    float salary;
    char dept[100];
};

int main(){

    struct student s1,s3;  // decleration of variable   and initila
struct student s2={ 2,98.9,"punam"};
  
   
    
    s3.id=3;
    s3.presantaile=838.39; // this the complie time initilation
    strcpy(s3.name,"prathmesh");

    printf("%d,%.2f, %s\n",s1.id,s1.presantaile,s1.name);
    printf("%d,%.2f, %s\n",s2.id,s2.presantaile,s2.name);
    printf("%d,%.2f, %s\n",s3.id,s3.presantaile,s3.name);

    struct employe_t1 e1={1,"prathamesh",55000.0,"data managament"};
     printf("This is the team 1 first employe\n");  //this compile time initiligation
printf("%d:is number \n%s:is name of employe of t1\n%5.f:is a salary\n",e1.number,e1.name,e1.salary);

struct employe_t1 e2={2,"shayam",98000};
 printf("     This is the team 2 second  employe\n");  //this compile time initiligation
printf("%d:is number \n%s:is name of employe of t1\n%5.f:is a salary\n",e2.number,e2.name,e2.salary);

if(e1.salary>e2.salary){
    printf(" salary is much of e1 then e2 \n salary is :%f",e2.salary);
}else{
    printf(" salary is much ofb e2 then e1 \n salary is :%f",e2.salary);
}

return 0;



}


    
