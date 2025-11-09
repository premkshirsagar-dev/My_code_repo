

#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    char sub[50];

    printf("Enter the main string: ");
    scanf("%s", str);

    printf("Enter the substring: ");
    scanf("%s", sub);

    int i, j, flag = 0;
    int len = strlen(str);
    int sublen = strlen(sub);

    for (i = 0; i <= len - sublen; i++) {
        flag = 0;
        for (j = 0; j < sublen; j++) {
            if (str[i + j] != sub[j]) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            printf("Substring found at position %d\n", i + 1);
            break;
        }
    }

    if (flag == 1)
        printf("Substring not found\n");

    return 0;
}
