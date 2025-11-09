
#include <stdio.h>
void generateMagicSquare(int n) {
    int magicSquare[n][n];

    // Initialize all elements to 0
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            magicSquare[i][j] = 0;
        }
    }
    // Start position for the number 1
    int i = 0, j = n / 2;
    
    for (int num = 1; num <= n * n; num++) {
        magicSquare[i][j] = num;

        // Calculate the next position
        int newI = (i - 1 + n) % n; // Wrap around the top
        int newJ = (j + 1) % n;     // Wrap around the right  
        
        // If the cell is already filled, move down one row
        if (magicSquare[newI][newJ] != 0) {
            i = (i + 1) % n;
        } else {
            i = newI;
            j = newJ;
        }
    }
    // Print the magic square

    printf("Magic Square of size %d:\n", n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", magicSquare[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    
    printf("Enter the size of the magic square (odd number): ");
    scanf("%d", &n);
    
    if (n % 2 == 0) {
        printf("Magic square can only be created for odd sizes.\n");
        return 1;
    }
    
    generateMagicSquare(n);
return 0;
}
