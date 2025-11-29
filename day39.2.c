#include <stdio.h>

#define SIZE 3

int main() {
    int matrix[SIZE][SIZE] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };
    int sum = 0;
    int i;

    printf("Matrix:\n");
    for (i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%5d ", matrix[i][j]);
        }
        printf("\n");
    }

    // --- Summation of Main Diagonal Elements ---
    for (i = 0; i < SIZE; i++) {
        // The main diagonal elements are always matrix[i][i]
        sum += matrix[i][i];
    }

    printf("\nSum of the main diagonal elements (10 + 50 + 90): %d\n", sum);

    return 0;
}
