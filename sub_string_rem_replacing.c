
#include <stdio.h>
#include <string.h>

// Function to replace a substring
void replace(char str[], char rsub[], char nstr[]) {
    char temp[200];  // Temporary string to store the modified result
    int i = 0, j = 0, k, match;
    int len_str = strlen(str);
    int len_rsub = strlen(rsub);
    int len_nstr = strlen(nstr);

    while (str[i] != '\0') {
        // Check for substring match
        match = 1;
        for (k = 0; k < len_rsub; k++) {
            if (str[i + k] != rsub[k]) {
                match = 0;
                break;
            }
        }

        if (match) {
            // Replace substring
            for (k = 0; k < len_nstr; k++) {
                temp[j++] = nstr[k];
            }
            i += len_rsub;  // Skip the replaced substring
        } else {
            temp[j++] = str[i++];  // Copy character if no match
        }
    }

    temp[j] = '\0';  // Null-terminate the result
    strcpy(str, temp);  // Copy the modified string back to the original
    printf("Modified string: %s\n", str);
}

// Function to print a separator line
void blank() {
    for (int i = 0; i < 50; i++) {
        printf("-");
    }
    printf("\n");
}

int main() {
    char str[100], rsub[100], nstr[100];

    printf("\nEnter your main string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove trailing newline

    printf("Enter the substring to remove: ");
    fgets(rsub, sizeof(rsub), stdin);
    rsub[strcspn(rsub, "\n")] = '\0';

    printf("Enter the new string to replace the substring: ");
    fgets(nstr, sizeof(nstr), stdin);
    nstr[strcspn(nstr, "\n")] = '\0';

    // blank();
    replace(str, rsub, nstr);
    // blank();

return 0;
}