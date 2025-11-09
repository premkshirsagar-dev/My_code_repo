// // #include<stdio.h>
// // void even(void);
// // void odd(void);
// // int main (){


// // int n;
// // printf("entr your number ");
// // scanf("%d",n);


// // if(n%2==0){
 
// //  even();    //argument /actual prameter

// // }
// // else{

// // odd();

// // }
   
// //     return 0;
// // }


// // void even(){          //parameter/formetre 
// // int n;
// //  printf(" even number  ");
// // }
// void odd(){
// int n;
//  printf(" odd number ");
// }
#include <stdio.h>

int main() {
    int num;

    // Input from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the number is even or odd
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
   return 0;
}