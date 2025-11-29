#include <stdio.h>

#define ROWS 3
#define COLS 4

void find_row_sums(int matrix[ROWS][COLS], int row_sums[ROWS]) {
    int i, j;
    int current_row_sum;

    // Outer loop: Iterates through each row
    for (i = 0; i < ROWS; i++) {
        // Initialize the sum for the current row
        current_row_sum = 0;

        // Inner loop: Iterates through each column (element) in the current row
        for (j = 0; j < COLS; j++) {
            current_row_sum += matrix[i][j];
        }

        // Store the calculated sum for the current row 'i' into the result array
        row_sums[i] = current_row_sum;
    }
}

int main() {
    // 1. Declare and initialize the 2D matrix (3 rows, 4 columns)
    int matrix[ROWS][COLS] = {
        {1, 5, 2, 8},  // Row 0 Sum: 16
        {3, 1, 4, 6},  // Row 1 Sum: 14
        {0, 2, 9, 7}   // Row 2 Sum: 18
    };

    // 2. Declare the 1D array to store the row sums.
    // Its size must be equal to the number of ROWS.
    int row_sums[ROWS];

    // 3. Call the function to calculate the sums
    find_row_sums(matrix, row_sums);

    // 4. Print the results
    printf("--- Original Matrix ---\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n--- Row Sums ---\n");
    // Print the row sums stored in the 1D array
    for (int i = 0; i < ROWS; i++) {
        printf("Sum of Row %d: %d\n", i, row_sums[i]);
    }

    return 0;
}
