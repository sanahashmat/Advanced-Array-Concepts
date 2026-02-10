#include <stdio.h>

int main() {
    int m, n, item, found = 0;
    // Declare a 2D array with a maximum possible size
    int array[10][10]; 

    printf("Enter the number of rows and columns (max 10x10): ");
    scanf("%d %d", &m, &n);

    printf("Enter %d elements for the matrix:\n", (m * n));
    // Input matrix elements
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    printf("Enter the item to find: ");
    scanf("%d", &item);

    // Search for the element using nested loops
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (array[i][j] == item) {
                printf("Item found at position [%d, %d]\n", i, j);
                found = 1; // Set flag to indicate element is found
                // Optional: Use 'break' to stop searching after the first match
                // break; 
            }
        }
        // Optional: If you use the inner 'break', you also need to break the outer loop
        // if (found) {
        //     break;
        // }
    }

    if (found == 0) {
        printf("Item Not found\n");
    }

    return 0;
}
