#include <stdio.h>

void wavePrint(int rows, int cols, int matrix[][cols]) {
    for (int j = 0; j < cols; j++) {
        // If the column index is even, traverse from top to bottom
        if (j % 2 == 0) {
            for (int i = 0; i < rows; i++) {
                printf("%d ", matrix[i][j]);
            }
        } else { // If the column index is odd, traverse from bottom to top
            for (int i = rows - 1; i >= 0; i--) {
                printf("%d ", matrix[i][j]);
            }
        }
    }
}

int main() {
    int rows = 4;
    int cols = 3;
    // Example matrix
    int matrix[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };

    printf("Wave print of the matrix:\n");
    wavePrint(rows, cols, matrix);

    return 0;
}
