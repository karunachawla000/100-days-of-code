#include <stdio.h>

#define ROWS 3
#define COLS 4

int calculate_matrix_sum(int matrix[ROWS][COLS]) {
    int i, j;
    int total_sum = 0;

    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            total_sum += matrix[i][j];
        }
    }

    return total_sum;
}

int main() {
    int matrix[ROWS][COLS] = {
        {1, 5, 2, 8},
        {3, 1, 4, 6},
        {0, 2, 9, 7}
    };

    int sum = calculate_matrix_sum(matrix);

    printf("Matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of all elements in the matrix: %d\n", sum);

    return 0;
}
