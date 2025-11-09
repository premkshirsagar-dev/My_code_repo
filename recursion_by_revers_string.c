#include<stdio.h>
 #include<string.h>

 void revers(char s1[100],int start,int end);

 int main(){

    char s1[100],s2[100];
    int i,j,s;

    printf(" entr your first string ");
    gets(s1);

    s=strlen(s1);
     printf("%d is size of first string total element ",s);
    
 revers(s1,0,s-1);

 printf(" Reversed string :%s\n",s1);

 return 0;
 }
void revers(char s1[100],int start,int end){
    
 
if(start>=end){

    return;

}
char temp=s1[start];
s1[start]=s1[end];
s1[end]=temp;

revers(s1,start+1,end-1);

}

// #include<stdio.h>
// #include<string.h>

// // Function to reverse a string using recursion (without pointers)
// void reverseString(char str[], int start, int end) {
//     if (start >= end) {  // Base case: when start crosses or equals end
//         return;
//     }

//     // Swap characters at the start and end
//     char temp = str[start];
//     str[start] = str[end];
//     str[end] = temp;

//     // Recursive call with the next positions
//     reverseString(str, start + 1, end - 1);
// }

// int main() {
//     char str[100];

//     // Input from the user
//     printf("Enter a string: ");
//     gets(str);

//     // Find the length of the string
//     int length = strlen(str);

//     // Call the recursive function to reverse the string
//     reverseString(str, 0, length - 1);

//     // Print the reversed string
//     printf("Reversed string: %s\n", str);

// return 0;


// }
 