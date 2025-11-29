#include <stdio.h>

#define ROWS 3
#define COLS 2

int main() {
    int A[ROWS][COLS] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };
    
    // The transpose matrix will have COLS rows and ROWS columns (2x3)
    int transpose[COLS][ROWS];
    int i, j;

    // --- Print Original Matrix A (3x2) ---
    printf("Original Matrix A (%dx%d):\n", ROWS, COLS);
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%3d ", A[i][j]);
        }
        printf("\n");
    }

    // --- Transpose Logic ---
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            // Assign the element at A[i][j] to transpose[j][i]
            transpose[j][i] = A[i][j];
        }
    }

    // --- Print Transposed Matrix A^T (2x3) ---
    printf("\nTransposed Matrix A^T (%dx%d):\n", COLS, ROWS);
    for (i = 0; i < COLS; i++) {
        for (j = 0; j < ROWS; j++) {
            printf("%3d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
