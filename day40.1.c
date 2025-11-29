#include <stdio.h>

#define SIZE 3

int main() {
    int matrix[SIZE][SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int i;

    // --- Primary Diagonal Traversal ---
    // The condition for the primary diagonal is: row index (i) == column index (j)
    printf("Primary Diagonal (Top-Left to Bottom-Right):\n");
    for (i = 0; i < SIZE; i++) {
        // Since i == j for this diagonal, we print element [i][i]
        printf("%d ", matrix[i][i]);
    }
    printf("\n");

    // --- Secondary Diagonal Traversal ---
    // The condition for the secondary diagonal is: row index (i) + column index (j) == SIZE - 1
    printf("Secondary Diagonal (Top-Right to Bottom-Left):\n");
    for (i = 0; i < SIZE; i++) {
        // j must equal (SIZE - 1 - i)
        int j = SIZE - 1 - i;
        printf("%d ", matrix[i][j]);
    }
    printf("\n");

    return 0;
}
