#include <stdio.h>

#define ROWS 3
#define COLS 4

int main() {
    int matrix[ROWS][COLS];
    int i, j;

    // --- 1. Reading the Matrix Elements ---
    printf("Enter elements for a %d x %d matrix:\n", ROWS, COLS);
    
    // Outer loop for rows
    for (i = 0; i < ROWS; i++) {
        // Inner loop for columns
        for (j = 0; j < COLS; j++) {
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // --- 2. Printing the Matrix Elements ---
    printf("\nThe entered matrix is:\n");
    
    // Outer loop for rows
    for (i = 0; i < ROWS; i++) {
        // Inner loop for columns
        for (j = 0; j < COLS; j++) {
            printf("%4d", matrix[i][j]);
        }
        // Newline after printing all elements of a row
        printf("\n");
    }

    return 0;
}
