#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
    int A[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    int B[ROWS][COLS] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };
    
    int C[ROWS][COLS];
    int i, j;

    // --- Matrix Addition Logic ---
    // Two nested loops are sufficient for addition
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            // C[i][j] = A[i][j] + B[i][j]
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // --- Print Resultant Matrix C ---
    printf("Matrix A:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%3d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%3d ", B[i][j]);
        }
        printf("\n");
    }

    printf("\nSum Matrix (C = A + B):\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%3d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
