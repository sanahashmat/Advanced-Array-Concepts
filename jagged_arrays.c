#include <stdio.h>

int main() {
    // 1. Define individual 1D arrays for each row with different sizes
    int row1[] = {1, 2, 3, 4};
    int row2[] = {5, 6};
    int row3[] = {7, 8, 9};

    // 2. Define an array of pointers to store the base addresses of each row
    int* jagged_arr[] = {row1, row2, row3};
    
    // 3. Define an array to store the size of each row (necessary for iteration)
    int sizes[] = {4, 2, 3};
    
    // 4. Calculate the number of rows
    int rows = sizeof(jagged_arr) / sizeof(jagged_arr[0]);

    printf("Elements in jagged array:\n");

    // 5. Iterate through the array using pointer arithmetic
    for (int i = 0; i < rows; i++) {
        // Get the base address of the current row
        int* ptr = jagged_arr[i]; 
        
        for (int j = 0; j < sizes[i]; j++) {
            // Access elements using pointer arithmetic: *(ptr + j) 
            // is equivalent to ptr[j] or jagged_arr[i][j]
            printf("%d ", *(ptr + j));
        }
        printf("\n");
    }

    return 0;
}
