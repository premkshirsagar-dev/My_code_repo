// #include<stdio.h>

// int main(){
  
//   int age =25;
//  //int pp=&age;
//   int *ptr=&age;
//   int _age=*ptr;

//   printf(" %d is the value of  given age\n ",age);//cleare 
// // this above funcantion is print the value  of age simply

//   printf(" %d is the value of  given age\n ",&age);
//   printf(" %u is the value of  given age \n ",&age);// cleare 

// // with the help of %d and %u format specifier  they are print  same  address of age 

//  //printf(" %d is the value of  given age \n ",pp);
// // in this funcation we store address of age in pp then we print pp ,that is the address of age 

//    printf(" %u is the value of  given age \n ",*ptr);
//    printf(" %d is the value of  given age \n ",_age);

//  // above the both funcation are print value of age ,"the *ptr variable  is use to access the value of
//  // age  from age address ",this *ptr variable  is access the value of  age from ,which is store at this memory address
//  // hear we *ptr value store in new variable_age then we print him 

//  printf("%u address of ptr \n",ptr);
//  printf("%u address of ptr\n ",&ptr);
//     return 0;
// }



#include<stdio.h>
                           // this program for finding the n trem of program 

int fabbinacii(int n);

int main(){
int n=12,f;                     
f=fabbinacii(n);

printf("%d is the %d trem of  febonacci sequence",f,n);
return 0;

}

int fabbinacci(int x){

    if(x==1){
    return 1;
    }
    else if(x==0){
        return 0;
    }else{
    
    return fabbinacci(x-1)+fabbinacci(x-2);
    }
}