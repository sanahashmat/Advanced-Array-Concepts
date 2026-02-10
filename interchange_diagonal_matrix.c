#include <stdio.h>

#define MAX_SIZE 10

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int size, i, j, temp;

    // 1. Input the size of the matrix and check if it is square
    printf("Enter the size of the square matrix (e.g., 3 for a 3x3 matrix): ");
    scanf("%d", &size);

    if (size <= 0 || size > MAX_SIZE) {
        printf("Invalid size. Please enter a size between 1 and %d.\n", MAX_SIZE);
        return 1;
    }

    // 2. Input elements of the matrix
    printf("Enter elements in the matrix of size %dx%d:\n", size, size);
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // 3. Print the original matrix
    printf("\nOriginal Matrix:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // 4. Interchange the diagonals
    // The core logic is a single loop that swaps the corresponding diagonal elements
    for (i = 0; i < size; i++) {
        temp = matrix[i][i]; // Store the primary diagonal element
        matrix[i][i] = matrix[i][size - i - 1]; // Replace with the secondary diagonal element
        matrix[i][size - i - 1] = temp; // Place the original primary element into the secondary position
    }

    // 5. Print the matrix after interchanging diagonals
    printf("\nMatrix after interchanging diagonals:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
