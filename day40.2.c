#include <stdio.h>

#define ROW1 3
#define COL1 3
#define ROW2 3
#define COL2 3

int main() {
    int A[ROW1][COL1] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    int B[ROW2][COL2] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };
    
    int C[ROW1][COL2];
    int i, j, k;

    // Check if multiplication is possible (COL1 must equal ROW2)
    if (COL1 != ROW2) {
        printf("Error: The number of columns in the first matrix must equal the number of rows in the second matrix.\n");
        return 1;
    }

    // --- Matrix Multiplication Logic (Three Nested Loops) ---
    // i: iterates through rows of matrix A (and matrix C)
    for (i = 0; i < ROW1; i++) {
        // j: iterates through columns of matrix B (and matrix C)
        for (j = 0; j < COL2; j++) {
            // Initialize the element C[i][j] to 0
            C[i][j] = 0;
            
            // k: performs the dot product (summation)
            for (k = 0; k < COL1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // --- Print Resultant Matrix C ---
    printf("\nResultant Matrix (C = A x B):\n");
    for (i = 0; i < ROW1; i++) {
        for (j = 0; j < COL2; j++) {
            printf("%5d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
