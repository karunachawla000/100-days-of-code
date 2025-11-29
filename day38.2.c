#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 10

int main() {
    int size;
    int matrix[MAX_SIZE][MAX_SIZE];
    bool is_symmetric = true;
    int i, j;

    printf("Enter the size of the square matrix (e.g., 2 for 2x2, max %d): ", MAX_SIZE);
    scanf("%d", &size);

    if (size <= 0 || size > MAX_SIZE) {
        printf("Invalid size entered.\n");
        return 1;
    }

    // --- Reading Matrix Elements ---
    printf("Enter the elements of the %dx%d matrix:\n", size, size);
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // --- Symmetry Check Logic ---
    // We only need to check the upper triangle (j > i) or lower triangle (j < i)
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            // Compare A[i][j] with A[j][i]
            if (matrix[i][j] != matrix[j][i]) {
                is_symmetric = false;
                break;
            }
        }
        if (!is_symmetric) {
            break;
        }
    }

    // --- Print Result ---
    if (is_symmetric) {
        printf("\nOutput: True\n");
    } else {
        printf("\nOutput: False\n");
    }

    return 0;
}
