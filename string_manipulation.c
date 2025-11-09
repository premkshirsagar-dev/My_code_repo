#include <stdio.h>
#include <string.h>  // Include the string.h header file

int main() {
    // Declaration of strings
    char str1[50], str2[50], str3[50];
    int length, comparison;

    // Input strings
    printf("Enter the first string: ");
    gets(str1);  // Using gets for simplicity (avoid in modern practice)
    
    printf("Enter the second string: ");
    gets(str2);

    // 1. Copying str1 to str3 using strcpy() 
    strcpy(str3, str1);
    printf("\nString copied from str1 to str3: %s\n", str3);                               

    // 2. Concatenating str1 and str2 using strcat()                       
    strcat(str1, str2);
    printf("Concatenated string (str1 + str2): %s\n", str1);   

    // 3. Finding the length of str2 using strlen()                  
    length = strlen(str2);
    printf("Length of the second string (str2): %d\n", length);    

    // 4. Comparing str2 and str3 using strcmp()
    comparison = strcmp(str2, str3);
    if (comparison == 0) {
        printf("The strings str2 and str3 are equal.\n");
    } else {
        printf("The strings str2 and str3 are not equal.\n");
    }

    // 5. Reversing str3 using strrev() (Note: Not part of standard C)
    #ifdef _WIN32  // strrev is available in Windows
        strrev(str3);
        printf("Reversed string str3: %s\n", str3);
    #else
        printf("String reversal function (strrev) not available in this environment.\n");
    #endif

return 0;
}