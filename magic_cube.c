 #include <stdio.h>


// Function to initialize the 3D magic cube
void generate_magic_cube(int n, int cube[n][n][n]) {
    int i = 0, j = n / 2, k = n / 2; // Start position (middle layer, middle row, middle column)

    for (int num = 1; num <= n * n * n; ) {
        cube[i][j][k] = num++; // Assign the current number

        int newi = (i - 1 + n) % n; // Move up in depth
        int newj = (j + 1) % n;     // Move right in row
        int newk = (k - 1 + n) % n; // Move forward in column

        if (cube[newi][newj][newk]) {
            i++; // Move down if the calculated position is occupied
        } else {
            i = newi;
            j = newj;
            k = newk;
        }
    }
}

// Function to print the 3D magic cube
void print_magic_cube(int n, int cube[n][n][n]) {
    for (int layer = 0; layer < n; layer++) {
        printf("Layer %d:\n", layer + 1);
        for (int row = 0; row < n; row++) {
            for (int col = 0; col < n; col++) {
                printf("%4d ", cube[layer][row][col]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

int main() {
    int n;

    printf("Enter the size of the magic cube (odd number): ");
    scanf("%d", &n);

    if (n % 2 == 0 || n <= 0) {
        printf("Magic cube works only for odd numbers greater than 0.\n");
        return 1;
    }

    int cube[n][n][n];
    
    // Initialize the cube with zeros
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            for (int k = 0; k < n; k++)
                cube[i][j][k] = 0;

    generate_magic_cube(n, cube);
    printf("Magic Cube of size %d:\n", n);
    print_magic_cube(n, cube);

return 0;
}
